/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqtypes.h"

static const int lStrHeaderSize = 4;

void
copyIntoLStr(LStrHandle lStr, const QByteArray& bytes)
{
	// TODO: Report MgErr value
	MgErr outcome = DSSetHandleSize(lStr, bytes.length() + lStrHeaderSize);
	if (outcome == noErr)
	{
		(*lStr)->cnt = bytes.length();
		std::copy(bytes.constBegin(), bytes.constEnd(), (*lStr)->str);
	}
}

QByteArray
copyFromLStr(LStrHandle lStr)
{
	return QByteArray( (char*)(*lStr)->str, LStrLen(*lStr) );
}

LStrHandle
newLStr(const QByteArray& bytes)
{
	auto lStr = (LStrHandle)DSNewHandle(bytes.length() + lStrHeaderSize);
	copyIntoLStr(lStr, bytes);
	return lStr;
}
