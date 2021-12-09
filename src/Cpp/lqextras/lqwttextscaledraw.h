/*\
 * Copyright (c) 2021 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQWTTEXTSCALEDRAW_H
#define LQWTTEXTSCALEDRAW_H

#include <QwtScaleDraw>
#include <QwtText>

class LQwtTextScaleDraw : public QwtScaleDraw
{
//	Q_PROPERTY(QStringList labels READ labels WRITE setLabels)

public:
	explicit LQwtTextScaleDraw(const QStringList& labels = QStringList());

public:
	QStringList labels() const { return m_labels; }
	void setLabels(const QStringList& labels) { m_labels = labels; }

	QwtText label(double value) const override;

private:
	QStringList m_labels;
};

#endif // LQWTTEXTSCALEDRAW_H
