/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQCHART_H
#define LQCHART_H

#include <QWidget>
#include <QAction>

#include <qwt_plot.h>
#include <qwt_text.h>
#include <QVector>

class QwtPlotCurve;

class LQChart : public QwtPlot // TODO: Hide inside a QWidget
{
	Q_OBJECT

	Q_PROPERTY(int historyLength READ historyLength WRITE setHistoryLength)

public:
	explicit LQChart(int maxLength = 10, double dt = 1.0, QWidget* parent = nullptr);

	// Multi-series append
	void append(const QVector<QVector<double>>& values);

	// Mono-series append
	// TODO: Just write a custom, optimized implementation. Constructing a vector regularly sounds expensive.
	void append(const QVector<double>& values)
	{ append(QVector<QVector<double>>{values}); }

	QString axisTitle(QwtPlot::Axis axisId) const
	{ return QwtPlot::axisTitle(axisId).text(); }

	QStringList curveTitles() const
	{ return _curveTitles; }

	int historyLength() const
	{ return _maxLength; }

	bool isAxisAutoScaling(QwtPlot::Axis axisId) const;

	void setAxisAutoScaling(QwtPlot::Axis axisId, bool autoScaling = true);

	void setAxisTitle(int axisId, const QString& title)
	{ QwtPlot::setAxisTitle(axisId, title); }

public slots:
	// Mono-series append
	void append(double value)
	{ append(QVector<double>{value}); }

	void clear();

	void setCurveTitles(const QStringList& titles)
	{
		_curveTitles = titles;
		updateCurveTitles();
	}

	void setHistoryLength(int length);

	void setYAxisRange(double min, double max)
	{
		_asAction_yLeft->setChecked(false);
		setAxisScale(yLeft, min, max);
	}

private:
	void init(int lines);
	void updateCurveTitles();

	int _it;

	double _scale;
	double _countShift; // Shift sample counts instead of using a "t offset" to avoid rounding errors
	int _cumulativeCount;
	int _maxLength;
	QVector<double> _xBuffer;
	QVector<QVector<double>> _yBuffers;
	QVector<QwtPlotCurve*> _curves;

	QStringList _curveTitles;

	QAction* _asAction_yLeft;
	QAction* _asAction_xBottom;
};

#endif // LQCHART_H
