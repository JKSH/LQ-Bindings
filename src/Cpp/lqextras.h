/*\
 * Copyright (c) 2021 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQEXTRAS_H
#define LQEXTRAS_H

#include <QwtPlotBarChart>
#include <QwtPlotCurve>
#include <QwtScaleDraw>
#include <QwtScaleEngine>
#include <QwtSlider>
#include <QwtThermo>
#include <QwtText>

#include "lqextras/lqchart.h"
#include "lqextras/lqwtplotbarchart.h"
#include "lqextras/lqwttextscaledraw.h"

#include "lqtypes.h"
inline void operator<<(LStrHandle dest, const QwtText& src) { dest << src.text(); }
namespace LVString
{
// TODO: Move implementatioin into .cpp to allow this header to be included in multiple places
template<> QwtText to<QwtText>(LStrHandle lStr) { return LVString::to<QString>(lStr); }
}

#endif // LQEXTRAS_H
