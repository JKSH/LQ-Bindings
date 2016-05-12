/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "axisrangedialog.h"
#include "ui_axisrangedialog.h"

AxisRangeDialog::AxisRangeDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::AxisRangeDialog)
{
	ui->setupUi(this);
	// TODO: Implement own version of QDoubleSpinBox to handle different formats.
	// See http://www.qtcentre.org/threads/17318-qdoublespinbox-with-scientific-notation
}

AxisRangeDialog::~AxisRangeDialog()
{
	delete ui;
}

void
AxisRangeDialog::setRange(double min, double max)
{
	ui->doubleSpinBox_min->setValue(min);
	ui->doubleSpinBox_max->setValue(max);
}

double
AxisRangeDialog::minimum() const
{
	return ui->doubleSpinBox_min->value();
}

double
AxisRangeDialog::maximum() const
{
	return ui->doubleSpinBox_max->value();
}
