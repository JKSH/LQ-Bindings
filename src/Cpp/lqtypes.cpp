/*\
 * Copyright (c) 2018 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqtypes.h"

static const size_t lStrHeaderSize = 4;

void
operator<<(LStrHandle dest, const QByteArray& src)
{
	MgErr outcome = DSSetHandleSize(dest, src.length() + lStrHeaderSize);
	if (outcome == noErr)
	{
		(*dest)->cnt = src.length();
		std::copy(src.constBegin(), src.constEnd(), (*dest)->str);
	}
}

LStrHandle
newLStr(const QByteArray& bytes)
{
	auto lStr = (LStrHandle)DSNewHandle(bytes.length() + lStrHeaderSize);
	lStr << bytes;
	return lStr;
}

template<> QByteArray
LVString::to<QByteArray>(LStrHandle lStr)
{
	return QByteArray(
		reinterpret_cast<char*>( (*lStr)->str ),
		LStrLen(*lStr)
	);
}

template<> QString
LVString::to<QString>(LStrHandle lStr)
{
	return QString::fromUtf8(
		reinterpret_cast<char*>( (*lStr)->str ),
		LStrLen(*lStr)
	);
}
