/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQMAIN_H
#define LQMAIN_H

#include <QtGlobal>
#include <QMetaObject>
#include "extcode.h"
#include "lqtypes.h"


extern "C" {

extern qint32 Q_DECL_EXPORT startEngine(quintptr* _retVal, LStrHandle pluginDir, LStrHandle cliArgs);
extern qint32 Q_DECL_EXPORT stopEngine(bool* preserveThread);

extern qint32 Q_DECL_EXPORT registerEventRefs(LVUserEventRef* voidRef, LVUserEventRef* boolRef, LVUserEventRef* i32Ref, LVUserEventRef* dblRef, LVUserEventRef* stringRef);
extern qint32 Q_DECL_EXPORT connect_void(quintptr _instance, const char* encodedSignal);
extern qint32 Q_DECL_EXPORT connect_bool(quintptr _instance, const char* encodedSignal);
extern qint32 Q_DECL_EXPORT connect_i32(quintptr _instance, const char* encodedSignal);
extern qint32 Q_DECL_EXPORT connect_dbl(quintptr _instance, const char* encodedSignal);
extern qint32 Q_DECL_EXPORT connect_string(quintptr _instance, const char* encodedSignal);
extern qint32 Q_DECL_EXPORT connect_bySignature(QMetaObject::Connection* _retVal, quintptr sender, const char* encodedSignal, quintptr receiver, const char* encodedMethod);
extern qint32 Q_DECL_EXPORT emit_void(quintptr _instance, const char* normalizedSignal);
extern qint32 Q_DECL_EXPORT emit_bool(quintptr _instance, const char* normalizedSignal, bool* data);
extern qint32 Q_DECL_EXPORT emit_i32(quintptr _instance, const char* normalizedSignal, qint32* data);
extern qint32 Q_DECL_EXPORT emit_dbl(quintptr _instance, const char* normalizedSignal, double* data);
extern qint32 Q_DECL_EXPORT emit_string(quintptr _instance, const char* normalizedSignal, LStrHandle data);
extern qint32 Q_DECL_EXPORT registerLQObject(quintptr _instance, LVArray<LStrHandle>** signalList, LStrHandle superClassName);
extern qint32 Q_DECL_EXPORT findSignalIndex(qint64* _retVal, quintptr _instance, const char* normalizedSignal);

}

#endif // LQMAIN_H
