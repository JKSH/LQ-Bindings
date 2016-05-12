/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "historylengthdialog.h"
#include "ui_historylengthdialog.h"

HistoryLengthDialog::HistoryLengthDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::HistoryLengthDialog)
{
	ui->setupUi(this);
}

void
HistoryLengthDialog::setValue(int value)
{
	ui->spinBox->setValue(value);
}

int
HistoryLengthDialog::value() const
{
	return ui->spinBox->value();
}

HistoryLengthDialog::~HistoryLengthDialog()
{
	delete ui;
}
