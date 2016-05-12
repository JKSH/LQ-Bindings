/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef HISTORYLENGTHDIALOG_H
#define HISTORYLENGTHDIALOG_H

#include <QDialog>

namespace Ui {
class HistoryLengthDialog;
}

class HistoryLengthDialog : public QDialog
{
	Q_OBJECT

public:
	explicit HistoryLengthDialog(QWidget *parent = 0);
	~HistoryLengthDialog();

	void setValue(int value);
	int value() const;

private:
	Ui::HistoryLengthDialog *ui;
};

#endif // HISTORYLENGTHDIALOG_H
