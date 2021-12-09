/*\
 * Copyright (c) 2021 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#include "lqlibinterface.h"
#include "lqapplication.h"
#include "lqextras/lqchart.h"
#include <qwt_thermo.h>
#include <qwt_slider.h>
#include <QtWidgets>
#include <QtSvg>
#ifdef Q_OS_WIN
#  include <QtWinExtras>
#endif

static qint32
lqInvoke(std::function<void()> func)
{
	if (!isRunning)
		return LQ::EngineNotRunningError;

	QMetaObject::invokeMethod(qApp, func, Qt::BlockingQueuedConnection);
	return LQ::NoError;
}

static qint32
lqInvoke(quintptr _instance, std::function<void()> func)
{
	if (!_instance)
		return LQ::NullPointerUseError;
	return lqInvoke(func);
}

// NOTE: This file contains auto-generated code. Do not modify by hand.

qint32
QTextCodec_codecForLocale(quintptr* _retVal)
{
	return lqInvoke([=]
	{
		auto retVal = QTextCodec::codecForLocale();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTextCodec_codecForMib(quintptr* _retVal, qint32 mib)
{
	return lqInvoke([=]
	{
		auto retVal = QTextCodec::codecForMib(mib);
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTextCodec_availableCodecs(LVArray<LStrHandle>** _retVal)
{
	return lqInvoke([=]
	{
		_retVal << QTextCodec::availableCodecs();
	});
}

qint32
QTextCodec_availableMibs(LVArray<qint32>** _retVal)
{
	return lqInvoke([=]
	{
		_retVal << QTextCodec::availableMibs();
	});
}

qint32
QTextCodec_codecForName(quintptr* _retVal, LStrHandle name)
{
	return lqInvoke([=]
	{
		auto retVal = QTextCodec::codecForName(LVString::to<QByteArray>(name));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTextCodec_fromUnicode(LStrHandle _retVal, quintptr _instance, LStrHandle string)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextCodec*>(_instance);
		_retVal << instance->fromUnicode(LVString::to<QString>(string));
	});
}

qint32
QTextCodec_name(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextCodec*>(_instance);
		_retVal << instance->name();
	});
}

qint32
QTextCodec_toUnicode(LStrHandle _retVal, quintptr _instance, LStrHandle string)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextCodec*>(_instance);
		_retVal << instance->toUnicode(LVString::to<QByteArray>(string));
	});
}

qint32
QObject_setObjectName(quintptr _instance, LStrHandle sheet)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QObject*>(_instance);
		instance->setObjectName(LVString::to<QString>(sheet));
	});
}

qint32
QObject_objectName(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QObject*>(_instance);
		_retVal << instance->objectName();
	});
}

qint32
QCoreApplication_setApplicationName(quintptr _instance, LStrHandle application)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QCoreApplication*>(_instance);
		instance->setApplicationName(LVString::to<QString>(application));
	});
}

qint32
QCoreApplication_applicationName(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QCoreApplication*>(_instance);
		_retVal << instance->applicationName();
	});
}

qint32
QLocale_QLocale(LStrHandle _retVal, int32 language, int32 script, int32 country)
{
	return lqInvoke([=]
	{
		_retVal << QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(country));
	});
}

qint32
QLocale_language(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		*_retVal = instance.language();
	});
}

qint32
QLocale_script(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		*_retVal = instance.script();
	});
}

qint32
QLocale_country(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		*_retVal = instance.country();
	});
}

qint32
QLocale_name(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		_retVal << instance.name();
	});
}

qint32
QLocale_bcp47Name(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		_retVal << instance.bcp47Name();
	});
}

qint32
QLocale_nativeLanguageName(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		_retVal << instance.nativeLanguageName();
	});
}

qint32
QLocale_nativeCountryName(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		_retVal << instance.nativeCountryName();
	});
}

qint32
QLocale_measurementSystem(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		*_retVal = instance.measurementSystem();
	});
}

qint32
QLocale_textDirection(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		*_retVal = instance.textDirection();
	});
}

qint32
QLocale_setDefault(LStrHandle locale)
{
	return lqInvoke([=]
	{
		QLocale::setDefault(deserialize<QLocale>(locale));
	});
}

qint32
QLocale_system(LStrHandle _retVal)
{
	return lqInvoke([=]
	{
		_retVal << QLocale::system();
	});
}

qint32
QLocale_matchingLocales(LVArray<LStrHandle>** _retVal, int32 language, int32 script, int32 country)
{
	return lqInvoke([=]
	{
		_retVal << QLocale::matchingLocales(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(country));
	});
}

qint32
QLocale_setNumberOptions(LStrHandle _instance, int32 options)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		instance.setNumberOptions(static_cast<QLocale::NumberOption>(options));
		_instance << instance;
	});
}

qint32
QLocale_numberOptions(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QLocale>(_instance);
		*_retVal = instance.numberOptions();
	});
}

qint32
QGuiApplication_setWindowIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGuiApplication*>(_instance);
		instance->setWindowIcon(deserialize<QIcon>(icon));
	});
}

qint32
QGuiApplication_windowIcon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGuiApplication*>(_instance);
		_retVal << instance->windowIcon();
	});
}

qint32
QGuiApplication_primaryScreen(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGuiApplication*>(_instance);
		auto retVal = instance->primaryScreen();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QGuiApplication_screens(LVArray<quintptr>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGuiApplication*>(_instance);
		_retVal << instance->screens();
	});
}

qint32
QGuiApplication_setLayoutDirection(quintptr _instance, int32 direction)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGuiApplication*>(_instance);
		instance->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
	});
}

qint32
QGuiApplication_layoutDirection(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGuiApplication*>(_instance);
		*_retVal = instance->layoutDirection();
	});
}

qint32
QGuiApplication_applicationState(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGuiApplication*>(_instance);
		*_retVal = instance->applicationState();
	});
}

qint32
QScreen_name(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		_retVal << instance->name();
	});
}

qint32
QScreen_depth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		*_retVal = instance->depth();
	});
}

qint32
QScreen_geometry(QRect* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		*_retVal = instance->geometry();
	});
}

qint32
QScreen_physicalDotsPerInch(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		*_retVal = instance->physicalDotsPerInch();
	});
}

qint32
QScreen_logicalDotsPerInch(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		*_retVal = instance->logicalDotsPerInch();
	});
}

qint32
QScreen_devicePixelRatio(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		*_retVal = instance->devicePixelRatio();
	});
}

qint32
QScreen_availableGeometry(QRect* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		*_retVal = instance->availableGeometry();
	});
}

qint32
QScreen_grabWindow(LStrHandle _retVal, quintptr _instance, quintptr window, qint32 x, qint32 y, qint32 w, qint32 h)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		_retVal << instance->grabWindow(window, x, y, w, h);
	});
}

qint32
QScreen_refreshRate(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScreen*>(_instance);
		*_retVal = instance->refreshRate();
	});
}

qint32
QWindow_QWindow(quintptr* _retVal, const char* _className, quintptr screen)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QWindow>(_className, reinterpret_cast<QScreen*>(screen));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWindow_isVisible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->isVisible();
	});
}

qint32
QWindow_visibility(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->visibility();
	});
}

qint32
QWindow_setVisibility(quintptr _instance, int32 v)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setVisibility(static_cast<QWindow::Visibility>(v));
	});
}

qint32
QWindow_winId(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->winId();
	});
}

qint32
QWindow_isTopLevel(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->isTopLevel();
	});
}

qint32
QWindow_modality(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->modality();
	});
}

qint32
QWindow_setModality(quintptr _instance, int32 modality)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setModality(static_cast<Qt::WindowModality>(modality));
	});
}

qint32
QWindow_type(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->type();
	});
}

qint32
QWindow_title(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		_retVal << instance->title();
	});
}

qint32
QWindow_setOpacity(quintptr _instance, double level)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setOpacity(level);
	});
}

qint32
QWindow_opacity(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->opacity();
	});
}

qint32
QWindow_isActive(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->isActive();
	});
}

qint32
QWindow_devicePixelRatio(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->devicePixelRatio();
	});
}

qint32
QWindow_windowState(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->windowState();
	});
}

qint32
QWindow_setWindowState(quintptr _instance, int32 state)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setWindowState(static_cast<Qt::WindowState>(state));
	});
}

qint32
QWindow_setTransientParent(quintptr _instance, quintptr parent)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setTransientParent(reinterpret_cast<QWindow*>(parent));
	});
}

qint32
QWindow_transientParent(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		auto retVal = instance->transientParent();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWindow_isExposed(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->isExposed();
	});
}

qint32
QWindow_minimumSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->minimumSize();
	});
}

qint32
QWindow_maximumSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->maximumSize();
	});
}

qint32
QWindow_baseSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->baseSize();
	});
}

qint32
QWindow_sizeIncrement(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->sizeIncrement();
	});
}

qint32
QWindow_setMinimumSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setMinimumSize(*size);
	});
}

qint32
QWindow_setMaximumSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setMaximumSize(*size);
	});
}

qint32
QWindow_setBaseSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setBaseSize(*size);
	});
}

qint32
QWindow_setSizeIncrement(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setSizeIncrement(*size);
	});
}

qint32
QWindow_setGeometry(quintptr _instance, QRect* rect)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setGeometry(*rect);
	});
}

qint32
QWindow_geometry(QRect* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->geometry();
	});
}

qint32
QWindow_frameGeometry(QRect* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->frameGeometry();
	});
}

qint32
QWindow_size(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->size();
	});
}

qint32
QWindow_resize(quintptr _instance, QSize* newSize)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->resize(*newSize);
	});
}

qint32
QWindow_setIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setIcon(deserialize<QIcon>(icon));
	});
}

qint32
QWindow_icon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		_retVal << instance->icon();
	});
}

qint32
QWindow_setKeyboardGrabEnabled(bool* _retVal, quintptr _instance, bool* grab)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->setKeyboardGrabEnabled(*grab);
	});
}

qint32
QWindow_setMouseGrabEnabled(bool* _retVal, quintptr _instance, bool* grab)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->setMouseGrabEnabled(*grab);
	});
}

qint32
QWindow_screen(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		auto retVal = instance->screen();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWindow_setScreen(quintptr _instance, quintptr screen)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setScreen(reinterpret_cast<QScreen*>(screen));
	});
}

qint32
QWindow_focusObject(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		auto retVal = instance->focusObject();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWindow_fromWinId(quintptr* _retVal, quintptr id)
{
	return lqInvoke([=]
	{
		auto retVal = QWindow::fromWinId(id);
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWindow_requestActivate(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->requestActivate();
	});
}

qint32
QWindow_setVisible(quintptr _instance, bool* visible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setVisible(*visible);
	});
}

qint32
QWindow_show(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->show();
	});
}

qint32
QWindow_hide(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->hide();
	});
}

qint32
QWindow_showMinimized(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->showMinimized();
	});
}

qint32
QWindow_showMaximized(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->showMaximized();
	});
}

qint32
QWindow_showFullScreen(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->showFullScreen();
	});
}

qint32
QWindow_showNormal(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->showNormal();
	});
}

qint32
QWindow_close(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		*_retVal = instance->close();
	});
}

qint32
QWindow_raise(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->raise();
	});
}

qint32
QWindow_lower(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->lower();
	});
}

qint32
QWindow_setTitle(quintptr _instance, LStrHandle title)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->setTitle(LVString::to<QString>(title));
	});
}

qint32
QWindow_alert(quintptr _instance, qint32 msec)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWindow*>(_instance);
		instance->alert(msec);
	});
}

qint32
QBrush_QBrush(LStrHandle _retVal, quint32 color, int32 brushStyle)
{
	return lqInvoke([=]
	{
		_retVal << QBrush(color | 0xff000000, static_cast<Qt::BrushStyle>(brushStyle));
	});
}

qint32
QBrush_color(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QBrush>(_instance);
		_retVal << instance.color();
	});
}

qint32
QBrush_setColor(LStrHandle _instance, LStrHandle color)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QBrush>(_instance);
		instance.setColor(deserialize<QColor>(color));
		_instance << instance;
	});
}

qint32
QBrush_setStyle(LStrHandle _instance, int32 style)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QBrush>(_instance);
		instance.setStyle(static_cast<Qt::BrushStyle>(style));
		_instance << instance;
	});
}

qint32
QBrush_style(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QBrush>(_instance);
		*_retVal = instance.style();
	});
}

qint32
QBrush_texture(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QBrush>(_instance);
		_retVal << instance.texture();
	});
}

qint32
QBrush_setTexture(LStrHandle _instance, LStrHandle pixmap)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QBrush>(_instance);
		instance.setTexture(deserialize<QPixmap>(pixmap));
		_instance << instance;
	});
}

qint32
QColor_QColor(LStrHandle _retVal, quint32 rgb)
{
	return lqInvoke([=]
	{
		_retVal << QColor(rgb | 0xff000000);
	});
}

qint32
QColor_alpha(quint8* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QColor>(_instance);
		*_retVal = instance.alpha();
	});
}

qint32
QColor_setAlpha(LStrHandle _instance, quint8 alpha)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QColor>(_instance);
		instance.setAlpha(alpha);
		_instance << instance;
	});
}

qint32
QColor_rgb(quint32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QColor>(_instance);
		auto retVal = instance.rgb();
		*_retVal = retVal & RGB_MASK;
	});
}

qint32
QFont_QFont(LStrHandle _retVal, LStrHandle family, qint32 pointSize, qint32 weight, bool* italic)
{
	return lqInvoke([=]
	{
		_retVal << QFont(LVString::to<QString>(family), pointSize, weight, *italic);
	});
}

qint32
QFont_family(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		_retVal << instance.family();
	});
}

qint32
QFont_styleName(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		_retVal << instance.styleName();
	});
}

qint32
QFont_pointSize(qint32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.pointSize();
	});
}

qint32
QFont_pointSizeF(double* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.pointSizeF();
	});
}

qint32
QFont_pixelSize(qint32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.pixelSize();
	});
}

qint32
QFont_weight(qint32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.weight();
	});
}

qint32
QFont_bold(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.bold();
	});
}

qint32
QFont_setStyle(LStrHandle _instance, int32 style)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		instance.setStyle(static_cast<QFont::Style>(style));
		_instance << instance;
	});
}

qint32
QFont_style(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.style();
	});
}

qint32
QFont_italic(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.italic();
	});
}

qint32
QFont_setItalic(LStrHandle _instance, bool* b)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		instance.setItalic(*b);
		_instance << instance;
	});
}

qint32
QFont_underline(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.underline();
	});
}

qint32
QFont_overline(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.overline();
	});
}

qint32
QFont_strikeOut(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.strikeOut();
	});
}

qint32
QFont_fixedPitch(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.fixedPitch();
	});
}

qint32
QFont_kerning(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.kerning();
	});
}

qint32
QFont_styleHint(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.styleHint();
	});
}

qint32
QFont_styleStrategy(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.styleStrategy();
	});
}

qint32
QFont_setStyleStrategy(LStrHandle _instance, int32 s)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		instance.setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
		_instance << instance;
	});
}

qint32
QFont_stretch(qint32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.stretch();
	});
}

qint32
QFont_letterSpacing(double* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.letterSpacing();
	});
}

qint32
QFont_letterSpacingType(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.letterSpacingType();
	});
}

qint32
QFont_setLetterSpacing(LStrHandle _instance, int32 type, double spacing)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		instance.setLetterSpacing(static_cast<QFont::SpacingType>(type), spacing);
		_instance << instance;
	});
}

qint32
QFont_wordSpacing(double* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.wordSpacing();
	});
}

qint32
QFont_setWordSpacing(LStrHandle _instance, double spacing)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		instance.setWordSpacing(spacing);
		_instance << instance;
	});
}

qint32
QFont_capitalization(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.capitalization();
	});
}

qint32
QFont_setHintingPreference(LStrHandle _instance, int32 hintingPreference)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		instance.setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
		_instance << instance;
	});
}

qint32
QFont_hintingPreference(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.hintingPreference();
	});
}

qint32
QFont_exactMatch(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		*_retVal = instance.exactMatch();
	});
}

qint32
QFont_key(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		_retVal << instance.key();
	});
}

qint32
QFont_toString(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		_retVal << instance.toString();
	});
}

qint32
QFont_defaultFamily(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		_retVal << instance.defaultFamily();
	});
}

qint32
QFont_lastResortFamily(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		_retVal << instance.lastResortFamily();
	});
}

qint32
QFont_lastResortFont(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QFont>(_instance);
		_retVal << instance.lastResortFont();
	});
}

qint32
QIcon_QIcon(LStrHandle _retVal, LStrHandle fileName)
{
	return lqInvoke([=]
	{
		_retVal << QIcon(LVString::to<QString>(fileName));
	});
}

qint32
QIcon_addFile(LStrHandle _instance, LStrHandle file, QSize* size, int32 mode, int32 state)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QIcon>(_instance);
		instance.addFile(LVString::to<QString>(file), *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
		_instance << instance;
	});
}

qint32
QIcon_addPixmap(LStrHandle _instance, LStrHandle pixmap, int32 mode, int32 state)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QIcon>(_instance);
		instance.addPixmap(deserialize<QPixmap>(pixmap), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
		_instance << instance;
	});
}

qint32
QIcon_pixmap(LStrHandle _retVal, LStrHandle _instance, QSize* size, int32 mode, int32 state)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QIcon>(_instance);
		_retVal << instance.pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	});
}

qint32
QPalette_QPalette(LStrHandle _retVal, quint32 button)
{
	return lqInvoke([=]
	{
		_retVal << QPalette(button | 0xff000000);
	});
}

qint32
QPalette_brush(LStrHandle _retVal, LStrHandle _instance, int32 colorGroup, int32 colorRole)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPalette>(_instance);
		_retVal << instance.brush(static_cast<QPalette::ColorGroup>(colorGroup), static_cast<QPalette::ColorRole>(colorRole));
	});
}

qint32
QPalette_setBrush(LStrHandle _instance, int32 colorGroup, int32 colorRole, LStrHandle brush)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPalette>(_instance);
		instance.setBrush(static_cast<QPalette::ColorGroup>(colorGroup), static_cast<QPalette::ColorRole>(colorRole), deserialize<QBrush>(brush));
		_instance << instance;
	});
}

qint32
QPalette_isBrushSet(bool* _retVal, LStrHandle _instance, int32 colorGroup, int32 colorRole)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPalette>(_instance);
		*_retVal = instance.isBrushSet(static_cast<QPalette::ColorGroup>(colorGroup), static_cast<QPalette::ColorRole>(colorRole));
	});
}

qint32
QPen_QPen(LStrHandle _retVal, quint32 brush, double width, int32 style, int32 capStyle, int32 joinStyle)
{
	return lqInvoke([=]
	{
		_retVal << QPen(QBrush(brush | 0xff000000), width, static_cast<Qt::PenStyle>(style), static_cast<Qt::PenCapStyle>(capStyle), static_cast<Qt::PenJoinStyle>(joinStyle));
	});
}

qint32
QPen_dashOffset(double* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		*_retVal = instance.dashOffset();
	});
}

qint32
QPen_style(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		*_retVal = instance.style();
	});
}

qint32
QPen_setStyle(LStrHandle _instance, int32 style)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setStyle(static_cast<Qt::PenStyle>(style));
		_instance << instance;
	});
}

qint32
QPen_dashPattern(LVArray<double>** _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		_retVal << instance.dashPattern();
	});
}

qint32
QPen_setDashPattern(LStrHandle _instance, LVArray<double>** pattern)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setDashPattern((*pattern)->toQVector<qreal>());
		_instance << instance;
	});
}

qint32
QPen_setDashOffset(LStrHandle _instance, double offset)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setDashOffset(offset);
		_instance << instance;
	});
}

qint32
QPen_miterLimit(double* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		*_retVal = instance.miterLimit();
	});
}

qint32
QPen_setMiterLimit(LStrHandle _instance, double limit)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setMiterLimit(limit);
		_instance << instance;
	});
}

qint32
QPen_widthF(double* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		*_retVal = instance.widthF();
	});
}

qint32
QPen_setWidthF(LStrHandle _instance, double width)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setWidthF(width);
		_instance << instance;
	});
}

qint32
QPen_color(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		_retVal << instance.color();
	});
}

qint32
QPen_setColor(LStrHandle _instance, LStrHandle color)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setColor(deserialize<QColor>(color));
		_instance << instance;
	});
}

qint32
QPen_brush(LStrHandle _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		_retVal << instance.brush();
	});
}

qint32
QPen_setBrush(LStrHandle _instance, LStrHandle brush)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setBrush(deserialize<QBrush>(brush));
		_instance << instance;
	});
}

qint32
QPen_capStyle(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		*_retVal = instance.capStyle();
	});
}

qint32
QPen_setCapStyle(LStrHandle _instance, int32 capStyle)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setCapStyle(static_cast<Qt::PenCapStyle>(capStyle));
		_instance << instance;
	});
}

qint32
QPen_joinStyle(int32* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		*_retVal = instance.joinStyle();
	});
}

qint32
QPen_setJoinStyle(LStrHandle _instance, int32 joinStyle)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setJoinStyle(static_cast<Qt::PenJoinStyle>(joinStyle));
		_instance << instance;
	});
}

qint32
QPen_isCosmetic(bool* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		*_retVal = instance.isCosmetic();
	});
}

qint32
QPen_setCosmetic(LStrHandle _instance, bool* cosmetic)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPen>(_instance);
		instance.setCosmetic(*cosmetic);
		_instance << instance;
	});
}

qint32
QPixmap_QPixmap(LStrHandle _retVal, LStrHandle fileName)
{
	return lqInvoke([=]
	{
		_retVal << QPixmap(LVString::to<QString>(fileName));
	});
}

qint32
QPixmap_size(QSize* _retVal, LStrHandle _instance)
{
	return lqInvoke([=]
	{
		auto instance = deserialize<QPixmap>(_instance);
		*_retVal = instance.size();
	});
}

qint32
QApplication_font(LStrHandle _retVal, quintptr _instance, const char* className)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QApplication*>(_instance);
		_retVal << instance->font(className);
	});
}

qint32
QApplication_setFont(quintptr _instance, LStrHandle font, const char* className)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QApplication*>(_instance);
		instance->setFont(deserialize<QFont>(font), className);
	});
}

qint32
QApplication_palette(LStrHandle _retVal, quintptr _instance, const char* className)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QApplication*>(_instance);
		_retVal << instance->palette(className);
	});
}

qint32
QApplication_setPalette(quintptr _instance, LStrHandle palette, const char* className)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QApplication*>(_instance);
		instance->setPalette(deserialize<QPalette>(palette), className);
	});
}

qint32
QApplication_setStyleSheet(quintptr _instance, LStrHandle sheet)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QApplication*>(_instance);
		instance->setStyleSheet(LVString::to<QString>(sheet));
	});
}

qint32
QApplication_styleSheet(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QApplication*>(_instance);
		_retVal << instance->styleSheet();
	});
}

qint32
QWidget_QWidget(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QWidget>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWidget_actions(LVArray<quintptr>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->actions();
	});
}

qint32
QWidget_addActions(quintptr _instance, LVArray<quintptr>** actions)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->addActions((*actions)->toQList<QAction*>());
	});
}

qint32
QWidget_autoFillBackground(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->autoFillBackground();
	});
}

qint32
QWidget_contextMenuPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->contextMenuPolicy();
	});
}

qint32
QWidget_focusPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->focusPolicy();
	});
}

qint32
QWidget_font(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->font();
	});
}

qint32
QWidget_geometry(QRect* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->geometry();
	});
}

qint32
QWidget_layout(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		auto retVal = instance->layout();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWidget_insertActions(quintptr _instance, quintptr before, LVArray<quintptr>** actions)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->insertActions(reinterpret_cast<QAction*>(before), (*actions)->toQList<QAction*>());
	});
}

qint32
QWidget_isEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->isEnabled();
	});
}

qint32
QWidget_isVisible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->isVisible();
	});
}

qint32
QWidget_locale(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->locale();
	});
}

qint32
QWidget_minimumSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->minimumSize();
	});
}

qint32
QWidget_palette(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->palette();
	});
}

qint32
QWidget_resize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->resize(*size);
	});
}

qint32
QWidget_setAutoFillBackground(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setAutoFillBackground(*enabled);
	});
}

qint32
QWidget_setContextMenuPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setContextMenuPolicy(static_cast<Qt::ContextMenuPolicy>(policy));
	});
}

qint32
QWidget_setEnabled(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setEnabled(*enabled);
	});
}

qint32
QWidget_setFocusPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
	});
}

qint32
QWidget_setFont(quintptr _instance, LStrHandle font)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setFont(deserialize<QFont>(font));
	});
}

qint32
QWidget_setGeometry(quintptr _instance, QRect* geometry)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setGeometry(*geometry);
	});
}

qint32
QWidget_setLayout(quintptr _instance, quintptr layout)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setLayout(reinterpret_cast<QLayout*>(layout));
	});
}

qint32
QWidget_setLocale(quintptr _instance, LStrHandle locale)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setLocale(deserialize<QLocale>(locale));
	});
}

qint32
QWidget_setMinimumSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setMinimumSize(*size);
	});
}

qint32
QWidget_setPalette(quintptr _instance, LStrHandle palette)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setPalette(deserialize<QPalette>(palette));
	});
}

qint32
QWidget_setStyleSheet(quintptr _instance, LStrHandle styleSheet)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setStyleSheet(LVString::to<QString>(styleSheet));
	});
}

qint32
QWidget_setTabOrder(quintptr first, quintptr second)
{
	return lqInvoke([=]
	{
		QWidget::setTabOrder(reinterpret_cast<QWidget*>(first), reinterpret_cast<QWidget*>(second));
	});
}

qint32
QWidget_setToolTip(quintptr _instance, LStrHandle toolTip)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setToolTip(LVString::to<QString>(toolTip));
	});
}

qint32
QWidget_setToolTipDuration(quintptr _instance, qint32 msec)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setToolTipDuration(msec);
	});
}

qint32
QWidget_setVisible(quintptr _instance, bool* visible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setVisible(*visible);
	});
}

qint32
QWidget_setWindowIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setWindowIcon(deserialize<QIcon>(icon));
	});
}

qint32
QWidget_setWindowState(quintptr _instance, int32 windowState)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setWindowState(static_cast<Qt::WindowState>(windowState));
	});
}

qint32
QWidget_setWindowOpacity(quintptr _instance, double level)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setWindowOpacity(level);
	});
}

qint32
QWidget_setWindowTitle(quintptr _instance, LStrHandle windowTitle)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		instance->setWindowTitle(LVString::to<QString>(windowTitle));
	});
}

qint32
QWidget_size(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->size();
	});
}

qint32
QWidget_sizeHint(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->sizeHint();
	});
}

qint32
QWidget_styleSheet(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->styleSheet();
	});
}

qint32
QWidget_toolTip(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->toolTip();
	});
}

qint32
QWidget_toolTipDuration(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->toolTipDuration();
	});
}

qint32
QWidget_windowHandle(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		auto retVal = instance->windowHandle();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWidget_windowIcon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->windowIcon();
	});
}

qint32
QWidget_windowOpacity(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->windowOpacity();
	});
}

qint32
QWidget_windowState(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		*_retVal = instance->windowState();
	});
}

qint32
QWidget_windowTitle(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWidget*>(_instance);
		_retVal << instance->windowTitle();
	});
}

qint32
QComboBox_QComboBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QComboBox>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QComboBox_maxVisibleItems(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->maxVisibleItems();
	});
}

qint32
QComboBox_setMaxVisibleItems(quintptr _instance, qint32 maxItems)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setMaxVisibleItems(maxItems);
	});
}

qint32
QComboBox_count(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->count();
	});
}

qint32
QComboBox_setMaxCount(quintptr _instance, qint32 max)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setMaxCount(max);
	});
}

qint32
QComboBox_maxCount(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->maxCount();
	});
}

qint32
QComboBox_duplicatesEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->duplicatesEnabled();
	});
}

qint32
QComboBox_setDuplicatesEnabled(quintptr _instance, bool* enable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setDuplicatesEnabled(*enable);
	});
}

qint32
QComboBox_setFrame(quintptr _instance, bool* hasFrame)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setFrame(*hasFrame);
	});
}

qint32
QComboBox_hasFrame(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->hasFrame();
	});
}

qint32
QComboBox_findText(qint32* _retVal, quintptr _instance, LStrHandle text, int32 flags)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->findText(LVString::to<QString>(text), static_cast<Qt::MatchFlag>(flags));
	});
}

qint32
QComboBox_insertPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->insertPolicy();
	});
}

qint32
QComboBox_setInsertPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
	});
}

qint32
QComboBox_sizeAdjustPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->sizeAdjustPolicy();
	});
}

qint32
QComboBox_setSizeAdjustPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
	});
}

qint32
QComboBox_minimumContentsLength(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->minimumContentsLength();
	});
}

qint32
QComboBox_setMinimumContentsLength(quintptr _instance, qint32 characters)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setMinimumContentsLength(characters);
	});
}

qint32
QComboBox_iconSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->iconSize();
	});
}

qint32
QComboBox_setIconSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setIconSize(*size);
	});
}

qint32
QComboBox_isEditable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->isEditable();
	});
}

qint32
QComboBox_setEditable(quintptr _instance, bool* editable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setEditable(*editable);
	});
}

qint32
QComboBox_currentIndex(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		*_retVal = instance->currentIndex();
	});
}

qint32
QComboBox_currentText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		_retVal << instance->currentText();
	});
}

qint32
QComboBox_itemText(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		_retVal << instance->itemText(index);
	});
}

qint32
QComboBox_itemIcon(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		_retVal << instance->itemIcon(index);
	});
}

qint32
QComboBox_addItems(quintptr _instance, LVArray<LStrHandle>** texts)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->addItems((*texts)->toQList<QString>());
	});
}

qint32
QComboBox_insertItems(quintptr _instance, qint32 index, LVArray<LStrHandle>** texts)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->insertItems(index, (*texts)->toQList<QString>());
	});
}

qint32
QComboBox_insertSeparator(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->insertSeparator(index);
	});
}

qint32
QComboBox_removeItem(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->removeItem(index);
	});
}

qint32
QComboBox_setItemText(quintptr _instance, qint32 index, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setItemText(index, LVString::to<QString>(text));
	});
}

qint32
QComboBox_setItemIcon(quintptr _instance, qint32 index, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setItemIcon(index, deserialize<QIcon>(icon));
	});
}

qint32
QComboBox_showPopup(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->showPopup();
	});
}

qint32
QComboBox_hidePopup(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->hidePopup();
	});
}

qint32
QComboBox_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->clear();
	});
}

qint32
QComboBox_clearEditText(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->clearEditText();
	});
}

qint32
QComboBox_setEditText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setEditText(LVString::to<QString>(text));
	});
}

qint32
QComboBox_setCurrentIndex(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setCurrentIndex(index);
	});
}

qint32
QComboBox_setCurrentText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QComboBox*>(_instance);
		instance->setCurrentText(LVString::to<QString>(text));
	});
}

qint32
QFontComboBox_QFontComboBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QFontComboBox>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QFontComboBox_setFontFilters(quintptr _instance, int32 filters)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontComboBox*>(_instance);
		instance->setFontFilters(static_cast<QFontComboBox::FontFilter>(filters));
	});
}

qint32
QFontComboBox_fontFilters(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontComboBox*>(_instance);
		*_retVal = instance->fontFilters();
	});
}

qint32
QFontComboBox_currentFont(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontComboBox*>(_instance);
		_retVal << instance->currentFont();
	});
}

qint32
QFontComboBox_setCurrentFont(quintptr _instance, LStrHandle font)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontComboBox*>(_instance);
		instance->setCurrentFont(deserialize<QFont>(font));
	});
}

qint32
QFrame_QFrame(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QFrame>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QFrame_frameWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		*_retVal = instance->frameWidth();
	});
}

qint32
QFrame_frameShape(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		*_retVal = instance->frameShape();
	});
}

qint32
QFrame_setFrameShape(quintptr _instance, int32 shape)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		instance->setFrameShape(static_cast<QFrame::Shape>(shape));
	});
}

qint32
QFrame_frameShadow(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		*_retVal = instance->frameShadow();
	});
}

qint32
QFrame_setFrameShadow(quintptr _instance, int32 shadow)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		instance->setFrameShadow(static_cast<QFrame::Shadow>(shadow));
	});
}

qint32
QFrame_lineWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		*_retVal = instance->lineWidth();
	});
}

qint32
QFrame_setLineWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		instance->setLineWidth(width);
	});
}

qint32
QFrame_midLineWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		*_retVal = instance->midLineWidth();
	});
}

qint32
QFrame_setMidLineWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		instance->setMidLineWidth(width);
	});
}

qint32
QFrame_frameRect(QRect* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		*_retVal = instance->frameRect();
	});
}

qint32
QFrame_setFrameRect(quintptr _instance, QRect* rectangle)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFrame*>(_instance);
		instance->setFrameRect(*rectangle);
	});
}

qint32
QLabel_QLabel(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QLabel>(_className, LVString::to<QString>(text), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QLabel_alignment(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLabel*>(_instance);
		*_retVal = instance->alignment();
	});
}

qint32
QLabel_setAlignment(quintptr _instance, int32 alignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLabel*>(_instance);
		instance->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
	});
}

qint32
QLabel_setPixmap(quintptr _instance, LStrHandle pixmap)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLabel*>(_instance);
		instance->setPixmap(deserialize<QPixmap>(pixmap));
	});
}

qint32
QLabel_setText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLabel*>(_instance);
		instance->setText(LVString::to<QString>(text));
	});
}

qint32
QLabel_setWordWrap(quintptr _instance, bool* wordWrap)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLabel*>(_instance);
		instance->setWordWrap(*wordWrap);
	});
}

qint32
QLabel_text(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLabel*>(_instance);
		_retVal << instance->text();
	});
}

qint32
QLabel_wordWrap(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLabel*>(_instance);
		*_retVal = instance->wordWrap();
	});
}

qint32
QAbstractButton_icon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		_retVal << instance->icon();
	});
}

qint32
QAbstractButton_iconSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		*_retVal = instance->iconSize();
	});
}

qint32
QAbstractButton_setCheckable(quintptr _instance, bool* checkable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		instance->setCheckable(*checkable);
	});
}

qint32
QAbstractButton_isCheckable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		*_retVal = instance->isCheckable();
	});
}

qint32
QAbstractButton_isChecked(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		*_retVal = instance->isChecked();
	});
}

qint32
QAbstractButton_isDown(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		*_retVal = instance->isDown();
	});
}

qint32
QAbstractButton_setDown(quintptr _instance, bool* down)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		instance->setDown(*down);
	});
}

qint32
QAbstractButton_setAutoExclusive(quintptr _instance, bool* autoExclusive)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		instance->setAutoExclusive(*autoExclusive);
	});
}

qint32
QAbstractButton_autoExclusive(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		*_retVal = instance->autoExclusive();
	});
}

qint32
QAbstractButton_setIconSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		instance->setIconSize(*size);
	});
}

qint32
QAbstractButton_setChecked(quintptr _instance, bool* checked)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		instance->setChecked(*checked);
	});
}

qint32
QAbstractButton_setIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		instance->setIcon(deserialize<QIcon>(icon));
	});
}

qint32
QAbstractButton_setText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		instance->setText(LVString::to<QString>(text));
	});
}

qint32
QAbstractButton_text(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractButton*>(_instance);
		_retVal << instance->text();
	});
}

qint32
QPushButton_QPushButton(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QPushButton>(_className, LVString::to<QString>(text), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QPushButton_isFlat(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QPushButton*>(_instance);
		*_retVal = instance->isFlat();
	});
}

qint32
QPushButton_setFlat(quintptr _instance, bool* flat)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QPushButton*>(_instance);
		instance->setFlat(*flat);
	});
}

qint32
QLayout_parentWidget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLayout*>(_instance);
		auto retVal = instance->parentWidget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QLayout_removeWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLayout*>(_instance);
		instance->removeWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QBoxLayout_QBoxLayout(quintptr* _retVal, const char* _className, int32 direction, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QBoxLayout>(_className, static_cast<QBoxLayout::Direction>(direction), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QBoxLayout_addLayout(quintptr _instance, quintptr layout, qint32 stretch)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QBoxLayout*>(_instance);
		instance->addLayout(reinterpret_cast<QLayout*>(layout), stretch);
	});
}

qint32
QBoxLayout_addSpacing(quintptr _instance, qint32 size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QBoxLayout*>(_instance);
		instance->addSpacing(size);
	});
}

qint32
QBoxLayout_addStretch(quintptr _instance, qint32 stretch)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QBoxLayout*>(_instance);
		instance->addStretch(stretch);
	});
}

qint32
QBoxLayout_addStrut(quintptr _instance, qint32 size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QBoxLayout*>(_instance);
		instance->addStrut(size);
	});
}

qint32
QBoxLayout_addWidget(quintptr _instance, quintptr widget, qint32 stretch)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QBoxLayout*>(_instance);
		instance->addWidget(reinterpret_cast<QWidget*>(widget), stretch);
	});
}

qint32
QAbstractScrollArea_verticalScrollBarPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		*_retVal = instance->verticalScrollBarPolicy();
	});
}

qint32
QAbstractScrollArea_setVerticalScrollBarPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		instance->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(policy));
	});
}

qint32
QAbstractScrollArea_horizontalScrollBarPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		*_retVal = instance->horizontalScrollBarPolicy();
	});
}

qint32
QAbstractScrollArea_setHorizontalScrollBarPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		instance->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(policy));
	});
}

qint32
QAbstractScrollArea_cornerWidget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		auto retVal = instance->cornerWidget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QAbstractScrollArea_setCornerWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		instance->setCornerWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QAbstractScrollArea_sizeAdjustPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		*_retVal = instance->sizeAdjustPolicy();
	});
}

qint32
QAbstractScrollArea_setSizeAdjustPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractScrollArea*>(_instance);
		instance->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(policy));
	});
}

qint32
QCheckBox_QCheckBox(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QCheckBox>(_className, LVString::to<QString>(text), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QCheckBox_setTristate(quintptr _instance, bool* y)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QCheckBox*>(_instance);
		instance->setTristate(*y);
	});
}

qint32
QCheckBox_isTristate(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QCheckBox*>(_instance);
		*_retVal = instance->isTristate();
	});
}

qint32
QCheckBox_checkState(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QCheckBox*>(_instance);
		*_retVal = instance->checkState();
	});
}

qint32
QCheckBox_setCheckState(quintptr _instance, int32 state)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QCheckBox*>(_instance);
		instance->setCheckState(static_cast<Qt::CheckState>(state));
	});
}

qint32
QGroupBox_QGroupBox(quintptr* _retVal, const char* _className, LStrHandle title, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QGroupBox>(_className, LVString::to<QString>(title), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QGroupBox_title(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		_retVal << instance->title();
	});
}

qint32
QGroupBox_setTitle(quintptr _instance, LStrHandle title)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		instance->setTitle(LVString::to<QString>(title));
	});
}

qint32
QGroupBox_alignment(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		*_retVal = instance->alignment();
	});
}

qint32
QGroupBox_setAlignment(quintptr _instance, int32 alignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		instance->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
	});
}

qint32
QGroupBox_isFlat(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		*_retVal = instance->isFlat();
	});
}

qint32
QGroupBox_setFlat(quintptr _instance, bool* flat)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		instance->setFlat(*flat);
	});
}

qint32
QGroupBox_isCheckable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		*_retVal = instance->isCheckable();
	});
}

qint32
QGroupBox_setCheckable(quintptr _instance, bool* checkable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		instance->setCheckable(*checkable);
	});
}

qint32
QGroupBox_isChecked(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		*_retVal = instance->isChecked();
	});
}

qint32
QGroupBox_setChecked(quintptr _instance, bool* checked)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGroupBox*>(_instance);
		instance->setChecked(*checked);
	});
}

qint32
QSplitter_QSplitter(quintptr* _retVal, const char* _className, int32 orientation, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QSplitter>(_className, static_cast<Qt::Orientation>(orientation), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QSplitter_addWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->addWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QSplitter_insertWidget(quintptr _instance, qint32 index, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->insertWidget(index, reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QSplitter_setOrientation(quintptr _instance, int32 orientation)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->setOrientation(static_cast<Qt::Orientation>(orientation));
	});
}

qint32
QSplitter_orientation(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->orientation();
	});
}

qint32
QSplitter_setChildrenCollapsible(quintptr _instance, bool* collapsible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->setChildrenCollapsible(*collapsible);
	});
}

qint32
QSplitter_childrenCollapsible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->childrenCollapsible();
	});
}

qint32
QSplitter_setCollapsible(quintptr _instance, qint32 index, bool* collapsible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->setCollapsible(index, *collapsible);
	});
}

qint32
QSplitter_isCollapsible(bool* _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->isCollapsible(index);
	});
}

qint32
QSplitter_setOpaqueResize(quintptr _instance, bool* opaque)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->setOpaqueResize(*opaque);
	});
}

qint32
QSplitter_opaqueResize(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->opaqueResize();
	});
}

qint32
QSplitter_sizes(LVArray<qint32>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		_retVal << instance->sizes();
	});
}

qint32
QSplitter_setSizes(quintptr _instance, LVArray<qint32>** list)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->setSizes((*list)->toQList<int>());
	});
}

qint32
QSplitter_saveState(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		_retVal << instance->saveState();
	});
}

qint32
QSplitter_restoreState(bool* _retVal, quintptr _instance, LStrHandle state)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->restoreState(LVString::to<QByteArray>(state));
	});
}

qint32
QSplitter_handleWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->handleWidth();
	});
}

qint32
QSplitter_setHandleWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->setHandleWidth(width);
	});
}

qint32
QSplitter_indexOf(qint32* _retVal, quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->indexOf(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QSplitter_widget(quintptr* _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		auto retVal = instance->widget(index);
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QSplitter_count(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		*_retVal = instance->count();
	});
}

qint32
QSplitter_setStretchFactor(quintptr _instance, qint32 index, qint32 stretch)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSplitter*>(_instance);
		instance->setStretchFactor(index, stretch);
	});
}

qint32
QTabWidget_QTabWidget(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QTabWidget>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTabWidget_addTab(qint32* _retVal, quintptr _instance, quintptr widget, LStrHandle icon, LStrHandle label)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->addTab(reinterpret_cast<QWidget*>(widget), deserialize<QIcon>(icon), LVString::to<QString>(label));
	});
}

qint32
QTabWidget_insertTab(qint32* _retVal, quintptr _instance, qint32 index, quintptr widget, LStrHandle icon, LStrHandle label)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->insertTab(index, reinterpret_cast<QWidget*>(widget), deserialize<QIcon>(icon), LVString::to<QString>(label));
	});
}

qint32
QTabWidget_removeTab(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->removeTab(index);
	});
}

qint32
QTabWidget_isTabEnabled(bool* _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->isTabEnabled(index);
	});
}

qint32
QTabWidget_setTabEnabled(quintptr _instance, qint32 index, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabEnabled(index, *enabled);
	});
}

qint32
QTabWidget_tabText(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		_retVal << instance->tabText(index);
	});
}

qint32
QTabWidget_setTabText(quintptr _instance, qint32 index, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabText(index, LVString::to<QString>(text));
	});
}

qint32
QTabWidget_tabIcon(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		_retVal << instance->tabIcon(index);
	});
}

qint32
QTabWidget_setTabIcon(quintptr _instance, qint32 index, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabIcon(index, deserialize<QIcon>(icon));
	});
}

qint32
QTabWidget_setTabToolTip(quintptr _instance, qint32 index, LStrHandle tip)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabToolTip(index, LVString::to<QString>(tip));
	});
}

qint32
QTabWidget_tabToolTip(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		_retVal << instance->tabToolTip(index);
	});
}

qint32
QTabWidget_setTabWhatsThis(quintptr _instance, qint32 index, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabWhatsThis(index, LVString::to<QString>(text));
	});
}

qint32
QTabWidget_tabWhatsThis(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		_retVal << instance->tabWhatsThis(index);
	});
}

qint32
QTabWidget_currentIndex(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->currentIndex();
	});
}

qint32
QTabWidget_currentWidget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		auto retVal = instance->currentWidget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTabWidget_widget(quintptr* _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		auto retVal = instance->widget(index);
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTabWidget_indexOf(qint32* _retVal, quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->indexOf(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QTabWidget_count(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->count();
	});
}

qint32
QTabWidget_tabPosition(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->tabPosition();
	});
}

qint32
QTabWidget_setTabPosition(quintptr _instance, int32 position)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
	});
}

qint32
QTabWidget_tabsClosable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->tabsClosable();
	});
}

qint32
QTabWidget_setTabsClosable(quintptr _instance, bool* closable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabsClosable(*closable);
	});
}

qint32
QTabWidget_isMovable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->isMovable();
	});
}

qint32
QTabWidget_setMovable(quintptr _instance, bool* movable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setMovable(*movable);
	});
}

qint32
QTabWidget_tabShape(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->tabShape();
	});
}

qint32
QTabWidget_setTabShape(quintptr _instance, int32 shape)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabShape(static_cast<QTabWidget::TabShape>(shape));
	});
}

qint32
QTabWidget_setCornerWidget(quintptr _instance, quintptr widget, int32 corner)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setCornerWidget(reinterpret_cast<QWidget*>(widget), static_cast<Qt::Corner>(corner));
	});
}

qint32
QTabWidget_cornerWidget(quintptr* _retVal, quintptr _instance, int32 corner)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		auto retVal = instance->cornerWidget(static_cast<Qt::Corner>(corner));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTabWidget_elideMode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->elideMode();
	});
}

qint32
QTabWidget_setElideMode(quintptr _instance, int32 elideMode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setElideMode(static_cast<Qt::TextElideMode>(elideMode));
	});
}

qint32
QTabWidget_iconSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->iconSize();
	});
}

qint32
QTabWidget_setIconSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setIconSize(*size);
	});
}

qint32
QTabWidget_usesScrollButtons(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->usesScrollButtons();
	});
}

qint32
QTabWidget_setUsesScrollButtons(quintptr _instance, bool* useButtons)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setUsesScrollButtons(*useButtons);
	});
}

qint32
QTabWidget_documentMode(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->documentMode();
	});
}

qint32
QTabWidget_setDocumentMode(quintptr _instance, bool* set)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setDocumentMode(*set);
	});
}

qint32
QTabWidget_tabBarAutoHide(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		*_retVal = instance->tabBarAutoHide();
	});
}

qint32
QTabWidget_setTabBarAutoHide(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setTabBarAutoHide(*enabled);
	});
}

qint32
QTabWidget_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->clear();
	});
}

qint32
QTabWidget_setCurrentIndex(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setCurrentIndex(index);
	});
}

qint32
QTabWidget_setCurrentWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTabWidget*>(_instance);
		instance->setCurrentWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QAction_QAction(quintptr* _retVal, const char* _className, LStrHandle icon, LStrHandle text, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QAction>(_className, deserialize<QIcon>(icon), LVString::to<QString>(text), reinterpret_cast<QObject*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QAction_setIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setIcon(deserialize<QIcon>(icon));
	});
}

qint32
QAction_icon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		_retVal << instance->icon();
	});
}

qint32
QAction_setText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setText(LVString::to<QString>(text));
	});
}

qint32
QAction_text(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		_retVal << instance->text();
	});
}

qint32
QAction_setIconText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setIconText(LVString::to<QString>(text));
	});
}

qint32
QAction_iconText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		_retVal << instance->iconText();
	});
}

qint32
QAction_setToolTip(quintptr _instance, LStrHandle tip)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setToolTip(LVString::to<QString>(tip));
	});
}

qint32
QAction_toolTip(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		_retVal << instance->toolTip();
	});
}

qint32
QAction_setStatusTip(quintptr _instance, LStrHandle statusTip)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setStatusTip(LVString::to<QString>(statusTip));
	});
}

qint32
QAction_statusTip(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		_retVal << instance->statusTip();
	});
}

qint32
QAction_setWhatsThis(quintptr _instance, LStrHandle what)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setWhatsThis(LVString::to<QString>(what));
	});
}

qint32
QAction_whatsThis(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		_retVal << instance->whatsThis();
	});
}

qint32
QAction_setPriority(quintptr _instance, int32 priority)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setPriority(static_cast<QAction::Priority>(priority));
	});
}

qint32
QAction_priority(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->priority();
	});
}

qint32
QAction_setSeparator(quintptr _instance, bool* isSeparator)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setSeparator(*isSeparator);
	});
}

qint32
QAction_isSeparator(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->isSeparator();
	});
}

qint32
QAction_setShortcutContext(quintptr _instance, int32 context)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setShortcutContext(static_cast<Qt::ShortcutContext>(context));
	});
}

qint32
QAction_shortcutContext(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->shortcutContext();
	});
}

qint32
QAction_setAutoRepeat(quintptr _instance, bool* autoRepeat)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setAutoRepeat(*autoRepeat);
	});
}

qint32
QAction_autoRepeat(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->autoRepeat();
	});
}

qint32
QAction_setFont(quintptr _instance, LStrHandle font)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setFont(deserialize<QFont>(font));
	});
}

qint32
QAction_font(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		_retVal << instance->font();
	});
}

qint32
QAction_setCheckable(quintptr _instance, bool* checkable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setCheckable(*checkable);
	});
}

qint32
QAction_isCheckable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->isCheckable();
	});
}

qint32
QAction_isChecked(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->isChecked();
	});
}

qint32
QAction_isEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->isEnabled();
	});
}

qint32
QAction_isVisible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->isVisible();
	});
}

qint32
QAction_activate(quintptr _instance, int32 event)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->activate(static_cast<QAction::ActionEvent>(event));
	});
}

qint32
QAction_showStatusText(bool* _retVal, quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->showStatusText(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QAction_setMenuRole(quintptr _instance, int32 menuRole)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setMenuRole(static_cast<QAction::MenuRole>(menuRole));
	});
}

qint32
QAction_menuRole(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->menuRole();
	});
}

qint32
QAction_setIconVisibleInMenu(quintptr _instance, bool* visible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setIconVisibleInMenu(*visible);
	});
}

qint32
QAction_isIconVisibleInMenu(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		*_retVal = instance->isIconVisibleInMenu();
	});
}

qint32
QAction_parentWidget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		auto retVal = instance->parentWidget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QAction_trigger(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->trigger();
	});
}

qint32
QAction_hover(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->hover();
	});
}

qint32
QAction_setChecked(quintptr _instance, bool* checked)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setChecked(*checked);
	});
}

qint32
QAction_toggle(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->toggle();
	});
}

qint32
QAction_setEnabled(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setEnabled(*enabled);
	});
}

qint32
QAction_setVisible(quintptr _instance, bool* visible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAction*>(_instance);
		instance->setVisible(*visible);
	});
}

qint32
QScrollArea_QScrollArea(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QScrollArea>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QScrollArea_widget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		auto retVal = instance->widget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QScrollArea_setWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		instance->setWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QScrollArea_takeWidget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		auto retVal = instance->takeWidget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QScrollArea_widgetResizable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		*_retVal = instance->widgetResizable();
	});
}

qint32
QScrollArea_setWidgetResizable(quintptr _instance, bool* resizable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		instance->setWidgetResizable(*resizable);
	});
}

qint32
QScrollArea_alignment(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		*_retVal = instance->alignment();
	});
}

qint32
QScrollArea_setAlignment(quintptr _instance, int32 alignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		instance->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
	});
}

qint32
QScrollArea_ensureVisible(quintptr _instance, qint32 x, qint32 y, qint32 xmargin, qint32 ymargin)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		instance->ensureVisible(x, y, xmargin, ymargin);
	});
}

qint32
QScrollArea_ensureWidgetVisible(quintptr _instance, quintptr childWidget, qint32 xmargin, qint32 ymargin)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QScrollArea*>(_instance);
		instance->ensureWidgetVisible(reinterpret_cast<QWidget*>(childWidget), xmargin, ymargin);
	});
}

qint32
QDialog_QDialog(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QDialog>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QDialog_result(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		*_retVal = instance->result();
	});
}

qint32
QDialog_setSizeGripEnabled(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		instance->setSizeGripEnabled(*enabled);
	});
}

qint32
QDialog_isSizeGripEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		*_retVal = instance->isSizeGripEnabled();
	});
}

qint32
QDialog_setModal(quintptr _instance, bool* modal)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		instance->setModal(*modal);
	});
}

qint32
QDialog_setResult(quintptr _instance, qint32 result)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		instance->setResult(result);
	});
}

qint32
QDialog_open(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		instance->open();
	});
}

qint32
QDialog_exec(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		*_retVal = instance->exec();
	});
}

qint32
QDialog_done(quintptr _instance, qint32 result)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		instance->done(result);
	});
}

qint32
QDialog_accept(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		instance->accept();
	});
}

qint32
QDialog_reject(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDialog*>(_instance);
		instance->reject();
	});
}

qint32
QFileDialog_QFileDialog(quintptr* _retVal, const char* _className, quintptr parent, LStrHandle caption, LStrHandle directory, LStrHandle filter)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QFileDialog>(_className, reinterpret_cast<QWidget*>(parent), LVString::to<QString>(caption), LVString::to<QString>(directory), LVString::to<QString>(filter));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QFileDialog_setDirectory(quintptr _instance, LStrHandle directory)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setDirectory(LVString::to<QString>(directory));
	});
}

qint32
QFileDialog_selectFile(quintptr _instance, LStrHandle filename)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->selectFile(LVString::to<QString>(filename));
	});
}

qint32
QFileDialog_selectedFiles(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		_retVal << instance->selectedFiles();
	});
}

qint32
QFileDialog_setNameFilterDetailsVisible(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setNameFilterDetailsVisible(*enabled);
	});
}

qint32
QFileDialog_isNameFilterDetailsVisible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->isNameFilterDetailsVisible();
	});
}

qint32
QFileDialog_setNameFilter(quintptr _instance, LStrHandle filter)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setNameFilter(LVString::to<QString>(filter));
	});
}

qint32
QFileDialog_setNameFilters(quintptr _instance, LVArray<LStrHandle>** filters)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setNameFilters((*filters)->toQList<QString>());
	});
}

qint32
QFileDialog_nameFilters(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		_retVal << instance->nameFilters();
	});
}

qint32
QFileDialog_selectNameFilter(quintptr _instance, LStrHandle filter)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->selectNameFilter(LVString::to<QString>(filter));
	});
}

qint32
QFileDialog_selectedNameFilter(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		_retVal << instance->selectedNameFilter();
	});
}

qint32
QFileDialog_setMimeTypeFilters(quintptr _instance, LVArray<LStrHandle>** filters)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setMimeTypeFilters((*filters)->toQList<QString>());
	});
}

qint32
QFileDialog_mimeTypeFilters(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		_retVal << instance->mimeTypeFilters();
	});
}

qint32
QFileDialog_selectMimeTypeFilter(quintptr _instance, LStrHandle filter)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->selectMimeTypeFilter(LVString::to<QString>(filter));
	});
}

qint32
QFileDialog_setViewMode(quintptr _instance, int32 mode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setViewMode(static_cast<QFileDialog::ViewMode>(mode));
	});
}

qint32
QFileDialog_viewMode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->viewMode();
	});
}

qint32
QFileDialog_setFileMode(quintptr _instance, int32 mode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setFileMode(static_cast<QFileDialog::FileMode>(mode));
	});
}

qint32
QFileDialog_fileMode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->fileMode();
	});
}

qint32
QFileDialog_setAcceptMode(quintptr _instance, int32 mode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setAcceptMode(static_cast<QFileDialog::AcceptMode>(mode));
	});
}

qint32
QFileDialog_acceptMode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->acceptMode();
	});
}

qint32
QFileDialog_setReadOnly(quintptr _instance, bool* readOnly)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setReadOnly(*readOnly);
	});
}

qint32
QFileDialog_isReadOnly(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->isReadOnly();
	});
}

qint32
QFileDialog_setResolveSymlinks(quintptr _instance, bool* remove)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setResolveSymlinks(*remove);
	});
}

qint32
QFileDialog_resolveSymlinks(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->resolveSymlinks();
	});
}

qint32
QFileDialog_setConfirmOverwrite(quintptr _instance, bool* confirm)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setConfirmOverwrite(*confirm);
	});
}

qint32
QFileDialog_confirmOverwrite(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->confirmOverwrite();
	});
}

qint32
QFileDialog_setDefaultSuffix(quintptr _instance, LStrHandle suffix)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setDefaultSuffix(LVString::to<QString>(suffix));
	});
}

qint32
QFileDialog_defaultSuffix(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		_retVal << instance->defaultSuffix();
	});
}

qint32
QFileDialog_setHistory(quintptr _instance, LVArray<LStrHandle>** paths)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setHistory((*paths)->toQList<QString>());
	});
}

qint32
QFileDialog_history(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		_retVal << instance->history();
	});
}

qint32
QFileDialog_setLabelText(quintptr _instance, int32 label, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setLabelText(static_cast<QFileDialog::DialogLabel>(label), LVString::to<QString>(text));
	});
}

qint32
QFileDialog_labelText(LStrHandle _retVal, quintptr _instance, int32 label)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		_retVal << instance->labelText(static_cast<QFileDialog::DialogLabel>(label));
	});
}

qint32
QFileDialog_setOption(quintptr _instance, int32 option, bool* on)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setOption(static_cast<QFileDialog::Option>(option), *on);
	});
}

qint32
QFileDialog_testOption(bool* _retVal, quintptr _instance, int32 option)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->testOption(static_cast<QFileDialog::Option>(option));
	});
}

qint32
QFileDialog_setOptions(quintptr _instance, int32 options)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		instance->setOptions(static_cast<QFileDialog::Option>(options));
	});
}

qint32
QFileDialog_options(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFileDialog*>(_instance);
		*_retVal = instance->options();
	});
}

qint32
QFileDialog_getOpenFileName(LStrHandle _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, LStrHandle filter)
{
	return lqInvoke([=]
	{
		_retVal << QFileDialog::getOpenFileName(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(caption), LVString::to<QString>(dir), LVString::to<QString>(filter));
	});
}

qint32
QFileDialog_getSaveFileName(LStrHandle _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, LStrHandle filter)
{
	return lqInvoke([=]
	{
		_retVal << QFileDialog::getSaveFileName(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(caption), LVString::to<QString>(dir), LVString::to<QString>(filter));
	});
}

qint32
QFileDialog_getExistingDirectory(LStrHandle _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, int32 options)
{
	return lqInvoke([=]
	{
		_retVal << QFileDialog::getExistingDirectory(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(caption), LVString::to<QString>(dir), static_cast<QFileDialog::Option>(options));
	});
}

qint32
QFileDialog_getOpenFileNames(LVArray<LStrHandle>** _retVal, quintptr parent, LStrHandle caption, LStrHandle dir, LStrHandle filter)
{
	return lqInvoke([=]
	{
		_retVal << QFileDialog::getOpenFileNames(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(caption), LVString::to<QString>(dir), LVString::to<QString>(filter));
	});
}

qint32
QFontDialog_QFontDialog(quintptr* _retVal, const char* _className, LStrHandle initial, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QFontDialog>(_className, deserialize<QFont>(initial), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QFontDialog_setCurrentFont(quintptr _instance, LStrHandle font)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontDialog*>(_instance);
		instance->setCurrentFont(deserialize<QFont>(font));
	});
}

qint32
QFontDialog_currentFont(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontDialog*>(_instance);
		_retVal << instance->currentFont();
	});
}

qint32
QFontDialog_selectedFont(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontDialog*>(_instance);
		_retVal << instance->selectedFont();
	});
}

qint32
QFontDialog_testOption(bool* _retVal, quintptr _instance, int32 option)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontDialog*>(_instance);
		*_retVal = instance->testOption(static_cast<QFontDialog::FontDialogOption>(option));
	});
}

qint32
QFontDialog_setOptions(quintptr _instance, int32 options)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontDialog*>(_instance);
		instance->setOptions(static_cast<QFontDialog::FontDialogOption>(options));
	});
}

qint32
QFontDialog_options(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFontDialog*>(_instance);
		*_retVal = instance->options();
	});
}

qint32
QProgressDialog_QProgressDialog(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QProgressDialog>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QProgressDialog_wasCanceled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		*_retVal = instance->wasCanceled();
	});
}

qint32
QProgressDialog_minimum(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		*_retVal = instance->minimum();
	});
}

qint32
QProgressDialog_maximum(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		*_retVal = instance->maximum();
	});
}

qint32
QProgressDialog_value(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		*_retVal = instance->value();
	});
}

qint32
QProgressDialog_labelText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		_retVal << instance->labelText();
	});
}

qint32
QProgressDialog_minimumDuration(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		*_retVal = instance->minimumDuration();
	});
}

qint32
QProgressDialog_setAutoReset(quintptr _instance, bool* reset)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setAutoReset(*reset);
	});
}

qint32
QProgressDialog_autoReset(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		*_retVal = instance->autoReset();
	});
}

qint32
QProgressDialog_setAutoClose(quintptr _instance, bool* close)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setAutoClose(*close);
	});
}

qint32
QProgressDialog_autoClose(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		*_retVal = instance->autoClose();
	});
}

qint32
QProgressDialog_cancel(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->cancel();
	});
}

qint32
QProgressDialog_reset(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->reset();
	});
}

qint32
QProgressDialog_setMaximum(quintptr _instance, qint32 maximum)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setMaximum(maximum);
	});
}

qint32
QProgressDialog_setMinimum(quintptr _instance, qint32 minimum)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setMinimum(minimum);
	});
}

qint32
QProgressDialog_setValue(quintptr _instance, qint32 progress)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setValue(progress);
	});
}

qint32
QProgressDialog_setLabelText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setLabelText(LVString::to<QString>(text));
	});
}

qint32
QProgressDialog_setCancelButtonText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setCancelButtonText(LVString::to<QString>(text));
	});
}

qint32
QProgressDialog_setMinimumDuration(quintptr _instance, qint32 ms)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QProgressDialog*>(_instance);
		instance->setMinimumDuration(ms);
	});
}

qint32
QMessageBox_QMessageBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QMessageBox>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMessageBox_setStandardButtons(quintptr _instance, int32 buttons)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setStandardButtons(static_cast<QMessageBox::StandardButton>(buttons));
	});
}

qint32
QMessageBox_standardButtons(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		*_retVal = instance->standardButtons();
	});
}

qint32
QMessageBox_setDefaultButton(quintptr _instance, int32 button)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
	});
}

qint32
QMessageBox_setEscapeButton(quintptr _instance, int32 button)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setEscapeButton(static_cast<QMessageBox::StandardButton>(button));
	});
}

qint32
QMessageBox_text(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		_retVal << instance->text();
	});
}

qint32
QMessageBox_setText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setText(LVString::to<QString>(text));
	});
}

qint32
QMessageBox_icon(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		*_retVal = instance->icon();
	});
}

qint32
QMessageBox_setIcon(quintptr _instance, int32 icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setIcon(static_cast<QMessageBox::Icon>(icon));
	});
}

qint32
QMessageBox_iconPixmap(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		_retVal << instance->iconPixmap();
	});
}

qint32
QMessageBox_setIconPixmap(quintptr _instance, LStrHandle pixmap)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setIconPixmap(deserialize<QPixmap>(pixmap));
	});
}

qint32
QMessageBox_textFormat(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		*_retVal = instance->textFormat();
	});
}

qint32
QMessageBox_setTextFormat(quintptr _instance, int32 format)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setTextFormat(static_cast<Qt::TextFormat>(format));
	});
}

qint32
QMessageBox_setTextInteractionFlags(quintptr _instance, int32 flags)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setTextInteractionFlags(static_cast<Qt::TextInteractionFlag>(flags));
	});
}

qint32
QMessageBox_textInteractionFlags(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		*_retVal = instance->textInteractionFlags();
	});
}

qint32
QMessageBox_setCheckBox(quintptr _instance, quintptr checkbox)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setCheckBox(reinterpret_cast<QCheckBox*>(checkbox));
	});
}

qint32
QMessageBox_checkBox(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		auto retVal = instance->checkBox();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMessageBox_information(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	return lqInvoke([=]
	{
		*_retVal = QMessageBox::information(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(title), LVString::to<QString>(text), static_cast<QMessageBox::StandardButton>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	});
}

qint32
QMessageBox_question(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	return lqInvoke([=]
	{
		*_retVal = QMessageBox::question(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(title), LVString::to<QString>(text), static_cast<QMessageBox::StandardButton>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	});
}

qint32
QMessageBox_warning(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	return lqInvoke([=]
	{
		*_retVal = QMessageBox::warning(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(title), LVString::to<QString>(text), static_cast<QMessageBox::StandardButton>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	});
}

qint32
QMessageBox_critical(int32* _retVal, quintptr parent, LStrHandle title, LStrHandle text, int32 buttons, int32 defaultButton)
{
	return lqInvoke([=]
	{
		*_retVal = QMessageBox::critical(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(title), LVString::to<QString>(text), static_cast<QMessageBox::StandardButton>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	});
}

qint32
QMessageBox_about(quintptr parent, LStrHandle title, LStrHandle text)
{
	return lqInvoke([=]
	{
		QMessageBox::about(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(title), LVString::to<QString>(text));
	});
}

qint32
QMessageBox_aboutQt(quintptr parent, LStrHandle title)
{
	return lqInvoke([=]
	{
		QMessageBox::aboutQt(reinterpret_cast<QWidget*>(parent), LVString::to<QString>(title));
	});
}

qint32
QMessageBox_informativeText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		_retVal << instance->informativeText();
	});
}

qint32
QMessageBox_setInformativeText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setInformativeText(LVString::to<QString>(text));
	});
}

qint32
QMessageBox_detailedText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		_retVal << instance->detailedText();
	});
}

qint32
QMessageBox_setDetailedText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMessageBox*>(_instance);
		instance->setDetailedText(LVString::to<QString>(text));
	});
}

qint32
QMessageBox_standardIcon(LStrHandle _retVal, int32 icon)
{
	return lqInvoke([=]
	{
		_retVal << QMessageBox::standardIcon(static_cast<QMessageBox::Icon>(icon));
	});
}

qint32
QToolBox_QToolBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QToolBox>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QToolBox_addItem(qint32* _retVal, quintptr _instance, quintptr widget, LStrHandle icon, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		*_retVal = instance->addItem(reinterpret_cast<QWidget*>(widget), deserialize<QIcon>(icon), LVString::to<QString>(text));
	});
}

qint32
QToolBox_insertItem(qint32* _retVal, quintptr _instance, qint32 index, quintptr widget, LStrHandle icon, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		*_retVal = instance->insertItem(index, reinterpret_cast<QWidget*>(widget), deserialize<QIcon>(icon), LVString::to<QString>(text));
	});
}

qint32
QToolBox_removeItem(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		instance->removeItem(index);
	});
}

qint32
QToolBox_setItemEnabled(quintptr _instance, qint32 index, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		instance->setItemEnabled(index, *enabled);
	});
}

qint32
QToolBox_isItemEnabled(bool* _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		*_retVal = instance->isItemEnabled(index);
	});
}

qint32
QToolBox_setItemText(quintptr _instance, qint32 index, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		instance->setItemText(index, LVString::to<QString>(text));
	});
}

qint32
QToolBox_itemText(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		_retVal << instance->itemText(index);
	});
}

qint32
QToolBox_setItemIcon(quintptr _instance, qint32 index, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		instance->setItemIcon(index, deserialize<QIcon>(icon));
	});
}

qint32
QToolBox_itemIcon(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		_retVal << instance->itemIcon(index);
	});
}

qint32
QToolBox_setItemToolTip(quintptr _instance, qint32 index, LStrHandle toolTip)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		instance->setItemToolTip(index, LVString::to<QString>(toolTip));
	});
}

qint32
QToolBox_itemToolTip(LStrHandle _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		_retVal << instance->itemToolTip(index);
	});
}

qint32
QToolBox_currentIndex(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		*_retVal = instance->currentIndex();
	});
}

qint32
QToolBox_currentWidget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		auto retVal = instance->currentWidget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QToolBox_widget(quintptr* _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		auto retVal = instance->widget(index);
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QToolBox_indexOf(qint32* _retVal, quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		*_retVal = instance->indexOf(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QToolBox_count(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		*_retVal = instance->count();
	});
}

qint32
QToolBox_setCurrentIndex(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		instance->setCurrentIndex(index);
	});
}

qint32
QToolBox_setCurrentWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QToolBox*>(_instance);
		instance->setCurrentWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QGridLayout_QGridLayout(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QGridLayout>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QGridLayout_setHorizontalSpacing(quintptr _instance, qint32 spacing)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->setHorizontalSpacing(spacing);
	});
}

qint32
QGridLayout_horizontalSpacing(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->horizontalSpacing();
	});
}

qint32
QGridLayout_setVerticalSpacing(quintptr _instance, qint32 spacing)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->setVerticalSpacing(spacing);
	});
}

qint32
QGridLayout_verticalSpacing(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->verticalSpacing();
	});
}

qint32
QGridLayout_setRowStretch(quintptr _instance, qint32 row, qint32 stretch)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->setRowStretch(row, stretch);
	});
}

qint32
QGridLayout_setColumnStretch(quintptr _instance, qint32 column, qint32 stretch)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->setColumnStretch(column, stretch);
	});
}

qint32
QGridLayout_rowStretch(qint32* _retVal, quintptr _instance, qint32 row)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->rowStretch(row);
	});
}

qint32
QGridLayout_columnStretch(qint32* _retVal, quintptr _instance, qint32 column)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->columnStretch(column);
	});
}

qint32
QGridLayout_setRowMinimumHeight(quintptr _instance, qint32 row, qint32 minSize)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->setRowMinimumHeight(row, minSize);
	});
}

qint32
QGridLayout_setColumnMinimumWidth(quintptr _instance, qint32 column, qint32 minSize)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->setColumnMinimumWidth(column, minSize);
	});
}

qint32
QGridLayout_rowMinimumHeight(qint32* _retVal, quintptr _instance, qint32 row)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->rowMinimumHeight(row);
	});
}

qint32
QGridLayout_columnMinimumWidth(qint32* _retVal, quintptr _instance, qint32 column)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->columnMinimumWidth(column);
	});
}

qint32
QGridLayout_columnCount(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->columnCount();
	});
}

qint32
QGridLayout_rowCount(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->rowCount();
	});
}

qint32
QGridLayout_cellRect(QRect* _retVal, quintptr _instance, qint32 row, qint32 column)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->cellRect(row, column);
	});
}

qint32
QGridLayout_addWidget(quintptr _instance, quintptr widget, qint32 row, qint32 column, qint32 rowSpan, qint32 columnSpan)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->addWidget(reinterpret_cast<QWidget*>(widget), row, column, rowSpan, columnSpan);
	});
}

qint32
QGridLayout_addLayout(quintptr _instance, quintptr widget, qint32 row, qint32 column, qint32 rowSpan, qint32 columnSpan)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->addLayout(reinterpret_cast<QLayout*>(widget), row, column, rowSpan, columnSpan);
	});
}

qint32
QGridLayout_setOriginCorner(quintptr _instance, int32 corner)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		instance->setOriginCorner(static_cast<Qt::Corner>(corner));
	});
}

qint32
QGridLayout_originCorner(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QGridLayout*>(_instance);
		*_retVal = instance->originCorner();
	});
}

qint32
QFormLayout_QFormLayout(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QFormLayout>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QFormLayout_setFieldGrowthPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->setFieldGrowthPolicy(static_cast<QFormLayout::FieldGrowthPolicy>(policy));
	});
}

qint32
QFormLayout_fieldGrowthPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->fieldGrowthPolicy();
	});
}

qint32
QFormLayout_setRowWrapPolicy(quintptr _instance, int32 policy)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->setRowWrapPolicy(static_cast<QFormLayout::RowWrapPolicy>(policy));
	});
}

qint32
QFormLayout_rowWrapPolicy(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->rowWrapPolicy();
	});
}

qint32
QFormLayout_setLabelAlignment(quintptr _instance, int32 alignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->setLabelAlignment(static_cast<Qt::AlignmentFlag>(alignment));
	});
}

qint32
QFormLayout_labelAlignment(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->labelAlignment();
	});
}

qint32
QFormLayout_setFormAlignment(quintptr _instance, int32 alignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->setFormAlignment(static_cast<Qt::AlignmentFlag>(alignment));
	});
}

qint32
QFormLayout_formAlignment(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->formAlignment();
	});
}

qint32
QFormLayout_setHorizontalSpacing(quintptr _instance, qint32 spacing)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->setHorizontalSpacing(spacing);
	});
}

qint32
QFormLayout_horizontalSpacing(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->horizontalSpacing();
	});
}

qint32
QFormLayout_setVerticalSpacing(quintptr _instance, qint32 spacing)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->setVerticalSpacing(spacing);
	});
}

qint32
QFormLayout_verticalSpacing(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->verticalSpacing();
	});
}

qint32
QFormLayout_spacing(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->spacing();
	});
}

qint32
QFormLayout_setSpacing(quintptr _instance, qint32 spacing)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->setSpacing(spacing);
	});
}

qint32
QFormLayout_addRow(quintptr _instance, LStrHandle labelText, quintptr field)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->addRow(LVString::to<QString>(labelText), reinterpret_cast<QWidget*>(field));
	});
}

qint32
QFormLayout_insertRow(quintptr _instance, qint32 row, LStrHandle labelText, quintptr field)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		instance->insertRow(row, LVString::to<QString>(labelText), reinterpret_cast<QWidget*>(field));
	});
}

qint32
QFormLayout_rowCount(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QFormLayout*>(_instance);
		*_retVal = instance->rowCount();
	});
}

qint32
QLCDNumber_QLCDNumber(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QLCDNumber>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QLCDNumber_smallDecimalPoint(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		*_retVal = instance->smallDecimalPoint();
	});
}

qint32
QLCDNumber_digitCount(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		*_retVal = instance->digitCount();
	});
}

qint32
QLCDNumber_setDigitCount(quintptr _instance, qint32 nDigits)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		instance->setDigitCount(nDigits);
	});
}

qint32
QLCDNumber_checkOverflow(bool* _retVal, quintptr _instance, double number)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		*_retVal = instance->checkOverflow(number);
	});
}

qint32
QLCDNumber_mode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		*_retVal = instance->mode();
	});
}

qint32
QLCDNumber_setMode(quintptr _instance, int32 mode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		instance->setMode(static_cast<QLCDNumber::Mode>(mode));
	});
}

qint32
QLCDNumber_segmentStyle(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		*_retVal = instance->segmentStyle();
	});
}

qint32
QLCDNumber_setSegmentStyle(quintptr _instance, int32 style)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		instance->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(style));
	});
}

qint32
QLCDNumber_value(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		*_retVal = instance->value();
	});
}

qint32
QLCDNumber_display(quintptr _instance, double num)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		instance->display(num);
	});
}

qint32
QLCDNumber_setSmallDecimalPoint(quintptr _instance, bool* smallPoint)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLCDNumber*>(_instance);
		instance->setSmallDecimalPoint(*smallPoint);
	});
}

qint32
QLineEdit_QLineEdit(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QLineEdit>(_className, LVString::to<QString>(text), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QLineEdit_text(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		_retVal << instance->text();
	});
}

qint32
QLineEdit_displayText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		_retVal << instance->displayText();
	});
}

qint32
QLineEdit_placeholderText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		_retVal << instance->placeholderText();
	});
}

qint32
QLineEdit_setPlaceholderText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setPlaceholderText(LVString::to<QString>(text));
	});
}

qint32
QLineEdit_maxLength(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->maxLength();
	});
}

qint32
QLineEdit_setMaxLength(quintptr _instance, qint32 length)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setMaxLength(length);
	});
}

qint32
QLineEdit_setFrame(quintptr _instance, bool* show)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setFrame(*show);
	});
}

qint32
QLineEdit_hasFrame(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->hasFrame();
	});
}

qint32
QLineEdit_setClearButtonEnabled(quintptr _instance, bool* enable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setClearButtonEnabled(*enable);
	});
}

qint32
QLineEdit_isClearButtonEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->isClearButtonEnabled();
	});
}

qint32
QLineEdit_echoMode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->echoMode();
	});
}

qint32
QLineEdit_setEchoMode(quintptr _instance, int32 echoMode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setEchoMode(static_cast<QLineEdit::EchoMode>(echoMode));
	});
}

qint32
QLineEdit_isReadOnly(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->isReadOnly();
	});
}

qint32
QLineEdit_setReadOnly(quintptr _instance, bool* readOnly)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setReadOnly(*readOnly);
	});
}

qint32
QLineEdit_cursorPosition(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->cursorPosition();
	});
}

qint32
QLineEdit_setCursorPosition(quintptr _instance, qint32 pos)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setCursorPosition(pos);
	});
}

qint32
QLineEdit_setAlignment(quintptr _instance, int32 alignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
	});
}

qint32
QLineEdit_alignment(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->alignment();
	});
}

qint32
QLineEdit_cursorForward(quintptr _instance, bool* mark, qint32 steps)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->cursorForward(*mark, steps);
	});
}

qint32
QLineEdit_cursorBackward(quintptr _instance, bool* mark, qint32 steps)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->cursorBackward(*mark, steps);
	});
}

qint32
QLineEdit_cursorWordForward(quintptr _instance, bool* mark)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->cursorWordForward(*mark);
	});
}

qint32
QLineEdit_cursorWordBackward(quintptr _instance, bool* mark)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->cursorWordBackward(*mark);
	});
}

qint32
QLineEdit_backspace(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->backspace();
	});
}

qint32
QLineEdit_del(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->del();
	});
}

qint32
QLineEdit_home(quintptr _instance, bool* mark)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->home(*mark);
	});
}

qint32
QLineEdit_end(quintptr _instance, bool* mark)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->end(*mark);
	});
}

qint32
QLineEdit_isModified(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->isModified();
	});
}

qint32
QLineEdit_setModified(quintptr _instance, bool* modified)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setModified(*modified);
	});
}

qint32
QLineEdit_setSelection(quintptr _instance, qint32 start, qint32 length)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setSelection(start, length);
	});
}

qint32
QLineEdit_hasSelectedText(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->hasSelectedText();
	});
}

qint32
QLineEdit_selectedText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		_retVal << instance->selectedText();
	});
}

qint32
QLineEdit_selectionStart(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->selectionStart();
	});
}

qint32
QLineEdit_isUndoAvailable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->isUndoAvailable();
	});
}

qint32
QLineEdit_isRedoAvailable(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->isRedoAvailable();
	});
}

qint32
QLineEdit_setDragEnabled(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setDragEnabled(*enabled);
	});
}

qint32
QLineEdit_dragEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->dragEnabled();
	});
}

qint32
QLineEdit_setCursorMoveStyle(quintptr _instance, int32 style)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
	});
}

qint32
QLineEdit_cursorMoveStyle(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->cursorMoveStyle();
	});
}

qint32
QLineEdit_inputMask(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		_retVal << instance->inputMask();
	});
}

qint32
QLineEdit_setInputMask(quintptr _instance, LStrHandle inputMask)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setInputMask(LVString::to<QString>(inputMask));
	});
}

qint32
QLineEdit_hasAcceptableInput(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->hasAcceptableInput();
	});
}

qint32
QLineEdit_setTextMargins(quintptr _instance, QMargins* margins)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setTextMargins(*margins);
	});
}

qint32
QLineEdit_textMargins(QMargins* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		*_retVal = instance->textMargins();
	});
}

qint32
QLineEdit_setText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->setText(LVString::to<QString>(text));
	});
}

qint32
QLineEdit_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->clear();
	});
}

qint32
QLineEdit_selectAll(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->selectAll();
	});
}

qint32
QLineEdit_undo(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->undo();
	});
}

qint32
QLineEdit_redo(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->redo();
	});
}

qint32
QLineEdit_cut(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->cut();
	});
}

qint32
QLineEdit_copy(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->copy();
	});
}

qint32
QLineEdit_paste(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->paste();
	});
}

qint32
QLineEdit_deselect(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->deselect();
	});
}

qint32
QLineEdit_insert(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QLineEdit*>(_instance);
		instance->insert(LVString::to<QString>(text));
	});
}

qint32
QRadioButton_QRadioButton(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QRadioButton>(_className, LVString::to<QString>(text), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTextEdit_QTextEdit(quintptr* _retVal, const char* _className, LStrHandle text, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QTextEdit>(_className, LVString::to<QString>(text), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QTextEdit_setPlaceholderText(quintptr _instance, LStrHandle placeholderText)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setPlaceholderText(LVString::to<QString>(placeholderText));
	});
}

qint32
QTextEdit_placeholderText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->placeholderText();
	});
}

qint32
QTextEdit_isReadOnly(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->isReadOnly();
	});
}

qint32
QTextEdit_setReadOnly(quintptr _instance, bool* readOnly)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setReadOnly(*readOnly);
	});
}

qint32
QTextEdit_setTextInteractionFlags(quintptr _instance, int32 flags)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setTextInteractionFlags(static_cast<Qt::TextInteractionFlag>(flags));
	});
}

qint32
QTextEdit_textInteractionFlags(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->textInteractionFlags();
	});
}

qint32
QTextEdit_fontPointSize(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->fontPointSize();
	});
}

qint32
QTextEdit_fontFamily(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->fontFamily();
	});
}

qint32
QTextEdit_fontWeight(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->fontWeight();
	});
}

qint32
QTextEdit_fontUnderline(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->fontUnderline();
	});
}

qint32
QTextEdit_fontItalic(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->fontItalic();
	});
}

qint32
QTextEdit_textColor(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->textColor();
	});
}

qint32
QTextEdit_textBackgroundColor(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->textBackgroundColor();
	});
}

qint32
QTextEdit_currentFont(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->currentFont();
	});
}

qint32
QTextEdit_alignment(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->alignment();
	});
}

qint32
QTextEdit_autoFormatting(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->autoFormatting();
	});
}

qint32
QTextEdit_setAutoFormatting(quintptr _instance, int32 features)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setAutoFormatting(static_cast<QTextEdit::AutoFormattingFlag>(features));
	});
}

qint32
QTextEdit_tabChangesFocus(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->tabChangesFocus();
	});
}

qint32
QTextEdit_setTabChangesFocus(quintptr _instance, bool* change)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setTabChangesFocus(*change);
	});
}

qint32
QTextEdit_setDocumentTitle(quintptr _instance, LStrHandle title)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setDocumentTitle(LVString::to<QString>(title));
	});
}

qint32
QTextEdit_documentTitle(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->documentTitle();
	});
}

qint32
QTextEdit_isUndoRedoEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->isUndoRedoEnabled();
	});
}

qint32
QTextEdit_setUndoRedoEnabled(quintptr _instance, bool* enable)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setUndoRedoEnabled(*enable);
	});
}

qint32
QTextEdit_lineWrapMode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->lineWrapMode();
	});
}

qint32
QTextEdit_setLineWrapMode(quintptr _instance, int32 mode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
	});
}

qint32
QTextEdit_lineWrapColumnOrWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->lineWrapColumnOrWidth();
	});
}

qint32
QTextEdit_setLineWrapColumnOrWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setLineWrapColumnOrWidth(width);
	});
}

qint32
QTextEdit_toPlainText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->toPlainText();
	});
}

qint32
QTextEdit_toHtml(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->toHtml();
	});
}

qint32
QTextEdit_ensureCursorVisible(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->ensureCursorVisible();
	});
}

qint32
QTextEdit_cursorRect(QRect* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->cursorRect();
	});
}

qint32
QTextEdit_anchorAt(LStrHandle _retVal, quintptr _instance, QPoint* pos)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		_retVal << instance->anchorAt(*pos);
	});
}

qint32
QTextEdit_overwriteMode(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->overwriteMode();
	});
}

qint32
QTextEdit_setOverwriteMode(quintptr _instance, bool* overwrite)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setOverwriteMode(*overwrite);
	});
}

qint32
QTextEdit_tabStopWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->tabStopWidth();
	});
}

qint32
QTextEdit_setTabStopWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setTabStopWidth(width);
	});
}

qint32
QTextEdit_cursorWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->cursorWidth();
	});
}

qint32
QTextEdit_setCursorWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setCursorWidth(width);
	});
}

qint32
QTextEdit_acceptRichText(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->acceptRichText();
	});
}

qint32
QTextEdit_setAcceptRichText(quintptr _instance, bool* accept)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setAcceptRichText(*accept);
	});
}

qint32
QTextEdit_canPaste(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		*_retVal = instance->canPaste();
	});
}

qint32
QTextEdit_setFontPointSize(quintptr _instance, double size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setFontPointSize(size);
	});
}

qint32
QTextEdit_setFontFamily(quintptr _instance, LStrHandle fontFamily)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setFontFamily(LVString::to<QString>(fontFamily));
	});
}

qint32
QTextEdit_setFontWeight(quintptr _instance, qint32 weight)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setFontWeight(weight);
	});
}

qint32
QTextEdit_setFontUnderline(quintptr _instance, bool* underline)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setFontUnderline(*underline);
	});
}

qint32
QTextEdit_setFontItalic(quintptr _instance, bool* italic)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setFontItalic(*italic);
	});
}

qint32
QTextEdit_setTextColor(quintptr _instance, LStrHandle color)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setTextColor(deserialize<QColor>(color));
	});
}

qint32
QTextEdit_setTextBackgroundColor(quintptr _instance, LStrHandle color)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setTextBackgroundColor(deserialize<QColor>(color));
	});
}

qint32
QTextEdit_setCurrentFont(quintptr _instance, LStrHandle font)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setCurrentFont(deserialize<QFont>(font));
	});
}

qint32
QTextEdit_setAlignment(quintptr _instance, int32 alignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setAlignment(static_cast<Qt::AlignmentFlag>(alignment));
	});
}

qint32
QTextEdit_setPlainText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setPlainText(LVString::to<QString>(text));
	});
}

qint32
QTextEdit_setHtml(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setHtml(LVString::to<QString>(text));
	});
}

qint32
QTextEdit_setText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->setText(LVString::to<QString>(text));
	});
}

qint32
QTextEdit_cut(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->cut();
	});
}

qint32
QTextEdit_copy(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->copy();
	});
}

qint32
QTextEdit_paste(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->paste();
	});
}

qint32
QTextEdit_undo(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->undo();
	});
}

qint32
QTextEdit_redo(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->redo();
	});
}

qint32
QTextEdit_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->clear();
	});
}

qint32
QTextEdit_selectAll(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->selectAll();
	});
}

qint32
QTextEdit_insertPlainText(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->insertPlainText(LVString::to<QString>(text));
	});
}

qint32
QTextEdit_insertHtml(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->insertHtml(LVString::to<QString>(text));
	});
}

qint32
QTextEdit_append(quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->append(LVString::to<QString>(text));
	});
}

qint32
QTextEdit_scrollToAnchor(quintptr _instance, LStrHandle name)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->scrollToAnchor(LVString::to<QString>(name));
	});
}

qint32
QTextEdit_zoomIn(quintptr _instance, qint32 range)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->zoomIn(range);
	});
}

qint32
QTextEdit_zoomOut(quintptr _instance, qint32 range)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QTextEdit*>(_instance);
		instance->zoomOut(range);
	});
}

qint32
QMdiArea_QMdiArea(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QMdiArea>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMdiArea_currentSubWindow(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		auto retVal = instance->currentSubWindow();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMdiArea_activeSubWindow(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		auto retVal = instance->activeSubWindow();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMdiArea_subWindowList(LVArray<quintptr>** _retVal, quintptr _instance, int32 order)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		_retVal << instance->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
	});
}

qint32
QMdiArea_addSubWindow(quintptr* _retVal, quintptr _instance, quintptr widget, int32 flags)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		auto retVal = instance->addSubWindow(reinterpret_cast<QWidget*>(widget), static_cast<Qt::WindowType>(flags));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMdiArea_removeSubWindow(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->removeSubWindow(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QMdiArea_background(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		_retVal << instance->background();
	});
}

qint32
QMdiArea_setBackground(quintptr _instance, LStrHandle background)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->setBackground(deserialize<QBrush>(background));
	});
}

qint32
QMdiArea_activationOrder(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		*_retVal = instance->activationOrder();
	});
}

qint32
QMdiArea_setActivationOrder(quintptr _instance, int32 order)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
	});
}

qint32
QMdiArea_setActiveSubWindow(quintptr _instance, quintptr window)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->setActiveSubWindow(reinterpret_cast<QMdiSubWindow*>(window));
	});
}

qint32
QMdiArea_tileSubWindows(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->tileSubWindows();
	});
}

qint32
QMdiArea_cascadeSubWindows(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->cascadeSubWindows();
	});
}

qint32
QMdiArea_closeActiveSubWindow(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->closeActiveSubWindow();
	});
}

qint32
QMdiArea_closeAllSubWindows(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->closeAllSubWindows();
	});
}

qint32
QMdiArea_activateNextSubWindow(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->activateNextSubWindow();
	});
}

qint32
QMdiArea_activatePreviousSubWindow(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiArea*>(_instance);
		instance->activatePreviousSubWindow();
	});
}

qint32
QMdiSubWindow_QMdiSubWindow(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QMdiSubWindow>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMdiSubWindow_setWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		instance->setWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QMdiSubWindow_widget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		auto retVal = instance->widget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMdiSubWindow_isShaded(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		*_retVal = instance->isShaded();
	});
}

qint32
QMdiSubWindow_setOption(quintptr _instance, int32 option, bool* on)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		instance->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option), *on);
	});
}

qint32
QMdiSubWindow_testOption(bool* _retVal, quintptr _instance, int32 option)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		*_retVal = instance->testOption(static_cast<QMdiSubWindow::SubWindowOption>(option));
	});
}

qint32
QMdiSubWindow_setKeyboardSingleStep(quintptr _instance, qint32 step)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		instance->setKeyboardSingleStep(step);
	});
}

qint32
QMdiSubWindow_keyboardSingleStep(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		*_retVal = instance->keyboardSingleStep();
	});
}

qint32
QMdiSubWindow_setKeyboardPageStep(quintptr _instance, qint32 step)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		instance->setKeyboardPageStep(step);
	});
}

qint32
QMdiSubWindow_keyboardPageStep(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		*_retVal = instance->keyboardPageStep();
	});
}

qint32
QMdiSubWindow_mdiArea(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		auto retVal = instance->mdiArea();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QMdiSubWindow_showShaded(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QMdiSubWindow*>(_instance);
		instance->showShaded();
	});
}

qint32
QAbstractSpinBox_isReadOnly(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractSpinBox*>(_instance);
		*_retVal = instance->isReadOnly();
	});
}

qint32
QAbstractSpinBox_setReadOnly(quintptr _instance, bool* readOnly)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QAbstractSpinBox*>(_instance);
		instance->setReadOnly(*readOnly);
	});
}

qint32
QSpinBox_QSpinBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QSpinBox>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QSpinBox_value(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		*_retVal = instance->value();
	});
}

qint32
QSpinBox_prefix(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		_retVal << instance->prefix();
	});
}

qint32
QSpinBox_setPrefix(quintptr _instance, LStrHandle prefix)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setPrefix(LVString::to<QString>(prefix));
	});
}

qint32
QSpinBox_suffix(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		_retVal << instance->suffix();
	});
}

qint32
QSpinBox_setSuffix(quintptr _instance, LStrHandle suffix)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setSuffix(LVString::to<QString>(suffix));
	});
}

qint32
QSpinBox_cleanText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		_retVal << instance->cleanText();
	});
}

qint32
QSpinBox_singleStep(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		*_retVal = instance->singleStep();
	});
}

qint32
QSpinBox_setSingleStep(quintptr _instance, qint32 val)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setSingleStep(val);
	});
}

qint32
QSpinBox_minimum(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		*_retVal = instance->minimum();
	});
}

qint32
QSpinBox_setMinimum(quintptr _instance, qint32 min)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setMinimum(min);
	});
}

qint32
QSpinBox_maximum(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		*_retVal = instance->maximum();
	});
}

qint32
QSpinBox_setMaximum(quintptr _instance, qint32 max)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setMaximum(max);
	});
}

qint32
QSpinBox_setRange(quintptr _instance, qint32 min, qint32 max)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setRange(min, max);
	});
}

qint32
QSpinBox_displayIntegerBase(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		*_retVal = instance->displayIntegerBase();
	});
}

qint32
QSpinBox_setDisplayIntegerBase(quintptr _instance, qint32 base)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setDisplayIntegerBase(base);
	});
}

qint32
QSpinBox_setValue(quintptr _instance, qint32 val)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSpinBox*>(_instance);
		instance->setValue(val);
	});
}

qint32
QDoubleSpinBox_QDoubleSpinBox(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QDoubleSpinBox>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QDoubleSpinBox_value(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		*_retVal = instance->value();
	});
}

qint32
QDoubleSpinBox_prefix(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		_retVal << instance->prefix();
	});
}

qint32
QDoubleSpinBox_setPrefix(quintptr _instance, LStrHandle prefix)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setPrefix(LVString::to<QString>(prefix));
	});
}

qint32
QDoubleSpinBox_suffix(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		_retVal << instance->suffix();
	});
}

qint32
QDoubleSpinBox_setSuffix(quintptr _instance, LStrHandle suffix)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setSuffix(LVString::to<QString>(suffix));
	});
}

qint32
QDoubleSpinBox_cleanText(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		_retVal << instance->cleanText();
	});
}

qint32
QDoubleSpinBox_singleStep(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		*_retVal = instance->singleStep();
	});
}

qint32
QDoubleSpinBox_setSingleStep(quintptr _instance, double val)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setSingleStep(val);
	});
}

qint32
QDoubleSpinBox_minimum(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		*_retVal = instance->minimum();
	});
}

qint32
QDoubleSpinBox_setMinimum(quintptr _instance, double min)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setMinimum(min);
	});
}

qint32
QDoubleSpinBox_maximum(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		*_retVal = instance->maximum();
	});
}

qint32
QDoubleSpinBox_setMaximum(quintptr _instance, double max)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setMaximum(max);
	});
}

qint32
QDoubleSpinBox_setRange(quintptr _instance, double min, double max)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setRange(min, max);
	});
}

qint32
QDoubleSpinBox_decimals(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		*_retVal = instance->decimals();
	});
}

qint32
QDoubleSpinBox_setDecimals(quintptr _instance, qint32 prec)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setDecimals(prec);
	});
}

qint32
QDoubleSpinBox_valueFromText(double* _retVal, quintptr _instance, LStrHandle text)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		*_retVal = instance->valueFromText(LVString::to<QString>(text));
	});
}

qint32
QDoubleSpinBox_textFromValue(LStrHandle _retVal, quintptr _instance, double val)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		_retVal << instance->textFromValue(val);
	});
}

qint32
QDoubleSpinBox_setValue(quintptr _instance, double val)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QDoubleSpinBox*>(_instance);
		instance->setValue(val);
	});
}

qint32
QStackedWidget_QStackedWidget(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QStackedWidget>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QStackedWidget_insertWidget(qint32* _retVal, quintptr _instance, qint32 index, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		*_retVal = instance->insertWidget(index, reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QStackedWidget_removeWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		instance->removeWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QStackedWidget_currentWidget(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		auto retVal = instance->currentWidget();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QStackedWidget_currentIndex(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		*_retVal = instance->currentIndex();
	});
}

qint32
QStackedWidget_indexOf(qint32* _retVal, quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		*_retVal = instance->indexOf(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QStackedWidget_widget(quintptr* _retVal, quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		auto retVal = instance->widget(index);
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QStackedWidget_count(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		*_retVal = instance->count();
	});
}

qint32
QStackedWidget_setCurrentIndex(quintptr _instance, qint32 index)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		instance->setCurrentIndex(index);
	});
}

qint32
QStackedWidget_setCurrentWidget(quintptr _instance, quintptr widget)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QStackedWidget*>(_instance);
		instance->setCurrentWidget(reinterpret_cast<QWidget*>(widget));
	});
}

qint32
QSvgWidget_QSvgWidget(quintptr* _retVal, const char* _className, LStrHandle file)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QSvgWidget>(_className, LVString::to<QString>(file));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QSvgWidget_load(quintptr _instance, LStrHandle contents)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QSvgWidget*>(_instance);
		instance->load(LVString::to<QByteArray>(contents));
	});
}

#ifdef Q_OS_WIN
qint32
QWinJumpListCategory_QWinJumpListCategory(quintptr* _retVal, LStrHandle title)
{
	return lqInvoke([=]
	{
		auto retVal = new QWinJumpListCategory(LVString::to<QString>(title));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpListCategory_type(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		*_retVal = instance->type();
	});
}

qint32
QWinJumpListCategory_isVisible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		*_retVal = instance->isVisible();
	});
}

qint32
QWinJumpListCategory_setVisible(quintptr _instance, bool* visible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		instance->setVisible(*visible);
	});
}

qint32
QWinJumpListCategory_title(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		_retVal << instance->title();
	});
}

qint32
QWinJumpListCategory_setTitle(quintptr _instance, LStrHandle title)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		instance->setTitle(LVString::to<QString>(title));
	});
}

qint32
QWinJumpListCategory_count(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		*_retVal = instance->count();
	});
}

qint32
QWinJumpListCategory_isEmpty(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		*_retVal = instance->isEmpty();
	});
}

qint32
QWinJumpListCategory_addItem(quintptr _instance, quintptr item)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		instance->addItem(reinterpret_cast<QWinJumpListItem*>(item));
	});
}

qint32
QWinJumpListCategory_addDestination(quintptr* _retVal, quintptr _instance, LStrHandle filePath)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		auto retVal = instance->addDestination(LVString::to<QString>(filePath));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpListCategory_addLink(quintptr* _retVal, quintptr _instance, LStrHandle icon, LStrHandle title, LStrHandle executablePath, LVArray<LStrHandle>** arguments)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		auto retVal = instance->addLink(deserialize<QIcon>(icon), LVString::to<QString>(title), LVString::to<QString>(executablePath), (*arguments)->toQList<QString>());
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpListCategory_addSeparator(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		auto retVal = instance->addSeparator();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpListCategory_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListCategory*>(_instance);
		instance->clear();
	});
}

qint32
QWinJumpListItem_QWinJumpListItem(quintptr* _retVal, int32 type)
{
	return lqInvoke([=]
	{
		auto retVal = new QWinJumpListItem(static_cast<QWinJumpListItem::Type>(type));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpListItem_setType(quintptr _instance, int32 type)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		instance->setType(static_cast<QWinJumpListItem::Type>(type));
	});
}

qint32
QWinJumpListItem_type(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		*_retVal = instance->type();
	});
}

qint32
QWinJumpListItem_setFilePath(quintptr _instance, LStrHandle filePath)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		instance->setFilePath(LVString::to<QString>(filePath));
	});
}

qint32
QWinJumpListItem_filePath(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		_retVal << instance->filePath();
	});
}

qint32
QWinJumpListItem_setWorkingDirectory(quintptr _instance, LStrHandle workingDirectory)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		instance->setWorkingDirectory(LVString::to<QString>(workingDirectory));
	});
}

qint32
QWinJumpListItem_workingDirectory(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		_retVal << instance->workingDirectory();
	});
}

qint32
QWinJumpListItem_setIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		instance->setIcon(deserialize<QIcon>(icon));
	});
}

qint32
QWinJumpListItem_icon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		_retVal << instance->icon();
	});
}

qint32
QWinJumpListItem_setTitle(quintptr _instance, LStrHandle title)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		instance->setTitle(LVString::to<QString>(title));
	});
}

qint32
QWinJumpListItem_title(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		_retVal << instance->title();
	});
}

qint32
QWinJumpListItem_setDescription(quintptr _instance, LStrHandle description)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		instance->setDescription(LVString::to<QString>(description));
	});
}

qint32
QWinJumpListItem_description(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		_retVal << instance->description();
	});
}

qint32
QWinJumpListItem_setArguments(quintptr _instance, LVArray<LStrHandle>** arguments)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		instance->setArguments((*arguments)->toQList<QString>());
	});
}

qint32
QWinJumpListItem_arguments(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpListItem*>(_instance);
		_retVal << instance->arguments();
	});
}

qint32
QWinJumpList_QWinJumpList(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QWinJumpList>(_className, reinterpret_cast<QObject*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpList_identifier(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpList*>(_instance);
		_retVal << instance->identifier();
	});
}

qint32
QWinJumpList_setIdentifier(quintptr _instance, LStrHandle identifier)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpList*>(_instance);
		instance->setIdentifier(LVString::to<QString>(identifier));
	});
}

qint32
QWinJumpList_recent(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpList*>(_instance);
		auto retVal = instance->recent();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpList_frequent(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpList*>(_instance);
		auto retVal = instance->frequent();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpList_tasks(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpList*>(_instance);
		auto retVal = instance->tasks();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinJumpList_addCategory(quintptr _instance, quintptr category)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpList*>(_instance);
		instance->addCategory(reinterpret_cast<QWinJumpListCategory*>(category));
	});
}

qint32
QWinJumpList_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinJumpList*>(_instance);
		instance->clear();
	});
}

qint32
QWinTaskbarButton_QWinTaskbarButton(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QWinTaskbarButton>(_className, reinterpret_cast<QObject*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinTaskbarButton_setWindow(quintptr _instance, quintptr window)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		instance->setWindow(reinterpret_cast<QWindow*>(window));
	});
}

qint32
QWinTaskbarButton_window(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		auto retVal = instance->window();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinTaskbarButton_overlayIcon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		_retVal << instance->overlayIcon();
	});
}

qint32
QWinTaskbarButton_overlayAccessibleDescription(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		_retVal << instance->overlayAccessibleDescription();
	});
}

qint32
QWinTaskbarButton_progress(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		auto retVal = instance->progress();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinTaskbarButton_setOverlayIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		instance->setOverlayIcon(deserialize<QIcon>(icon));
	});
}

qint32
QWinTaskbarButton_setOverlayAccessibleDescription(quintptr _instance, LStrHandle description)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		instance->setOverlayAccessibleDescription(LVString::to<QString>(description));
	});
}

qint32
QWinTaskbarButton_clearOverlayIcon(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarButton*>(_instance);
		instance->clearOverlayIcon();
	});
}

qint32
QWinTaskbarProgress_value(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		*_retVal = instance->value();
	});
}

qint32
QWinTaskbarProgress_minimum(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		*_retVal = instance->minimum();
	});
}

qint32
QWinTaskbarProgress_maximum(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		*_retVal = instance->maximum();
	});
}

qint32
QWinTaskbarProgress_isVisible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		*_retVal = instance->isVisible();
	});
}

qint32
QWinTaskbarProgress_isPaused(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		*_retVal = instance->isPaused();
	});
}

qint32
QWinTaskbarProgress_isStopped(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		*_retVal = instance->isStopped();
	});
}

qint32
QWinTaskbarProgress_setValue(quintptr _instance, qint32 value)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->setValue(value);
	});
}

qint32
QWinTaskbarProgress_setMinimum(quintptr _instance, qint32 minimum)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->setMinimum(minimum);
	});
}

qint32
QWinTaskbarProgress_setMaximum(quintptr _instance, qint32 maximum)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->setMaximum(maximum);
	});
}

qint32
QWinTaskbarProgress_setRange(quintptr _instance, qint32 minimum, qint32 maximum)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->setRange(minimum, maximum);
	});
}

qint32
QWinTaskbarProgress_reset(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->reset();
	});
}

qint32
QWinTaskbarProgress_show(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->show();
	});
}

qint32
QWinTaskbarProgress_hide(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->hide();
	});
}

qint32
QWinTaskbarProgress_setVisible(quintptr _instance, bool* visible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->setVisible(*visible);
	});
}

qint32
QWinTaskbarProgress_pause(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->pause();
	});
}

qint32
QWinTaskbarProgress_resume(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->resume();
	});
}

qint32
QWinTaskbarProgress_setPaused(quintptr _instance, bool* paused)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->setPaused(*paused);
	});
}

qint32
QWinTaskbarProgress_stop(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinTaskbarProgress*>(_instance);
		instance->stop();
	});
}

qint32
QWinThumbnailToolBar_QWinThumbnailToolBar(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QWinThumbnailToolBar>(_className, reinterpret_cast<QObject*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinThumbnailToolBar_setWindow(quintptr _instance, quintptr window)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		instance->setWindow(reinterpret_cast<QWindow*>(window));
	});
}

qint32
QWinThumbnailToolBar_window(quintptr* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		auto retVal = instance->window();
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinThumbnailToolBar_addButton(quintptr _instance, quintptr button)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		instance->addButton(reinterpret_cast<QWinThumbnailToolButton*>(button));
	});
}

qint32
QWinThumbnailToolBar_removeButton(quintptr _instance, quintptr button)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		instance->removeButton(reinterpret_cast<QWinThumbnailToolButton*>(button));
	});
}

qint32
QWinThumbnailToolBar_count(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		*_retVal = instance->count();
	});
}

qint32
QWinThumbnailToolBar_iconicPixmapNotificationsEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		*_retVal = instance->iconicPixmapNotificationsEnabled();
	});
}

qint32
QWinThumbnailToolBar_setIconicPixmapNotificationsEnabled(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		instance->setIconicPixmapNotificationsEnabled(*enabled);
	});
}

qint32
QWinThumbnailToolBar_iconicThumbnailPixmap(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		_retVal << instance->iconicThumbnailPixmap();
	});
}

qint32
QWinThumbnailToolBar_iconicLivePreviewPixmap(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		_retVal << instance->iconicLivePreviewPixmap();
	});
}

qint32
QWinThumbnailToolBar_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		instance->clear();
	});
}

qint32
QWinThumbnailToolBar_setIconicThumbnailPixmap(quintptr _instance, LStrHandle pixmap)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		instance->setIconicThumbnailPixmap(deserialize<QPixmap>(pixmap));
	});
}

qint32
QWinThumbnailToolBar_setIconicLivePreviewPixmap(quintptr _instance, LStrHandle pixmap)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolBar*>(_instance);
		instance->setIconicLivePreviewPixmap(deserialize<QPixmap>(pixmap));
	});
}

qint32
QWinThumbnailToolButton_QWinThumbnailToolButton(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QWinThumbnailToolButton>(_className, reinterpret_cast<QObject*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QWinThumbnailToolButton_setToolTip(quintptr _instance, LStrHandle toolTip)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->setToolTip(LVString::to<QString>(toolTip));
	});
}

qint32
QWinThumbnailToolButton_toolTip(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		_retVal << instance->toolTip();
	});
}

qint32
QWinThumbnailToolButton_setIcon(quintptr _instance, LStrHandle icon)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->setIcon(deserialize<QIcon>(icon));
	});
}

qint32
QWinThumbnailToolButton_icon(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		_retVal << instance->icon();
	});
}

qint32
QWinThumbnailToolButton_setEnabled(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->setEnabled(*enabled);
	});
}

qint32
QWinThumbnailToolButton_isEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		*_retVal = instance->isEnabled();
	});
}

qint32
QWinThumbnailToolButton_setInteractive(quintptr _instance, bool* interactive)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->setInteractive(*interactive);
	});
}

qint32
QWinThumbnailToolButton_isInteractive(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		*_retVal = instance->isInteractive();
	});
}

qint32
QWinThumbnailToolButton_setVisible(quintptr _instance, bool* visible)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->setVisible(*visible);
	});
}

qint32
QWinThumbnailToolButton_isVisible(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		*_retVal = instance->isVisible();
	});
}

qint32
QWinThumbnailToolButton_setDismissOnClick(quintptr _instance, bool* dismiss)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->setDismissOnClick(*dismiss);
	});
}

qint32
QWinThumbnailToolButton_dismissOnClick(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		*_retVal = instance->dismissOnClick();
	});
}

qint32
QWinThumbnailToolButton_setFlat(quintptr _instance, bool* flat)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->setFlat(*flat);
	});
}

qint32
QWinThumbnailToolButton_isFlat(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		*_retVal = instance->isFlat();
	});
}

qint32
QWinThumbnailToolButton_click(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QWinThumbnailToolButton*>(_instance);
		instance->click();
	});
}
#endif // Q_OS_WIN

qint32
QwtAbstractScale_setScale(quintptr _instance, double lowerBound, double upperBound)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		instance->setScale(lowerBound, upperBound);
	});
}

qint32
QwtAbstractScale_setLowerBound(quintptr _instance, double value)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		instance->setLowerBound(value);
	});
}

qint32
QwtAbstractScale_lowerBound(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->lowerBound();
	});
}

qint32
QwtAbstractScale_setUpperBound(quintptr _instance, double value)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		instance->setUpperBound(value);
	});
}

qint32
QwtAbstractScale_upperBound(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->upperBound();
	});
}

qint32
QwtAbstractScale_setScaleStepSize(quintptr _instance, double stepSize)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		instance->setScaleStepSize(stepSize);
	});
}

qint32
QwtAbstractScale_scaleStepSize(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->scaleStepSize();
	});
}

qint32
QwtAbstractScale_setScaleMaxMajor(quintptr _instance, qint32 ticks)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		instance->setScaleMaxMajor(ticks);
	});
}

qint32
QwtAbstractScale_scaleMaxMinor(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->scaleMaxMinor();
	});
}

qint32
QwtAbstractScale_setScaleMaxMinor(quintptr _instance, qint32 ticks)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		instance->setScaleMaxMinor(ticks);
	});
}

qint32
QwtAbstractScale_scaleMaxMajor(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->scaleMaxMajor();
	});
}

qint32
QwtAbstractScale_transform(qint32* _retVal, quintptr _instance, double value)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->transform(value);
	});
}

qint32
QwtAbstractScale_invTransform(double* _retVal, quintptr _instance, qint32 value)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->invTransform(value);
	});
}

qint32
QwtAbstractScale_isInverted(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->isInverted();
	});
}

qint32
QwtAbstractScale_minimum(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->minimum();
	});
}

qint32
QwtAbstractScale_maximum(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractScale*>(_instance);
		*_retVal = instance->maximum();
	});
}

qint32
QwtThermo_QwtThermo(quintptr* _retVal, const char* _className, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QwtThermo>(_className, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QwtThermo_setOrientation(quintptr _instance, int32 orientation)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setOrientation(static_cast<Qt::Orientation>(orientation));
	});
}

qint32
QwtThermo_orientation(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->orientation();
	});
}

qint32
QwtThermo_setScalePosition(quintptr _instance, int32 position)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setScalePosition(static_cast<QwtThermo::ScalePosition>(position));
	});
}

qint32
QwtThermo_scalePosition(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->scalePosition();
	});
}

qint32
QwtThermo_setSpacing(quintptr _instance, qint32 spacing)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setSpacing(spacing);
	});
}

qint32
QwtThermo_spacing(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->spacing();
	});
}

qint32
QwtThermo_setBorderWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setBorderWidth(width);
	});
}

qint32
QwtThermo_borderWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->borderWidth();
	});
}

qint32
QwtThermo_setOriginMode(quintptr _instance, int32 mode)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setOriginMode(static_cast<QwtThermo::OriginMode>(mode));
	});
}

qint32
QwtThermo_originMode(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->originMode();
	});
}

qint32
QwtThermo_setOrigin(quintptr _instance, double origin)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setOrigin(origin);
	});
}

qint32
QwtThermo_origin(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->origin();
	});
}

qint32
QwtThermo_setFillBrush(quintptr _instance, LStrHandle brush)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setFillBrush(deserialize<QBrush>(brush));
	});
}

qint32
QwtThermo_fillBrush(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		_retVal << instance->fillBrush();
	});
}

qint32
QwtThermo_setAlarmBrush(quintptr _instance, LStrHandle brush)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setAlarmBrush(deserialize<QBrush>(brush));
	});
}

qint32
QwtThermo_alarmBrush(LStrHandle _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		_retVal << instance->alarmBrush();
	});
}

qint32
QwtThermo_setAlarmLevel(quintptr _instance, double level)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setAlarmLevel(level);
	});
}

qint32
QwtThermo_alarmLevel(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->alarmLevel();
	});
}

qint32
QwtThermo_setAlarmEnabled(quintptr _instance, bool* enabled)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setAlarmEnabled(*enabled);
	});
}

qint32
QwtThermo_alarmEnabled(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->alarmEnabled();
	});
}

qint32
QwtThermo_setPipeWidth(quintptr _instance, qint32 width)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setPipeWidth(width);
	});
}

qint32
QwtThermo_pipeWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->pipeWidth();
	});
}

qint32
QwtThermo_value(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		*_retVal = instance->value();
	});
}

qint32
QwtThermo_setValue(quintptr _instance, double value)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtThermo*>(_instance);
		instance->setValue(value);
	});
}

qint32
QwtAbstractSlider_setValid(quintptr _instance, bool* valid)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setValid(*valid);
	});
}

qint32
QwtAbstractSlider_isValid(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->isValid();
	});
}

qint32
QwtAbstractSlider_value(double* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->value();
	});
}

qint32
QwtAbstractSlider_setWrapping(quintptr _instance, bool* wrapping)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setWrapping(*wrapping);
	});
}

qint32
QwtAbstractSlider_wrapping(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->wrapping();
	});
}

qint32
QwtAbstractSlider_setTotalSteps(quintptr _instance, quint32 totalSteps)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setTotalSteps(totalSteps);
	});
}

qint32
QwtAbstractSlider_totalSteps(quint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->totalSteps();
	});
}

qint32
QwtAbstractSlider_setSingleSteps(quintptr _instance, quint32 singleSteps)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setSingleSteps(singleSteps);
	});
}

qint32
QwtAbstractSlider_singleSteps(quint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->singleSteps();
	});
}

qint32
QwtAbstractSlider_setPageSteps(quintptr _instance, quint32 pageSteps)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setPageSteps(pageSteps);
	});
}

qint32
QwtAbstractSlider_pageSteps(quint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->pageSteps();
	});
}

qint32
QwtAbstractSlider_setStepAlignment(quintptr _instance, bool* stepAlignment)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setStepAlignment(*stepAlignment);
	});
}

qint32
QwtAbstractSlider_stepAlignment(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->stepAlignment();
	});
}

qint32
QwtAbstractSlider_setTracking(quintptr _instance, bool* tracking)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setTracking(*tracking);
	});
}

qint32
QwtAbstractSlider_isTracking(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->isTracking();
	});
}

qint32
QwtAbstractSlider_setReadOnly(quintptr _instance, bool* readOnly)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setReadOnly(*readOnly);
	});
}

qint32
QwtAbstractSlider_isReadOnly(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->isReadOnly();
	});
}

qint32
QwtAbstractSlider_setInvertedControls(quintptr _instance, bool* inverted)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setInvertedControls(*inverted);
	});
}

qint32
QwtAbstractSlider_invertedControls(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		*_retVal = instance->invertedControls();
	});
}

qint32
QwtAbstractSlider_setValue(quintptr _instance, double val)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtAbstractSlider*>(_instance);
		instance->setValue(val);
	});
}

qint32
QwtSlider_QwtSlider(quintptr* _retVal, const char* _className, int32 orientation, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<QwtSlider>(_className, static_cast<Qt::Orientation>(orientation), reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
QwtSlider_setOrientation(quintptr _instance, int32 orientation)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setOrientation(static_cast<Qt::Orientation>(orientation));
	});
}

qint32
QwtSlider_orientation(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->orientation();
	});
}

qint32
QwtSlider_setScalePosition(quintptr _instance, int32 position)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setScalePosition(static_cast<QwtSlider::ScalePosition>(position));
	});
}

qint32
QwtSlider_scalePosition(int32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->scalePosition();
	});
}

qint32
QwtSlider_setTrough(quintptr _instance, bool* hasTrough)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setTrough(*hasTrough);
	});
}

qint32
QwtSlider_hasTrough(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->hasTrough();
	});
}

qint32
QwtSlider_setGroove(quintptr _instance, bool* hasGroove)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setGroove(*hasGroove);
	});
}

qint32
QwtSlider_hasGroove(bool* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->hasGroove();
	});
}

qint32
QwtSlider_setHandleSize(quintptr _instance, QSize* size)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setHandleSize(*size);
	});
}

qint32
QwtSlider_handleSize(QSize* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->handleSize();
	});
}

qint32
QwtSlider_setBorderWidth(quintptr _instance, qint32 bw)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setBorderWidth(bw);
	});
}

qint32
QwtSlider_borderWidth(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->borderWidth();
	});
}

qint32
QwtSlider_setSpacing(quintptr _instance, qint32 spacing)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setSpacing(spacing);
	});
}

qint32
QwtSlider_spacing(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->spacing();
	});
}

qint32
QwtSlider_setUpdateInterval(quintptr _instance, qint32 interval)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		instance->setUpdateInterval(interval);
	});
}

qint32
QwtSlider_updateInterval(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<QwtSlider*>(_instance);
		*_retVal = instance->updateInterval();
	});
}

qint32
LQChart_LQChart(quintptr* _retVal, const char* _className, qint32 historyLength, double xMultiplier, quintptr parent)
{
	return lqInvoke([=]
	{
		auto retVal = newLQObject<LQChart>(_className, historyLength, xMultiplier, reinterpret_cast<QWidget*>(parent));
		*_retVal = reinterpret_cast<quintptr>(retVal);
	});
}

qint32
LQChart_append(quintptr _instance, LVArray<double, 2>** values)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		instance->append((*values)->toLQTable<double>());
	});
}

qint32
LQChart_axisTitle(LStrHandle _retVal, quintptr _instance, int32 axisId)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		_retVal << instance->axisTitle(static_cast<QwtPlot::Axis>(axisId));
	});
}

qint32
LQChart_clear(quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		instance->clear();
	});
}

qint32
LQChart_curveTitles(LVArray<LStrHandle>** _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		_retVal << instance->curveTitles();
	});
}

qint32
LQChart_historyLength(qint32* _retVal, quintptr _instance)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		*_retVal = instance->historyLength();
	});
}

qint32
LQChart_isAxisAutoScaling(bool* _retVal, quintptr _instance, int32 axisId)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		*_retVal = instance->isAxisAutoScaling(static_cast<QwtPlot::Axis>(axisId));
	});
}

qint32
LQChart_setAxisAutoScaling(quintptr _instance, int32 axisId, bool* autoScaling)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		instance->setAxisAutoScaling(static_cast<QwtPlot::Axis>(axisId), *autoScaling);
	});
}

qint32
LQChart_setAxisTitle(quintptr _instance, int32 axisId, LStrHandle title)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		instance->setAxisTitle(static_cast<QwtPlot::Axis>(axisId), LVString::to<QString>(title));
	});
}

qint32
LQChart_setCurveTitles(quintptr _instance, LVArray<LStrHandle>** titles)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		instance->setCurveTitles((*titles)->toQList<QString>());
	});
}

qint32
LQChart_setHistoryLength(quintptr _instance, qint32 length)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		instance->setHistoryLength(length);
	});
}

qint32
LQChart_setYAxisRange(quintptr _instance, double min, double max)
{
	return lqInvoke(_instance, [=]
	{
		auto instance = reinterpret_cast<LQChart*>(_instance);
		instance->setYAxisRange(min, max);
	});
}


