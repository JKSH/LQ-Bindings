/*\
 * Copyright (c) 2018 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQTYPES_H
#define LQTYPES_H

#include <QDataStream>
#include "extcode.h"

template <typename T>
using LQTable = QVector<QVector<T>>;

// This header uses operator<< in lieu of operator=. Chaining is not supported.
void operator<<(LStrHandle dest, const QByteArray& src);
inline void operator<<(LStrHandle dest, const QString& src) { dest << src.toUtf8(); }
template <typename T> void operator<<(LStrHandle dest, const T& src) { dest << serialize(src); }

LStrHandle newLStr(const QByteArray& bytes);
inline LStrHandle newLStr(const QString& string) {return newLStr(string.toUtf8());}

namespace LVString
{
template <typename T> T to(LStrHandle lStr);
template<> QByteArray to<QByteArray>(LStrHandle lStr);
template<> QString to<QString>(LStrHandle lStr);
}

// Structs declared between lv_prolog.h and lv_epilog.h get aligned according to LabVIEW's expectations
#include "lv_prolog.h"
template <typename T, size_t N = 1>
struct LVArray
{
	/*
		Qt does not have any 2D arrays in its API, so the 2D templates will only be used with custom LQ types.

		We avoid QList in our custom code (rationale at https://marcmutz.wordpress.com/effective-qt/containers/)
		so no QList converters are provided for 2D arrays.

		We are not interested in arrays of higher dimensions.
	*/

	static void resize(LVArray<T>** handle, qint32 count)
	{
		static_assert(N==1, "This function only supports 1D arrays.");

		size_t newSize = sizeof(qint32) + count*sizeof(T);

		// ASSUMPTION: This call will only fail if the program is already doomed anyway.
		DSSetHandleSize(handle, newSize);
		(*handle)->dimSizes[0] = count;
	}

	static void resize(LVArray<T, N>** handle, qint32 dimensions[N])
	{
		// Data format described at
		// http://zone.ni.com/reference/en-XX/help/371361M-01/lvconcepts/how_labview_stores_data_in_memory/

		int newSize = sizeof(T);
		for (size_t i = 0; i < N; ++i)
			newSize *= dimensions[i]; // Array data
		newSize += N*sizeof(qint32);  // Array header (size of each dimension)

		DSSetHandleSize(handle, newSize);
		std::copy( dimensions, dimensions+N, (*handle)->dimSizes );
	}

	// TODO: Rename the 1D functions to "fromQVector1D()" etc. for consistency with the 2D versions, OR
	// TODO: Merge these fromQ* functions into the stream operators below
	template <typename U>
	static void fromQVector(LVArray<T>** destHandle, const QVector<U>& vector)
	{
		static_assert(N==1, "This function only supports 1D arrays.");

		resize(destHandle, vector.size());
		std::copy(vector.constBegin(), vector.constEnd(), (*destHandle)->elt);
	}

	template <typename U>
	static void fromQList(LVArray<T>** destHandle, const QList<U>& list)
	{
		static_assert(N==1, "This function only supports 1D arrays.");

		resize(destHandle, list.size());
		std::copy(list.constBegin(), list.constEnd(), (*destHandle)->elt);
	}

	template <typename U>
	static void fromLQTable(LVArray<T, 2>** destHandle, const LQTable<U>& table)
	{
		static_assert(N==2, "This function only supports 2D arrays.");

		int dimensions[2] = {
			table.size(),
			table.isEmpty() ? 0 : table[0].size() // ASSUMPTION: All rows are the same length
		};
		resize(destHandle, dimensions);

		for (int r = 0; r < dimensions[0]; ++r)
			std::copy( table[r].constBegin(), table[r].constEnd(), (*destHandle)->elt + r*dimensions[1] );
	}

	template <typename U>
	QVector<U> toQVector() const
	{
		static_assert(N==1, "This function only supports 1D arrays.");

		QVector<U> vector(dimSizes[0]);
		std::copy(elt, elt+dimSizes[0], vector.data());
		return vector;
	}

	template <typename U>
	QList<U> toQList() const
	{
		static_assert(N==1, "This function only supports 1D arrays.");

		QList<U> list;
		list.reserve(dimSizes[0]);
		for (int i = 0; i < dimSizes[0]; ++i)
			list << elt[i]; // QList elements are not guaranteed to be contiguous in memory
		return list;
	}

	template <typename U>
	LQTable<U> toLQTable() const
	{
		static_assert(N==2, "This function only supports 2D arrays.");

		const int colCount = dimSizes[1];
		LQTable<U> table( dimSizes[0], QVector<U>(colCount) );
		for (int r = 0; r < dimSizes[0]; ++r)
		{
			// TODO: See if writing this another way produces smaller assemblies
			std::copy(
					elt + r*colCount,
					elt + r*colCount + colCount,
					table[r].data());
		}
		return table;
	}

	// WARNING: Check padding requirements for each platform
	qint32 dimSizes[N];
	T elt[1]; // See "C Struct Hack"
};

// Specializations for arrays of complex datatypes
template <size_t N>
struct LVArray<LStrHandle, N>
{
	static void resize(LVArray<LStrHandle>** handle, qint32 count)
	{
		// Just call the primary implementation
		LVArray<void*>::resize((LVArray<void*>**)handle, count);
	}

	static void resize(LVArray<LStrHandle, N>** handle, qint32 dimensions[N])
	{
		LVArray<void*, N>::resize((LVArray<void*, N>**)handle, dimensions);
	}

	template <typename U>
	static void fromQList(LVArray<LStrHandle>** destHandle, const QList<U>& list)
	{
		resize(destHandle, list.size());
		for (int i = 0; i < list.size(); ++i)
			(*destHandle)->elt[i] = newLStr(list[i]);
	}

	template <typename U>
	static void fromLQTable(LVArray<LStrHandle, 2>** destHandle, const LQTable<U>& table)
	{
		const int colCount = table.isEmpty() ? 0 : table[0].size();
		int dimensions[2] = {
			table.size(),
			colCount
		};
		resize(destHandle, dimensions);

		for (int i = 0, r = 0; r < dimensions[0]; ++r)
		{
			for (int c = 0; c < colCount; ++i, ++c)
				(*destHandle)->elt[i] = newLStr(table[r][c]);
		}
	}

	template <typename U>
	QList<U> toQList() const
	{
		static_assert(N==1, "This function only supports 1D arrays.");

		QList<U> list;
		list.reserve(dimSizes[0]);
		for (int i = 0; i < dimSizes[0]; ++i)
			list << LVString::to<U>(elt[i]);
		return list;
	}

	template <typename U>
	LQTable<U> toLQTable() const
	{
		static_assert(N==2, "This function only supports 2D arrays.");

		const int colCount = dimSizes[1];
		LQTable<U> table(dimSizes[0]);
		for (int i = 0, r = 0; r < dimSizes[0]; ++r)
		{
			table[r].reserve(colCount);
			for (int c = 0; c < colCount; ++i, ++c)
				table[r] << LVString::to<U>(elt[i]);
		}
		return table;
	}

	qint32 dimSizes[N];
	LStrHandle elt[1];
};

template <>
struct LVArray<quintptr>
{
	static void resize(LVArray<quintptr>** handle, qint32 count)
	{
		// Just call the primary implementation
		LVArray<void*>::resize((LVArray<void*>**)handle, count);
	}

	template <typename U>
	static void fromQList(LVArray<quintptr>** destHandle, const QList<U>& list)
	{
		static_assert(std::is_pointer<U>::value, "Converting quintptr to non-pointers is not supported.");

		resize(destHandle, list.size());
		for (int i = 0; i < list.size(); ++i)
			(*destHandle)->elt[i] = (quintptr)list[i];
	}

	template <typename U>
	QList<U> toQList() const
	{
		static_assert(std::is_pointer<U>::value, "Converting non-pointers to quintptr is not supported.");

		QList<U> list;
		list.reserve(dimSize);
		for (int i = 0; i < dimSize; ++i)
			list << (U)elt[i];
		return list;
	}
	// No QVector storage

	qint32 dimSize;
	quintptr elt[1];
};
#include "lv_epilog.h"

template <typename T, typename U> void operator<<(LVArray<T>** destHandle, const QList<U>& src) { LVArray<T>::fromQList(destHandle, src); }
template <typename T, typename U> void operator<<(LVArray<T>** destHandle, const QVector<U>& src) { LVArray<T>::fromQVector(destHandle, src); }
template <typename T, typename U> void operator<<(LVArray<T, 2>** destHandle, const LQTable<U>& src) { LVArray<T>::fromLQTable(destHandle, src); }

// ASSUMPTION: T is serializable
// TODO: Investigate if it's worth overloading the functions below to take rvalue references.
//       See http://qt-project.org/forums/viewthread/34454
template <typename T> QByteArray
serialize(const T& object) // TODO: Merge this function into operator<<
{
	QByteArray bytes;
	QDataStream stream(&bytes, QIODevice::WriteOnly);
	stream << object;
	return bytes;
}

template <typename T> T
deserialize(LStrHandle bytes)
{
	auto ba = LVString::to<QByteArray>(bytes);
	QDataStream stream(ba);
	T object;
	stream >> object;
	return object;
}

#endif // LQTYPES_H
