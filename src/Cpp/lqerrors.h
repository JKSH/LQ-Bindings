/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQERRORS_H
#define LQERRORS_H

#include <QtGlobal>
#include "extcode.h"

namespace LQ
{
	enum Error
	{
		/*
			See http://zone.ni.com/reference/en-XX/help/371361L-01/lvhowto/def_cust_errors/
			for all allowed ranges.
			  - Have errors < -8000
			  - Have warnings > 8000
		*/
		NoError = 0,
		EngineNotRunningError = -8000,
		EngineAlreadyRunningError = -8001,
		NotAnLQObjectError = -8002,
		InvalidSignalError = -8003,
		IncompatibleArgumentsError = -8004,
		ConnectionFailedError = -8005,
		NullPointerUseError = -8006
	};
}

extern "C" {

extern void Q_DECL_EXPORT errorStringFromCode(LStrHandle _retVal, int32 errorCode);

}

#endif // LQERRORS_H
