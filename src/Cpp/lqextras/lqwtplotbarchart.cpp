/*\
 * Copyright (c) 2021 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqwtplotbarchart.h"

/*
	If QwtPlotBarChart does not have a symbol set, the bars' default
	style is QwtColumnSymbol::Box with QwtColumnSymbol::Plain.

	However, the default style when creating a custom QwtColumnSymbol
	is QwtColumnSymbol::NoStyle with QwtColumnSymbol::Raised. Weird
	choices.

	This class makes it simple for users to edit the symbol style
	while retaining QwtPlotBarChart's default style.

	\warning Calling QwtPlotBarChart::setSymbol() externally is not
			 supported
*/

LQwtPlotBarChart::LQwtPlotBarChart(const QString& title) :
		QwtPlotBarChart(title),
		m_symbol(new QwtColumnSymbol(QwtColumnSymbol::Box))
{
	m_symbol->setFrameStyle(QwtColumnSymbol::Plain);
	setSymbol(m_symbol);
}
