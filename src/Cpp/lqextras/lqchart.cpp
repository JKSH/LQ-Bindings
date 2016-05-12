/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqchart.h"
#include "historylengthdialog.h"
#include "axisrangedialog.h"

#include <qwt_legend.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_scale_engine.h>
#include <qwt_scale_widget.h>

static const QVector<QColor>
defaultCurveColours
{
	Qt::red,
	Qt::cyan,
	Qt::green,
	Qt::magenta,
	Qt::white,
	Qt::yellow,
	Qt::blue,
	Qt::lightGray
};

LQChart::LQChart(int maxLength, double dt, QWidget* parent) :
		QwtPlot(parent),
		_scale(dt),
		_maxLength(maxLength),
		_xBuffer(maxLength*2),
		_asAction_yLeft(new QAction("Auto Scale", this)),
		_asAction_xBottom(new QAction("Auto Scale", this))
{
	clear();

	QwtPlotGrid *grid = new QwtPlotGrid;
	grid->setPen(Qt::lightGray, 0.0, Qt::DotLine);
	grid->attach(this);

	QPalette pal;
//	pal.setBrush(QPalette::Text, QColor(242, 234, 221)); // Axis labels
	pal.setBrush(QPalette::WindowText, QColor(Qt::black)); // Tick marks
	pal.setBrush(QPalette::Window, QColor(Qt::white)); // Widget background

	// Flatten bezel
	pal.setBrush(QPalette::Light, QColor(Qt::white)); // Right & Bottom plot borders (Bezel shadow)
	pal.setBrush(QPalette::Dark, QColor(Qt::white)); // Left & Top plot borders (Bezel highlight)

	setPalette(pal);
	setCanvasBackground(QColor(Qt::black)); // Plot area
	QwtPlotCanvas* canv = qobject_cast<QwtPlotCanvas*>(this->canvas());
	Q_ASSERT(canv);
	canv->setBorderRadius(5.0);

	// QwtPlot has auto-scaling axes by default. Initialize the context menus
	// to reflect this.
	_asAction_yLeft->setCheckable(true);
	_asAction_yLeft->setChecked(true);
	connect(_asAction_yLeft, &QAction::toggled, [=](bool checked)
	{
		setAxisAutoScale(yLeft, checked);
	});
	_asAction_xBottom->setCheckable(true);
	_asAction_xBottom->setChecked(true);
	connect(_asAction_xBottom, &QAction::toggled, [=](bool checked)
	{
		setAxisAutoScale(xBottom, checked);
	});

	auto clearChartAction = new QAction("Clear Chart", this);
	connect(clearChartAction, &QAction::triggered,
			this, &LQChart::clear);
	auto setYAxisRangeAction = new QAction("Set Y axis range...", this);
	connect(setYAxisRangeAction, &QAction::triggered, [=]
	{
		AxisRangeDialog d;
		d.setWindowTitle("Set Y Axis Range");
		d.setRange(axisScaleDiv(yLeft).lowerBound(),
				axisScaleDiv(yLeft).upperBound());
		if (d.exec() == QDialog::Accepted)
			setYAxisRange(d.minimum(), d.maximum());

	});
	auto setHistoryLengthAction = new QAction("Set history length...", this);
	connect(setHistoryLengthAction, &QAction::triggered, [=]
	{
		HistoryLengthDialog d;
		d.setValue(_maxLength);
		if (d.exec() == QDialog::Accepted)
			setHistoryLength(d.value());
	});

	this->canvas()->addAction(clearChartAction);
	this->canvas()->setContextMenuPolicy(Qt::ActionsContextMenu);

	auto yAxis_left = axisWidget(yLeft);
	yAxis_left->addAction(_asAction_yLeft);
	yAxis_left->addAction(setYAxisRangeAction);
	yAxis_left->setContextMenuPolicy(Qt::ActionsContextMenu);

	auto xAxis_bottom = axisWidget(xBottom);
	xAxis_bottom->addAction(_asAction_xBottom);
	xAxis_bottom->addAction(setHistoryLengthAction);
	xAxis_bottom->setContextMenuPolicy(Qt::ActionsContextMenu);

	setAxisTitle(yLeft, "Amplitude");
	setAxisTitle(xBottom, "Time");

	axisScaleEngine(yLeft)->setAttribute(QwtScaleEngine::Floating);
	axisScaleEngine(xBottom)->setAttribute(QwtScaleEngine::Floating);

	insertLegend(new QwtLegend);
}

void
LQChart::append(const QVector<QVector<double>>& values)
{
	if (_yBuffers.length() != values.length())
	{
		// ASSUMPTION: _curves.length() == _yBuffers.length()
		clear();
		init(values.length());
	}

	// NOTE: Short-circuit logic. If the outer vector is empty, then the inner vector won't be checked.
	if (values.isEmpty() || values[0].isEmpty())
		return;

	// ASSUMPTION: _maxLength > 0

	// ASSUMPTION: All rows are the same length
	for (int n = 0; n < values[0].length(); ++n)
	{
		int i1 = _it;
		int i2 = _it + _maxLength;

		// Write data
		// TODO: Use std::copy() for Y-buffers? Performance gains?
		_xBuffer[i1] = _xBuffer[i2] = _scale*(_cumulativeCount+_countShift);
		for (int c = 0; c < _yBuffers.size(); ++c)
			_yBuffers[c][i1] = _yBuffers[c][i2] = values[c][n];

		// Update trackers
		// TODO: Protect against integer overflow!
		++_cumulativeCount;
		++_it;
		if (_it >= _maxLength)
			_it = 0;
	}

	// Update plot
	int nSamples = _maxLength;
	int startIdx = _it;
	if (_cumulativeCount < _maxLength)
	{
		nSamples = _cumulativeCount;
		startIdx = 0;
	}
	for (int c = 0; c < values.count(); ++c)
	{
		_curves[c]->setRawSamples(
				_xBuffer.constData() + startIdx,
				_yBuffers[c].constData() + startIdx,
				nSamples);
	}
	replot();
}

bool
LQChart::isAxisAutoScaling(QwtPlot::Axis axisId) const
{
	switch (axisId)
	{
	case QwtPlot::yLeft: return _asAction_yLeft->isChecked();
	case QwtPlot::xBottom: return _asAction_xBottom->isChecked();
	default: return false;
	}
}

void
LQChart::setAxisAutoScaling(QwtPlot::Axis axisId, bool autoScaling)
{
	switch (axisId)
	{
	case QwtPlot::yLeft:
		_asAction_yLeft->setChecked(autoScaling);
		break;
	case QwtPlot::xBottom:
		_asAction_xBottom->setChecked(autoScaling);
		break;
	default:
		break;
	}
}


void
LQChart::setHistoryLength(int length)
{
	// Enforce a minimum size
	if (length < 2)
		length = 2;

	// No change in parameters; don't do anything
	if (length == _maxLength)
		return;

	// ASSUMPTION: There is only one copy of each vector, so we don't
	// have to worry about the implicit sharing iterator problem.
	//
	// http://doc.qt.io/qt-5/containers.html#implicit-sharing-iterator-problem
	QVector<QVector<double>*> buffers{&_xBuffer};
	for (auto& yBuffer : _yBuffers)
		buffers << &yBuffer;

	/*
		Due to the change in buffer size, the data is now possibly wrapped
		at the wrong location. We handle this by shifting the oldest sample
		to the start of the buffer.
	*/

	int nSamples = _cumulativeCount;
	if (length > _maxLength)
	{
		// Expand buffer

		int startIdx = 0;
		if (_cumulativeCount > _maxLength)
		{
			startIdx = _it;
			nSamples = _maxLength;
		}

		for (QVector<double>* buf : buffers)
		{
			buf->resize(length*2);

			auto elem0 = buf->begin();
			std::copy_backward(
					elem0 + startIdx,
					elem0 + startIdx + nSamples,
					elem0 + length + nSamples // NOTE: New length, not old length!
					);
			if (startIdx != 0)
			{
				std::copy(
						elem0 + length,
						elem0 + length + nSamples,
						elem0
						);
			}
		}
	}
	else // length < _maxLength
	{
		// Shrink buffer

		// TODO: Check if this has any repercussions for the last call to
		// QwtPlotCurve::setRawSamples()

		if (_cumulativeCount > length)
			nSamples = length;

		for (QVector<double>* buf : buffers)
		{
			auto elemN = buf->begin() + _maxLength + _it; // NOTE: Old length, not new length!
			if (_cumulativeCount > length)
			{
				std::copy(
						elemN - nSamples,
						elemN,
						buf->begin()
						);
			}
			std::copy(
					buf->begin(),
					buf->begin() + nSamples,
					buf->begin() + length
					);

			buf->resize(length*2);
		}
	}

	// Data has possibly been moved around, so the relationship
	// between _cumulativeCount and the current x-value is now broken.
	// Restore it by updating internal trackers accordingly.
	_countShift += _cumulativeCount - nSamples;
	_cumulativeCount = nSamples;
	_maxLength = length;
	_it = nSamples;
	if (_it >= length)
		_it = 0;
}

void
LQChart::clear()
{
	_it = 0;
	_countShift = 0.0; // TODO: Make this user-configurable
	_cumulativeCount = 0;

	// Don't fully free the curve memory. It might be reused again pretty soon.

	for (auto curve : _curves)
		curve->setSamples(QVector<QPointF>());

	replot();
}

void
LQChart::init(int lines)
{
	// ASSUMPTION: Initialization is a rare operation, while appending is a frequent operation.

	int oldCount = _yBuffers.size();

	for (int i = 0; i < lines; ++i)
	{
		if (i < oldCount)
		{
			// Reuse old memory
			_yBuffers[i].resize(_maxLength*2);
		}
		else
		{
			// Allocate new memory
			_yBuffers << QVector<double>(_maxLength*2);
			_curves << new QwtPlotCurve;
			_curves[i]->setPen(defaultCurveColours[i%defaultCurveColours.size()]);
			_curves[i]->attach(this);
		}
	}

	// Free excess memory.
	for (int i = lines; i < oldCount; ++i)
		delete _curves[i];

	_yBuffers.resize(lines);
	_curves.resize(lines);

	updateCurveTitles();
}

void
LQChart::updateCurveTitles()
{
	for (int i = 0; i < _curves.size(); ++i)
	{
		QString title;
		if (i < _curveTitles.size())
			title = _curveTitles[i];
		else
			title = "Plot " + QString::number(i);

		_curves[i]->setTitle(title);
	}
}
