/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqerrors.h"
#include "lqtypes.h"
#include <QMap>

static const QMap<int, QByteArray> errorMap
{
	{LQ::NoError, "No error."},
	{LQ::EngineNotRunningError, "The widget engine is not running."},
	{LQ::EngineAlreadyRunningError, "The widget engine is already running."},
	{LQ::NotAnLQObjectError, "This QObject was not implemented and registered in LabVIEW."},
	{LQ::InvalidSignalError, "This signal does not exist."},
	{LQ::IncompatibleArgumentsError, "The signal argument(s) are incompatible with its target."},
	{LQ::ConnectionFailedError, "The connection failed."},
	{LQ::NullPointerUseError, "Invalid LQ reference."}
};

void
errorStringFromCode(LStrHandle _retVal, int32 errorCode)
{
	copyIntoLStr(_retVal, errorMap.value(errorCode, "Unknown error."));
}
