/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef AXISRANGEDIALOG_H
#define AXISRANGEDIALOG_H

#include <QDialog>

namespace Ui {
class AxisRangeDialog;
}

class AxisRangeDialog : public QDialog
{
	Q_OBJECT

public:
	explicit AxisRangeDialog(QWidget *parent = 0);
	~AxisRangeDialog();

	void setRange(double min, double max);
	double minimum() const;
	double maximum() const;

private:
	Ui::AxisRangeDialog *ui;
};

#endif // AXISRANGEDIALOG_H
