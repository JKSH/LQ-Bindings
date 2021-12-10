/*\
 * Copyright (c) 2021 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqwttextscaledraw.h"

/*
	This class provides an easy way to implement a textual axis,
	particularly for bar charts
*/

LQwtTextScaleDraw::LQwtTextScaleDraw(const QStringList& labels) :
		QwtScaleDraw(),
		m_labels(labels)
{
	setTickLength(QwtScaleDiv::MinorTick, 0);
	setTickLength(QwtScaleDiv::MediumTick, 0);
	setTickLength(QwtScaleDiv::MajorTick, 0);

	enableComponent(QwtScaleDraw::Backbone, false);
	setLabelRotation(-60.0);
	setLabelAlignment(Qt::AlignLeft | Qt::AlignVCenter);
}

QwtText LQwtTextScaleDraw::label(double value) const
{
	const int index = qRound(value);
	if (index >= 0 && index < m_labels.size())
		return m_labels[index];
	return QwtText();
}
