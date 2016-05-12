/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqlibinterface.h"
#include "lqbridge.h"
#include "lqerrors.h"

// NOTE: This file contains auto-generated code. Do not modify by hand.

qint32
QTextCodec_codecForLocale(quintptr* _retVal)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QTextCodec* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_codecForLocale",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTextCodec*, retVal_brg));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTextCodec_codecForMib(quintptr* _retVal, qint32 mib)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QTextCodec* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_codecForMib",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTextCodec*, retVal_brg),
			Q_ARG(int, mib));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTextCodec_availableCodecs(LVArray<LStrHandle>** _retVal)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QList<QByteArray> retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_availableCodecs",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QList<QByteArray>, retVal_brg));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTextCodec_availableMibs(LVArray<qint32>** _retVal)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QList<int> retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_availableMibs",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QList<int>, retVal_brg));
	LVArray<qint32>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTextCodec_codecForName(quintptr* _retVal, LStrHandle name)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QTextCodec* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_codecForName",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTextCodec*, retVal_brg),
			Q_ARG(QByteArray, QByteArray( (char*)(*name)->str, LStrLen(*name) )));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTextCodec_fromUnicode(LStrHandle _retVal, quintptr _instance, LStrHandle string)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_fromUnicode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QTextCodec*, (QTextCodec*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*string)->str, LStrLen(*string) )));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTextCodec_name(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_name",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QTextCodec*, (QTextCodec*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTextCodec_toUnicode(LStrHandle _retVal, quintptr _instance, LStrHandle string)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextCodec_toUnicode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTextCodec*, (QTextCodec*)_instance),
			Q_ARG(QByteArray, QByteArray( (char*)(*string)->str, LStrLen(*string) )));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QObject_setObjectName(quintptr _instance, LStrHandle sheet)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QObject_setObjectName",
			Qt::BlockingQueuedConnection,
			Q_ARG(QObject*, (QObject*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*sheet)->str, LStrLen(*sheet) )));

	return LQ::NoError;
}

qint32
QObject_objectName(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QObject_objectName",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QObject*, (QObject*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QCoreApplication_setApplicationName(quintptr _instance, LStrHandle application)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QCoreApplication_setApplicationName",
			Qt::BlockingQueuedConnection,
			Q_ARG(QCoreApplication*, (QCoreApplication*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*application)->str, LStrLen(*application) )));

	return LQ::NoError;
}

qint32
QCoreApplication_applicationName(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QCoreApplication_applicationName",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QCoreApplication*, (QCoreApplication*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QGuiApplication_setWindowIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGuiApplication_setWindowIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGuiApplication*, (QGuiApplication*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QGuiApplication_windowIcon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGuiApplication_windowIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QGuiApplication*, (QGuiApplication*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QScreen_name(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_name",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QScreen_depth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_depth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QScreen_geometry(QRect* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_geometry",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QScreen_physicalDotsPerInch(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_physicalDotsPerInch",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QScreen_logicalDotsPerInch(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_logicalDotsPerInch",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QScreen_devicePixelRatio(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_devicePixelRatio",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QScreen_availableGeometry(QRect* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_availableGeometry",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QScreen_grabWindow(LStrHandle _retVal, quintptr _instance, quintptr window, qint32 x, qint32 y, qint32 w, qint32 h)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_grabWindow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance),
			Q_ARG(WId, window),
			Q_ARG(int, x),
			Q_ARG(int, y),
			Q_ARG(int, w),
			Q_ARG(int, h));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QScreen_refreshRate(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScreen_refreshRate",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QScreen*, (QScreen*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_QWindow(quintptr* _retVal, const char* _className, quintptr screen)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_QWindow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWindow*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QScreen*, (QScreen*)screen));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_isVisible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_isVisible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_visibility(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWindow::Visibility retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_visibility",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWindow::Visibility, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_setVisibility(quintptr _instance, int32 v)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setVisibility",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QWindow::Visibility, (QWindow::Visibility)v));

	return LQ::NoError;
}

qint32
QWindow_winId(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	WId retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_winId",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(WId, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_isTopLevel(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_isTopLevel",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_modality(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::WindowModality retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_modality",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::WindowModality, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_setModality(quintptr _instance, int32 modality)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setModality",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(Qt::WindowModality, (Qt::WindowModality)modality));

	return LQ::NoError;
}

qint32
QWindow_type(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::WindowType retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_type",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::WindowType, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_title(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_title",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWindow_setOpacity(quintptr _instance, double level)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setOpacity",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(qreal, level));

	return LQ::NoError;
}

qint32
QWindow_opacity(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_opacity",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_isActive(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_isActive",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_devicePixelRatio(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_devicePixelRatio",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_windowState(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::WindowState retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_windowState",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::WindowState, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_setWindowState(quintptr _instance, int32 state)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setWindowState",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(Qt::WindowState, (Qt::WindowState)state));

	return LQ::NoError;
}

qint32
QWindow_setTransientParent(quintptr _instance, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setTransientParent",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QWindow*, (QWindow*)parent));

	return LQ::NoError;
}

qint32
QWindow_transientParent(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_transientParent",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWindow*, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_isExposed(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_isExposed",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_minimumSize(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_minimumSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_maximumSize(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_maximumSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_baseSize(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_baseSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_sizeIncrement(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_sizeIncrement",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_setMinimumSize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setMinimumSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QWindow_setMaximumSize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setMaximumSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QWindow_setBaseSize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setBaseSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QWindow_setSizeIncrement(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setSizeIncrement",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QWindow_setGeometry(quintptr _instance, QRect* rect)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setGeometry",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QRect, *rect));

	return LQ::NoError;
}

qint32
QWindow_geometry(QRect* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_geometry",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_frameGeometry(QRect* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_frameGeometry",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_resize(quintptr _instance, QSize* newSize)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_resize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QSize, *newSize));

	return LQ::NoError;
}

qint32
QWindow_setIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QWindow_icon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_icon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWindow_setKeyboardGrabEnabled(bool* _retVal, quintptr _instance, bool* grab)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_setKeyboardGrabEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(bool, *grab));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_setMouseGrabEnabled(bool* _retVal, quintptr _instance, bool* grab)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_setMouseGrabEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(bool, *grab));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_screen(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QScreen* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_screen",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QScreen*, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_setScreen(quintptr _instance, quintptr screen)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setScreen",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QScreen*, (QScreen*)screen));

	return LQ::NoError;
}

qint32
QWindow_focusObject(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QObject* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_focusObject",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QObject*, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_fromWinId(quintptr* _retVal, quintptr id)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_fromWinId",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWindow*, retVal_brg),
			Q_ARG(WId, id));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_requestActivate(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_requestActivate",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_setVisible(quintptr _instance, bool* visible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(bool, *visible));

	return LQ::NoError;
}

qint32
QWindow_show(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_show",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_hide(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_hide",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_showMinimized(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_showMinimized",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_showMaximized(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_showMaximized",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_showFullScreen(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_showFullScreen",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_showNormal(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_showNormal",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_close(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWindow_close",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWindow*, (QWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWindow_raise(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_raise",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_lower(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_lower",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance));

	return LQ::NoError;
}

qint32
QWindow_setTitle(quintptr _instance, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_setTitle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));

	return LQ::NoError;
}

qint32
QWindow_alert(quintptr _instance, qint32 msec)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWindow_alert",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWindow*, (QWindow*)_instance),
			Q_ARG(int, msec));

	return LQ::NoError;
}

qint32
QBrush_QBrush(LStrHandle _retVal)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QBrush_QBrush",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QBrush_color(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QBrush_color",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QBrush_setColor(LStrHandle _instance, LStrHandle color)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QBrush_setColor",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(LStrHandle, color));

	return LQ::NoError;
}

qint32
QBrush_setStyle(LStrHandle _instance, int32 style)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QBrush_setStyle",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(Qt::BrushStyle, (Qt::BrushStyle)style));

	return LQ::NoError;
}

qint32
QBrush_style(int32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	Qt::BrushStyle retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QBrush_style",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::BrushStyle, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QColor_QColor(LStrHandle _retVal, qint32 r, qint32 g, qint32 b, qint32 a)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QColor_QColor",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(int, r),
			Q_ARG(int, g),
			Q_ARG(int, b),
			Q_ARG(int, a));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFont_QFont(LStrHandle _retVal, LStrHandle family, qint32 pointSize, qint32 weight, bool* italic)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_QFont",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QString, QString::fromUtf8( (char*)(*family)->str, LStrLen(*family) )),
			Q_ARG(int, pointSize),
			Q_ARG(int, weight),
			Q_ARG(bool, *italic));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFont_family(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_family",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFont_styleName(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_styleName",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFont_pointSize(qint32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_pointSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_pointSizeF(double* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_pointSizeF",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_pixelSize(qint32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_pixelSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_weight(qint32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_weight",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_bold(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_bold",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_setStyle(LStrHandle _instance, int32 style)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QFont_setStyle",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(QFont::Style, (QFont::Style)style));

	return LQ::NoError;
}

qint32
QFont_style(int32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFont::Style retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_style",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFont::Style, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFont_italic(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_italic",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_setItalic(LStrHandle _instance, bool* b)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QFont_setItalic",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(bool, *b));

	return LQ::NoError;
}

qint32
QFont_underline(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_underline",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_overline(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_overline",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_strikeOut(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_strikeOut",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_fixedPitch(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_fixedPitch",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_kerning(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_kerning",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_styleHint(int32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFont::StyleHint retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_styleHint",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFont::StyleHint, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFont_styleStrategy(int32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFont::StyleStrategy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_styleStrategy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFont::StyleStrategy, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFont_setStyleStrategy(LStrHandle _instance, int32 s)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QFont_setStyleStrategy",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(QFont::StyleStrategy, (QFont::StyleStrategy)s));

	return LQ::NoError;
}

qint32
QFont_stretch(qint32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_stretch",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_letterSpacing(double* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_letterSpacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_letterSpacingType(int32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFont::SpacingType retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_letterSpacingType",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFont::SpacingType, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFont_setLetterSpacing(LStrHandle _instance, int32 type, double spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QFont_setLetterSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(QFont::SpacingType, (QFont::SpacingType)type),
			Q_ARG(qreal, spacing));

	return LQ::NoError;
}

qint32
QFont_wordSpacing(double* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_wordSpacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_setWordSpacing(LStrHandle _instance, double spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QFont_setWordSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(qreal, spacing));

	return LQ::NoError;
}

qint32
QFont_capitalization(int32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFont::Capitalization retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_capitalization",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFont::Capitalization, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFont_setHintingPreference(LStrHandle _instance, int32 hintingPreference)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QFont_setHintingPreference",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(QFont::HintingPreference, (QFont::HintingPreference)hintingPreference));

	return LQ::NoError;
}

qint32
QFont_hintingPreference(int32* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFont::HintingPreference retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_hintingPreference",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFont::HintingPreference, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFont_exactMatch(bool* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_exactMatch",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFont_key(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_key",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFont_toString(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_toString",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFont_defaultFamily(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_defaultFamily",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFont_lastResortFamily(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_lastResortFamily",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFont_lastResortFont(LStrHandle _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFont_lastResortFont",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QIcon_QIcon(LStrHandle _retVal, LStrHandle fileName)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QIcon_QIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QString, QString::fromUtf8( (char*)(*fileName)->str, LStrLen(*fileName) )));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QIcon_addFile(LStrHandle _instance, LStrHandle file)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QIcon_addFile",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*file)->str, LStrLen(*file) )));

	return LQ::NoError;
}

qint32
QIcon_addPixmap(LStrHandle _instance, LStrHandle pixmap)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QIcon_addPixmap",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(LStrHandle, pixmap));

	return LQ::NoError;
}

qint32
QIcon_pixmap(LStrHandle _retVal, LStrHandle _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QIcon_pixmap",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(LStrHandle, _instance),
			Q_ARG(QSize, *size));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QPen_QPen(LStrHandle _retVal)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QPen_QPen",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QPen_dashOffset(double* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QPen_dashOffset",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QPen_dashPattern(LVArray<double>** _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QVector<qreal> retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QPen_dashPattern",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QVector<qreal>, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	LVArray<double>::fromQVector(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QPen_setDashPattern(LStrHandle _instance, LVArray<double>** pattern)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QPen_setDashPattern",
			Qt::BlockingQueuedConnection,
			Q_ARG(LStrHandle, _instance),
			Q_ARG(QVector<qreal>, (*pattern)->toQVector<qreal>()));

	return LQ::NoError;
}

qint32
QPixmap_QPixmap(LStrHandle _retVal, LStrHandle fileName)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QPixmap_QPixmap",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QString, QString::fromUtf8( (char*)(*fileName)->str, LStrLen(*fileName) )));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QPixmap_size(QSize* _retVal, LStrHandle _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QPixmap_size",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(LStrHandle, _instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QApplication_setStyleSheet(quintptr _instance, LStrHandle sheet)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QApplication_setStyleSheet",
			Qt::BlockingQueuedConnection,
			Q_ARG(QApplication*, (QApplication*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*sheet)->str, LStrLen(*sheet) )));

	return LQ::NoError;
}

qint32
QApplication_styleSheet(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QApplication_styleSheet",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QApplication*, (QApplication*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWidget_QWidget(quintptr* _retVal, const char* _className)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_QWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(const char*, _className));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_actions(LVArray<quintptr>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QList<QAction*> retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_actions",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QList<QAction*>, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	LVArray<quintptr>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWidget_addActions(quintptr _instance, LVArray<quintptr>** actions)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_addActions",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QList<QAction*>, (*actions)->toQList<QAction*>()));

	return LQ::NoError;
}

qint32
QWidget_contextMenuPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::ContextMenuPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_contextMenuPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::ContextMenuPolicy, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_focusPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::FocusPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_focusPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::FocusPolicy, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_font(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_font",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWidget_geometry(QRect* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_geometry",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_layout(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QLayout* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_layout",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QLayout*, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_isEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_isEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_isVisible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_isVisible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_minimumSize(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_minimumSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_resize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_resize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QWidget_setContextMenuPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setContextMenuPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(Qt::ContextMenuPolicy, (Qt::ContextMenuPolicy)policy));

	return LQ::NoError;
}

qint32
QWidget_setEnabled(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QWidget_setFocusPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setFocusPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(Qt::FocusPolicy, (Qt::FocusPolicy)policy));

	return LQ::NoError;
}

qint32
QWidget_setFont(quintptr _instance, LStrHandle font)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setFont",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(LStrHandle, font));

	return LQ::NoError;
}

qint32
QWidget_setGeometry(quintptr _instance, QRect* geometry)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setGeometry",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QRect, *geometry));

	return LQ::NoError;
}

qint32
QWidget_setLayout(quintptr _instance, quintptr layout)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setLayout",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QLayout*, (QLayout*)layout));

	return LQ::NoError;
}

qint32
QWidget_setMinimumSize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setMinimumSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QWidget_setStyleSheet(quintptr _instance, LStrHandle styleSheet)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setStyleSheet",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*styleSheet)->str, LStrLen(*styleSheet) )));

	return LQ::NoError;
}

qint32
QWidget_setTabOrder(quintptr first, quintptr second)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setTabOrder",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)first),
			Q_ARG(QWidget*, (QWidget*)second));

	return LQ::NoError;
}

qint32
QWidget_setToolTip(quintptr _instance, LStrHandle toolTip)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setToolTip",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*toolTip)->str, LStrLen(*toolTip) )));

	return LQ::NoError;
}

qint32
QWidget_setToolTipDuration(quintptr _instance, qint32 msec)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setToolTipDuration",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(int, msec));

	return LQ::NoError;
}

qint32
QWidget_setVisible(quintptr _instance, bool* visible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(bool, *visible));

	return LQ::NoError;
}

qint32
QWidget_setWindowIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setWindowIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QWidget_setWindowOpacity(quintptr _instance, double level)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setWindowOpacity",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(qreal, level));

	return LQ::NoError;
}

qint32
QWidget_setWindowTitle(quintptr _instance, LStrHandle windowTitle)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWidget_setWindowTitle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*windowTitle)->str, LStrLen(*windowTitle) )));

	return LQ::NoError;
}

qint32
QWidget_size(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_size",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_sizeHint(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_sizeHint",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_styleSheet(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_styleSheet",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWidget_toolTip(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_toolTip",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWidget_toolTipDuration(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_toolTipDuration",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_windowHandle(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_windowHandle",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWindow*, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_windowIcon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_windowIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWidget_windowOpacity(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_windowOpacity",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWidget_windowTitle(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWidget_windowTitle",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QComboBox_QComboBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QComboBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_QComboBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QComboBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_maxVisibleItems(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_maxVisibleItems",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setMaxVisibleItems(quintptr _instance, qint32 maxItems)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setMaxVisibleItems",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, maxItems));

	return LQ::NoError;
}

qint32
QComboBox_count(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_count",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setMaxCount(quintptr _instance, qint32 max)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setMaxCount",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, max));

	return LQ::NoError;
}

qint32
QComboBox_maxCount(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_maxCount",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_duplicatesEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_duplicatesEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setDuplicatesEnabled(quintptr _instance, bool* enable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setDuplicatesEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(bool, *enable));

	return LQ::NoError;
}

qint32
QComboBox_setFrame(quintptr _instance, bool* hasFrame)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setFrame",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(bool, *hasFrame));

	return LQ::NoError;
}

qint32
QComboBox_hasFrame(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_hasFrame",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_findText(qint32* _retVal, quintptr _instance, LStrHandle text, int32 flags)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_findText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(Qt::MatchFlag, (Qt::MatchFlag)flags));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_insertPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QComboBox::InsertPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_insertPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QComboBox::InsertPolicy, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setInsertPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setInsertPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(QComboBox::InsertPolicy, (QComboBox::InsertPolicy)policy));

	return LQ::NoError;
}

qint32
QComboBox_sizeAdjustPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QComboBox::SizeAdjustPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_sizeAdjustPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QComboBox::SizeAdjustPolicy, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setSizeAdjustPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setSizeAdjustPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(QComboBox::SizeAdjustPolicy, (QComboBox::SizeAdjustPolicy)policy));

	return LQ::NoError;
}

qint32
QComboBox_minimumContentsLength(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_minimumContentsLength",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setMinimumContentsLength(quintptr _instance, qint32 characters)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setMinimumContentsLength",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, characters));

	return LQ::NoError;
}

qint32
QComboBox_iconSize(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_iconSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setIconSize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setIconSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QComboBox_isEditable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_isEditable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_setEditable(quintptr _instance, bool* editable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setEditable",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(bool, *editable));

	return LQ::NoError;
}

qint32
QComboBox_currentIndex(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_currentIndex",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QComboBox_currentText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_currentText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QComboBox_itemText(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_itemText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QComboBox_itemIcon(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QComboBox_itemIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QComboBox_addItems(quintptr _instance, LVArray<LStrHandle>** texts)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_addItems",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(QStringList, (*texts)->toQList<QString>()));

	return LQ::NoError;
}

qint32
QComboBox_insertItems(quintptr _instance, qint32 index, LVArray<LStrHandle>** texts)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_insertItems",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(QStringList, (*texts)->toQList<QString>()));

	return LQ::NoError;
}

qint32
QComboBox_insertSeparator(quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_insertSeparator",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index));

	return LQ::NoError;
}

qint32
QComboBox_removeItem(quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_removeItem",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index));

	return LQ::NoError;
}

qint32
QComboBox_setItemText(quintptr _instance, qint32 index, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setItemText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QComboBox_setItemIcon(quintptr _instance, qint32 index, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setItemIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QComboBox_showPopup(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_showPopup",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance));

	return LQ::NoError;
}

qint32
QComboBox_hidePopup(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_hidePopup",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance));

	return LQ::NoError;
}

qint32
QComboBox_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance));

	return LQ::NoError;
}

qint32
QComboBox_clearEditText(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_clearEditText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance));

	return LQ::NoError;
}

qint32
QComboBox_setEditText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setEditText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QComboBox_setCurrentIndex(quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setCurrentIndex",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(int, index));

	return LQ::NoError;
}

qint32
QComboBox_setCurrentText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QComboBox_setCurrentText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QComboBox*, (QComboBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QFontComboBox_QFontComboBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFontComboBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontComboBox_QFontComboBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFontComboBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QFontComboBox_setFontFilters(quintptr _instance, int32 filters)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFontComboBox_setFontFilters",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFontComboBox*, (QFontComboBox*)_instance),
			Q_ARG(QFontComboBox::FontFilter, (QFontComboBox::FontFilter)filters));

	return LQ::NoError;
}

qint32
QFontComboBox_fontFilters(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFontComboBox::FontFilter retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontComboBox_fontFilters",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFontComboBox::FontFilter, retVal_brg),
			Q_ARG(QFontComboBox*, (QFontComboBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFontComboBox_currentFont(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontComboBox_currentFont",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QFontComboBox*, (QFontComboBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFontComboBox_setCurrentFont(quintptr _instance, LStrHandle font)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFontComboBox_setCurrentFont",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFontComboBox*, (QFontComboBox*)_instance),
			Q_ARG(LStrHandle, font));

	return LQ::NoError;
}

qint32
QFrame_QFrame(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFrame* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFrame_QFrame",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFrame*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QFrame_frameWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFrame_frameWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QFrame*, (QFrame*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFrame_frameShape(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFrame::Shape retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFrame_frameShape",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFrame::Shape, retVal_brg),
			Q_ARG(QFrame*, (QFrame*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFrame_setFrameShape(quintptr _instance, int32 shape)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFrame_setFrameShape",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFrame*, (QFrame*)_instance),
			Q_ARG(QFrame::Shape, (QFrame::Shape)shape));

	return LQ::NoError;
}

qint32
QFrame_frameShadow(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFrame::Shadow retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFrame_frameShadow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFrame::Shadow, retVal_brg),
			Q_ARG(QFrame*, (QFrame*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFrame_setFrameShadow(quintptr _instance, int32 shadow)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFrame_setFrameShadow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFrame*, (QFrame*)_instance),
			Q_ARG(QFrame::Shadow, (QFrame::Shadow)shadow));

	return LQ::NoError;
}

qint32
QFrame_lineWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFrame_lineWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QFrame*, (QFrame*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFrame_setLineWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFrame_setLineWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFrame*, (QFrame*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QFrame_midLineWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFrame_midLineWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QFrame*, (QFrame*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFrame_setMidLineWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFrame_setMidLineWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFrame*, (QFrame*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QFrame_frameRect(QRect* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFrame_frameRect",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QFrame*, (QFrame*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFrame_setFrameRect(quintptr _instance, QRect* rectangle)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFrame_setFrameRect",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFrame*, (QFrame*)_instance),
			Q_ARG(QRect, *rectangle));

	return LQ::NoError;
}

qint32
QLabel_QLabel(quintptr* _retVal, const char* _className, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QLabel* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLabel_QLabel",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QLabel*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QLabel_alignment(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::AlignmentFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLabel_alignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::AlignmentFlag, retVal_brg),
			Q_ARG(QLabel*, (QLabel*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QLabel_setAlignment(quintptr _instance, int32 alignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLabel_setAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLabel*, (QLabel*)_instance),
			Q_ARG(Qt::AlignmentFlag, (Qt::AlignmentFlag)alignment));

	return LQ::NoError;
}

qint32
QLabel_setPixmap(quintptr _instance, LStrHandle pixmap)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLabel_setPixmap",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLabel*, (QLabel*)_instance),
			Q_ARG(LStrHandle, pixmap));

	return LQ::NoError;
}

qint32
QLabel_setText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLabel_setText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLabel*, (QLabel*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QLabel_setWordWrap(quintptr _instance, bool* wordWrap)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLabel_setWordWrap",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLabel*, (QLabel*)_instance),
			Q_ARG(bool, *wordWrap));

	return LQ::NoError;
}

qint32
QLabel_text(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLabel_text",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QLabel*, (QLabel*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QLabel_wordWrap(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLabel_wordWrap",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLabel*, (QLabel*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAbstractButton_icon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractButton_icon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QAbstractButton*, (QAbstractButton*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QAbstractButton_isDown(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractButton_isDown",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAbstractButton*, (QAbstractButton*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAbstractButton_setDown(quintptr _instance, bool* down)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractButton_setDown",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractButton*, (QAbstractButton*)_instance),
			Q_ARG(bool, *down));

	return LQ::NoError;
}

qint32
QAbstractButton_setIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractButton_setIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractButton*, (QAbstractButton*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QAbstractButton_setText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractButton_setText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractButton*, (QAbstractButton*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QAbstractButton_text(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractButton_text",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QAbstractButton*, (QAbstractButton*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QPushButton_QPushButton(quintptr* _retVal, const char* _className, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QPushButton* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QPushButton_QPushButton",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QPushButton*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QPushButton_isFlat(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QPushButton_isFlat",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QPushButton*, (QPushButton*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QPushButton_setFlat(quintptr _instance, bool* flat)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QPushButton_setFlat",
			Qt::BlockingQueuedConnection,
			Q_ARG(QPushButton*, (QPushButton*)_instance),
			Q_ARG(bool, *flat));

	return LQ::NoError;
}

qint32
QLayout_parentWidget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLayout_parentWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QLayout*, (QLayout*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QLayout_removeWidget(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLayout_removeWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLayout*, (QLayout*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QBoxLayout_QBoxLayout(quintptr* _retVal, const char* _className, int32 direction, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QBoxLayout* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QBoxLayout_QBoxLayout",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QBoxLayout*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QBoxLayout::Direction, (QBoxLayout::Direction)direction),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QBoxLayout_addLayout(quintptr _instance, quintptr layout, qint32 stretch)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QBoxLayout_addLayout",
			Qt::BlockingQueuedConnection,
			Q_ARG(QBoxLayout*, (QBoxLayout*)_instance),
			Q_ARG(QLayout*, (QLayout*)layout),
			Q_ARG(int, stretch));

	return LQ::NoError;
}

qint32
QBoxLayout_addSpacing(quintptr _instance, qint32 size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QBoxLayout_addSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QBoxLayout*, (QBoxLayout*)_instance),
			Q_ARG(int, size));

	return LQ::NoError;
}

qint32
QBoxLayout_addStretch(quintptr _instance, qint32 stretch)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QBoxLayout_addStretch",
			Qt::BlockingQueuedConnection,
			Q_ARG(QBoxLayout*, (QBoxLayout*)_instance),
			Q_ARG(int, stretch));

	return LQ::NoError;
}

qint32
QBoxLayout_addStrut(quintptr _instance, qint32 size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QBoxLayout_addStrut",
			Qt::BlockingQueuedConnection,
			Q_ARG(QBoxLayout*, (QBoxLayout*)_instance),
			Q_ARG(int, size));

	return LQ::NoError;
}

qint32
QBoxLayout_addWidget(quintptr _instance, quintptr widget, qint32 stretch)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QBoxLayout_addWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QBoxLayout*, (QBoxLayout*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(int, stretch));

	return LQ::NoError;
}

qint32
QAbstractScrollArea_verticalScrollBarPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::ScrollBarPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_verticalScrollBarPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::ScrollBarPolicy, retVal_brg),
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QAbstractScrollArea_setVerticalScrollBarPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_setVerticalScrollBarPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance),
			Q_ARG(Qt::ScrollBarPolicy, (Qt::ScrollBarPolicy)policy));

	return LQ::NoError;
}

qint32
QAbstractScrollArea_horizontalScrollBarPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::ScrollBarPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_horizontalScrollBarPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::ScrollBarPolicy, retVal_brg),
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QAbstractScrollArea_setHorizontalScrollBarPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_setHorizontalScrollBarPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance),
			Q_ARG(Qt::ScrollBarPolicy, (Qt::ScrollBarPolicy)policy));

	return LQ::NoError;
}

qint32
QAbstractScrollArea_cornerWidget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_cornerWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QAbstractScrollArea_setCornerWidget(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_setCornerWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QAbstractScrollArea_sizeAdjustPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QAbstractScrollArea::SizeAdjustPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_sizeAdjustPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QAbstractScrollArea::SizeAdjustPolicy, retVal_brg),
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QAbstractScrollArea_setSizeAdjustPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractScrollArea_setSizeAdjustPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractScrollArea*, (QAbstractScrollArea*)_instance),
			Q_ARG(QAbstractScrollArea::SizeAdjustPolicy, (QAbstractScrollArea::SizeAdjustPolicy)policy));

	return LQ::NoError;
}

qint32
QCheckBox_QCheckBox(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QCheckBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QCheckBox_QCheckBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QCheckBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QCheckBox_setTristate(quintptr _instance, bool* y)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QCheckBox_setTristate",
			Qt::BlockingQueuedConnection,
			Q_ARG(QCheckBox*, (QCheckBox*)_instance),
			Q_ARG(bool, *y));

	return LQ::NoError;
}

qint32
QCheckBox_isTristate(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QCheckBox_isTristate",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QCheckBox*, (QCheckBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QCheckBox_checkState(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::CheckState retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QCheckBox_checkState",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::CheckState, retVal_brg),
			Q_ARG(QCheckBox*, (QCheckBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QCheckBox_setCheckState(quintptr _instance, int32 state)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QCheckBox_setCheckState",
			Qt::BlockingQueuedConnection,
			Q_ARG(QCheckBox*, (QCheckBox*)_instance),
			Q_ARG(Qt::CheckState, (Qt::CheckState)state));

	return LQ::NoError;
}

qint32
QGroupBox_QGroupBox(quintptr* _retVal, const char* _className, LStrHandle title, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QGroupBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGroupBox_QGroupBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QGroupBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QGroupBox_title(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGroupBox_title",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QGroupBox*, (QGroupBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QGroupBox_setTitle(quintptr _instance, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGroupBox_setTitle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGroupBox*, (QGroupBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));

	return LQ::NoError;
}

qint32
QGroupBox_alignment(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::AlignmentFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGroupBox_alignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::AlignmentFlag, retVal_brg),
			Q_ARG(QGroupBox*, (QGroupBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QGroupBox_setAlignment(quintptr _instance, int32 alignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGroupBox_setAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGroupBox*, (QGroupBox*)_instance),
			Q_ARG(Qt::AlignmentFlag, (Qt::AlignmentFlag)alignment));

	return LQ::NoError;
}

qint32
QGroupBox_isFlat(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGroupBox_isFlat",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QGroupBox*, (QGroupBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGroupBox_setFlat(quintptr _instance, bool* flat)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGroupBox_setFlat",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGroupBox*, (QGroupBox*)_instance),
			Q_ARG(bool, *flat));

	return LQ::NoError;
}

qint32
QGroupBox_isCheckable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGroupBox_isCheckable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QGroupBox*, (QGroupBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGroupBox_setCheckable(quintptr _instance, bool* checkable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGroupBox_setCheckable",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGroupBox*, (QGroupBox*)_instance),
			Q_ARG(bool, *checkable));

	return LQ::NoError;
}

qint32
QGroupBox_isChecked(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGroupBox_isChecked",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QGroupBox*, (QGroupBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGroupBox_setChecked(quintptr _instance, bool* checked)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGroupBox_setChecked",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGroupBox*, (QGroupBox*)_instance),
			Q_ARG(bool, *checked));

	return LQ::NoError;
}

qint32
QSplitter_QSplitter(quintptr* _retVal, const char* _className, int32 orientation, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QSplitter* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_QSplitter",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSplitter*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(Qt::Orientation, (Qt::Orientation)orientation),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_addWidget(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_addWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QSplitter_insertWidget(quintptr _instance, qint32 index, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_insertWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(int, index),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QSplitter_setOrientation(quintptr _instance, int32 orientation)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_setOrientation",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(Qt::Orientation, (Qt::Orientation)orientation));

	return LQ::NoError;
}

qint32
QSplitter_orientation(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::Orientation retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_orientation",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::Orientation, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_setChildrenCollapsible(quintptr _instance, bool* collapsible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_setChildrenCollapsible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(bool, *collapsible));

	return LQ::NoError;
}

qint32
QSplitter_childrenCollapsible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_childrenCollapsible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_setCollapsible(quintptr _instance, qint32 index, bool* collapsible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_setCollapsible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(int, index),
			Q_ARG(bool, *collapsible));

	return LQ::NoError;
}

qint32
QSplitter_isCollapsible(bool* _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_isCollapsible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(int, index));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_setOpaqueResize(quintptr _instance, bool* opaque)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_setOpaqueResize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(bool, *opaque));

	return LQ::NoError;
}

qint32
QSplitter_opaqueResize(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_opaqueResize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_sizes(LVArray<qint32>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QList<int> retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_sizes",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QList<int>, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance));
	LVArray<qint32>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QSplitter_setSizes(quintptr _instance, LVArray<qint32>** list)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_setSizes",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(QList<int>, (*list)->toQList<int>()));

	return LQ::NoError;
}

qint32
QSplitter_saveState(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_saveState",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QSplitter_restoreState(bool* _retVal, quintptr _instance, LStrHandle state)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_restoreState",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(QByteArray, QByteArray( (char*)(*state)->str, LStrLen(*state) )));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_handleWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_handleWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_setHandleWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_setHandleWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QSplitter_indexOf(qint32* _retVal, quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_indexOf",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_widget(quintptr* _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_widget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(int, index));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_count(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSplitter_count",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSplitter*, (QSplitter*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSplitter_setStretchFactor(quintptr _instance, qint32 index, qint32 stretch)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSplitter_setStretchFactor",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSplitter*, (QSplitter*)_instance),
			Q_ARG(int, index),
			Q_ARG(int, stretch));

	return LQ::NoError;
}

qint32
QTabWidget_QTabWidget(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QTabWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_QTabWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTabWidget*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_addTab(qint32* _retVal, quintptr _instance, quintptr widget, LStrHandle icon, LStrHandle label)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_addTab",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(LStrHandle, icon),
			Q_ARG(QString, QString::fromUtf8( (char*)(*label)->str, LStrLen(*label) )));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_insertTab(qint32* _retVal, quintptr _instance, qint32 index, quintptr widget, LStrHandle icon, LStrHandle label)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_insertTab",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(LStrHandle, icon),
			Q_ARG(QString, QString::fromUtf8( (char*)(*label)->str, LStrLen(*label) )));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_removeTab(quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_removeTab",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));

	return LQ::NoError;
}

qint32
QTabWidget_isTabEnabled(bool* _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_isTabEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setTabEnabled(quintptr _instance, qint32 index, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QTabWidget_tabText(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTabWidget_setTabText(quintptr _instance, qint32 index, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTabWidget_tabIcon(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTabWidget_setTabIcon(quintptr _instance, qint32 index, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QTabWidget_setTabToolTip(quintptr _instance, qint32 index, LStrHandle tip)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabToolTip",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index),
			Q_ARG(QString, QString::fromUtf8( (char*)(*tip)->str, LStrLen(*tip) )));

	return LQ::NoError;
}

qint32
QTabWidget_tabToolTip(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabToolTip",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTabWidget_setTabWhatsThis(quintptr _instance, qint32 index, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabWhatsThis",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTabWidget_tabWhatsThis(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabWhatsThis",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTabWidget_currentIndex(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_currentIndex",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_currentWidget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_currentWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_widget(quintptr* _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_widget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_indexOf(qint32* _retVal, quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_indexOf",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_count(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_count",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_tabPosition(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QTabWidget::TabPosition retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabPosition",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTabWidget::TabPosition, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setTabPosition(quintptr _instance, int32 position)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabPosition",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(QTabWidget::TabPosition, (QTabWidget::TabPosition)position));

	return LQ::NoError;
}

qint32
QTabWidget_tabsClosable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabsClosable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setTabsClosable(quintptr _instance, bool* closable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabsClosable",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(bool, *closable));

	return LQ::NoError;
}

qint32
QTabWidget_isMovable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_isMovable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setMovable(quintptr _instance, bool* movable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setMovable",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(bool, *movable));

	return LQ::NoError;
}

qint32
QTabWidget_tabShape(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QTabWidget::TabShape retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabShape",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTabWidget::TabShape, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setTabShape(quintptr _instance, int32 shape)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabShape",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(QTabWidget::TabShape, (QTabWidget::TabShape)shape));

	return LQ::NoError;
}

qint32
QTabWidget_setCornerWidget(quintptr _instance, quintptr widget, int32 corner)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setCornerWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(Qt::Corner, (Qt::Corner)corner));

	return LQ::NoError;
}

qint32
QTabWidget_cornerWidget(quintptr* _retVal, quintptr _instance, int32 corner)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_cornerWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(Qt::Corner, (Qt::Corner)corner));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_elideMode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::TextElideMode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_elideMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::TextElideMode, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setElideMode(quintptr _instance, int32 elideMode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setElideMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(Qt::TextElideMode, (Qt::TextElideMode)elideMode));

	return LQ::NoError;
}

qint32
QTabWidget_iconSize(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_iconSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setIconSize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setIconSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QTabWidget_usesScrollButtons(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_usesScrollButtons",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setUsesScrollButtons(quintptr _instance, bool* useButtons)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setUsesScrollButtons",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(bool, *useButtons));

	return LQ::NoError;
}

qint32
QTabWidget_documentMode(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_documentMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setDocumentMode(quintptr _instance, bool* set)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setDocumentMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(bool, *set));

	return LQ::NoError;
}

qint32
QTabWidget_tabBarAutoHide(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTabWidget_tabBarAutoHide",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTabWidget_setTabBarAutoHide(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setTabBarAutoHide",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QTabWidget_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance));

	return LQ::NoError;
}

qint32
QTabWidget_setCurrentIndex(quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setCurrentIndex",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(int, index));

	return LQ::NoError;
}

qint32
QTabWidget_setCurrentWidget(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTabWidget_setCurrentWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTabWidget*, (QTabWidget*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QAction_QAction(quintptr* _retVal, const char* _className, LStrHandle icon, LStrHandle text, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QAction* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_QAction",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QAction*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(LStrHandle, icon),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QObject*, (QObject*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QAction_setIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QAction_icon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_icon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QAction_setText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QAction_text(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_text",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QAction_setIconText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setIconText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QAction_iconText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_iconText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QAction_setToolTip(quintptr _instance, LStrHandle tip)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setToolTip",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*tip)->str, LStrLen(*tip) )));

	return LQ::NoError;
}

qint32
QAction_toolTip(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_toolTip",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QAction_setStatusTip(quintptr _instance, LStrHandle statusTip)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setStatusTip",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*statusTip)->str, LStrLen(*statusTip) )));

	return LQ::NoError;
}

qint32
QAction_statusTip(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_statusTip",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QAction_setWhatsThis(quintptr _instance, LStrHandle what)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setWhatsThis",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*what)->str, LStrLen(*what) )));

	return LQ::NoError;
}

qint32
QAction_whatsThis(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_whatsThis",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QAction_setPriority(quintptr _instance, int32 priority)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setPriority",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QAction::Priority, (QAction::Priority)priority));

	return LQ::NoError;
}

qint32
QAction_priority(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QAction::Priority retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_priority",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QAction::Priority, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QAction_setSeparator(quintptr _instance, bool* isSeparator)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setSeparator",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(bool, *isSeparator));

	return LQ::NoError;
}

qint32
QAction_isSeparator(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_isSeparator",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_setShortcutContext(quintptr _instance, int32 context)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setShortcutContext",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(Qt::ShortcutContext, (Qt::ShortcutContext)context));

	return LQ::NoError;
}

qint32
QAction_shortcutContext(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::ShortcutContext retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_shortcutContext",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::ShortcutContext, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QAction_setAutoRepeat(quintptr _instance, bool* autoRepeat)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setAutoRepeat",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(bool, *autoRepeat));

	return LQ::NoError;
}

qint32
QAction_autoRepeat(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_autoRepeat",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_setFont(quintptr _instance, LStrHandle font)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setFont",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(LStrHandle, font));

	return LQ::NoError;
}

qint32
QAction_font(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_font",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QAction_setCheckable(quintptr _instance, bool* checkable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setCheckable",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(bool, *checkable));

	return LQ::NoError;
}

qint32
QAction_isCheckable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_isCheckable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_isChecked(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_isChecked",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_isEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_isEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_isVisible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_isVisible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_activate(quintptr _instance, int32 event)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_activate",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QAction::ActionEvent, (QAction::ActionEvent)event));

	return LQ::NoError;
}

qint32
QAction_showStatusText(bool* _retVal, quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_showStatusText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_setMenuRole(quintptr _instance, int32 menuRole)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setMenuRole",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(QAction::MenuRole, (QAction::MenuRole)menuRole));

	return LQ::NoError;
}

qint32
QAction_menuRole(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QAction::MenuRole retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_menuRole",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QAction::MenuRole, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QAction_setIconVisibleInMenu(quintptr _instance, bool* visible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setIconVisibleInMenu",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(bool, *visible));

	return LQ::NoError;
}

qint32
QAction_isIconVisibleInMenu(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_isIconVisibleInMenu",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAction_parentWidget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAction_parentWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QAction*, (QAction*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QAction_trigger(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_trigger",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance));

	return LQ::NoError;
}

qint32
QAction_hover(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_hover",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance));

	return LQ::NoError;
}

qint32
QAction_setChecked(quintptr _instance, bool* checked)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setChecked",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(bool, *checked));

	return LQ::NoError;
}

qint32
QAction_toggle(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_toggle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance));

	return LQ::NoError;
}

qint32
QAction_setEnabled(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QAction_setVisible(quintptr _instance, bool* visible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAction_setVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAction*, (QAction*)_instance),
			Q_ARG(bool, *visible));

	return LQ::NoError;
}

qint32
QScrollArea_QScrollArea(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QScrollArea* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScrollArea_QScrollArea",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QScrollArea*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QScrollArea_widget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScrollArea_widget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QScrollArea*, (QScrollArea*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QScrollArea_setWidget(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QScrollArea_setWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QScrollArea*, (QScrollArea*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QScrollArea_takeWidget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScrollArea_takeWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QScrollArea*, (QScrollArea*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QScrollArea_widgetResizable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScrollArea_widgetResizable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QScrollArea*, (QScrollArea*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QScrollArea_setWidgetResizable(quintptr _instance, bool* resizable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QScrollArea_setWidgetResizable",
			Qt::BlockingQueuedConnection,
			Q_ARG(QScrollArea*, (QScrollArea*)_instance),
			Q_ARG(bool, *resizable));

	return LQ::NoError;
}

qint32
QScrollArea_alignment(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::AlignmentFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QScrollArea_alignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::AlignmentFlag, retVal_brg),
			Q_ARG(QScrollArea*, (QScrollArea*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QScrollArea_setAlignment(quintptr _instance, int32 alignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QScrollArea_setAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QScrollArea*, (QScrollArea*)_instance),
			Q_ARG(Qt::AlignmentFlag, (Qt::AlignmentFlag)alignment));

	return LQ::NoError;
}

qint32
QScrollArea_ensureVisible(quintptr _instance, qint32 x, qint32 y, qint32 xmargin, qint32 ymargin)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QScrollArea_ensureVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QScrollArea*, (QScrollArea*)_instance),
			Q_ARG(int, x),
			Q_ARG(int, y),
			Q_ARG(int, xmargin),
			Q_ARG(int, ymargin));

	return LQ::NoError;
}

qint32
QScrollArea_ensureWidgetVisible(quintptr _instance, quintptr childWidget, qint32 xmargin, qint32 ymargin)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QScrollArea_ensureWidgetVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QScrollArea*, (QScrollArea*)_instance),
			Q_ARG(QWidget*, (QWidget*)childWidget),
			Q_ARG(int, xmargin),
			Q_ARG(int, ymargin));

	return LQ::NoError;
}

qint32
QDialog_QDialog(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QDialog* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDialog_QDialog",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QDialog*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QDialog_result(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDialog_result",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QDialog*, (QDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDialog_setSizeGripEnabled(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDialog_setSizeGripEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDialog*, (QDialog*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QDialog_isSizeGripEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDialog_isSizeGripEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QDialog*, (QDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDialog_setModal(quintptr _instance, bool* modal)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDialog_setModal",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDialog*, (QDialog*)_instance),
			Q_ARG(bool, *modal));

	return LQ::NoError;
}

qint32
QDialog_setResult(quintptr _instance, qint32 result)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDialog_setResult",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDialog*, (QDialog*)_instance),
			Q_ARG(int, result));

	return LQ::NoError;
}

qint32
QDialog_open(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDialog_open",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDialog*, (QDialog*)_instance));

	return LQ::NoError;
}

qint32
QDialog_exec(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDialog_exec",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QDialog*, (QDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDialog_done(quintptr _instance, qint32 result)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDialog_done",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDialog*, (QDialog*)_instance),
			Q_ARG(int, result));

	return LQ::NoError;
}

qint32
QDialog_accept(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDialog_accept",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDialog*, (QDialog*)_instance));

	return LQ::NoError;
}

qint32
QDialog_reject(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDialog_reject",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDialog*, (QDialog*)_instance));

	return LQ::NoError;
}

qint32
QFileDialog_QFileDialog(quintptr* _retVal, const char* _className, quintptr parent, LStrHandle caption, LStrHandle directory, LStrHandle filter)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFileDialog* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_QFileDialog",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFileDialog*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*caption)->str, LStrLen(*caption) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*directory)->str, LStrLen(*directory) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filter)->str, LStrLen(*filter) )));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setDirectory(quintptr _instance, LStrHandle directory)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setDirectory",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*directory)->str, LStrLen(*directory) )));

	return LQ::NoError;
}

qint32
QFileDialog_selectFile(quintptr _instance, LStrHandle filename)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_selectFile",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filename)->str, LStrLen(*filename) )));

	return LQ::NoError;
}

qint32
QFileDialog_selectedFiles(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QStringList retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_selectedFiles",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QStringList, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFileDialog_setNameFilterDetailsVisible(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setNameFilterDetailsVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QFileDialog_isNameFilterDetailsVisible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_isNameFilterDetailsVisible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setNameFilter(quintptr _instance, LStrHandle filter)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setNameFilter",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filter)->str, LStrLen(*filter) )));

	return LQ::NoError;
}

qint32
QFileDialog_setNameFilters(quintptr _instance, LVArray<LStrHandle>** filters)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setNameFilters",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QStringList, (*filters)->toQList<QString>()));

	return LQ::NoError;
}

qint32
QFileDialog_nameFilters(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QStringList retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_nameFilters",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QStringList, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFileDialog_selectNameFilter(quintptr _instance, LStrHandle filter)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_selectNameFilter",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filter)->str, LStrLen(*filter) )));

	return LQ::NoError;
}

qint32
QFileDialog_selectedNameFilter(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_selectedNameFilter",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFileDialog_setMimeTypeFilters(quintptr _instance, LVArray<LStrHandle>** filters)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setMimeTypeFilters",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QStringList, (*filters)->toQList<QString>()));

	return LQ::NoError;
}

qint32
QFileDialog_mimeTypeFilters(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QStringList retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_mimeTypeFilters",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QStringList, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFileDialog_selectMimeTypeFilter(quintptr _instance, LStrHandle filter)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_selectMimeTypeFilter",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filter)->str, LStrLen(*filter) )));

	return LQ::NoError;
}

qint32
QFileDialog_setViewMode(quintptr _instance, int32 mode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setViewMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::ViewMode, (QFileDialog::ViewMode)mode));

	return LQ::NoError;
}

qint32
QFileDialog_viewMode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFileDialog::ViewMode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_viewMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFileDialog::ViewMode, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setFileMode(quintptr _instance, int32 mode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setFileMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::FileMode, (QFileDialog::FileMode)mode));

	return LQ::NoError;
}

qint32
QFileDialog_fileMode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFileDialog::FileMode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_fileMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFileDialog::FileMode, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setAcceptMode(quintptr _instance, int32 mode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setAcceptMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::AcceptMode, (QFileDialog::AcceptMode)mode));

	return LQ::NoError;
}

qint32
QFileDialog_acceptMode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFileDialog::AcceptMode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_acceptMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFileDialog::AcceptMode, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setReadOnly(quintptr _instance, bool* readOnly)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setReadOnly",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(bool, *readOnly));

	return LQ::NoError;
}

qint32
QFileDialog_isReadOnly(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_isReadOnly",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setResolveSymlinks(quintptr _instance, bool* remove)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setResolveSymlinks",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(bool, *remove));

	return LQ::NoError;
}

qint32
QFileDialog_resolveSymlinks(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_resolveSymlinks",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setConfirmOverwrite(quintptr _instance, bool* confirm)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setConfirmOverwrite",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(bool, *confirm));

	return LQ::NoError;
}

qint32
QFileDialog_confirmOverwrite(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_confirmOverwrite",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setDefaultSuffix(quintptr _instance, LStrHandle suffix)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setDefaultSuffix",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*suffix)->str, LStrLen(*suffix) )));

	return LQ::NoError;
}

qint32
QFileDialog_defaultSuffix(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_defaultSuffix",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFileDialog_setHistory(quintptr _instance, LVArray<LStrHandle>** paths)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setHistory",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QStringList, (*paths)->toQList<QString>()));

	return LQ::NoError;
}

qint32
QFileDialog_history(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QStringList retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_history",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QStringList, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFileDialog_setLabelText(quintptr _instance, int32 label, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setLabelText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::DialogLabel, (QFileDialog::DialogLabel)label),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QFileDialog_labelText(LStrHandle _retVal, quintptr _instance, int32 label)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_labelText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::DialogLabel, (QFileDialog::DialogLabel)label));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFileDialog_setOption(quintptr _instance, int32 option, bool* on)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setOption",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::Option, (QFileDialog::Option)option),
			Q_ARG(bool, *on));

	return LQ::NoError;
}

qint32
QFileDialog_testOption(bool* _retVal, quintptr _instance, int32 option)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_testOption",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::Option, (QFileDialog::Option)option));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_setOptions(quintptr _instance, int32 options)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFileDialog_setOptions",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFileDialog*, (QFileDialog*)_instance),
			Q_ARG(QFileDialog::Option, (QFileDialog::Option)options));

	return LQ::NoError;
}

qint32
QFileDialog_options(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFileDialog::Option retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_options",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFileDialog::Option, retVal_brg),
			Q_ARG(QFileDialog*, (QFileDialog*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFileDialog_getOpenFileName(LStrHandle _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, LStrHandle filter)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_getOpenFileName",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*caption)->str, LStrLen(*caption) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*dir)->str, LStrLen(*dir) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filter)->str, LStrLen(*filter) )));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFileDialog_getSaveFileName(LStrHandle _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, LStrHandle filter)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_getSaveFileName",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*caption)->str, LStrLen(*caption) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*dir)->str, LStrLen(*dir) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filter)->str, LStrLen(*filter) )));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFileDialog_getExistingDirectory(LStrHandle _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, int32 options)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_getExistingDirectory",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*caption)->str, LStrLen(*caption) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*dir)->str, LStrLen(*dir) )),
			Q_ARG(QFileDialog::Option, (QFileDialog::Option)options));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QFileDialog_getOpenFileNames(LVArray<LStrHandle>** _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, LStrHandle filter)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QStringList retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFileDialog_getOpenFileNames",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QStringList, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*caption)->str, LStrLen(*caption) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*dir)->str, LStrLen(*dir) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filter)->str, LStrLen(*filter) )));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFontDialog_QFontDialog(quintptr* _retVal, const char* _className, LStrHandle initial, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFontDialog* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontDialog_QFontDialog",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFontDialog*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(LStrHandle, initial),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QFontDialog_setCurrentFont(quintptr _instance, LStrHandle font)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFontDialog_setCurrentFont",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFontDialog*, (QFontDialog*)_instance),
			Q_ARG(LStrHandle, font));

	return LQ::NoError;
}

qint32
QFontDialog_currentFont(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontDialog_currentFont",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QFontDialog*, (QFontDialog*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFontDialog_selectedFont(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontDialog_selectedFont",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QFontDialog*, (QFontDialog*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QFontDialog_testOption(bool* _retVal, quintptr _instance, int32 option)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontDialog_testOption",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QFontDialog*, (QFontDialog*)_instance),
			Q_ARG(QFontDialog::FontDialogOption, (QFontDialog::FontDialogOption)option));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFontDialog_setOptions(quintptr _instance, int32 options)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFontDialog_setOptions",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFontDialog*, (QFontDialog*)_instance),
			Q_ARG(QFontDialog::FontDialogOption, (QFontDialog::FontDialogOption)options));

	return LQ::NoError;
}

qint32
QFontDialog_options(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFontDialog::FontDialogOption retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFontDialog_options",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFontDialog::FontDialogOption, retVal_brg),
			Q_ARG(QFontDialog*, (QFontDialog*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_QProgressDialog(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QProgressDialog* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_QProgressDialog",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QProgressDialog*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_wasCanceled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_wasCanceled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_minimum(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_minimum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_maximum(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_maximum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_value(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_value",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_labelText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_labelText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QProgressDialog_minimumDuration(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_minimumDuration",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_setAutoReset(quintptr _instance, bool* reset)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setAutoReset",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(bool, *reset));

	return LQ::NoError;
}

qint32
QProgressDialog_autoReset(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_autoReset",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_setAutoClose(quintptr _instance, bool* close)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setAutoClose",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(bool, *close));

	return LQ::NoError;
}

qint32
QProgressDialog_autoClose(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_autoClose",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QProgressDialog_cancel(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_cancel",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));

	return LQ::NoError;
}

qint32
QProgressDialog_reset(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_reset",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance));

	return LQ::NoError;
}

qint32
QProgressDialog_setMaximum(quintptr _instance, qint32 maximum)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setMaximum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(int, maximum));

	return LQ::NoError;
}

qint32
QProgressDialog_setMinimum(quintptr _instance, qint32 minimum)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setMinimum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(int, minimum));

	return LQ::NoError;
}

qint32
QProgressDialog_setValue(quintptr _instance, qint32 progress)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setValue",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(int, progress));

	return LQ::NoError;
}

qint32
QProgressDialog_setLabelText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setLabelText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QProgressDialog_setCancelButtonText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setCancelButtonText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QProgressDialog_setMinimumDuration(quintptr _instance, qint32 ms)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QProgressDialog_setMinimumDuration",
			Qt::BlockingQueuedConnection,
			Q_ARG(QProgressDialog*, (QProgressDialog*)_instance),
			Q_ARG(int, ms));

	return LQ::NoError;
}

qint32
QMessageBox_QMessageBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMessageBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_QMessageBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMessageBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_setStandardButtons(quintptr _instance, int32 buttons)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setStandardButtons",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)buttons));

	return LQ::NoError;
}

qint32
QMessageBox_standardButtons(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMessageBox::StandardButton retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_standardButtons",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMessageBox::StandardButton, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_setDefaultButton(quintptr _instance, int32 button)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setDefaultButton",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)button));

	return LQ::NoError;
}

qint32
QMessageBox_setEscapeButton(quintptr _instance, int32 button)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setEscapeButton",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)button));

	return LQ::NoError;
}

qint32
QMessageBox_text(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_text",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QMessageBox_setText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QMessageBox_icon(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMessageBox::Icon retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_icon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMessageBox::Icon, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_setIcon(quintptr _instance, int32 icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QMessageBox::Icon, (QMessageBox::Icon)icon));

	return LQ::NoError;
}

qint32
QMessageBox_iconPixmap(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_iconPixmap",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QMessageBox_setIconPixmap(quintptr _instance, LStrHandle pixmap)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setIconPixmap",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(LStrHandle, pixmap));

	return LQ::NoError;
}

qint32
QMessageBox_textFormat(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::TextFormat retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_textFormat",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::TextFormat, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_setTextFormat(quintptr _instance, int32 format)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setTextFormat",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(Qt::TextFormat, (Qt::TextFormat)format));

	return LQ::NoError;
}

qint32
QMessageBox_setTextInteractionFlags(quintptr _instance, int32 flags)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setTextInteractionFlags",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(Qt::TextInteractionFlag, (Qt::TextInteractionFlag)flags));

	return LQ::NoError;
}

qint32
QMessageBox_textInteractionFlags(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::TextInteractionFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_textInteractionFlags",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::TextInteractionFlag, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_setCheckBox(quintptr _instance, quintptr checkbox)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setCheckBox",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QCheckBox*, (QCheckBox*)checkbox));

	return LQ::NoError;
}

qint32
QMessageBox_checkBox(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QCheckBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_checkBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QCheckBox*, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_information(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMessageBox::StandardButton retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_information",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMessageBox::StandardButton, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)buttons),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)defaultButton));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_question(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMessageBox::StandardButton retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_question",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMessageBox::StandardButton, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)buttons),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)defaultButton));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_warning(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMessageBox::StandardButton retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_warning",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMessageBox::StandardButton, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)buttons),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)defaultButton));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_critical(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMessageBox::StandardButton retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_critical",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMessageBox::StandardButton, retVal_brg),
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)buttons),
			Q_ARG(QMessageBox::StandardButton, (QMessageBox::StandardButton)defaultButton));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMessageBox_about(quintptr parent, LStrHandle title, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_about",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QMessageBox_aboutQt(quintptr parent, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_aboutQt",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWidget*, (QWidget*)parent),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));

	return LQ::NoError;
}

qint32
QMessageBox_informativeText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_informativeText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QMessageBox_setInformativeText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setInformativeText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QMessageBox_detailedText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_detailedText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QMessageBox*, (QMessageBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QMessageBox_setDetailedText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMessageBox_setDetailedText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMessageBox*, (QMessageBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QMessageBox_standardIcon(LStrHandle _retVal, int32 icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMessageBox_standardIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QMessageBox::Icon, (QMessageBox::Icon)icon));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QToolBox_QToolBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QToolBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_QToolBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QToolBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_addItem(qint32* _retVal, quintptr _instance, quintptr widget, LStrHandle icon, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_addItem",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(LStrHandle, icon),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_insertItem(qint32* _retVal, quintptr _instance, qint32 index, quintptr widget, LStrHandle icon, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_insertItem",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(LStrHandle, icon),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_removeItem(quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QToolBox_removeItem",
			Qt::BlockingQueuedConnection,
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index));

	return LQ::NoError;
}

qint32
QToolBox_setItemEnabled(quintptr _instance, qint32 index, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QToolBox_setItemEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QToolBox_isItemEnabled(bool* _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_isItemEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_setItemText(quintptr _instance, qint32 index, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QToolBox_setItemText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QToolBox_itemText(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_itemText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QToolBox_setItemIcon(quintptr _instance, qint32 index, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QToolBox_setItemIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QToolBox_itemIcon(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_itemIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QToolBox_setItemToolTip(quintptr _instance, qint32 index, LStrHandle toolTip)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QToolBox_setItemToolTip",
			Qt::BlockingQueuedConnection,
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index),
			Q_ARG(QString, QString::fromUtf8( (char*)(*toolTip)->str, LStrLen(*toolTip) )));

	return LQ::NoError;
}

qint32
QToolBox_itemToolTip(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_itemToolTip",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QToolBox_currentIndex(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_currentIndex",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_currentWidget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_currentWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_widget(quintptr* _retVal, quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_widget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_indexOf(qint32* _retVal, quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_indexOf",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_count(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QToolBox_count",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QToolBox*, (QToolBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QToolBox_setCurrentIndex(quintptr _instance, qint32 index)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QToolBox_setCurrentIndex",
			Qt::BlockingQueuedConnection,
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(int, index));

	return LQ::NoError;
}

qint32
QToolBox_setCurrentWidget(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QToolBox_setCurrentWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QToolBox*, (QToolBox*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QGridLayout_QGridLayout(quintptr* _retVal, const char* _className)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QGridLayout* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_QGridLayout",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QGridLayout*, retVal_brg),
			Q_ARG(const char*, _className));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_setHorizontalSpacing(quintptr _instance, qint32 spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_setHorizontalSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, spacing));

	return LQ::NoError;
}

qint32
QGridLayout_horizontalSpacing(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_horizontalSpacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_setVerticalSpacing(quintptr _instance, qint32 spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_setVerticalSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, spacing));

	return LQ::NoError;
}

qint32
QGridLayout_verticalSpacing(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_verticalSpacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_setRowStretch(quintptr _instance, qint32 row, qint32 stretch)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_setRowStretch",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, row),
			Q_ARG(int, stretch));

	return LQ::NoError;
}

qint32
QGridLayout_setColumnStretch(quintptr _instance, qint32 column, qint32 stretch)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_setColumnStretch",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, column),
			Q_ARG(int, stretch));

	return LQ::NoError;
}

qint32
QGridLayout_rowStretch(qint32* _retVal, quintptr _instance, qint32 row)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_rowStretch",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, row));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_columnStretch(qint32* _retVal, quintptr _instance, qint32 column)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_columnStretch",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, column));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_setRowMinimumHeight(quintptr _instance, qint32 row, qint32 minSize)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_setRowMinimumHeight",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, row),
			Q_ARG(int, minSize));

	return LQ::NoError;
}

qint32
QGridLayout_setColumnMinimumWidth(quintptr _instance, qint32 column, qint32 minSize)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_setColumnMinimumWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, column),
			Q_ARG(int, minSize));

	return LQ::NoError;
}

qint32
QGridLayout_rowMinimumHeight(qint32* _retVal, quintptr _instance, qint32 row)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_rowMinimumHeight",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, row));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_columnMinimumWidth(qint32* _retVal, quintptr _instance, qint32 column)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_columnMinimumWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, column));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_columnCount(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_columnCount",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_rowCount(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_rowCount",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_cellRect(QRect* _retVal, quintptr _instance, qint32 row, qint32 column)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_cellRect",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(int, row),
			Q_ARG(int, column));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QGridLayout_addWidget(quintptr _instance, quintptr widget, qint32 row, qint32 column, qint32 rowSpan, qint32 columnSpan)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_addWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(int, row),
			Q_ARG(int, column),
			Q_ARG(int, rowSpan),
			Q_ARG(int, columnSpan));

	return LQ::NoError;
}

qint32
QGridLayout_addLayout(quintptr _instance, quintptr widget, qint32 row, qint32 column, qint32 rowSpan, qint32 columnSpan)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_addLayout",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(QLayout*, (QLayout*)widget),
			Q_ARG(int, row),
			Q_ARG(int, column),
			Q_ARG(int, rowSpan),
			Q_ARG(int, columnSpan));

	return LQ::NoError;
}

qint32
QGridLayout_setOriginCorner(quintptr _instance, int32 corner)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QGridLayout_setOriginCorner",
			Qt::BlockingQueuedConnection,
			Q_ARG(QGridLayout*, (QGridLayout*)_instance),
			Q_ARG(Qt::Corner, (Qt::Corner)corner));

	return LQ::NoError;
}

qint32
QGridLayout_originCorner(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::Corner retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QGridLayout_originCorner",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::Corner, retVal_brg),
			Q_ARG(QGridLayout*, (QGridLayout*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_QFormLayout(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QFormLayout* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_QFormLayout",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFormLayout*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_setFieldGrowthPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_setFieldGrowthPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(QFormLayout::FieldGrowthPolicy, (QFormLayout::FieldGrowthPolicy)policy));

	return LQ::NoError;
}

qint32
QFormLayout_fieldGrowthPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFormLayout::FieldGrowthPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_fieldGrowthPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFormLayout::FieldGrowthPolicy, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_setRowWrapPolicy(quintptr _instance, int32 policy)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_setRowWrapPolicy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(QFormLayout::RowWrapPolicy, (QFormLayout::RowWrapPolicy)policy));

	return LQ::NoError;
}

qint32
QFormLayout_rowWrapPolicy(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QFormLayout::RowWrapPolicy retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_rowWrapPolicy",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QFormLayout::RowWrapPolicy, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_setLabelAlignment(quintptr _instance, int32 alignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_setLabelAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(Qt::AlignmentFlag, (Qt::AlignmentFlag)alignment));

	return LQ::NoError;
}

qint32
QFormLayout_labelAlignment(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::AlignmentFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_labelAlignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::AlignmentFlag, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_setFormAlignment(quintptr _instance, int32 alignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_setFormAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(Qt::AlignmentFlag, (Qt::AlignmentFlag)alignment));

	return LQ::NoError;
}

qint32
QFormLayout_formAlignment(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::AlignmentFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_formAlignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::AlignmentFlag, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_setHorizontalSpacing(quintptr _instance, qint32 spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_setHorizontalSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(int, spacing));

	return LQ::NoError;
}

qint32
QFormLayout_horizontalSpacing(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_horizontalSpacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_setVerticalSpacing(quintptr _instance, qint32 spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_setVerticalSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(int, spacing));

	return LQ::NoError;
}

qint32
QFormLayout_verticalSpacing(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_verticalSpacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_spacing(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_spacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QFormLayout_setSpacing(quintptr _instance, qint32 spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_setSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(int, spacing));

	return LQ::NoError;
}

qint32
QFormLayout_addRow(quintptr _instance, LStrHandle labelText, quintptr field)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_addRow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*labelText)->str, LStrLen(*labelText) )),
			Q_ARG(QWidget*, (QWidget*)field));

	return LQ::NoError;
}

qint32
QFormLayout_insertRow(quintptr _instance, qint32 row, LStrHandle labelText, quintptr field)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QFormLayout_insertRow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QFormLayout*, (QFormLayout*)_instance),
			Q_ARG(int, row),
			Q_ARG(QString, QString::fromUtf8( (char*)(*labelText)->str, LStrLen(*labelText) )),
			Q_ARG(QWidget*, (QWidget*)field));

	return LQ::NoError;
}

qint32
QFormLayout_rowCount(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QFormLayout_rowCount",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QFormLayout*, (QFormLayout*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_QLCDNumber(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QLCDNumber* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_QLCDNumber",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QLCDNumber*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_smallDecimalPoint(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_smallDecimalPoint",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_digitCount(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_digitCount",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_setDigitCount(quintptr _instance, qint32 nDigits)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_setDigitCount",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance),
			Q_ARG(int, nDigits));

	return LQ::NoError;
}

qint32
QLCDNumber_checkOverflow(bool* _retVal, quintptr _instance, double number)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_checkOverflow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance),
			Q_ARG(double, number));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_mode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QLCDNumber::Mode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_mode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QLCDNumber::Mode, retVal_brg),
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_setMode(quintptr _instance, int32 mode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_setMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance),
			Q_ARG(QLCDNumber::Mode, (QLCDNumber::Mode)mode));

	return LQ::NoError;
}

qint32
QLCDNumber_segmentStyle(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QLCDNumber::SegmentStyle retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_segmentStyle",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QLCDNumber::SegmentStyle, retVal_brg),
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_setSegmentStyle(quintptr _instance, int32 style)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_setSegmentStyle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance),
			Q_ARG(QLCDNumber::SegmentStyle, (QLCDNumber::SegmentStyle)style));

	return LQ::NoError;
}

qint32
QLCDNumber_value(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_value",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLCDNumber_display(quintptr _instance, double num)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_display",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance),
			Q_ARG(double, num));

	return LQ::NoError;
}

qint32
QLCDNumber_setSmallDecimalPoint(quintptr _instance, bool* smallPoint)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLCDNumber_setSmallDecimalPoint",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLCDNumber*, (QLCDNumber*)_instance),
			Q_ARG(bool, *smallPoint));

	return LQ::NoError;
}

qint32
QLineEdit_QLineEdit(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QLineEdit* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_QLineEdit",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QLineEdit*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_text(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_text",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QLineEdit_displayText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_displayText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QLineEdit_placeholderText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_placeholderText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QLineEdit_setPlaceholderText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setPlaceholderText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QLineEdit_maxLength(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_maxLength",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setMaxLength(quintptr _instance, qint32 length)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setMaxLength",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(int, length));

	return LQ::NoError;
}

qint32
QLineEdit_setFrame(quintptr _instance, bool* show)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setFrame",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *show));

	return LQ::NoError;
}

qint32
QLineEdit_hasFrame(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_hasFrame",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setClearButtonEnabled(quintptr _instance, bool* enable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setClearButtonEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *enable));

	return LQ::NoError;
}

qint32
QLineEdit_isClearButtonEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_isClearButtonEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_echoMode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QLineEdit::EchoMode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_echoMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QLineEdit::EchoMode, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setEchoMode(quintptr _instance, int32 echoMode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setEchoMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(QLineEdit::EchoMode, (QLineEdit::EchoMode)echoMode));

	return LQ::NoError;
}

qint32
QLineEdit_isReadOnly(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_isReadOnly",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setReadOnly(quintptr _instance, bool* readOnly)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setReadOnly",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *readOnly));

	return LQ::NoError;
}

qint32
QLineEdit_cursorPosition(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_cursorPosition",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setCursorPosition(quintptr _instance, qint32 pos)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setCursorPosition",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(int, pos));

	return LQ::NoError;
}

qint32
QLineEdit_setAlignment(quintptr _instance, int32 alignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(Qt::AlignmentFlag, (Qt::AlignmentFlag)alignment));

	return LQ::NoError;
}

qint32
QLineEdit_alignment(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::AlignmentFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_alignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::AlignmentFlag, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_cursorForward(quintptr _instance, bool* mark, qint32 steps)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_cursorForward",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *mark),
			Q_ARG(int, steps));

	return LQ::NoError;
}

qint32
QLineEdit_cursorBackward(quintptr _instance, bool* mark, qint32 steps)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_cursorBackward",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *mark),
			Q_ARG(int, steps));

	return LQ::NoError;
}

qint32
QLineEdit_cursorWordForward(quintptr _instance, bool* mark)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_cursorWordForward",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *mark));

	return LQ::NoError;
}

qint32
QLineEdit_cursorWordBackward(quintptr _instance, bool* mark)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_cursorWordBackward",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *mark));

	return LQ::NoError;
}

qint32
QLineEdit_backspace(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_backspace",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_del(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_del",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_home(quintptr _instance, bool* mark)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_home",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *mark));

	return LQ::NoError;
}

qint32
QLineEdit_end(quintptr _instance, bool* mark)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_end",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *mark));

	return LQ::NoError;
}

qint32
QLineEdit_isModified(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_isModified",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setModified(quintptr _instance, bool* modified)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setModified",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *modified));

	return LQ::NoError;
}

qint32
QLineEdit_setSelection(quintptr _instance, qint32 start, qint32 length)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setSelection",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(int, start),
			Q_ARG(int, length));

	return LQ::NoError;
}

qint32
QLineEdit_hasSelectedText(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_hasSelectedText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_selectedText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_selectedText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QLineEdit_selectionStart(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_selectionStart",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_isUndoAvailable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_isUndoAvailable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_isRedoAvailable(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_isRedoAvailable",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setDragEnabled(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setDragEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QLineEdit_dragEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_dragEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setCursorMoveStyle(quintptr _instance, int32 style)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setCursorMoveStyle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(Qt::CursorMoveStyle, (Qt::CursorMoveStyle)style));

	return LQ::NoError;
}

qint32
QLineEdit_cursorMoveStyle(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::CursorMoveStyle retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_cursorMoveStyle",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::CursorMoveStyle, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_inputMask(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_inputMask",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QLineEdit_setInputMask(quintptr _instance, LStrHandle inputMask)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setInputMask",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*inputMask)->str, LStrLen(*inputMask) )));

	return LQ::NoError;
}

qint32
QLineEdit_hasAcceptableInput(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_hasAcceptableInput",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setTextMargins(quintptr _instance, QMargins* margins)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setTextMargins",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(QMargins, *margins));

	return LQ::NoError;
}

qint32
QLineEdit_textMargins(QMargins* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMargins retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QLineEdit_textMargins",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMargins, retVal_brg),
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QLineEdit_setText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_setText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QLineEdit_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_selectAll(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_selectAll",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_undo(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_undo",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_redo(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_redo",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_cut(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_cut",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_copy(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_copy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_paste(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_paste",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_deselect(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_deselect",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance));

	return LQ::NoError;
}

qint32
QLineEdit_insert(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QLineEdit_insert",
			Qt::BlockingQueuedConnection,
			Q_ARG(QLineEdit*, (QLineEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QRadioButton_QRadioButton(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QRadioButton* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QRadioButton_QRadioButton",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRadioButton*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_QTextEdit(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QTextEdit* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_QTextEdit",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTextEdit*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setPlaceholderText(quintptr _instance, LStrHandle placeholderText)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setPlaceholderText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*placeholderText)->str, LStrLen(*placeholderText) )));

	return LQ::NoError;
}

qint32
QTextEdit_placeholderText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_placeholderText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTextEdit_isReadOnly(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_isReadOnly",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setReadOnly(quintptr _instance, bool* readOnly)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setReadOnly",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(bool, *readOnly));

	return LQ::NoError;
}

qint32
QTextEdit_setTextInteractionFlags(quintptr _instance, int32 flags)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setTextInteractionFlags",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(Qt::TextInteractionFlag, (Qt::TextInteractionFlag)flags));

	return LQ::NoError;
}

qint32
QTextEdit_textInteractionFlags(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::TextInteractionFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_textInteractionFlags",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::TextInteractionFlag, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_fontPointSize(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	qreal retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_fontPointSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(qreal, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_fontFamily(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_fontFamily",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTextEdit_fontWeight(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_fontWeight",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_fontUnderline(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_fontUnderline",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_fontItalic(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_fontItalic",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_textColor(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_textColor",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTextEdit_textBackgroundColor(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_textBackgroundColor",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTextEdit_currentFont(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_currentFont",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QTextEdit_alignment(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::AlignmentFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_alignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::AlignmentFlag, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_autoFormatting(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QTextEdit::AutoFormattingFlag retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_autoFormatting",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTextEdit::AutoFormattingFlag, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setAutoFormatting(quintptr _instance, int32 features)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setAutoFormatting",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QTextEdit::AutoFormattingFlag, (QTextEdit::AutoFormattingFlag)features));

	return LQ::NoError;
}

qint32
QTextEdit_tabChangesFocus(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_tabChangesFocus",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setTabChangesFocus(quintptr _instance, bool* change)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setTabChangesFocus",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(bool, *change));

	return LQ::NoError;
}

qint32
QTextEdit_setDocumentTitle(quintptr _instance, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setDocumentTitle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));

	return LQ::NoError;
}

qint32
QTextEdit_documentTitle(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_documentTitle",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTextEdit_isUndoRedoEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_isUndoRedoEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setUndoRedoEnabled(quintptr _instance, bool* enable)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setUndoRedoEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(bool, *enable));

	return LQ::NoError;
}

qint32
QTextEdit_lineWrapMode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QTextEdit::LineWrapMode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_lineWrapMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QTextEdit::LineWrapMode, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setLineWrapMode(quintptr _instance, int32 mode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setLineWrapMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QTextEdit::LineWrapMode, (QTextEdit::LineWrapMode)mode));

	return LQ::NoError;
}

qint32
QTextEdit_lineWrapColumnOrWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_lineWrapColumnOrWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setLineWrapColumnOrWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setLineWrapColumnOrWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QTextEdit_toPlainText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_toPlainText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTextEdit_toHtml(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_toHtml",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTextEdit_ensureCursorVisible(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_ensureCursorVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_cursorRect(QRect* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QRect retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_cursorRect",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QRect, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_anchorAt(LStrHandle _retVal, quintptr _instance, QPoint* pos)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_anchorAt",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QPoint, *pos));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QTextEdit_overwriteMode(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_overwriteMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setOverwriteMode(quintptr _instance, bool* overwrite)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setOverwriteMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(bool, *overwrite));

	return LQ::NoError;
}

qint32
QTextEdit_tabStopWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_tabStopWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setTabStopWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setTabStopWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QTextEdit_cursorWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_cursorWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setCursorWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setCursorWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QTextEdit_acceptRichText(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_acceptRichText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setAcceptRichText(quintptr _instance, bool* accept)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setAcceptRichText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(bool, *accept));

	return LQ::NoError;
}

qint32
QTextEdit_canPaste(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QTextEdit_canPaste",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QTextEdit_setFontPointSize(quintptr _instance, double size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setFontPointSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(qreal, size));

	return LQ::NoError;
}

qint32
QTextEdit_setFontFamily(quintptr _instance, LStrHandle fontFamily)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setFontFamily",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*fontFamily)->str, LStrLen(*fontFamily) )));

	return LQ::NoError;
}

qint32
QTextEdit_setFontWeight(quintptr _instance, qint32 weight)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setFontWeight",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(int, weight));

	return LQ::NoError;
}

qint32
QTextEdit_setFontUnderline(quintptr _instance, bool* underline)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setFontUnderline",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(bool, *underline));

	return LQ::NoError;
}

qint32
QTextEdit_setFontItalic(quintptr _instance, bool* italic)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setFontItalic",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(bool, *italic));

	return LQ::NoError;
}

qint32
QTextEdit_setTextColor(quintptr _instance, LStrHandle color)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setTextColor",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(LStrHandle, color));

	return LQ::NoError;
}

qint32
QTextEdit_setTextBackgroundColor(quintptr _instance, LStrHandle color)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setTextBackgroundColor",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(LStrHandle, color));

	return LQ::NoError;
}

qint32
QTextEdit_setCurrentFont(quintptr _instance, LStrHandle font)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setCurrentFont",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(LStrHandle, font));

	return LQ::NoError;
}

qint32
QTextEdit_setAlignment(quintptr _instance, int32 alignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(Qt::AlignmentFlag, (Qt::AlignmentFlag)alignment));

	return LQ::NoError;
}

qint32
QTextEdit_setPlainText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setPlainText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTextEdit_setHtml(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setHtml",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTextEdit_setText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_setText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTextEdit_cut(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_cut",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_copy(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_copy",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_paste(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_paste",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_undo(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_undo",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_redo(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_redo",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_selectAll(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_selectAll",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance));

	return LQ::NoError;
}

qint32
QTextEdit_insertPlainText(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_insertPlainText",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTextEdit_insertHtml(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_insertHtml",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTextEdit_append(quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_append",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));

	return LQ::NoError;
}

qint32
QTextEdit_scrollToAnchor(quintptr _instance, LStrHandle name)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_scrollToAnchor",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*name)->str, LStrLen(*name) )));

	return LQ::NoError;
}

qint32
QTextEdit_zoomIn(quintptr _instance, qint32 range)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_zoomIn",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(int, range));

	return LQ::NoError;
}

qint32
QTextEdit_zoomOut(quintptr _instance, qint32 range)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QTextEdit_zoomOut",
			Qt::BlockingQueuedConnection,
			Q_ARG(QTextEdit*, (QTextEdit*)_instance),
			Q_ARG(int, range));

	return LQ::NoError;
}

qint32
QMdiArea_QMdiArea(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMdiArea* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiArea_QMdiArea",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMdiArea*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiArea_currentSubWindow(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMdiSubWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiArea_currentSubWindow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMdiSubWindow*, retVal_brg),
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiArea_activeSubWindow(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMdiSubWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiArea_activeSubWindow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMdiSubWindow*, retVal_brg),
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiArea_subWindowList(LVArray<quintptr>** _retVal, quintptr _instance, int32 order)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QList<QMdiSubWindow*> retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiArea_subWindowList",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QList<QMdiSubWindow*>, retVal_brg),
			Q_ARG(QMdiArea*, (QMdiArea*)_instance),
			Q_ARG(QMdiArea::WindowOrder, (QMdiArea::WindowOrder)order));
	LVArray<quintptr>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QMdiArea_addSubWindow(quintptr* _retVal, quintptr _instance, quintptr widget, int32 flags)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMdiSubWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiArea_addSubWindow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMdiSubWindow*, retVal_brg),
			Q_ARG(QMdiArea*, (QMdiArea*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget),
			Q_ARG(Qt::WindowType, (Qt::WindowType)flags));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiArea_removeSubWindow(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_removeSubWindow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QMdiArea_background(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiArea_background",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QMdiArea_setBackground(quintptr _instance, LStrHandle background)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_setBackground",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance),
			Q_ARG(LStrHandle, background));

	return LQ::NoError;
}

qint32
QMdiArea_activationOrder(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMdiArea::WindowOrder retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiArea_activationOrder",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMdiArea::WindowOrder, retVal_brg),
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiArea_setActivationOrder(quintptr _instance, int32 order)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_setActivationOrder",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance),
			Q_ARG(QMdiArea::WindowOrder, (QMdiArea::WindowOrder)order));

	return LQ::NoError;
}

qint32
QMdiArea_setActiveSubWindow(quintptr _instance, quintptr window)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_setActiveSubWindow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance),
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)window));

	return LQ::NoError;
}

qint32
QMdiArea_tileSubWindows(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_tileSubWindows",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));

	return LQ::NoError;
}

qint32
QMdiArea_cascadeSubWindows(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_cascadeSubWindows",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));

	return LQ::NoError;
}

qint32
QMdiArea_closeActiveSubWindow(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_closeActiveSubWindow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));

	return LQ::NoError;
}

qint32
QMdiArea_closeAllSubWindows(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_closeAllSubWindows",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));

	return LQ::NoError;
}

qint32
QMdiArea_activateNextSubWindow(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_activateNextSubWindow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));

	return LQ::NoError;
}

qint32
QMdiArea_activatePreviousSubWindow(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiArea_activatePreviousSubWindow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiArea*, (QMdiArea*)_instance));

	return LQ::NoError;
}

qint32
QMdiSubWindow_QMdiSubWindow(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QMdiSubWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_QMdiSubWindow",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMdiSubWindow*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiSubWindow_setWidget(quintptr _instance, quintptr widget)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_setWidget",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance),
			Q_ARG(QWidget*, (QWidget*)widget));

	return LQ::NoError;
}

qint32
QMdiSubWindow_widget(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_widget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWidget*, retVal_brg),
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiSubWindow_isShaded(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_isShaded",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QMdiSubWindow_setOption(quintptr _instance, int32 option, bool* on)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_setOption",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance),
			Q_ARG(QMdiSubWindow::SubWindowOption, (QMdiSubWindow::SubWindowOption)option),
			Q_ARG(bool, *on));

	return LQ::NoError;
}

qint32
QMdiSubWindow_testOption(bool* _retVal, quintptr _instance, int32 option)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_testOption",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance),
			Q_ARG(QMdiSubWindow::SubWindowOption, (QMdiSubWindow::SubWindowOption)option));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QMdiSubWindow_setKeyboardSingleStep(quintptr _instance, qint32 step)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_setKeyboardSingleStep",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance),
			Q_ARG(int, step));

	return LQ::NoError;
}

qint32
QMdiSubWindow_keyboardSingleStep(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_keyboardSingleStep",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QMdiSubWindow_setKeyboardPageStep(quintptr _instance, qint32 step)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_setKeyboardPageStep",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance),
			Q_ARG(int, step));

	return LQ::NoError;
}

qint32
QMdiSubWindow_keyboardPageStep(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_keyboardPageStep",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QMdiSubWindow_mdiArea(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMdiArea* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_mdiArea",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QMdiArea*, retVal_brg),
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QMdiSubWindow_showShaded(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QMdiSubWindow_showShaded",
			Qt::BlockingQueuedConnection,
			Q_ARG(QMdiSubWindow*, (QMdiSubWindow*)_instance));

	return LQ::NoError;
}

qint32
QAbstractSpinBox_isReadOnly(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QAbstractSpinBox_isReadOnly",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QAbstractSpinBox*, (QAbstractSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QAbstractSpinBox_setReadOnly(quintptr _instance, bool* readOnly)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QAbstractSpinBox_setReadOnly",
			Qt::BlockingQueuedConnection,
			Q_ARG(QAbstractSpinBox*, (QAbstractSpinBox*)_instance),
			Q_ARG(bool, *readOnly));

	return LQ::NoError;
}

qint32
QSpinBox_QSpinBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QSpinBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_QSpinBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSpinBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QSpinBox_value(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_value",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSpinBox_prefix(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_prefix",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QSpinBox_setPrefix(quintptr _instance, LStrHandle prefix)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setPrefix",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*prefix)->str, LStrLen(*prefix) )));

	return LQ::NoError;
}

qint32
QSpinBox_suffix(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_suffix",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QSpinBox_setSuffix(quintptr _instance, LStrHandle suffix)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setSuffix",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*suffix)->str, LStrLen(*suffix) )));

	return LQ::NoError;
}

qint32
QSpinBox_cleanText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_cleanText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QSpinBox_singleStep(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_singleStep",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSpinBox_setSingleStep(quintptr _instance, qint32 val)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setSingleStep",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(int, val));

	return LQ::NoError;
}

qint32
QSpinBox_minimum(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_minimum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSpinBox_setMinimum(quintptr _instance, qint32 min)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setMinimum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(int, min));

	return LQ::NoError;
}

qint32
QSpinBox_maximum(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_maximum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSpinBox_setMaximum(quintptr _instance, qint32 max)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setMaximum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(int, max));

	return LQ::NoError;
}

qint32
QSpinBox_setRange(quintptr _instance, qint32 min, qint32 max)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setRange",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(int, min),
			Q_ARG(int, max));

	return LQ::NoError;
}

qint32
QSpinBox_displayIntegerBase(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSpinBox_displayIntegerBase",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QSpinBox*, (QSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QSpinBox_setDisplayIntegerBase(quintptr _instance, qint32 base)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setDisplayIntegerBase",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(int, base));

	return LQ::NoError;
}

qint32
QSpinBox_setValue(quintptr _instance, qint32 val)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSpinBox_setValue",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSpinBox*, (QSpinBox*)_instance),
			Q_ARG(int, val));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_QDoubleSpinBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QDoubleSpinBox* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_QDoubleSpinBox",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QDoubleSpinBox*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QDoubleSpinBox_value(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_value",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDoubleSpinBox_prefix(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_prefix",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setPrefix(quintptr _instance, LStrHandle prefix)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setPrefix",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*prefix)->str, LStrLen(*prefix) )));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_suffix(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_suffix",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setSuffix(quintptr _instance, LStrHandle suffix)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setSuffix",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*suffix)->str, LStrLen(*suffix) )));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_cleanText(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_cleanText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QDoubleSpinBox_singleStep(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_singleStep",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setSingleStep(quintptr _instance, double val)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setSingleStep",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(double, val));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_minimum(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_minimum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setMinimum(quintptr _instance, double min)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setMinimum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(double, min));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_maximum(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_maximum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setMaximum(quintptr _instance, double max)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setMaximum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(double, max));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setRange(quintptr _instance, double min, double max)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setRange",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(double, min),
			Q_ARG(double, max));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_decimals(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_decimals",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setDecimals(quintptr _instance, qint32 prec)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setDecimals",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(int, prec));

	return LQ::NoError;
}

qint32
QDoubleSpinBox_valueFromText(double* _retVal, quintptr _instance, LStrHandle text)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_valueFromText",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*text)->str, LStrLen(*text) )));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QDoubleSpinBox_textFromValue(LStrHandle _retVal, quintptr _instance, double val)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_textFromValue",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(double, val));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QDoubleSpinBox_setValue(quintptr _instance, double val)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QDoubleSpinBox_setValue",
			Qt::BlockingQueuedConnection,
			Q_ARG(QDoubleSpinBox*, (QDoubleSpinBox*)_instance),
			Q_ARG(double, val));

	return LQ::NoError;
}

qint32
QSvgWidget_QSvgWidget(quintptr* _retVal, const char* _className, LStrHandle file)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QSvgWidget* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QSvgWidget_QSvgWidget",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSvgWidget*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QString, QString::fromUtf8( (char*)(*file)->str, LStrLen(*file) )));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QSvgWidget_load(quintptr _instance, LStrHandle contents)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QSvgWidget_load",
			Qt::BlockingQueuedConnection,
			Q_ARG(QSvgWidget*, (QSvgWidget*)_instance),
			Q_ARG(QByteArray, QByteArray( (char*)(*contents)->str, LStrLen(*contents) )));

	return LQ::NoError;
}

qint32
QWinJumpListCategory_QWinJumpListCategory(quintptr* _retVal, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWinJumpListCategory* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_QWinJumpListCategory",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListCategory*, retVal_brg),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_type(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListCategory::Type retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_type",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListCategory::Type, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_isVisible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_isVisible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_setVisible(quintptr _instance, bool* visible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_setVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance),
			Q_ARG(bool, *visible));

	return LQ::NoError;
}

qint32
QWinJumpListCategory_title(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_title",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinJumpListCategory_setTitle(quintptr _instance, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_setTitle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));

	return LQ::NoError;
}

qint32
QWinJumpListCategory_count(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_count",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_isEmpty(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_isEmpty",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_addItem(quintptr _instance, quintptr item)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_addItem",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)item));

	return LQ::NoError;
}

qint32
QWinJumpListCategory_addDestination(quintptr* _retVal, quintptr _instance, LStrHandle filePath)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListItem* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_addDestination",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListItem*, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filePath)->str, LStrLen(*filePath) )));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_addLink(quintptr* _retVal, quintptr _instance, LStrHandle icon, LStrHandle title, LStrHandle executablePath, LVArray<LStrHandle>** arguments)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListItem* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_addLink",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListItem*, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance),
			Q_ARG(LStrHandle, icon),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )),
			Q_ARG(QString, QString::fromUtf8( (char*)(*executablePath)->str, LStrLen(*executablePath) )),
			Q_ARG(QStringList, (*arguments)->toQList<QString>()));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_addSeparator(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListItem* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_addSeparator",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListItem*, retVal_brg),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListCategory_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListCategory_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)_instance));

	return LQ::NoError;
}

qint32
QWinJumpListItem_QWinJumpListItem(quintptr* _retVal, int32 type)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWinJumpListItem* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_QWinJumpListItem",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListItem*, retVal_brg),
			Q_ARG(QWinJumpListItem::Type, (QWinJumpListItem::Type)type));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListItem_setType(quintptr _instance, int32 type)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_setType",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance),
			Q_ARG(QWinJumpListItem::Type, (QWinJumpListItem::Type)type));

	return LQ::NoError;
}

qint32
QWinJumpListItem_type(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListItem::Type retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_type",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListItem::Type, retVal_brg),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpListItem_setFilePath(quintptr _instance, LStrHandle filePath)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_setFilePath",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*filePath)->str, LStrLen(*filePath) )));

	return LQ::NoError;
}

qint32
QWinJumpListItem_filePath(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_filePath",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinJumpListItem_setWorkingDirectory(quintptr _instance, LStrHandle workingDirectory)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_setWorkingDirectory",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*workingDirectory)->str, LStrLen(*workingDirectory) )));

	return LQ::NoError;
}

qint32
QWinJumpListItem_workingDirectory(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_workingDirectory",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinJumpListItem_setIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_setIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QWinJumpListItem_icon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_icon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWinJumpListItem_setTitle(quintptr _instance, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_setTitle",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));

	return LQ::NoError;
}

qint32
QWinJumpListItem_title(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_title",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinJumpListItem_setDescription(quintptr _instance, LStrHandle description)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_setDescription",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*description)->str, LStrLen(*description) )));

	return LQ::NoError;
}

qint32
QWinJumpListItem_description(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_description",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinJumpListItem_setArguments(quintptr _instance, LVArray<LStrHandle>** arguments)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_setArguments",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance),
			Q_ARG(QStringList, (*arguments)->toQList<QString>()));

	return LQ::NoError;
}

qint32
QWinJumpListItem_arguments(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QStringList retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpListItem_arguments",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QStringList, retVal_brg),
			Q_ARG(QWinJumpListItem*, (QWinJumpListItem*)_instance));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWinJumpList_QWinJumpList(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWinJumpList* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_QWinJumpList",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpList*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QObject*, (QObject*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpList_identifier(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_identifier",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinJumpList*, (QWinJumpList*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinJumpList_setIdentifier(quintptr _instance, LStrHandle identifier)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_setIdentifier",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpList*, (QWinJumpList*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*identifier)->str, LStrLen(*identifier) )));

	return LQ::NoError;
}

qint32
QWinJumpList_recent(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListCategory* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_recent",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListCategory*, retVal_brg),
			Q_ARG(QWinJumpList*, (QWinJumpList*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpList_frequent(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListCategory* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_frequent",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListCategory*, retVal_brg),
			Q_ARG(QWinJumpList*, (QWinJumpList*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpList_tasks(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinJumpListCategory* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_tasks",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinJumpListCategory*, retVal_brg),
			Q_ARG(QWinJumpList*, (QWinJumpList*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinJumpList_addCategory(quintptr _instance, quintptr category)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_addCategory",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpList*, (QWinJumpList*)_instance),
			Q_ARG(QWinJumpListCategory*, (QWinJumpListCategory*)category));

	return LQ::NoError;
}

qint32
QWinJumpList_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinJumpList_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinJumpList*, (QWinJumpList*)_instance));

	return LQ::NoError;
}

qint32
QWinTaskbarButton_QWinTaskbarButton(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWinTaskbarButton* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_QWinTaskbarButton",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinTaskbarButton*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QObject*, (QObject*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarButton_setWindow(quintptr _instance, quintptr window)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_setWindow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance),
			Q_ARG(QWindow*, (QWindow*)window));

	return LQ::NoError;
}

qint32
QWinTaskbarButton_window(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_window",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWindow*, retVal_brg),
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarButton_overlayIcon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_overlayIcon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWinTaskbarButton_overlayAccessibleDescription(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_overlayAccessibleDescription",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinTaskbarButton_progress(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWinTaskbarProgress* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_progress",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinTaskbarProgress*, retVal_brg),
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarButton_setOverlayIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_setOverlayIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QWinTaskbarButton_setOverlayAccessibleDescription(quintptr _instance, LStrHandle description)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_setOverlayAccessibleDescription",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*description)->str, LStrLen(*description) )));

	return LQ::NoError;
}

qint32
QWinTaskbarButton_clearOverlayIcon(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarButton_clearOverlayIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarButton*, (QWinTaskbarButton*)_instance));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_value(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_value",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_minimum(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_minimum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_maximum(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_maximum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_isVisible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_isVisible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_isPaused(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_isPaused",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_isStopped(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_isStopped",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_setValue(quintptr _instance, qint32 value)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_setValue",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance),
			Q_ARG(int, value));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_setMinimum(quintptr _instance, qint32 minimum)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_setMinimum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance),
			Q_ARG(int, minimum));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_setMaximum(quintptr _instance, qint32 maximum)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_setMaximum",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance),
			Q_ARG(int, maximum));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_setRange(quintptr _instance, qint32 minimum, qint32 maximum)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_setRange",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance),
			Q_ARG(int, minimum),
			Q_ARG(int, maximum));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_reset(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_reset",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_show(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_show",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_hide(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_hide",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_setVisible(quintptr _instance, bool* visible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_setVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance),
			Q_ARG(bool, *visible));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_pause(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_pause",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_resume(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_resume",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_setPaused(quintptr _instance, bool* paused)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_setPaused",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance),
			Q_ARG(bool, *paused));

	return LQ::NoError;
}

qint32
QWinTaskbarProgress_stop(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinTaskbarProgress_stop",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinTaskbarProgress*, (QWinTaskbarProgress*)_instance));

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_QWinThumbnailToolBar(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWinThumbnailToolBar* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_QWinThumbnailToolBar",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinThumbnailToolBar*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QObject*, (QObject*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_setWindow(quintptr _instance, quintptr window)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_setWindow",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance),
			Q_ARG(QWindow*, (QWindow*)window));

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_window(quintptr* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QWindow* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_window",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWindow*, retVal_brg),
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_addButton(quintptr _instance, quintptr button)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_addButton",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)button));

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_removeButton(quintptr _instance, quintptr button)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_removeButton",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)button));

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_count(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_count",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_iconicPixmapNotificationsEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_iconicPixmapNotificationsEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_setIconicPixmapNotificationsEnabled(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_setIconicPixmapNotificationsEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_iconicThumbnailPixmap(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_iconicThumbnailPixmap",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_iconicLivePreviewPixmap(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_iconicLivePreviewPixmap",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance));

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_setIconicThumbnailPixmap(quintptr _instance, LStrHandle pixmap)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_setIconicThumbnailPixmap",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance),
			Q_ARG(LStrHandle, pixmap));

	return LQ::NoError;
}

qint32
QWinThumbnailToolBar_setIconicLivePreviewPixmap(quintptr _instance, LStrHandle pixmap)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolBar_setIconicLivePreviewPixmap",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolBar*, (QWinThumbnailToolBar*)_instance),
			Q_ARG(LStrHandle, pixmap));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_QWinThumbnailToolButton(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QWinThumbnailToolButton* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_QWinThumbnailToolButton",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QWinThumbnailToolButton*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QObject*, (QObject*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_setToolTip(quintptr _instance, LStrHandle toolTip)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_setToolTip",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance),
			Q_ARG(QString, QString::fromUtf8( (char*)(*toolTip)->str, LStrLen(*toolTip) )));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_toolTip(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_toolTip",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_setIcon(quintptr _instance, LStrHandle icon)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_setIcon",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance),
			Q_ARG(LStrHandle, icon));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_icon(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_icon",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_setEnabled(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_setEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_isEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_isEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_setInteractive(quintptr _instance, bool* interactive)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_setInteractive",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance),
			Q_ARG(bool, *interactive));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_isInteractive(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_isInteractive",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_setVisible(quintptr _instance, bool* visible)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_setVisible",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance),
			Q_ARG(bool, *visible));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_isVisible(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_isVisible",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_setDismissOnClick(quintptr _instance, bool* dismiss)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_setDismissOnClick",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance),
			Q_ARG(bool, *dismiss));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_dismissOnClick(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_dismissOnClick",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_setFlat(quintptr _instance, bool* flat)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_setFlat",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance),
			Q_ARG(bool, *flat));

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_isFlat(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_isFlat",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QWinThumbnailToolButton_click(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QWinThumbnailToolButton_click",
			Qt::BlockingQueuedConnection,
			Q_ARG(QWinThumbnailToolButton*, (QWinThumbnailToolButton*)_instance));

	return LQ::NoError;
}

qint32
QwtAbstractScale_setScale(quintptr _instance, double lowerBound, double upperBound)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_setScale",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(double, lowerBound),
			Q_ARG(double, upperBound));

	return LQ::NoError;
}

qint32
QwtAbstractScale_setLowerBound(quintptr _instance, double value)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_setLowerBound",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(double, value));

	return LQ::NoError;
}

qint32
QwtAbstractScale_lowerBound(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_lowerBound",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_setUpperBound(quintptr _instance, double value)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_setUpperBound",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(double, value));

	return LQ::NoError;
}

qint32
QwtAbstractScale_upperBound(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_upperBound",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_setScaleStepSize(quintptr _instance, double stepSize)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_setScaleStepSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(double, stepSize));

	return LQ::NoError;
}

qint32
QwtAbstractScale_scaleStepSize(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_scaleStepSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_setScaleMaxMajor(quintptr _instance, qint32 ticks)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_setScaleMaxMajor",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(int, ticks));

	return LQ::NoError;
}

qint32
QwtAbstractScale_scaleMaxMinor(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_scaleMaxMinor",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_setScaleMaxMinor(quintptr _instance, qint32 ticks)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_setScaleMaxMinor",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(int, ticks));

	return LQ::NoError;
}

qint32
QwtAbstractScale_scaleMaxMajor(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_scaleMaxMajor",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_transform(qint32* _retVal, quintptr _instance, double value)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_transform",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(double, value));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_invTransform(double* _retVal, quintptr _instance, qint32 value)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_invTransform",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance),
			Q_ARG(int, value));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_isInverted(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_isInverted",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_minimum(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_minimum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractScale_maximum(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractScale_maximum",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtAbstractScale*, (QwtAbstractScale*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_QwtThermo(quintptr* _retVal, const char* _className, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QwtThermo* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_QwtThermo",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QwtThermo*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setOrientation(quintptr _instance, int32 orientation)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setOrientation",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(Qt::Orientation, (Qt::Orientation)orientation));

	return LQ::NoError;
}

qint32
QwtThermo_orientation(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::Orientation retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_orientation",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::Orientation, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setScalePosition(quintptr _instance, int32 position)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setScalePosition",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(QwtThermo::ScalePosition, (QwtThermo::ScalePosition)position));

	return LQ::NoError;
}

qint32
QwtThermo_scalePosition(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QwtThermo::ScalePosition retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_scalePosition",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QwtThermo::ScalePosition, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setSpacing(quintptr _instance, qint32 spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(int, spacing));

	return LQ::NoError;
}

qint32
QwtThermo_spacing(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_spacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setBorderWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setBorderWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QwtThermo_borderWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_borderWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setOriginMode(quintptr _instance, int32 mode)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setOriginMode",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(QwtThermo::OriginMode, (QwtThermo::OriginMode)mode));

	return LQ::NoError;
}

qint32
QwtThermo_originMode(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QwtThermo::OriginMode retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_originMode",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QwtThermo::OriginMode, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setOrigin(quintptr _instance, double origin)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setOrigin",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(double, origin));

	return LQ::NoError;
}

qint32
QwtThermo_origin(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_origin",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setFillBrush(quintptr _instance, LStrHandle brush)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setFillBrush",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(LStrHandle, brush));

	return LQ::NoError;
}

qint32
QwtThermo_fillBrush(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_fillBrush",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QwtThermo_setAlarmBrush(quintptr _instance, LStrHandle brush)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setAlarmBrush",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(LStrHandle, brush));

	return LQ::NoError;
}

qint32
QwtThermo_alarmBrush(LStrHandle _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QByteArray retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_alarmBrush",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QByteArray, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	copyIntoLStr(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
QwtThermo_setAlarmLevel(quintptr _instance, double level)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setAlarmLevel",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(double, level));

	return LQ::NoError;
}

qint32
QwtThermo_alarmLevel(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_alarmLevel",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setAlarmEnabled(quintptr _instance, bool* enabled)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setAlarmEnabled",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(bool, *enabled));

	return LQ::NoError;
}

qint32
QwtThermo_alarmEnabled(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_alarmEnabled",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setPipeWidth(quintptr _instance, qint32 width)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setPipeWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(int, width));

	return LQ::NoError;
}

qint32
QwtThermo_pipeWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_pipeWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_value(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtThermo_value",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtThermo*, (QwtThermo*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtThermo_setValue(quintptr _instance, double value)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtThermo_setValue",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtThermo*, (QwtThermo*)_instance),
			Q_ARG(double, value));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setValid(quintptr _instance, bool* valid)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setValid",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(bool, *valid));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_isValid(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_isValid",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_value(double* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	double retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_value",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(double, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setWrapping(quintptr _instance, bool* wrapping)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setWrapping",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(bool, *wrapping));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_wrapping(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_wrapping",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setTotalSteps(quintptr _instance, quint32 totalSteps)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setTotalSteps",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(quint32, totalSteps));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_totalSteps(quint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	quint32 retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_totalSteps",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(quint32, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setSingleSteps(quintptr _instance, quint32 singleSteps)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setSingleSteps",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(quint32, singleSteps));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_singleSteps(quint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	quint32 retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_singleSteps",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(quint32, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setPageSteps(quintptr _instance, quint32 pageSteps)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setPageSteps",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(quint32, pageSteps));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_pageSteps(quint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	quint32 retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_pageSteps",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(quint32, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setStepAlignment(quintptr _instance, bool* stepAlignment)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setStepAlignment",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(bool, *stepAlignment));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_stepAlignment(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_stepAlignment",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setTracking(quintptr _instance, bool* tracking)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setTracking",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(bool, *tracking));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_isTracking(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_isTracking",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setReadOnly(quintptr _instance, bool* readOnly)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setReadOnly",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(bool, *readOnly));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_isReadOnly(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_isReadOnly",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setInvertedControls(quintptr _instance, bool* inverted)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setInvertedControls",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(bool, *inverted));

	return LQ::NoError;
}

qint32
QwtAbstractSlider_invertedControls(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_invertedControls",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtAbstractSlider_setValue(quintptr _instance, double val)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtAbstractSlider_setValue",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtAbstractSlider*, (QwtAbstractSlider*)_instance),
			Q_ARG(double, val));

	return LQ::NoError;
}

qint32
QwtSlider_QwtSlider(quintptr* _retVal, const char* _className, int32 orientation, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	QwtSlider* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_QwtSlider",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QwtSlider*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(Qt::Orientation, (Qt::Orientation)orientation),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setOrientation(quintptr _instance, int32 orientation)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setOrientation",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(Qt::Orientation, (Qt::Orientation)orientation));

	return LQ::NoError;
}

qint32
QwtSlider_orientation(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	Qt::Orientation retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_orientation",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(Qt::Orientation, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setScalePosition(quintptr _instance, int32 position)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setScalePosition",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(QwtSlider::ScalePosition, (QwtSlider::ScalePosition)position));

	return LQ::NoError;
}

qint32
QwtSlider_scalePosition(int32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QwtSlider::ScalePosition retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_scalePosition",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QwtSlider::ScalePosition, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = (int32)retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setTrough(quintptr _instance, bool* hasTrough)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setTrough",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(bool, *hasTrough));

	return LQ::NoError;
}

qint32
QwtSlider_hasTrough(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_hasTrough",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setGroove(quintptr _instance, bool* hasGroove)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setGroove",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(bool, *hasGroove));

	return LQ::NoError;
}

qint32
QwtSlider_hasGroove(bool* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_hasGroove",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setHandleSize(quintptr _instance, QSize* size)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setHandleSize",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(QSize, *size));

	return LQ::NoError;
}

qint32
QwtSlider_handleSize(QSize* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QSize retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_handleSize",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QSize, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setBorderWidth(quintptr _instance, qint32 bw)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setBorderWidth",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(int, bw));

	return LQ::NoError;
}

qint32
QwtSlider_borderWidth(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_borderWidth",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setSpacing(quintptr _instance, qint32 spacing)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setSpacing",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(int, spacing));

	return LQ::NoError;
}

qint32
QwtSlider_spacing(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_spacing",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
QwtSlider_setUpdateInterval(quintptr _instance, qint32 interval)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"QwtSlider_setUpdateInterval",
			Qt::BlockingQueuedConnection,
			Q_ARG(QwtSlider*, (QwtSlider*)_instance),
			Q_ARG(int, interval));

	return LQ::NoError;
}

qint32
QwtSlider_updateInterval(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"QwtSlider_updateInterval",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(QwtSlider*, (QwtSlider*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
LQChart_LQChart(quintptr* _retVal, const char* _className, qint32 historyLength, double xMultiplier, quintptr parent)
{
	if (!bridge)
		return LQ::EngineNotRunningError;

	LQChart* retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"LQChart_LQChart",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(LQChart*, retVal_brg),
			Q_ARG(const char*, _className),
			Q_ARG(int, historyLength),
			Q_ARG(double, xMultiplier),
			Q_ARG(QWidget*, (QWidget*)parent));
	*_retVal = (quintptr)retVal_brg;

	return LQ::NoError;
}

qint32
LQChart_append(quintptr _instance, LVArray<double, 2>** values)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"LQChart_append",
			Qt::BlockingQueuedConnection,
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(LQMatrix<double>, (*values)->toQVector2D<double>()));

	return LQ::NoError;
}

qint32
LQChart_axisTitle(LStrHandle _retVal, quintptr _instance, int32 axisId)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QString retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"LQChart_axisTitle",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QString, retVal_brg),
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(QwtPlot::Axis, (QwtPlot::Axis)axisId));
	copyIntoLStr(_retVal, retVal_brg.toUtf8());

	return LQ::NoError;
}

qint32
LQChart_clear(quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"LQChart_clear",
			Qt::BlockingQueuedConnection,
			Q_ARG(LQChart*, (LQChart*)_instance));

	return LQ::NoError;
}

qint32
LQChart_curveTitles(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QStringList retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"LQChart_curveTitles",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(QStringList, retVal_brg),
			Q_ARG(LQChart*, (LQChart*)_instance));
	LVArray<LStrHandle>::fromQList(_retVal, retVal_brg);

	return LQ::NoError;
}

qint32
LQChart_historyLength(qint32* _retVal, quintptr _instance)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	int retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"LQChart_historyLength",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(int, retVal_brg),
			Q_ARG(LQChart*, (LQChart*)_instance));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
LQChart_isAxisAutoScaling(bool* _retVal, quintptr _instance, int32 axisId)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	bool retVal_brg;
	QMetaObject::invokeMethod(bridge,
			"LQChart_isAxisAutoScaling",
			Qt::BlockingQueuedConnection,
			Q_RETURN_ARG(bool, retVal_brg),
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(QwtPlot::Axis, (QwtPlot::Axis)axisId));
	*_retVal = retVal_brg;

	return LQ::NoError;
}

qint32
LQChart_setAxisAutoScaling(quintptr _instance, int32 axisId, bool* autoScaling)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"LQChart_setAxisAutoScaling",
			Qt::BlockingQueuedConnection,
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(QwtPlot::Axis, (QwtPlot::Axis)axisId),
			Q_ARG(bool, *autoScaling));

	return LQ::NoError;
}

qint32
LQChart_setAxisTitle(quintptr _instance, int32 axisId, LStrHandle title)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"LQChart_setAxisTitle",
			Qt::BlockingQueuedConnection,
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(QwtPlot::Axis, (QwtPlot::Axis)axisId),
			Q_ARG(QString, QString::fromUtf8( (char*)(*title)->str, LStrLen(*title) )));

	return LQ::NoError;
}

qint32
LQChart_setCurveTitles(quintptr _instance, LVArray<LStrHandle>** titles)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"LQChart_setCurveTitles",
			Qt::BlockingQueuedConnection,
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(QStringList, (*titles)->toQList<QString>()));

	return LQ::NoError;
}

qint32
LQChart_setHistoryLength(quintptr _instance, qint32 length)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"LQChart_setHistoryLength",
			Qt::BlockingQueuedConnection,
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(int, length));

	return LQ::NoError;
}

qint32
LQChart_setYAxisRange(quintptr _instance, double min, double max)
{
	if (!bridge)
		return LQ::EngineNotRunningError;
	if (!_instance)
		return LQ::NullPointerUseError;

	QMetaObject::invokeMethod(bridge,
			"LQChart_setYAxisRange",
			Qt::BlockingQueuedConnection,
			Q_ARG(LQChart*, (LQChart*)_instance),
			Q_ARG(double, min),
			Q_ARG(double, max));

	return LQ::NoError;
}


