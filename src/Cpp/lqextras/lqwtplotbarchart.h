/*\
 * Copyright (c) 2021 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQWTPLOTBARCHART_H
#define LQWTPLOTBARCHART_H

#include <QwtPlotBarChart>
#include <QwtColumnSymbol>
#include <QPalette>

class LQwtPlotBarChart : public QwtPlotBarChart
{
/*
    Q_PROPERTY(QwtColumnSymbol::FrameStyle barFrameStyle READ barFrameStyle WRITE setBarFrameStyle)
    Q_PROPERTY(int barFrameLineWidth READ barFrameLineWidth WRITE setBarFrameLineWidth)
	Q_PROPERTY(QPalette barPalette READ barPalette WRITE setBarPalette)
*/

public:
	explicit LQwtPlotBarChart(const QString& title = QString());

public:
	QwtColumnSymbol::FrameStyle barFrameStyle() const { return m_symbol->frameStyle(); }
	void setBarFrameStyle(QwtColumnSymbol::FrameStyle style) { m_symbol->setFrameStyle(style); }

	int barFrameLineWidth() const { return m_symbol->lineWidth(); }
	void setBarFrameLineWidth(int width) { m_symbol->setLineWidth(width); }

	QPalette barPalette() const { return m_symbol->palette(); }
	void setBarPalette(const QPalette& palette) { m_symbol->setPalette(palette); }

private:
	QwtColumnSymbol* m_symbol;
};

#endif // LQWTPLOTBARCHART_H
