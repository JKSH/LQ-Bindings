/*\
 * Copyright (c) 2016 Sze Howe Koh
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
\*/

#ifndef LQBRIDGE_H
#define LQBRIDGE_H

#include <QtWidgets>
#include <QtSvg>
#include <QtWinExtras>
#include "lqapplication.h"
#include "lqtypes.h"

#include <qwt_thermo.h>
#include <qwt_slider.h>

#include "lqextras/lqchart.h"
// NOTE: This file contains auto-generated code. Do not modify by hand.

class Bridge : public QObject
{
	Q_OBJECT

public:
	explicit Bridge(QObject* parent = nullptr) : QObject(parent) {}

public slots:
	QTextCodec* QTextCodec_codecForLocale() {return QTextCodec::codecForLocale();}
	QTextCodec* QTextCodec_codecForMib(int mib) {return QTextCodec::codecForMib(mib);}
	QList<QByteArray> QTextCodec_availableCodecs() {return QTextCodec::availableCodecs();}
	QList<int> QTextCodec_availableMibs() {return QTextCodec::availableMibs();}
	QTextCodec* QTextCodec_codecForName(const QByteArray& name) {return QTextCodec::codecForName(name);}
	QByteArray QTextCodec_fromUnicode(QTextCodec* _instance, const QString& string) {return _instance->fromUnicode(string);}
	QByteArray QTextCodec_name(QTextCodec* _instance) {return _instance->name();}
	QString QTextCodec_toUnicode(QTextCodec* _instance, const QByteArray& string) {return _instance->toUnicode(string);}
	void QObject_setObjectName(QObject* _instance, const QString& sheet) {_instance->setObjectName(sheet);}
	QString QObject_objectName(QObject* _instance) {return _instance->objectName();}
	void QCoreApplication_setApplicationName(QCoreApplication* _instance, const QString& application) {_instance->setApplicationName(application);}
	QString QCoreApplication_applicationName(QCoreApplication* _instance) {return _instance->applicationName();}
	void QGuiApplication_setWindowIcon(QGuiApplication* _instance, LStrHandle icon) {_instance->setWindowIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	QByteArray QGuiApplication_windowIcon(QGuiApplication* _instance) {return serialize(_instance->windowIcon());}
	QString QScreen_name(QScreen* _instance) {return _instance->name();}
	int QScreen_depth(QScreen* _instance) {return _instance->depth();}
	QRect QScreen_geometry(QScreen* _instance) {return _instance->geometry();}
	qreal QScreen_physicalDotsPerInch(QScreen* _instance) {return _instance->physicalDotsPerInch();}
	qreal QScreen_logicalDotsPerInch(QScreen* _instance) {return _instance->logicalDotsPerInch();}
	qreal QScreen_devicePixelRatio(QScreen* _instance) {return _instance->devicePixelRatio();}
	QRect QScreen_availableGeometry(QScreen* _instance) {return _instance->availableGeometry();}
	QByteArray QScreen_grabWindow(QScreen* _instance, WId window, int x, int y, int w, int h) {return serialize(_instance->grabWindow(window, x, y, w, h));}
	qreal QScreen_refreshRate(QScreen* _instance) {return _instance->refreshRate();}
	QWindow* QWindow_QWindow(const char* _className, QScreen* screen) {return newLQObject<QWindow>(_className, screen);}
	bool QWindow_isVisible(QWindow* _instance) {return _instance->isVisible();}
	QWindow::Visibility QWindow_visibility(QWindow* _instance) {return _instance->visibility();}
	void QWindow_setVisibility(QWindow* _instance, QWindow::Visibility v) {_instance->setVisibility(v);}
	WId QWindow_winId(QWindow* _instance) {return _instance->winId();}
	bool QWindow_isTopLevel(QWindow* _instance) {return _instance->isTopLevel();}
	Qt::WindowModality QWindow_modality(QWindow* _instance) {return _instance->modality();}
	void QWindow_setModality(QWindow* _instance, Qt::WindowModality modality) {_instance->setModality(modality);}
	Qt::WindowType QWindow_type(QWindow* _instance) {return _instance->type();}
	QString QWindow_title(QWindow* _instance) {return _instance->title();}
	void QWindow_setOpacity(QWindow* _instance, qreal level) {_instance->setOpacity(level);}
	qreal QWindow_opacity(QWindow* _instance) {return _instance->opacity();}
	bool QWindow_isActive(QWindow* _instance) {return _instance->isActive();}
	qreal QWindow_devicePixelRatio(QWindow* _instance) {return _instance->devicePixelRatio();}
	Qt::WindowState QWindow_windowState(QWindow* _instance) {return _instance->windowState();}
	void QWindow_setWindowState(QWindow* _instance, Qt::WindowState state) {_instance->setWindowState(state);}
	void QWindow_setTransientParent(QWindow* _instance, QWindow* parent) {_instance->setTransientParent(parent);}
	QWindow* QWindow_transientParent(QWindow* _instance) {return _instance->transientParent();}
	bool QWindow_isExposed(QWindow* _instance) {return _instance->isExposed();}
	QSize QWindow_minimumSize(QWindow* _instance) {return _instance->minimumSize();}
	QSize QWindow_maximumSize(QWindow* _instance) {return _instance->maximumSize();}
	QSize QWindow_baseSize(QWindow* _instance) {return _instance->baseSize();}
	QSize QWindow_sizeIncrement(QWindow* _instance) {return _instance->sizeIncrement();}
	void QWindow_setMinimumSize(QWindow* _instance, const QSize& size) {_instance->setMinimumSize(size);}
	void QWindow_setMaximumSize(QWindow* _instance, const QSize& size) {_instance->setMaximumSize(size);}
	void QWindow_setBaseSize(QWindow* _instance, const QSize& size) {_instance->setBaseSize(size);}
	void QWindow_setSizeIncrement(QWindow* _instance, const QSize& size) {_instance->setSizeIncrement(size);}
	void QWindow_setGeometry(QWindow* _instance, const QRect& rect) {_instance->setGeometry(rect);}
	QRect QWindow_geometry(QWindow* _instance) {return _instance->geometry();}
	QRect QWindow_frameGeometry(QWindow* _instance) {return _instance->frameGeometry();}
	void QWindow_resize(QWindow* _instance, const QSize& newSize) {_instance->resize(newSize);}
	void QWindow_setIcon(QWindow* _instance, LStrHandle icon) {_instance->setIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	QByteArray QWindow_icon(QWindow* _instance) {return serialize(_instance->icon());}
	bool QWindow_setKeyboardGrabEnabled(QWindow* _instance, bool grab) {return _instance->setKeyboardGrabEnabled(grab);}
	bool QWindow_setMouseGrabEnabled(QWindow* _instance, bool grab) {return _instance->setMouseGrabEnabled(grab);}
	QScreen* QWindow_screen(QWindow* _instance) {return _instance->screen();}
	void QWindow_setScreen(QWindow* _instance, QScreen* screen) {_instance->setScreen(screen);}
	QObject* QWindow_focusObject(QWindow* _instance) {return _instance->focusObject();}
	QWindow* QWindow_fromWinId(WId id) {return QWindow::fromWinId(id);}
	void QWindow_requestActivate(QWindow* _instance) {_instance->requestActivate();}
	void QWindow_setVisible(QWindow* _instance, bool visible) {_instance->setVisible(visible);}
	void QWindow_show(QWindow* _instance) {_instance->show();}
	void QWindow_hide(QWindow* _instance) {_instance->hide();}
	void QWindow_showMinimized(QWindow* _instance) {_instance->showMinimized();}
	void QWindow_showMaximized(QWindow* _instance) {_instance->showMaximized();}
	void QWindow_showFullScreen(QWindow* _instance) {_instance->showFullScreen();}
	void QWindow_showNormal(QWindow* _instance) {_instance->showNormal();}
	bool QWindow_close(QWindow* _instance) {return _instance->close();}
	void QWindow_raise(QWindow* _instance) {_instance->raise();}
	void QWindow_lower(QWindow* _instance) {_instance->lower();}
	void QWindow_setTitle(QWindow* _instance, const QString& title) {_instance->setTitle(title);}
	void QWindow_alert(QWindow* _instance, int msec) {_instance->alert(msec);}
	QByteArray QBrush_QBrush() {return serialize(QBrush());}
	QByteArray QBrush_color(LStrHandle _instance) {
		QBrush thisInstance = deserialize<QBrush>(copyFromLStr(_instance));
		QByteArray retVal = serialize(thisInstance.color());
		copyIntoLStr(_instance, serialize(thisInstance));
		return retVal;
	}
	void QBrush_setColor(LStrHandle _instance, LStrHandle color) {
		QBrush thisInstance = deserialize<QBrush>(copyFromLStr(_instance));
		thisInstance.setColor(deserialize<QColor>(copyFromLStr(color)));
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	void QBrush_setStyle(LStrHandle _instance, Qt::BrushStyle style) {
		QBrush thisInstance = deserialize<QBrush>(copyFromLStr(_instance));
		thisInstance.setStyle(style);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	Qt::BrushStyle QBrush_style(LStrHandle _instance) {
		QBrush thisInstance = deserialize<QBrush>(copyFromLStr(_instance));
		Qt::BrushStyle retVal = thisInstance.style();
		return retVal;
	}
	QByteArray QColor_QColor(int r, int g, int b, int a) {return serialize(QColor(r, g, b, a));}
	QByteArray QFont_QFont(const QString& family, int pointSize, int weight, bool italic) {return serialize(QFont(family, pointSize, weight, italic));}
	QString QFont_family(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QString retVal = thisInstance.family();
		return retVal;
	}
	QString QFont_styleName(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QString retVal = thisInstance.styleName();
		return retVal;
	}
	int QFont_pointSize(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		int retVal = thisInstance.pointSize();
		return retVal;
	}
	qreal QFont_pointSizeF(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		qreal retVal = thisInstance.pointSizeF();
		return retVal;
	}
	int QFont_pixelSize(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		int retVal = thisInstance.pixelSize();
		return retVal;
	}
	int QFont_weight(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		int retVal = thisInstance.weight();
		return retVal;
	}
	bool QFont_bold(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.bold();
		return retVal;
	}
	void QFont_setStyle(LStrHandle _instance, QFont::Style style) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		thisInstance.setStyle(style);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	QFont::Style QFont_style(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QFont::Style retVal = thisInstance.style();
		return retVal;
	}
	bool QFont_italic(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.italic();
		return retVal;
	}
	void QFont_setItalic(LStrHandle _instance, bool b) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		thisInstance.setItalic(b);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	bool QFont_underline(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.underline();
		return retVal;
	}
	bool QFont_overline(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.overline();
		return retVal;
	}
	bool QFont_strikeOut(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.strikeOut();
		return retVal;
	}
	bool QFont_fixedPitch(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.fixedPitch();
		return retVal;
	}
	bool QFont_kerning(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.kerning();
		return retVal;
	}
	QFont::StyleHint QFont_styleHint(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QFont::StyleHint retVal = thisInstance.styleHint();
		return retVal;
	}
	QFont::StyleStrategy QFont_styleStrategy(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QFont::StyleStrategy retVal = thisInstance.styleStrategy();
		return retVal;
	}
	void QFont_setStyleStrategy(LStrHandle _instance, QFont::StyleStrategy s) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		thisInstance.setStyleStrategy(s);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	int QFont_stretch(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		int retVal = thisInstance.stretch();
		return retVal;
	}
	qreal QFont_letterSpacing(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		qreal retVal = thisInstance.letterSpacing();
		return retVal;
	}
	QFont::SpacingType QFont_letterSpacingType(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QFont::SpacingType retVal = thisInstance.letterSpacingType();
		return retVal;
	}
	void QFont_setLetterSpacing(LStrHandle _instance, QFont::SpacingType type, qreal spacing) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		thisInstance.setLetterSpacing(type, spacing);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	qreal QFont_wordSpacing(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		qreal retVal = thisInstance.wordSpacing();
		return retVal;
	}
	void QFont_setWordSpacing(LStrHandle _instance, qreal spacing) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		thisInstance.setWordSpacing(spacing);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	QFont::Capitalization QFont_capitalization(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QFont::Capitalization retVal = thisInstance.capitalization();
		return retVal;
	}
	void QFont_setHintingPreference(LStrHandle _instance, QFont::HintingPreference hintingPreference) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		thisInstance.setHintingPreference(hintingPreference);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	QFont::HintingPreference QFont_hintingPreference(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QFont::HintingPreference retVal = thisInstance.hintingPreference();
		return retVal;
	}
	bool QFont_exactMatch(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		bool retVal = thisInstance.exactMatch();
		return retVal;
	}
	QString QFont_key(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QString retVal = thisInstance.key();
		return retVal;
	}
	QString QFont_toString(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QString retVal = thisInstance.toString();
		return retVal;
	}
	QString QFont_defaultFamily(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QString retVal = thisInstance.defaultFamily();
		return retVal;
	}
	QString QFont_lastResortFamily(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QString retVal = thisInstance.lastResortFamily();
		return retVal;
	}
	QString QFont_lastResortFont(LStrHandle _instance) {
		QFont thisInstance = deserialize<QFont>(copyFromLStr(_instance));
		QString retVal = thisInstance.lastResortFont();
		return retVal;
	}
	QByteArray QIcon_QIcon(const QString& fileName) {return serialize(QIcon(fileName));}
	void QIcon_addFile(LStrHandle _instance, const QString& file) {
		QIcon thisInstance = deserialize<QIcon>(copyFromLStr(_instance));
		thisInstance.addFile(file);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	void QIcon_addPixmap(LStrHandle _instance, LStrHandle pixmap) {
		QIcon thisInstance = deserialize<QIcon>(copyFromLStr(_instance));
		thisInstance.addPixmap(deserialize<QPixmap>(copyFromLStr(pixmap)));
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	QByteArray QIcon_pixmap(LStrHandle _instance, const QSize& size) {
		QIcon thisInstance = deserialize<QIcon>(copyFromLStr(_instance));
		QByteArray retVal = serialize(thisInstance.pixmap(size));
		copyIntoLStr(_instance, serialize(thisInstance));
		return retVal;
	}
	QByteArray QPen_QPen() {return serialize(QPen());}
	qreal QPen_dashOffset(LStrHandle _instance) {
		QPen thisInstance = deserialize<QPen>(copyFromLStr(_instance));
		qreal retVal = thisInstance.dashOffset();
		copyIntoLStr(_instance, serialize(thisInstance));
		return retVal;
	}
	QVector<qreal> QPen_dashPattern(LStrHandle _instance) {
		QPen thisInstance = deserialize<QPen>(copyFromLStr(_instance));
		QVector<qreal> retVal = thisInstance.dashPattern();
		copyIntoLStr(_instance, serialize(thisInstance));
		return retVal;
	}
	void QPen_setDashPattern(LStrHandle _instance, const QVector<qreal>& pattern) {
		QPen thisInstance = deserialize<QPen>(copyFromLStr(_instance));
		thisInstance.setDashPattern(pattern);
		copyIntoLStr(_instance, serialize(thisInstance));
		
	}
	QByteArray QPixmap_QPixmap(const QString& fileName) {return serialize(QPixmap(fileName));}
	QSize QPixmap_size(LStrHandle _instance) {
		QPixmap thisInstance = deserialize<QPixmap>(copyFromLStr(_instance));
		QSize retVal = thisInstance.size();
		return retVal;
	}
	void QApplication_setStyleSheet(QApplication* _instance, const QString& sheet) {_instance->setStyleSheet(sheet);}
	QString QApplication_styleSheet(QApplication* _instance) {return _instance->styleSheet();}
	QWidget* QWidget_QWidget(const char* _className) {return newLQObject<QWidget>(_className);}
	QList<QAction*> QWidget_actions(QWidget* _instance) {return _instance->actions();}
	void QWidget_addActions(QWidget* _instance, const QList<QAction*>& actions) {_instance->addActions(actions);}
	Qt::ContextMenuPolicy QWidget_contextMenuPolicy(QWidget* _instance) {return _instance->contextMenuPolicy();}
	Qt::FocusPolicy QWidget_focusPolicy(QWidget* _instance) {return _instance->focusPolicy();}
	QByteArray QWidget_font(QWidget* _instance) {return serialize(_instance->font());}
	QRect QWidget_geometry(QWidget* _instance) {return _instance->geometry();}
	QLayout* QWidget_layout(QWidget* _instance) {return _instance->layout();}
	bool QWidget_isEnabled(QWidget* _instance) {return _instance->isEnabled();}
	bool QWidget_isVisible(QWidget* _instance) {return _instance->isVisible();}
	QSize QWidget_minimumSize(QWidget* _instance) {return _instance->minimumSize();}
	void QWidget_resize(QWidget* _instance, const QSize& size) {_instance->resize(size);}
	void QWidget_setContextMenuPolicy(QWidget* _instance, Qt::ContextMenuPolicy policy) {_instance->setContextMenuPolicy(policy);}
	void QWidget_setEnabled(QWidget* _instance, bool enabled) {_instance->setEnabled(enabled);}
	void QWidget_setFocusPolicy(QWidget* _instance, Qt::FocusPolicy policy) {_instance->setFocusPolicy(policy);}
	void QWidget_setFont(QWidget* _instance, LStrHandle font) {_instance->setFont(deserialize<QFont>(copyFromLStr(font)));}
	void QWidget_setGeometry(QWidget* _instance, const QRect& geometry) {_instance->setGeometry(geometry);}
	void QWidget_setLayout(QWidget* _instance, QLayout* layout) {_instance->setLayout(layout);}
	void QWidget_setMinimumSize(QWidget* _instance, const QSize& size) {_instance->setMinimumSize(size);}
	void QWidget_setStyleSheet(QWidget* _instance, const QString& styleSheet) {_instance->setStyleSheet(styleSheet);}
	void QWidget_setTabOrder(QWidget* first, QWidget* second) {QWidget::setTabOrder(first, second);}
	void QWidget_setToolTip(QWidget* _instance, const QString& toolTip) {_instance->setToolTip(toolTip);}
	void QWidget_setToolTipDuration(QWidget* _instance, int msec) {_instance->setToolTipDuration(msec);}
	void QWidget_setVisible(QWidget* _instance, bool visible) {_instance->setVisible(visible);}
	void QWidget_setWindowIcon(QWidget* _instance, LStrHandle icon) {_instance->setWindowIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	void QWidget_setWindowOpacity(QWidget* _instance, qreal level) {_instance->setWindowOpacity(level);}
	void QWidget_setWindowTitle(QWidget* _instance, const QString& windowTitle) {_instance->setWindowTitle(windowTitle);}
	QSize QWidget_size(QWidget* _instance) {return _instance->size();}
	QSize QWidget_sizeHint(QWidget* _instance) {return _instance->sizeHint();}
	QString QWidget_styleSheet(QWidget* _instance) {return _instance->styleSheet();}
	QString QWidget_toolTip(QWidget* _instance) {return _instance->toolTip();}
	int QWidget_toolTipDuration(QWidget* _instance) {return _instance->toolTipDuration();}
	QWindow* QWidget_windowHandle(QWidget* _instance) {return _instance->windowHandle();}
	QByteArray QWidget_windowIcon(QWidget* _instance) {return serialize(_instance->windowIcon());}
	qreal QWidget_windowOpacity(QWidget* _instance) {return _instance->windowOpacity();}
	QString QWidget_windowTitle(QWidget* _instance) {return _instance->windowTitle();}
	QComboBox* QComboBox_QComboBox(const char* _className, QWidget* parent) {return newLQObject<QComboBox>(_className, parent);}
	int QComboBox_maxVisibleItems(QComboBox* _instance) {return _instance->maxVisibleItems();}
	void QComboBox_setMaxVisibleItems(QComboBox* _instance, int maxItems) {_instance->setMaxVisibleItems(maxItems);}
	int QComboBox_count(QComboBox* _instance) {return _instance->count();}
	void QComboBox_setMaxCount(QComboBox* _instance, int max) {_instance->setMaxCount(max);}
	int QComboBox_maxCount(QComboBox* _instance) {return _instance->maxCount();}
	bool QComboBox_duplicatesEnabled(QComboBox* _instance) {return _instance->duplicatesEnabled();}
	void QComboBox_setDuplicatesEnabled(QComboBox* _instance, bool enable) {_instance->setDuplicatesEnabled(enable);}
	void QComboBox_setFrame(QComboBox* _instance, bool hasFrame) {_instance->setFrame(hasFrame);}
	bool QComboBox_hasFrame(QComboBox* _instance) {return _instance->hasFrame();}
	int QComboBox_findText(QComboBox* _instance, const QString& text, Qt::MatchFlag flags) {return _instance->findText(text, flags);}
	QComboBox::InsertPolicy QComboBox_insertPolicy(QComboBox* _instance) {return _instance->insertPolicy();}
	void QComboBox_setInsertPolicy(QComboBox* _instance, QComboBox::InsertPolicy policy) {_instance->setInsertPolicy(policy);}
	QComboBox::SizeAdjustPolicy QComboBox_sizeAdjustPolicy(QComboBox* _instance) {return _instance->sizeAdjustPolicy();}
	void QComboBox_setSizeAdjustPolicy(QComboBox* _instance, QComboBox::SizeAdjustPolicy policy) {_instance->setSizeAdjustPolicy(policy);}
	int QComboBox_minimumContentsLength(QComboBox* _instance) {return _instance->minimumContentsLength();}
	void QComboBox_setMinimumContentsLength(QComboBox* _instance, int characters) {_instance->setMinimumContentsLength(characters);}
	QSize QComboBox_iconSize(QComboBox* _instance) {return _instance->iconSize();}
	void QComboBox_setIconSize(QComboBox* _instance, const QSize& size) {_instance->setIconSize(size);}
	bool QComboBox_isEditable(QComboBox* _instance) {return _instance->isEditable();}
	void QComboBox_setEditable(QComboBox* _instance, bool editable) {_instance->setEditable(editable);}
	int QComboBox_currentIndex(QComboBox* _instance) {return _instance->currentIndex();}
	QString QComboBox_currentText(QComboBox* _instance) {return _instance->currentText();}
	QString QComboBox_itemText(QComboBox* _instance, int index) {return _instance->itemText(index);}
	QByteArray QComboBox_itemIcon(QComboBox* _instance, int index) {return serialize(_instance->itemIcon(index));}
	void QComboBox_addItems(QComboBox* _instance, const QStringList& texts) {_instance->addItems(texts);}
	void QComboBox_insertItems(QComboBox* _instance, int index, const QStringList& texts) {_instance->insertItems(index, texts);}
	void QComboBox_insertSeparator(QComboBox* _instance, int index) {_instance->insertSeparator(index);}
	void QComboBox_removeItem(QComboBox* _instance, int index) {_instance->removeItem(index);}
	void QComboBox_setItemText(QComboBox* _instance, int index, const QString& text) {_instance->setItemText(index, text);}
	void QComboBox_setItemIcon(QComboBox* _instance, int index, LStrHandle icon) {_instance->setItemIcon(index, deserialize<QIcon>(copyFromLStr(icon)));}
	void QComboBox_showPopup(QComboBox* _instance) {_instance->showPopup();}
	void QComboBox_hidePopup(QComboBox* _instance) {_instance->hidePopup();}
	void QComboBox_clear(QComboBox* _instance) {_instance->clear();}
	void QComboBox_clearEditText(QComboBox* _instance) {_instance->clearEditText();}
	void QComboBox_setEditText(QComboBox* _instance, const QString& text) {_instance->setEditText(text);}
	void QComboBox_setCurrentIndex(QComboBox* _instance, int index) {_instance->setCurrentIndex(index);}
	void QComboBox_setCurrentText(QComboBox* _instance, const QString& text) {_instance->setCurrentText(text);}
	QFontComboBox* QFontComboBox_QFontComboBox(const char* _className, QWidget* parent) {return newLQObject<QFontComboBox>(_className, parent);}
	void QFontComboBox_setFontFilters(QFontComboBox* _instance, QFontComboBox::FontFilters filters) {_instance->setFontFilters(filters);}
	QFontComboBox::FontFilters QFontComboBox_fontFilters(QFontComboBox* _instance) {return _instance->fontFilters();}
	QByteArray QFontComboBox_currentFont(QFontComboBox* _instance) {return serialize(_instance->currentFont());}
	void QFontComboBox_setCurrentFont(QFontComboBox* _instance, LStrHandle font) {_instance->setCurrentFont(deserialize<QFont>(copyFromLStr(font)));}
	QFrame* QFrame_QFrame(const char* _className, QWidget* parent) {return newLQObject<QFrame>(_className, parent);}
	int QFrame_frameWidth(QFrame* _instance) {return _instance->frameWidth();}
	QFrame::Shape QFrame_frameShape(QFrame* _instance) {return _instance->frameShape();}
	void QFrame_setFrameShape(QFrame* _instance, QFrame::Shape shape) {_instance->setFrameShape(shape);}
	QFrame::Shadow QFrame_frameShadow(QFrame* _instance) {return _instance->frameShadow();}
	void QFrame_setFrameShadow(QFrame* _instance, QFrame::Shadow shadow) {_instance->setFrameShadow(shadow);}
	int QFrame_lineWidth(QFrame* _instance) {return _instance->lineWidth();}
	void QFrame_setLineWidth(QFrame* _instance, int width) {_instance->setLineWidth(width);}
	int QFrame_midLineWidth(QFrame* _instance) {return _instance->midLineWidth();}
	void QFrame_setMidLineWidth(QFrame* _instance, int width) {_instance->setMidLineWidth(width);}
	QRect QFrame_frameRect(QFrame* _instance) {return _instance->frameRect();}
	void QFrame_setFrameRect(QFrame* _instance, const QRect& rectangle) {_instance->setFrameRect(rectangle);}
	QLabel* QLabel_QLabel(const char* _className, const QString& text) {return newLQObject<QLabel>(_className, text);}
	Qt::Alignment QLabel_alignment(QLabel* _instance) {return _instance->alignment();}
	void QLabel_setAlignment(QLabel* _instance, Qt::AlignmentFlag alignment) {_instance->setAlignment(alignment);}
	void QLabel_setPixmap(QLabel* _instance, LStrHandle pixmap) {_instance->setPixmap(deserialize<QPixmap>(copyFromLStr(pixmap)));}
	void QLabel_setText(QLabel* _instance, const QString& text) {_instance->setText(text);}
	void QLabel_setWordWrap(QLabel* _instance, bool wordWrap) {_instance->setWordWrap(wordWrap);}
	QString QLabel_text(QLabel* _instance) {return _instance->text();}
	bool QLabel_wordWrap(QLabel* _instance) {return _instance->wordWrap();}
	QByteArray QAbstractButton_icon(QAbstractButton* _instance) {return serialize(_instance->icon());}
	bool QAbstractButton_isDown(QAbstractButton* _instance) {return _instance->isDown();}
	void QAbstractButton_setDown(QAbstractButton* _instance, bool down) {_instance->setDown(down);}
	void QAbstractButton_setIcon(QAbstractButton* _instance, LStrHandle icon) {_instance->setIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	void QAbstractButton_setText(QAbstractButton* _instance, const QString& text) {_instance->setText(text);}
	QString QAbstractButton_text(QAbstractButton* _instance) {return _instance->text();}
	QPushButton* QPushButton_QPushButton(const char* _className, const QString& text) {return newLQObject<QPushButton>(_className, text);}
	bool QPushButton_isFlat(QPushButton* _instance) {return _instance->isFlat();}
	void QPushButton_setFlat(QPushButton* _instance, bool flat) {_instance->setFlat(flat);}
	QWidget* QLayout_parentWidget(QLayout* _instance) {return _instance->parentWidget();}
	void QLayout_removeWidget(QLayout* _instance, QWidget* widget) {_instance->removeWidget(widget);}
	QBoxLayout* QBoxLayout_QBoxLayout(const char* _className, QBoxLayout::Direction direction, QWidget* parent) {return newLQObject<QBoxLayout>(_className, direction, parent);}
	void QBoxLayout_addLayout(QBoxLayout* _instance, QLayout* layout, int stretch) {_instance->addLayout(layout, stretch);}
	void QBoxLayout_addSpacing(QBoxLayout* _instance, int size) {_instance->addSpacing(size);}
	void QBoxLayout_addStretch(QBoxLayout* _instance, int stretch) {_instance->addStretch(stretch);}
	void QBoxLayout_addStrut(QBoxLayout* _instance, int size) {_instance->addStrut(size);}
	void QBoxLayout_addWidget(QBoxLayout* _instance, QWidget* widget, int stretch) {_instance->addWidget(widget, stretch);}
	Qt::ScrollBarPolicy QAbstractScrollArea_verticalScrollBarPolicy(QAbstractScrollArea* _instance) {return _instance->verticalScrollBarPolicy();}
	void QAbstractScrollArea_setVerticalScrollBarPolicy(QAbstractScrollArea* _instance, Qt::ScrollBarPolicy policy) {_instance->setVerticalScrollBarPolicy(policy);}
	Qt::ScrollBarPolicy QAbstractScrollArea_horizontalScrollBarPolicy(QAbstractScrollArea* _instance) {return _instance->horizontalScrollBarPolicy();}
	void QAbstractScrollArea_setHorizontalScrollBarPolicy(QAbstractScrollArea* _instance, Qt::ScrollBarPolicy policy) {_instance->setHorizontalScrollBarPolicy(policy);}
	QWidget* QAbstractScrollArea_cornerWidget(QAbstractScrollArea* _instance) {return _instance->cornerWidget();}
	void QAbstractScrollArea_setCornerWidget(QAbstractScrollArea* _instance, QWidget* widget) {_instance->setCornerWidget(widget);}
	QAbstractScrollArea::SizeAdjustPolicy QAbstractScrollArea_sizeAdjustPolicy(QAbstractScrollArea* _instance) {return _instance->sizeAdjustPolicy();}
	void QAbstractScrollArea_setSizeAdjustPolicy(QAbstractScrollArea* _instance, QAbstractScrollArea::SizeAdjustPolicy policy) {_instance->setSizeAdjustPolicy(policy);}
	QCheckBox* QCheckBox_QCheckBox(const char* _className, const QString& text, QWidget* parent) {return newLQObject<QCheckBox>(_className, text, parent);}
	void QCheckBox_setTristate(QCheckBox* _instance, bool y) {_instance->setTristate(y);}
	bool QCheckBox_isTristate(QCheckBox* _instance) {return _instance->isTristate();}
	Qt::CheckState QCheckBox_checkState(QCheckBox* _instance) {return _instance->checkState();}
	void QCheckBox_setCheckState(QCheckBox* _instance, Qt::CheckState state) {_instance->setCheckState(state);}
	QGroupBox* QGroupBox_QGroupBox(const char* _className, const QString& title, QWidget* parent) {return newLQObject<QGroupBox>(_className, title, parent);}
	QString QGroupBox_title(QGroupBox* _instance) {return _instance->title();}
	void QGroupBox_setTitle(QGroupBox* _instance, const QString& title) {_instance->setTitle(title);}
	Qt::Alignment QGroupBox_alignment(QGroupBox* _instance) {return _instance->alignment();}
	void QGroupBox_setAlignment(QGroupBox* _instance, Qt::AlignmentFlag alignment) {_instance->setAlignment(alignment);}
	bool QGroupBox_isFlat(QGroupBox* _instance) {return _instance->isFlat();}
	void QGroupBox_setFlat(QGroupBox* _instance, bool flat) {_instance->setFlat(flat);}
	bool QGroupBox_isCheckable(QGroupBox* _instance) {return _instance->isCheckable();}
	void QGroupBox_setCheckable(QGroupBox* _instance, bool checkable) {_instance->setCheckable(checkable);}
	bool QGroupBox_isChecked(QGroupBox* _instance) {return _instance->isChecked();}
	void QGroupBox_setChecked(QGroupBox* _instance, bool checked) {_instance->setChecked(checked);}
	QSplitter* QSplitter_QSplitter(const char* _className, Qt::Orientation orientation, QWidget* parent) {return newLQObject<QSplitter>(_className, orientation, parent);}
	void QSplitter_addWidget(QSplitter* _instance, QWidget* widget) {_instance->addWidget(widget);}
	void QSplitter_insertWidget(QSplitter* _instance, int index, QWidget* widget) {_instance->insertWidget(index, widget);}
	void QSplitter_setOrientation(QSplitter* _instance, Qt::Orientation orientation) {_instance->setOrientation(orientation);}
	Qt::Orientation QSplitter_orientation(QSplitter* _instance) {return _instance->orientation();}
	void QSplitter_setChildrenCollapsible(QSplitter* _instance, bool collapsible) {_instance->setChildrenCollapsible(collapsible);}
	bool QSplitter_childrenCollapsible(QSplitter* _instance) {return _instance->childrenCollapsible();}
	void QSplitter_setCollapsible(QSplitter* _instance, int index, bool collapsible) {_instance->setCollapsible(index, collapsible);}
	bool QSplitter_isCollapsible(QSplitter* _instance, int index) {return _instance->isCollapsible(index);}
	void QSplitter_setOpaqueResize(QSplitter* _instance, bool opaque) {_instance->setOpaqueResize(opaque);}
	bool QSplitter_opaqueResize(QSplitter* _instance) {return _instance->opaqueResize();}
	QList<int> QSplitter_sizes(QSplitter* _instance) {return _instance->sizes();}
	void QSplitter_setSizes(QSplitter* _instance, const QList<int>& list) {_instance->setSizes(list);}
	QByteArray QSplitter_saveState(QSplitter* _instance) {return _instance->saveState();}
	bool QSplitter_restoreState(QSplitter* _instance, const QByteArray& state) {return _instance->restoreState(state);}
	int QSplitter_handleWidth(QSplitter* _instance) {return _instance->handleWidth();}
	void QSplitter_setHandleWidth(QSplitter* _instance, int width) {_instance->setHandleWidth(width);}
	int QSplitter_indexOf(QSplitter* _instance, QWidget* widget) {return _instance->indexOf(widget);}
	QWidget* QSplitter_widget(QSplitter* _instance, int index) {return _instance->widget(index);}
	int QSplitter_count(QSplitter* _instance) {return _instance->count();}
	void QSplitter_setStretchFactor(QSplitter* _instance, int index, int stretch) {_instance->setStretchFactor(index, stretch);}
	QTabWidget* QTabWidget_QTabWidget(const char* _className, QWidget* parent) {return newLQObject<QTabWidget>(_className, parent);}
	int QTabWidget_addTab(QTabWidget* _instance, QWidget* widget, LStrHandle icon, const QString& label) {return _instance->addTab(widget, deserialize<QIcon>(copyFromLStr(icon)), label);}
	int QTabWidget_insertTab(QTabWidget* _instance, int index, QWidget* widget, LStrHandle icon, const QString& label) {return _instance->insertTab(index, widget, deserialize<QIcon>(copyFromLStr(icon)), label);}
	void QTabWidget_removeTab(QTabWidget* _instance, int index) {_instance->removeTab(index);}
	bool QTabWidget_isTabEnabled(QTabWidget* _instance, int index) {return _instance->isTabEnabled(index);}
	void QTabWidget_setTabEnabled(QTabWidget* _instance, int index, bool enabled) {_instance->setTabEnabled(index, enabled);}
	QString QTabWidget_tabText(QTabWidget* _instance, int index) {return _instance->tabText(index);}
	void QTabWidget_setTabText(QTabWidget* _instance, int index, const QString& text) {_instance->setTabText(index, text);}
	QByteArray QTabWidget_tabIcon(QTabWidget* _instance, int index) {return serialize(_instance->tabIcon(index));}
	void QTabWidget_setTabIcon(QTabWidget* _instance, int index, LStrHandle icon) {_instance->setTabIcon(index, deserialize<QIcon>(copyFromLStr(icon)));}
	void QTabWidget_setTabToolTip(QTabWidget* _instance, int index, const QString& tip) {_instance->setTabToolTip(index, tip);}
	QString QTabWidget_tabToolTip(QTabWidget* _instance, int index) {return _instance->tabToolTip(index);}
	void QTabWidget_setTabWhatsThis(QTabWidget* _instance, int index, const QString& text) {_instance->setTabWhatsThis(index, text);}
	QString QTabWidget_tabWhatsThis(QTabWidget* _instance, int index) {return _instance->tabWhatsThis(index);}
	int QTabWidget_currentIndex(QTabWidget* _instance) {return _instance->currentIndex();}
	QWidget* QTabWidget_currentWidget(QTabWidget* _instance) {return _instance->currentWidget();}
	QWidget* QTabWidget_widget(QTabWidget* _instance, int index) {return _instance->widget(index);}
	int QTabWidget_indexOf(QTabWidget* _instance, QWidget* widget) {return _instance->indexOf(widget);}
	int QTabWidget_count(QTabWidget* _instance) {return _instance->count();}
	QTabWidget::TabPosition QTabWidget_tabPosition(QTabWidget* _instance) {return _instance->tabPosition();}
	void QTabWidget_setTabPosition(QTabWidget* _instance, QTabWidget::TabPosition position) {_instance->setTabPosition(position);}
	bool QTabWidget_tabsClosable(QTabWidget* _instance) {return _instance->tabsClosable();}
	void QTabWidget_setTabsClosable(QTabWidget* _instance, bool closable) {_instance->setTabsClosable(closable);}
	bool QTabWidget_isMovable(QTabWidget* _instance) {return _instance->isMovable();}
	void QTabWidget_setMovable(QTabWidget* _instance, bool movable) {_instance->setMovable(movable);}
	QTabWidget::TabShape QTabWidget_tabShape(QTabWidget* _instance) {return _instance->tabShape();}
	void QTabWidget_setTabShape(QTabWidget* _instance, QTabWidget::TabShape shape) {_instance->setTabShape(shape);}
	void QTabWidget_setCornerWidget(QTabWidget* _instance, QWidget* widget, Qt::Corner corner) {_instance->setCornerWidget(widget, corner);}
	QWidget* QTabWidget_cornerWidget(QTabWidget* _instance, Qt::Corner corner) {return _instance->cornerWidget(corner);}
	Qt::TextElideMode QTabWidget_elideMode(QTabWidget* _instance) {return _instance->elideMode();}
	void QTabWidget_setElideMode(QTabWidget* _instance, Qt::TextElideMode elideMode) {_instance->setElideMode(elideMode);}
	QSize QTabWidget_iconSize(QTabWidget* _instance) {return _instance->iconSize();}
	void QTabWidget_setIconSize(QTabWidget* _instance, const QSize& size) {_instance->setIconSize(size);}
	bool QTabWidget_usesScrollButtons(QTabWidget* _instance) {return _instance->usesScrollButtons();}
	void QTabWidget_setUsesScrollButtons(QTabWidget* _instance, bool useButtons) {_instance->setUsesScrollButtons(useButtons);}
	bool QTabWidget_documentMode(QTabWidget* _instance) {return _instance->documentMode();}
	void QTabWidget_setDocumentMode(QTabWidget* _instance, bool set) {_instance->setDocumentMode(set);}
	bool QTabWidget_tabBarAutoHide(QTabWidget* _instance) {return _instance->tabBarAutoHide();}
	void QTabWidget_setTabBarAutoHide(QTabWidget* _instance, bool enabled) {_instance->setTabBarAutoHide(enabled);}
	void QTabWidget_clear(QTabWidget* _instance) {_instance->clear();}
	void QTabWidget_setCurrentIndex(QTabWidget* _instance, int index) {_instance->setCurrentIndex(index);}
	void QTabWidget_setCurrentWidget(QTabWidget* _instance, QWidget* widget) {_instance->setCurrentWidget(widget);}
	QAction* QAction_QAction(const char* _className, LStrHandle icon, const QString& text, QObject* parent) {return newLQObject<QAction>(_className, deserialize<QIcon>(copyFromLStr(icon)), text, parent);}
	void QAction_setIcon(QAction* _instance, LStrHandle icon) {_instance->setIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	QByteArray QAction_icon(QAction* _instance) {return serialize(_instance->icon());}
	void QAction_setText(QAction* _instance, const QString& text) {_instance->setText(text);}
	QString QAction_text(QAction* _instance) {return _instance->text();}
	void QAction_setIconText(QAction* _instance, const QString& text) {_instance->setIconText(text);}
	QString QAction_iconText(QAction* _instance) {return _instance->iconText();}
	void QAction_setToolTip(QAction* _instance, const QString& tip) {_instance->setToolTip(tip);}
	QString QAction_toolTip(QAction* _instance) {return _instance->toolTip();}
	void QAction_setStatusTip(QAction* _instance, const QString& statusTip) {_instance->setStatusTip(statusTip);}
	QString QAction_statusTip(QAction* _instance) {return _instance->statusTip();}
	void QAction_setWhatsThis(QAction* _instance, const QString& what) {_instance->setWhatsThis(what);}
	QString QAction_whatsThis(QAction* _instance) {return _instance->whatsThis();}
	void QAction_setPriority(QAction* _instance, QAction::Priority priority) {_instance->setPriority(priority);}
	QAction::Priority QAction_priority(QAction* _instance) {return _instance->priority();}
	void QAction_setSeparator(QAction* _instance, bool isSeparator) {_instance->setSeparator(isSeparator);}
	bool QAction_isSeparator(QAction* _instance) {return _instance->isSeparator();}
	void QAction_setShortcutContext(QAction* _instance, Qt::ShortcutContext context) {_instance->setShortcutContext(context);}
	Qt::ShortcutContext QAction_shortcutContext(QAction* _instance) {return _instance->shortcutContext();}
	void QAction_setAutoRepeat(QAction* _instance, bool autoRepeat) {_instance->setAutoRepeat(autoRepeat);}
	bool QAction_autoRepeat(QAction* _instance) {return _instance->autoRepeat();}
	void QAction_setFont(QAction* _instance, LStrHandle font) {_instance->setFont(deserialize<QFont>(copyFromLStr(font)));}
	QByteArray QAction_font(QAction* _instance) {return serialize(_instance->font());}
	void QAction_setCheckable(QAction* _instance, bool checkable) {_instance->setCheckable(checkable);}
	bool QAction_isCheckable(QAction* _instance) {return _instance->isCheckable();}
	bool QAction_isChecked(QAction* _instance) {return _instance->isChecked();}
	bool QAction_isEnabled(QAction* _instance) {return _instance->isEnabled();}
	bool QAction_isVisible(QAction* _instance) {return _instance->isVisible();}
	void QAction_activate(QAction* _instance, QAction::ActionEvent event) {_instance->activate(event);}
	bool QAction_showStatusText(QAction* _instance, QWidget* widget) {return _instance->showStatusText(widget);}
	void QAction_setMenuRole(QAction* _instance, QAction::MenuRole menuRole) {_instance->setMenuRole(menuRole);}
	QAction::MenuRole QAction_menuRole(QAction* _instance) {return _instance->menuRole();}
	void QAction_setIconVisibleInMenu(QAction* _instance, bool visible) {_instance->setIconVisibleInMenu(visible);}
	bool QAction_isIconVisibleInMenu(QAction* _instance) {return _instance->isIconVisibleInMenu();}
	QWidget* QAction_parentWidget(QAction* _instance) {return _instance->parentWidget();}
	void QAction_trigger(QAction* _instance) {_instance->trigger();}
	void QAction_hover(QAction* _instance) {_instance->hover();}
	void QAction_setChecked(QAction* _instance, bool checked) {_instance->setChecked(checked);}
	void QAction_toggle(QAction* _instance) {_instance->toggle();}
	void QAction_setEnabled(QAction* _instance, bool enabled) {_instance->setEnabled(enabled);}
	void QAction_setVisible(QAction* _instance, bool visible) {_instance->setVisible(visible);}
	QScrollArea* QScrollArea_QScrollArea(const char* _className, QWidget* parent) {return newLQObject<QScrollArea>(_className, parent);}
	QWidget* QScrollArea_widget(QScrollArea* _instance) {return _instance->widget();}
	void QScrollArea_setWidget(QScrollArea* _instance, QWidget* widget) {_instance->setWidget(widget);}
	QWidget* QScrollArea_takeWidget(QScrollArea* _instance) {return _instance->takeWidget();}
	bool QScrollArea_widgetResizable(QScrollArea* _instance) {return _instance->widgetResizable();}
	void QScrollArea_setWidgetResizable(QScrollArea* _instance, bool resizable) {_instance->setWidgetResizable(resizable);}
	Qt::Alignment QScrollArea_alignment(QScrollArea* _instance) {return _instance->alignment();}
	void QScrollArea_setAlignment(QScrollArea* _instance, Qt::AlignmentFlag alignment) {_instance->setAlignment(alignment);}
	void QScrollArea_ensureVisible(QScrollArea* _instance, int x, int y, int xmargin, int ymargin) {_instance->ensureVisible(x, y, xmargin, ymargin);}
	void QScrollArea_ensureWidgetVisible(QScrollArea* _instance, QWidget* childWidget, int xmargin, int ymargin) {_instance->ensureWidgetVisible(childWidget, xmargin, ymargin);}
	QDialog* QDialog_QDialog(const char* _className, QWidget* parent) {return newLQObject<QDialog>(_className, parent);}
	int QDialog_result(QDialog* _instance) {return _instance->result();}
	void QDialog_setSizeGripEnabled(QDialog* _instance, bool enabled) {_instance->setSizeGripEnabled(enabled);}
	bool QDialog_isSizeGripEnabled(QDialog* _instance) {return _instance->isSizeGripEnabled();}
	void QDialog_setModal(QDialog* _instance, bool modal) {_instance->setModal(modal);}
	void QDialog_setResult(QDialog* _instance, int result) {_instance->setResult(result);}
	void QDialog_open(QDialog* _instance) {_instance->open();}
	int QDialog_exec(QDialog* _instance) {return _instance->exec();}
	void QDialog_done(QDialog* _instance, int result) {_instance->done(result);}
	void QDialog_accept(QDialog* _instance) {_instance->accept();}
	void QDialog_reject(QDialog* _instance) {_instance->reject();}
	QFileDialog* QFileDialog_QFileDialog(const char* _className, QWidget* parent, const QString& caption, const QString& directory, const QString& filter) {return newLQObject<QFileDialog>(_className, parent, caption, directory, filter);}
	void QFileDialog_setDirectory(QFileDialog* _instance, const QString& directory) {_instance->setDirectory(directory);}
	void QFileDialog_selectFile(QFileDialog* _instance, const QString& filename) {_instance->selectFile(filename);}
	QStringList QFileDialog_selectedFiles(QFileDialog* _instance) {return _instance->selectedFiles();}
	void QFileDialog_setNameFilterDetailsVisible(QFileDialog* _instance, bool enabled) {_instance->setNameFilterDetailsVisible(enabled);}
	bool QFileDialog_isNameFilterDetailsVisible(QFileDialog* _instance) {return _instance->isNameFilterDetailsVisible();}
	void QFileDialog_setNameFilter(QFileDialog* _instance, const QString& filter) {_instance->setNameFilter(filter);}
	void QFileDialog_setNameFilters(QFileDialog* _instance, const QStringList& filters) {_instance->setNameFilters(filters);}
	QStringList QFileDialog_nameFilters(QFileDialog* _instance) {return _instance->nameFilters();}
	void QFileDialog_selectNameFilter(QFileDialog* _instance, const QString& filter) {_instance->selectNameFilter(filter);}
	QString QFileDialog_selectedNameFilter(QFileDialog* _instance) {return _instance->selectedNameFilter();}
	void QFileDialog_setMimeTypeFilters(QFileDialog* _instance, const QStringList& filters) {_instance->setMimeTypeFilters(filters);}
	QStringList QFileDialog_mimeTypeFilters(QFileDialog* _instance) {return _instance->mimeTypeFilters();}
	void QFileDialog_selectMimeTypeFilter(QFileDialog* _instance, const QString& filter) {_instance->selectMimeTypeFilter(filter);}
	void QFileDialog_setViewMode(QFileDialog* _instance, QFileDialog::ViewMode mode) {_instance->setViewMode(mode);}
	QFileDialog::ViewMode QFileDialog_viewMode(QFileDialog* _instance) {return _instance->viewMode();}
	void QFileDialog_setFileMode(QFileDialog* _instance, QFileDialog::FileMode mode) {_instance->setFileMode(mode);}
	QFileDialog::FileMode QFileDialog_fileMode(QFileDialog* _instance) {return _instance->fileMode();}
	void QFileDialog_setAcceptMode(QFileDialog* _instance, QFileDialog::AcceptMode mode) {_instance->setAcceptMode(mode);}
	QFileDialog::AcceptMode QFileDialog_acceptMode(QFileDialog* _instance) {return _instance->acceptMode();}
	void QFileDialog_setReadOnly(QFileDialog* _instance, bool readOnly) {_instance->setReadOnly(readOnly);}
	bool QFileDialog_isReadOnly(QFileDialog* _instance) {return _instance->isReadOnly();}
	void QFileDialog_setResolveSymlinks(QFileDialog* _instance, bool remove) {_instance->setResolveSymlinks(remove);}
	bool QFileDialog_resolveSymlinks(QFileDialog* _instance) {return _instance->resolveSymlinks();}
	void QFileDialog_setConfirmOverwrite(QFileDialog* _instance, bool confirm) {_instance->setConfirmOverwrite(confirm);}
	bool QFileDialog_confirmOverwrite(QFileDialog* _instance) {return _instance->confirmOverwrite();}
	void QFileDialog_setDefaultSuffix(QFileDialog* _instance, const QString& suffix) {_instance->setDefaultSuffix(suffix);}
	QString QFileDialog_defaultSuffix(QFileDialog* _instance) {return _instance->defaultSuffix();}
	void QFileDialog_setHistory(QFileDialog* _instance, const QStringList& paths) {_instance->setHistory(paths);}
	QStringList QFileDialog_history(QFileDialog* _instance) {return _instance->history();}
	void QFileDialog_setLabelText(QFileDialog* _instance, QFileDialog::DialogLabel label, const QString& text) {_instance->setLabelText(label, text);}
	QString QFileDialog_labelText(QFileDialog* _instance, QFileDialog::DialogLabel label) {return _instance->labelText(label);}
	void QFileDialog_setOption(QFileDialog* _instance, QFileDialog::Option option, bool on) {_instance->setOption(option, on);}
	bool QFileDialog_testOption(QFileDialog* _instance, QFileDialog::Option option) {return _instance->testOption(option);}
	void QFileDialog_setOptions(QFileDialog* _instance, QFileDialog::Option options) {_instance->setOptions(options);}
	QFileDialog::Options QFileDialog_options(QFileDialog* _instance) {return _instance->options();}
	QString QFileDialog_getOpenFileName(QWidget* parent, const QString& caption, const QString& dir, const QString& filter) {return QFileDialog::getOpenFileName(parent, caption, dir, filter);}
	QString QFileDialog_getSaveFileName(QWidget* parent, const QString& caption, const QString& dir, const QString& filter) {return QFileDialog::getSaveFileName(parent, caption, dir, filter);}
	QString QFileDialog_getExistingDirectory(QWidget* parent, const QString& caption, const QString& dir, QFileDialog::Option options) {return QFileDialog::getExistingDirectory(parent, caption, dir, options);}
	QStringList QFileDialog_getOpenFileNames(QWidget* parent, const QString& caption, const QString& dir, const QString& filter) {return QFileDialog::getOpenFileNames(parent, caption, dir, filter);}
	QFontDialog* QFontDialog_QFontDialog(const char* _className, LStrHandle initial, QWidget* parent) {return newLQObject<QFontDialog>(_className, deserialize<QFont>(copyFromLStr(initial)), parent);}
	void QFontDialog_setCurrentFont(QFontDialog* _instance, LStrHandle font) {_instance->setCurrentFont(deserialize<QFont>(copyFromLStr(font)));}
	QByteArray QFontDialog_currentFont(QFontDialog* _instance) {return serialize(_instance->currentFont());}
	QByteArray QFontDialog_selectedFont(QFontDialog* _instance) {return serialize(_instance->selectedFont());}
	bool QFontDialog_testOption(QFontDialog* _instance, QFontDialog::FontDialogOption option) {return _instance->testOption(option);}
	void QFontDialog_setOptions(QFontDialog* _instance, QFontDialog::FontDialogOption options) {_instance->setOptions(options);}
	QFontDialog::FontDialogOptions QFontDialog_options(QFontDialog* _instance) {return _instance->options();}
	QProgressDialog* QProgressDialog_QProgressDialog(const char* _className, QWidget* parent) {return newLQObject<QProgressDialog>(_className, parent);}
	bool QProgressDialog_wasCanceled(QProgressDialog* _instance) {return _instance->wasCanceled();}
	int QProgressDialog_minimum(QProgressDialog* _instance) {return _instance->minimum();}
	int QProgressDialog_maximum(QProgressDialog* _instance) {return _instance->maximum();}
	int QProgressDialog_value(QProgressDialog* _instance) {return _instance->value();}
	QString QProgressDialog_labelText(QProgressDialog* _instance) {return _instance->labelText();}
	int QProgressDialog_minimumDuration(QProgressDialog* _instance) {return _instance->minimumDuration();}
	void QProgressDialog_setAutoReset(QProgressDialog* _instance, bool reset) {_instance->setAutoReset(reset);}
	bool QProgressDialog_autoReset(QProgressDialog* _instance) {return _instance->autoReset();}
	void QProgressDialog_setAutoClose(QProgressDialog* _instance, bool close) {_instance->setAutoClose(close);}
	bool QProgressDialog_autoClose(QProgressDialog* _instance) {return _instance->autoClose();}
	void QProgressDialog_cancel(QProgressDialog* _instance) {_instance->cancel();}
	void QProgressDialog_reset(QProgressDialog* _instance) {_instance->reset();}
	void QProgressDialog_setMaximum(QProgressDialog* _instance, int maximum) {_instance->setMaximum(maximum);}
	void QProgressDialog_setMinimum(QProgressDialog* _instance, int minimum) {_instance->setMinimum(minimum);}
	void QProgressDialog_setValue(QProgressDialog* _instance, int progress) {_instance->setValue(progress);}
	void QProgressDialog_setLabelText(QProgressDialog* _instance, const QString& text) {_instance->setLabelText(text);}
	void QProgressDialog_setCancelButtonText(QProgressDialog* _instance, const QString& text) {_instance->setCancelButtonText(text);}
	void QProgressDialog_setMinimumDuration(QProgressDialog* _instance, int ms) {_instance->setMinimumDuration(ms);}
	QMessageBox* QMessageBox_QMessageBox(const char* _className, QWidget* parent) {return newLQObject<QMessageBox>(_className, parent);}
	void QMessageBox_setStandardButtons(QMessageBox* _instance, QMessageBox::StandardButton buttons) {_instance->setStandardButtons(buttons);}
	QMessageBox::StandardButtons QMessageBox_standardButtons(QMessageBox* _instance) {return _instance->standardButtons();}
	void QMessageBox_setDefaultButton(QMessageBox* _instance, QMessageBox::StandardButton button) {_instance->setDefaultButton(button);}
	void QMessageBox_setEscapeButton(QMessageBox* _instance, QMessageBox::StandardButton button) {_instance->setEscapeButton(button);}
	QString QMessageBox_text(QMessageBox* _instance) {return _instance->text();}
	void QMessageBox_setText(QMessageBox* _instance, const QString& text) {_instance->setText(text);}
	QMessageBox::Icon QMessageBox_icon(QMessageBox* _instance) {return _instance->icon();}
	void QMessageBox_setIcon(QMessageBox* _instance, QMessageBox::Icon icon) {_instance->setIcon(icon);}
	QByteArray QMessageBox_iconPixmap(QMessageBox* _instance) {return serialize(_instance->iconPixmap());}
	void QMessageBox_setIconPixmap(QMessageBox* _instance, LStrHandle pixmap) {_instance->setIconPixmap(deserialize<QPixmap>(copyFromLStr(pixmap)));}
	Qt::TextFormat QMessageBox_textFormat(QMessageBox* _instance) {return _instance->textFormat();}
	void QMessageBox_setTextFormat(QMessageBox* _instance, Qt::TextFormat format) {_instance->setTextFormat(format);}
	void QMessageBox_setTextInteractionFlags(QMessageBox* _instance, Qt::TextInteractionFlag flags) {_instance->setTextInteractionFlags(flags);}
	Qt::TextInteractionFlags QMessageBox_textInteractionFlags(QMessageBox* _instance) {return _instance->textInteractionFlags();}
	void QMessageBox_setCheckBox(QMessageBox* _instance, QCheckBox* checkbox) {_instance->setCheckBox(checkbox);}
	QCheckBox* QMessageBox_checkBox(QMessageBox* _instance) {return _instance->checkBox();}
	QMessageBox::StandardButton QMessageBox_information(QWidget* parent, const QString& title, const QString& text, QMessageBox::StandardButton buttons, QMessageBox::StandardButton defaultButton) {return QMessageBox::information(parent, title, text, buttons, defaultButton);}
	QMessageBox::StandardButton QMessageBox_question(QWidget* parent, const QString& title, const QString& text, QMessageBox::StandardButton buttons, QMessageBox::StandardButton defaultButton) {return QMessageBox::question(parent, title, text, buttons, defaultButton);} // TODO: Investigate why compiler (GCC 4.9.2 AND MSVC 2013) picks wrong overload (the obsolete one -- I had to comment it out in qmessagebox.h)
	QMessageBox::StandardButton QMessageBox_warning(QWidget* parent, const QString& title, const QString& text, QMessageBox::StandardButton buttons, QMessageBox::StandardButton defaultButton) {return QMessageBox::warning(parent, title, text, buttons, defaultButton);} // TODO: Investigate why compiler (GCC 4.9.2 AND MSVC 2013) picks wrong overload (the obsolete one -- I had to comment it out in qmessagebox.h)
	QMessageBox::StandardButton QMessageBox_critical(QWidget* parent, const QString& title, const QString& text, QMessageBox::StandardButton buttons, QMessageBox::StandardButton defaultButton) {return QMessageBox::critical(parent, title, text, buttons, defaultButton);} // TODO: Investigate why compiler (GCC 4.9.2 AND MSVC 2013) picks wrong overload (the obsolete one -- I had to comment it out in qmessagebox.h)
	void QMessageBox_about(QWidget* parent, const QString& title, const QString& text) {QMessageBox::about(parent, title, text);}
	void QMessageBox_aboutQt(QWidget* parent, const QString& title) {QMessageBox::aboutQt(parent, title);}
	QString QMessageBox_informativeText(QMessageBox* _instance) {return _instance->informativeText();}
	void QMessageBox_setInformativeText(QMessageBox* _instance, const QString& text) {_instance->setInformativeText(text);}
	QString QMessageBox_detailedText(QMessageBox* _instance) {return _instance->detailedText();}
	void QMessageBox_setDetailedText(QMessageBox* _instance, const QString& text) {_instance->setDetailedText(text);}
	QByteArray QMessageBox_standardIcon(QMessageBox::Icon icon) {return serialize(QMessageBox::standardIcon(icon));} // TODO: Investigate why the generator didn't do this properly
	QToolBox* QToolBox_QToolBox(const char* _className, QWidget* parent) {return newLQObject<QToolBox>(_className, parent);}
	int QToolBox_addItem(QToolBox* _instance, QWidget* widget, LStrHandle icon, const QString& text) {return _instance->addItem(widget, deserialize<QIcon>(copyFromLStr(icon)), text);}
	int QToolBox_insertItem(QToolBox* _instance, int index, QWidget* widget, LStrHandle icon, const QString& text) {return _instance->insertItem(index, widget, deserialize<QIcon>(copyFromLStr(icon)), text);}
	void QToolBox_removeItem(QToolBox* _instance, int index) {_instance->removeItem(index);}
	void QToolBox_setItemEnabled(QToolBox* _instance, int index, bool enabled) {_instance->setItemEnabled(index, enabled);}
	bool QToolBox_isItemEnabled(QToolBox* _instance, int index) {return _instance->isItemEnabled(index);}
	void QToolBox_setItemText(QToolBox* _instance, int index, const QString& text) {_instance->setItemText(index, text);}
	QString QToolBox_itemText(QToolBox* _instance, int index) {return _instance->itemText(index);}
	void QToolBox_setItemIcon(QToolBox* _instance, int index, LStrHandle icon) {_instance->setItemIcon(index, deserialize<QIcon>(copyFromLStr(icon)));}
	QByteArray QToolBox_itemIcon(QToolBox* _instance, int index) {return serialize(_instance->itemIcon(index));}
	void QToolBox_setItemToolTip(QToolBox* _instance, int index, const QString& toolTip) {_instance->setItemToolTip(index, toolTip);}
	QString QToolBox_itemToolTip(QToolBox* _instance, int index) {return _instance->itemToolTip(index);}
	int QToolBox_currentIndex(QToolBox* _instance) {return _instance->currentIndex();}
	QWidget* QToolBox_currentWidget(QToolBox* _instance) {return _instance->currentWidget();}
	QWidget* QToolBox_widget(QToolBox* _instance, int index) {return _instance->widget(index);}
	int QToolBox_indexOf(QToolBox* _instance, QWidget* widget) {return _instance->indexOf(widget);}
	int QToolBox_count(QToolBox* _instance) {return _instance->count();}
	void QToolBox_setCurrentIndex(QToolBox* _instance, int index) {_instance->setCurrentIndex(index);}
	void QToolBox_setCurrentWidget(QToolBox* _instance, QWidget* widget) {_instance->setCurrentWidget(widget);}
	QGridLayout* QGridLayout_QGridLayout(const char* _className) {return newLQObject<QGridLayout>(_className);}
	void QGridLayout_setHorizontalSpacing(QGridLayout* _instance, int spacing) {_instance->setHorizontalSpacing(spacing);}
	int QGridLayout_horizontalSpacing(QGridLayout* _instance) {return _instance->horizontalSpacing();}
	void QGridLayout_setVerticalSpacing(QGridLayout* _instance, int spacing) {_instance->setVerticalSpacing(spacing);}
	int QGridLayout_verticalSpacing(QGridLayout* _instance) {return _instance->verticalSpacing();}
	void QGridLayout_setRowStretch(QGridLayout* _instance, int row, int stretch) {_instance->setRowStretch(row, stretch);}
	void QGridLayout_setColumnStretch(QGridLayout* _instance, int column, int stretch) {_instance->setColumnStretch(column, stretch);}
	int QGridLayout_rowStretch(QGridLayout* _instance, int row) {return _instance->rowStretch(row);}
	int QGridLayout_columnStretch(QGridLayout* _instance, int column) {return _instance->columnStretch(column);}
	void QGridLayout_setRowMinimumHeight(QGridLayout* _instance, int row, int minSize) {_instance->setRowMinimumHeight(row, minSize);}
	void QGridLayout_setColumnMinimumWidth(QGridLayout* _instance, int column, int minSize) {_instance->setColumnMinimumWidth(column, minSize);}
	int QGridLayout_rowMinimumHeight(QGridLayout* _instance, int row) {return _instance->rowMinimumHeight(row);}
	int QGridLayout_columnMinimumWidth(QGridLayout* _instance, int column) {return _instance->columnMinimumWidth(column);}
	int QGridLayout_columnCount(QGridLayout* _instance) {return _instance->columnCount();}
	int QGridLayout_rowCount(QGridLayout* _instance) {return _instance->rowCount();}
	QRect QGridLayout_cellRect(QGridLayout* _instance, int row, int column) {return _instance->cellRect(row, column);}
	void QGridLayout_addWidget(QGridLayout* _instance, QWidget* widget, int row, int column, int rowSpan, int columnSpan) {_instance->addWidget(widget, row, column, rowSpan, columnSpan);}
	void QGridLayout_addLayout(QGridLayout* _instance, QLayout* widget, int row, int column, int rowSpan, int columnSpan) {_instance->addLayout(widget, row, column, rowSpan, columnSpan);}
	void QGridLayout_setOriginCorner(QGridLayout* _instance, Qt::Corner corner) {_instance->setOriginCorner(corner);}
	Qt::Corner QGridLayout_originCorner(QGridLayout* _instance) {return _instance->originCorner();}
	QFormLayout* QFormLayout_QFormLayout(const char* _className, QWidget* parent) {return newLQObject<QFormLayout>(_className, parent);}
	void QFormLayout_setFieldGrowthPolicy(QFormLayout* _instance, QFormLayout::FieldGrowthPolicy policy) {_instance->setFieldGrowthPolicy(policy);}
	QFormLayout::FieldGrowthPolicy QFormLayout_fieldGrowthPolicy(QFormLayout* _instance) {return _instance->fieldGrowthPolicy();}
	void QFormLayout_setRowWrapPolicy(QFormLayout* _instance, QFormLayout::RowWrapPolicy policy) {_instance->setRowWrapPolicy(policy);}
	QFormLayout::RowWrapPolicy QFormLayout_rowWrapPolicy(QFormLayout* _instance) {return _instance->rowWrapPolicy();}
	void QFormLayout_setLabelAlignment(QFormLayout* _instance, Qt::AlignmentFlag alignment) {_instance->setLabelAlignment(alignment);}
	Qt::Alignment QFormLayout_labelAlignment(QFormLayout* _instance) {return _instance->labelAlignment();}
	void QFormLayout_setFormAlignment(QFormLayout* _instance, Qt::AlignmentFlag alignment) {_instance->setFormAlignment(alignment);}
	Qt::Alignment QFormLayout_formAlignment(QFormLayout* _instance) {return _instance->formAlignment();}
	void QFormLayout_setHorizontalSpacing(QFormLayout* _instance, int spacing) {_instance->setHorizontalSpacing(spacing);}
	int QFormLayout_horizontalSpacing(QFormLayout* _instance) {return _instance->horizontalSpacing();}
	void QFormLayout_setVerticalSpacing(QFormLayout* _instance, int spacing) {_instance->setVerticalSpacing(spacing);}
	int QFormLayout_verticalSpacing(QFormLayout* _instance) {return _instance->verticalSpacing();}
	int QFormLayout_spacing(QFormLayout* _instance) {return _instance->spacing();}
	void QFormLayout_setSpacing(QFormLayout* _instance, int spacing) {_instance->setSpacing(spacing);}
	void QFormLayout_addRow(QFormLayout* _instance, const QString& labelText, QWidget* field) {_instance->addRow(labelText, field);}
	void QFormLayout_insertRow(QFormLayout* _instance, int row, const QString& labelText, QWidget* field) {_instance->insertRow(row, labelText, field);}
	int QFormLayout_rowCount(QFormLayout* _instance) {return _instance->rowCount();}
	QLCDNumber* QLCDNumber_QLCDNumber(const char* _className, QWidget* parent) {return newLQObject<QLCDNumber>(_className, parent);}
	bool QLCDNumber_smallDecimalPoint(QLCDNumber* _instance) {return _instance->smallDecimalPoint();}
	int QLCDNumber_digitCount(QLCDNumber* _instance) {return _instance->digitCount();}
	void QLCDNumber_setDigitCount(QLCDNumber* _instance, int nDigits) {_instance->setDigitCount(nDigits);}
	bool QLCDNumber_checkOverflow(QLCDNumber* _instance, double number) {return _instance->checkOverflow(number);}
	QLCDNumber::Mode QLCDNumber_mode(QLCDNumber* _instance) {return _instance->mode();}
	void QLCDNumber_setMode(QLCDNumber* _instance, QLCDNumber::Mode mode) {_instance->setMode(mode);}
	QLCDNumber::SegmentStyle QLCDNumber_segmentStyle(QLCDNumber* _instance) {return _instance->segmentStyle();}
	void QLCDNumber_setSegmentStyle(QLCDNumber* _instance, QLCDNumber::SegmentStyle style) {_instance->setSegmentStyle(style);}
	double QLCDNumber_value(QLCDNumber* _instance) {return _instance->value();}
	void QLCDNumber_display(QLCDNumber* _instance, double num) {_instance->display(num);}
	void QLCDNumber_setSmallDecimalPoint(QLCDNumber* _instance, bool smallPoint) {_instance->setSmallDecimalPoint(smallPoint);}
	QLineEdit* QLineEdit_QLineEdit(const char* _className, const QString& text, QWidget* parent) {return newLQObject<QLineEdit>(_className, text, parent);}
	QString QLineEdit_text(QLineEdit* _instance) {return _instance->text();}
	QString QLineEdit_displayText(QLineEdit* _instance) {return _instance->displayText();}
	QString QLineEdit_placeholderText(QLineEdit* _instance) {return _instance->placeholderText();}
	void QLineEdit_setPlaceholderText(QLineEdit* _instance, const QString& text) {_instance->setPlaceholderText(text);}
	int QLineEdit_maxLength(QLineEdit* _instance) {return _instance->maxLength();}
	void QLineEdit_setMaxLength(QLineEdit* _instance, int length) {_instance->setMaxLength(length);}
	void QLineEdit_setFrame(QLineEdit* _instance, bool show) {_instance->setFrame(show);}
	bool QLineEdit_hasFrame(QLineEdit* _instance) {return _instance->hasFrame();}
	void QLineEdit_setClearButtonEnabled(QLineEdit* _instance, bool enable) {_instance->setClearButtonEnabled(enable);}
	bool QLineEdit_isClearButtonEnabled(QLineEdit* _instance) {return _instance->isClearButtonEnabled();}
	QLineEdit::EchoMode QLineEdit_echoMode(QLineEdit* _instance) {return _instance->echoMode();}
	void QLineEdit_setEchoMode(QLineEdit* _instance, QLineEdit::EchoMode echoMode) {_instance->setEchoMode(echoMode);}
	bool QLineEdit_isReadOnly(QLineEdit* _instance) {return _instance->isReadOnly();}
	void QLineEdit_setReadOnly(QLineEdit* _instance, bool readOnly) {_instance->setReadOnly(readOnly);}
	int QLineEdit_cursorPosition(QLineEdit* _instance) {return _instance->cursorPosition();}
	void QLineEdit_setCursorPosition(QLineEdit* _instance, int pos) {_instance->setCursorPosition(pos);}
	void QLineEdit_setAlignment(QLineEdit* _instance, Qt::AlignmentFlag alignment) {_instance->setAlignment(alignment);}
	Qt::Alignment QLineEdit_alignment(QLineEdit* _instance) {return _instance->alignment();}
	void QLineEdit_cursorForward(QLineEdit* _instance, bool mark, int steps) {_instance->cursorForward(mark, steps);}
	void QLineEdit_cursorBackward(QLineEdit* _instance, bool mark, int steps) {_instance->cursorBackward(mark, steps);}
	void QLineEdit_cursorWordForward(QLineEdit* _instance, bool mark) {_instance->cursorWordForward(mark);}
	void QLineEdit_cursorWordBackward(QLineEdit* _instance, bool mark) {_instance->cursorWordBackward(mark);}
	void QLineEdit_backspace(QLineEdit* _instance) {_instance->backspace();}
	void QLineEdit_del(QLineEdit* _instance) {_instance->del();}
	void QLineEdit_home(QLineEdit* _instance, bool mark) {_instance->home(mark);}
	void QLineEdit_end(QLineEdit* _instance, bool mark) {_instance->end(mark);}
	bool QLineEdit_isModified(QLineEdit* _instance) {return _instance->isModified();}
	void QLineEdit_setModified(QLineEdit* _instance, bool modified) {_instance->setModified(modified);}
	void QLineEdit_setSelection(QLineEdit* _instance, int start, int length) {_instance->setSelection(start, length);}
	bool QLineEdit_hasSelectedText(QLineEdit* _instance) {return _instance->hasSelectedText();}
	QString QLineEdit_selectedText(QLineEdit* _instance) {return _instance->selectedText();}
	int QLineEdit_selectionStart(QLineEdit* _instance) {return _instance->selectionStart();}
	bool QLineEdit_isUndoAvailable(QLineEdit* _instance) {return _instance->isUndoAvailable();}
	bool QLineEdit_isRedoAvailable(QLineEdit* _instance) {return _instance->isRedoAvailable();}
	void QLineEdit_setDragEnabled(QLineEdit* _instance, bool enabled) {_instance->setDragEnabled(enabled);}
	bool QLineEdit_dragEnabled(QLineEdit* _instance) {return _instance->dragEnabled();}
	void QLineEdit_setCursorMoveStyle(QLineEdit* _instance, Qt::CursorMoveStyle style) {_instance->setCursorMoveStyle(style);}
	Qt::CursorMoveStyle QLineEdit_cursorMoveStyle(QLineEdit* _instance) {return _instance->cursorMoveStyle();}
	QString QLineEdit_inputMask(QLineEdit* _instance) {return _instance->inputMask();}
	void QLineEdit_setInputMask(QLineEdit* _instance, const QString& inputMask) {_instance->setInputMask(inputMask);}
	bool QLineEdit_hasAcceptableInput(QLineEdit* _instance) {return _instance->hasAcceptableInput();}
	void QLineEdit_setTextMargins(QLineEdit* _instance, const QMargins& margins) {_instance->setTextMargins(margins);}
	QMargins QLineEdit_textMargins(QLineEdit* _instance) {return _instance->textMargins();}
	void QLineEdit_setText(QLineEdit* _instance, const QString& text) {_instance->setText(text);}
	void QLineEdit_clear(QLineEdit* _instance) {_instance->clear();}
	void QLineEdit_selectAll(QLineEdit* _instance) {_instance->selectAll();}
	void QLineEdit_undo(QLineEdit* _instance) {_instance->undo();}
	void QLineEdit_redo(QLineEdit* _instance) {_instance->redo();}
	void QLineEdit_cut(QLineEdit* _instance) {_instance->cut();}
	void QLineEdit_copy(QLineEdit* _instance) {_instance->copy();}
	void QLineEdit_paste(QLineEdit* _instance) {_instance->paste();}
	void QLineEdit_deselect(QLineEdit* _instance) {_instance->deselect();}
	void QLineEdit_insert(QLineEdit* _instance, const QString& text) {_instance->insert(text);}
	QRadioButton* QRadioButton_QRadioButton(const char* _className, const QString& text, QWidget* parent) {return newLQObject<QRadioButton>(_className, text, parent);}
	QTextEdit* QTextEdit_QTextEdit(const char* _className, const QString& text, QWidget* parent) {return newLQObject<QTextEdit>(_className, text, parent);}
	void QTextEdit_setPlaceholderText(QTextEdit* _instance, const QString& placeholderText) {_instance->setPlaceholderText(placeholderText);}
	QString QTextEdit_placeholderText(QTextEdit* _instance) {return _instance->placeholderText();}
	bool QTextEdit_isReadOnly(QTextEdit* _instance) {return _instance->isReadOnly();}
	void QTextEdit_setReadOnly(QTextEdit* _instance, bool readOnly) {_instance->setReadOnly(readOnly);}
	void QTextEdit_setTextInteractionFlags(QTextEdit* _instance, Qt::TextInteractionFlag flags) {_instance->setTextInteractionFlags(flags);}
	Qt::TextInteractionFlags QTextEdit_textInteractionFlags(QTextEdit* _instance) {return _instance->textInteractionFlags();}
	qreal QTextEdit_fontPointSize(QTextEdit* _instance) {return _instance->fontPointSize();}
	QString QTextEdit_fontFamily(QTextEdit* _instance) {return _instance->fontFamily();}
	int QTextEdit_fontWeight(QTextEdit* _instance) {return _instance->fontWeight();}
	bool QTextEdit_fontUnderline(QTextEdit* _instance) {return _instance->fontUnderline();}
	bool QTextEdit_fontItalic(QTextEdit* _instance) {return _instance->fontItalic();}
	QByteArray QTextEdit_textColor(QTextEdit* _instance) {return serialize(_instance->textColor());}
	QByteArray QTextEdit_textBackgroundColor(QTextEdit* _instance) {return serialize(_instance->textBackgroundColor());}
	QByteArray QTextEdit_currentFont(QTextEdit* _instance) {return serialize(_instance->currentFont());}
	Qt::Alignment QTextEdit_alignment(QTextEdit* _instance) {return _instance->alignment();}
	QTextEdit::AutoFormatting QTextEdit_autoFormatting(QTextEdit* _instance) {return _instance->autoFormatting();}
	void QTextEdit_setAutoFormatting(QTextEdit* _instance, QTextEdit::AutoFormattingFlag features) {_instance->setAutoFormatting(features);}
	bool QTextEdit_tabChangesFocus(QTextEdit* _instance) {return _instance->tabChangesFocus();}
	void QTextEdit_setTabChangesFocus(QTextEdit* _instance, bool change) {_instance->setTabChangesFocus(change);}
	void QTextEdit_setDocumentTitle(QTextEdit* _instance, const QString& title) {_instance->setDocumentTitle(title);}
	QString QTextEdit_documentTitle(QTextEdit* _instance) {return _instance->documentTitle();}
	bool QTextEdit_isUndoRedoEnabled(QTextEdit* _instance) {return _instance->isUndoRedoEnabled();}
	void QTextEdit_setUndoRedoEnabled(QTextEdit* _instance, bool enable) {_instance->setUndoRedoEnabled(enable);}
	QTextEdit::LineWrapMode QTextEdit_lineWrapMode(QTextEdit* _instance) {return _instance->lineWrapMode();}
	void QTextEdit_setLineWrapMode(QTextEdit* _instance, QTextEdit::LineWrapMode mode) {_instance->setLineWrapMode(mode);}
	int QTextEdit_lineWrapColumnOrWidth(QTextEdit* _instance) {return _instance->lineWrapColumnOrWidth();}
	void QTextEdit_setLineWrapColumnOrWidth(QTextEdit* _instance, int width) {_instance->setLineWrapColumnOrWidth(width);}
	QString QTextEdit_toPlainText(QTextEdit* _instance) {return _instance->toPlainText();}
	QString QTextEdit_toHtml(QTextEdit* _instance) {return _instance->toHtml();}
	void QTextEdit_ensureCursorVisible(QTextEdit* _instance) {_instance->ensureCursorVisible();}
	QRect QTextEdit_cursorRect(QTextEdit* _instance) {return _instance->cursorRect();}
	QString QTextEdit_anchorAt(QTextEdit* _instance, const QPoint& pos) {return _instance->anchorAt(pos);}
	bool QTextEdit_overwriteMode(QTextEdit* _instance) {return _instance->overwriteMode();}
	void QTextEdit_setOverwriteMode(QTextEdit* _instance, bool overwrite) {_instance->setOverwriteMode(overwrite);}
	int QTextEdit_tabStopWidth(QTextEdit* _instance) {return _instance->tabStopWidth();}
	void QTextEdit_setTabStopWidth(QTextEdit* _instance, int width) {_instance->setTabStopWidth(width);}
	int QTextEdit_cursorWidth(QTextEdit* _instance) {return _instance->cursorWidth();}
	void QTextEdit_setCursorWidth(QTextEdit* _instance, int width) {_instance->setCursorWidth(width);}
	bool QTextEdit_acceptRichText(QTextEdit* _instance) {return _instance->acceptRichText();}
	void QTextEdit_setAcceptRichText(QTextEdit* _instance, bool accept) {_instance->setAcceptRichText(accept);}
	bool QTextEdit_canPaste(QTextEdit* _instance) {return _instance->canPaste();}
	void QTextEdit_setFontPointSize(QTextEdit* _instance, qreal size) {_instance->setFontPointSize(size);}
	void QTextEdit_setFontFamily(QTextEdit* _instance, const QString& fontFamily) {_instance->setFontFamily(fontFamily);}
	void QTextEdit_setFontWeight(QTextEdit* _instance, int weight) {_instance->setFontWeight(weight);}
	void QTextEdit_setFontUnderline(QTextEdit* _instance, bool underline) {_instance->setFontUnderline(underline);}
	void QTextEdit_setFontItalic(QTextEdit* _instance, bool italic) {_instance->setFontItalic(italic);}
	void QTextEdit_setTextColor(QTextEdit* _instance, LStrHandle color) {_instance->setTextColor(deserialize<QColor>(copyFromLStr(color)));}
	void QTextEdit_setTextBackgroundColor(QTextEdit* _instance, LStrHandle color) {_instance->setTextBackgroundColor(deserialize<QColor>(copyFromLStr(color)));}
	void QTextEdit_setCurrentFont(QTextEdit* _instance, LStrHandle font) {_instance->setCurrentFont(deserialize<QFont>(copyFromLStr(font)));}
	void QTextEdit_setAlignment(QTextEdit* _instance, Qt::AlignmentFlag alignment) {_instance->setAlignment(alignment);}
	void QTextEdit_setPlainText(QTextEdit* _instance, const QString& text) {_instance->setPlainText(text);}
	void QTextEdit_setHtml(QTextEdit* _instance, const QString& text) {_instance->setHtml(text);}
	void QTextEdit_setText(QTextEdit* _instance, const QString& text) {_instance->setText(text);}
	void QTextEdit_cut(QTextEdit* _instance) {_instance->cut();}
	void QTextEdit_copy(QTextEdit* _instance) {_instance->copy();}
	void QTextEdit_paste(QTextEdit* _instance) {_instance->paste();}
	void QTextEdit_undo(QTextEdit* _instance) {_instance->undo();}
	void QTextEdit_redo(QTextEdit* _instance) {_instance->redo();}
	void QTextEdit_clear(QTextEdit* _instance) {_instance->clear();}
	void QTextEdit_selectAll(QTextEdit* _instance) {_instance->selectAll();}
	void QTextEdit_insertPlainText(QTextEdit* _instance, const QString& text) {_instance->insertPlainText(text);}
	void QTextEdit_insertHtml(QTextEdit* _instance, const QString& text) {_instance->insertHtml(text);}
	void QTextEdit_append(QTextEdit* _instance, const QString& text) {_instance->append(text);}
	void QTextEdit_scrollToAnchor(QTextEdit* _instance, const QString& name) {_instance->scrollToAnchor(name);}
	void QTextEdit_zoomIn(QTextEdit* _instance, int range) {_instance->zoomIn(range);}
	void QTextEdit_zoomOut(QTextEdit* _instance, int range) {_instance->zoomOut(range);}
	QMdiArea* QMdiArea_QMdiArea(const char* _className, QWidget* parent) {return newLQObject<QMdiArea>(_className, parent);}
	QMdiSubWindow* QMdiArea_currentSubWindow(QMdiArea* _instance) {return _instance->currentSubWindow();}
	QMdiSubWindow* QMdiArea_activeSubWindow(QMdiArea* _instance) {return _instance->activeSubWindow();}
	QList<QMdiSubWindow*> QMdiArea_subWindowList(QMdiArea* _instance, QMdiArea::WindowOrder order) {return _instance->subWindowList(order);}
	QMdiSubWindow* QMdiArea_addSubWindow(QMdiArea* _instance, QWidget* widget, Qt::WindowType flags) {
		auto subWindow = _instance->addSubWindow(widget, flags);
		subWindow->setAttribute(Qt::WA_DeleteOnClose, false); // HACK: Prevent LabVIEW from crashing in the Dynamic GUI Composition and Management example after closing a subwindow
		return subWindow;
	}
	void QMdiArea_removeSubWindow(QMdiArea* _instance, QWidget* widget) {_instance->removeSubWindow(widget);}
	QByteArray QMdiArea_background(QMdiArea* _instance) {return serialize(_instance->background());}
	void QMdiArea_setBackground(QMdiArea* _instance, LStrHandle background) {_instance->setBackground(deserialize<QBrush>(copyFromLStr(background)));}
	QMdiArea::WindowOrder QMdiArea_activationOrder(QMdiArea* _instance) {return _instance->activationOrder();}
	void QMdiArea_setActivationOrder(QMdiArea* _instance, QMdiArea::WindowOrder order) {_instance->setActivationOrder(order);}
	void QMdiArea_setActiveSubWindow(QMdiArea* _instance, QMdiSubWindow* window) {_instance->setActiveSubWindow(window);}
	void QMdiArea_tileSubWindows(QMdiArea* _instance) {_instance->tileSubWindows();}
	void QMdiArea_cascadeSubWindows(QMdiArea* _instance) {_instance->cascadeSubWindows();}
	void QMdiArea_closeActiveSubWindow(QMdiArea* _instance) {_instance->closeActiveSubWindow();}
	void QMdiArea_closeAllSubWindows(QMdiArea* _instance) {_instance->closeAllSubWindows();}
	void QMdiArea_activateNextSubWindow(QMdiArea* _instance) {_instance->activateNextSubWindow();}
	void QMdiArea_activatePreviousSubWindow(QMdiArea* _instance) {_instance->activatePreviousSubWindow();}
	QMdiSubWindow* QMdiSubWindow_QMdiSubWindow(const char* _className, QWidget* parent) {return newLQObject<QMdiSubWindow>(_className, parent);}
	void QMdiSubWindow_setWidget(QMdiSubWindow* _instance, QWidget* widget) {_instance->setWidget(widget);}
	QWidget* QMdiSubWindow_widget(QMdiSubWindow* _instance) {return _instance->widget();}
	bool QMdiSubWindow_isShaded(QMdiSubWindow* _instance) {return _instance->isShaded();}
	void QMdiSubWindow_setOption(QMdiSubWindow* _instance, QMdiSubWindow::SubWindowOption option, bool on) {_instance->setOption(option, on);}
	bool QMdiSubWindow_testOption(QMdiSubWindow* _instance, QMdiSubWindow::SubWindowOption option) {return _instance->testOption(option);}
	void QMdiSubWindow_setKeyboardSingleStep(QMdiSubWindow* _instance, int step) {_instance->setKeyboardSingleStep(step);}
	int QMdiSubWindow_keyboardSingleStep(QMdiSubWindow* _instance) {return _instance->keyboardSingleStep();}
	void QMdiSubWindow_setKeyboardPageStep(QMdiSubWindow* _instance, int step) {_instance->setKeyboardPageStep(step);}
	int QMdiSubWindow_keyboardPageStep(QMdiSubWindow* _instance) {return _instance->keyboardPageStep();}
	QMdiArea* QMdiSubWindow_mdiArea(QMdiSubWindow* _instance) {return _instance->mdiArea();}
	void QMdiSubWindow_showShaded(QMdiSubWindow* _instance) {_instance->showShaded();}
	bool QAbstractSpinBox_isReadOnly(QAbstractSpinBox* _instance) {return _instance->isReadOnly();}
	void QAbstractSpinBox_setReadOnly(QAbstractSpinBox* _instance, bool readOnly) {_instance->setReadOnly(readOnly);}
	QSpinBox* QSpinBox_QSpinBox(const char* _className, QWidget* parent) {return newLQObject<QSpinBox>(_className, parent);}
	int QSpinBox_value(QSpinBox* _instance) {return _instance->value();}
	QString QSpinBox_prefix(QSpinBox* _instance) {return _instance->prefix();}
	void QSpinBox_setPrefix(QSpinBox* _instance, const QString& prefix) {_instance->setPrefix(prefix);}
	QString QSpinBox_suffix(QSpinBox* _instance) {return _instance->suffix();}
	void QSpinBox_setSuffix(QSpinBox* _instance, const QString& suffix) {_instance->setSuffix(suffix);}
	QString QSpinBox_cleanText(QSpinBox* _instance) {return _instance->cleanText();}
	int QSpinBox_singleStep(QSpinBox* _instance) {return _instance->singleStep();}
	void QSpinBox_setSingleStep(QSpinBox* _instance, int val) {_instance->setSingleStep(val);}
	int QSpinBox_minimum(QSpinBox* _instance) {return _instance->minimum();}
	void QSpinBox_setMinimum(QSpinBox* _instance, int min) {_instance->setMinimum(min);}
	int QSpinBox_maximum(QSpinBox* _instance) {return _instance->maximum();}
	void QSpinBox_setMaximum(QSpinBox* _instance, int max) {_instance->setMaximum(max);}
	void QSpinBox_setRange(QSpinBox* _instance, int min, int max) {_instance->setRange(min, max);}
	int QSpinBox_displayIntegerBase(QSpinBox* _instance) {return _instance->displayIntegerBase();}
	void QSpinBox_setDisplayIntegerBase(QSpinBox* _instance, int base) {_instance->setDisplayIntegerBase(base);}
	void QSpinBox_setValue(QSpinBox* _instance, int val) {_instance->setValue(val);}
	QDoubleSpinBox* QDoubleSpinBox_QDoubleSpinBox(const char* _className, QWidget* parent) {return newLQObject<QDoubleSpinBox>(_className, parent);}
	double QDoubleSpinBox_value(QDoubleSpinBox* _instance) {return _instance->value();}
	QString QDoubleSpinBox_prefix(QDoubleSpinBox* _instance) {return _instance->prefix();}
	void QDoubleSpinBox_setPrefix(QDoubleSpinBox* _instance, const QString& prefix) {_instance->setPrefix(prefix);}
	QString QDoubleSpinBox_suffix(QDoubleSpinBox* _instance) {return _instance->suffix();}
	void QDoubleSpinBox_setSuffix(QDoubleSpinBox* _instance, const QString& suffix) {_instance->setSuffix(suffix);}
	QString QDoubleSpinBox_cleanText(QDoubleSpinBox* _instance) {return _instance->cleanText();}
	double QDoubleSpinBox_singleStep(QDoubleSpinBox* _instance) {return _instance->singleStep();}
	void QDoubleSpinBox_setSingleStep(QDoubleSpinBox* _instance, double val) {_instance->setSingleStep(val);}
	double QDoubleSpinBox_minimum(QDoubleSpinBox* _instance) {return _instance->minimum();}
	void QDoubleSpinBox_setMinimum(QDoubleSpinBox* _instance, double min) {_instance->setMinimum(min);}
	double QDoubleSpinBox_maximum(QDoubleSpinBox* _instance) {return _instance->maximum();}
	void QDoubleSpinBox_setMaximum(QDoubleSpinBox* _instance, double max) {_instance->setMaximum(max);}
	void QDoubleSpinBox_setRange(QDoubleSpinBox* _instance, double min, double max) {_instance->setRange(min, max);}
	int QDoubleSpinBox_decimals(QDoubleSpinBox* _instance) {return _instance->decimals();}
	void QDoubleSpinBox_setDecimals(QDoubleSpinBox* _instance, int prec) {_instance->setDecimals(prec);}
	double QDoubleSpinBox_valueFromText(QDoubleSpinBox* _instance, const QString& text) {return _instance->valueFromText(text);}
	QString QDoubleSpinBox_textFromValue(QDoubleSpinBox* _instance, double val) {return _instance->textFromValue(val);}
	void QDoubleSpinBox_setValue(QDoubleSpinBox* _instance, double val) {_instance->setValue(val);}
	QSvgWidget* QSvgWidget_QSvgWidget(const char* _className, const QString& file) {return newLQObject<QSvgWidget>(_className, file);}
	void QSvgWidget_load(QSvgWidget* _instance, const QByteArray& contents) {_instance->load(contents);}
	QWinJumpListCategory* QWinJumpListCategory_QWinJumpListCategory(const QString& title) {return new QWinJumpListCategory(title);}
	QWinJumpListCategory::Type QWinJumpListCategory_type(QWinJumpListCategory* _instance) {return _instance->type();}
	bool QWinJumpListCategory_isVisible(QWinJumpListCategory* _instance) {return _instance->isVisible();}
	void QWinJumpListCategory_setVisible(QWinJumpListCategory* _instance, bool visible) {_instance->setVisible(visible);}
	QString QWinJumpListCategory_title(QWinJumpListCategory* _instance) {return _instance->title();}
	void QWinJumpListCategory_setTitle(QWinJumpListCategory* _instance, const QString& title) {_instance->setTitle(title);}
	int QWinJumpListCategory_count(QWinJumpListCategory* _instance) {return _instance->count();}
	bool QWinJumpListCategory_isEmpty(QWinJumpListCategory* _instance) {return _instance->isEmpty();}
	void QWinJumpListCategory_addItem(QWinJumpListCategory* _instance, QWinJumpListItem* item) {_instance->addItem(item);}
	QWinJumpListItem* QWinJumpListCategory_addDestination(QWinJumpListCategory* _instance, const QString& filePath) {return _instance->addDestination(filePath);}
	QWinJumpListItem* QWinJumpListCategory_addLink(QWinJumpListCategory* _instance, LStrHandle icon, const QString& title, const QString& executablePath, const QStringList& arguments) {return _instance->addLink(deserialize<QIcon>(copyFromLStr(icon)), title, executablePath, arguments);}
	QWinJumpListItem* QWinJumpListCategory_addSeparator(QWinJumpListCategory* _instance) {return _instance->addSeparator();}
	void QWinJumpListCategory_clear(QWinJumpListCategory* _instance) {_instance->clear();}
	QWinJumpListItem* QWinJumpListItem_QWinJumpListItem(QWinJumpListItem::Type type) {return new QWinJumpListItem(type);}
	void QWinJumpListItem_setType(QWinJumpListItem* _instance, QWinJumpListItem::Type type) {_instance->setType(type);}
	QWinJumpListItem::Type QWinJumpListItem_type(QWinJumpListItem* _instance) {return _instance->type();}
	void QWinJumpListItem_setFilePath(QWinJumpListItem* _instance, const QString& filePath) {_instance->setFilePath(filePath);}
	QString QWinJumpListItem_filePath(QWinJumpListItem* _instance) {return _instance->filePath();}
	void QWinJumpListItem_setWorkingDirectory(QWinJumpListItem* _instance, const QString& workingDirectory) {_instance->setWorkingDirectory(workingDirectory);}
	QString QWinJumpListItem_workingDirectory(QWinJumpListItem* _instance) {return _instance->workingDirectory();}
	void QWinJumpListItem_setIcon(QWinJumpListItem* _instance, LStrHandle icon) {_instance->setIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	QByteArray QWinJumpListItem_icon(QWinJumpListItem* _instance) {return serialize(_instance->icon());}
	void QWinJumpListItem_setTitle(QWinJumpListItem* _instance, const QString& title) {_instance->setTitle(title);}
	QString QWinJumpListItem_title(QWinJumpListItem* _instance) {return _instance->title();}
	void QWinJumpListItem_setDescription(QWinJumpListItem* _instance, const QString& description) {_instance->setDescription(description);}
	QString QWinJumpListItem_description(QWinJumpListItem* _instance) {return _instance->description();}
	void QWinJumpListItem_setArguments(QWinJumpListItem* _instance, const QStringList& arguments) {_instance->setArguments(arguments);}
	QStringList QWinJumpListItem_arguments(QWinJumpListItem* _instance) {return _instance->arguments();}
	QWinJumpList* QWinJumpList_QWinJumpList(const char* _className, QObject* parent) {return newLQObject<QWinJumpList>(_className, parent);}
	QString QWinJumpList_identifier(QWinJumpList* _instance) {return _instance->identifier();}
	void QWinJumpList_setIdentifier(QWinJumpList* _instance, const QString& identifier) {_instance->setIdentifier(identifier);}
	QWinJumpListCategory* QWinJumpList_recent(QWinJumpList* _instance) {return _instance->recent();}
	QWinJumpListCategory* QWinJumpList_frequent(QWinJumpList* _instance) {return _instance->frequent();}
	QWinJumpListCategory* QWinJumpList_tasks(QWinJumpList* _instance) {return _instance->tasks();}
	void QWinJumpList_addCategory(QWinJumpList* _instance, QWinJumpListCategory* category) {_instance->addCategory(category);}
	void QWinJumpList_clear(QWinJumpList* _instance) {_instance->clear();}
	QWinTaskbarButton* QWinTaskbarButton_QWinTaskbarButton(const char* _className, QObject* parent) {return newLQObject<QWinTaskbarButton>(_className, parent);}
	void QWinTaskbarButton_setWindow(QWinTaskbarButton* _instance, QWindow* window) {_instance->setWindow(window);}
	QWindow* QWinTaskbarButton_window(QWinTaskbarButton* _instance) {return _instance->window();}
	QByteArray QWinTaskbarButton_overlayIcon(QWinTaskbarButton* _instance) {return serialize(_instance->overlayIcon());}
	QString QWinTaskbarButton_overlayAccessibleDescription(QWinTaskbarButton* _instance) {return _instance->overlayAccessibleDescription();}
	QWinTaskbarProgress* QWinTaskbarButton_progress(QWinTaskbarButton* _instance) {return _instance->progress();}
	void QWinTaskbarButton_setOverlayIcon(QWinTaskbarButton* _instance, LStrHandle icon) {_instance->setOverlayIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	void QWinTaskbarButton_setOverlayAccessibleDescription(QWinTaskbarButton* _instance, const QString& description) {_instance->setOverlayAccessibleDescription(description);}
	void QWinTaskbarButton_clearOverlayIcon(QWinTaskbarButton* _instance) {_instance->clearOverlayIcon();}
	int QWinTaskbarProgress_value(QWinTaskbarProgress* _instance) {return _instance->value();}
	int QWinTaskbarProgress_minimum(QWinTaskbarProgress* _instance) {return _instance->minimum();}
	int QWinTaskbarProgress_maximum(QWinTaskbarProgress* _instance) {return _instance->maximum();}
	bool QWinTaskbarProgress_isVisible(QWinTaskbarProgress* _instance) {return _instance->isVisible();}
	bool QWinTaskbarProgress_isPaused(QWinTaskbarProgress* _instance) {return _instance->isPaused();}
	bool QWinTaskbarProgress_isStopped(QWinTaskbarProgress* _instance) {return _instance->isStopped();}
	void QWinTaskbarProgress_setValue(QWinTaskbarProgress* _instance, int value) {_instance->setValue(value);}
	void QWinTaskbarProgress_setMinimum(QWinTaskbarProgress* _instance, int minimum) {_instance->setMinimum(minimum);}
	void QWinTaskbarProgress_setMaximum(QWinTaskbarProgress* _instance, int maximum) {_instance->setMaximum(maximum);}
	void QWinTaskbarProgress_setRange(QWinTaskbarProgress* _instance, int minimum, int maximum) {_instance->setRange(minimum, maximum);}
	void QWinTaskbarProgress_reset(QWinTaskbarProgress* _instance) {_instance->reset();}
	void QWinTaskbarProgress_show(QWinTaskbarProgress* _instance) {_instance->show();}
	void QWinTaskbarProgress_hide(QWinTaskbarProgress* _instance) {_instance->hide();}
	void QWinTaskbarProgress_setVisible(QWinTaskbarProgress* _instance, bool visible) {_instance->setVisible(visible);}
	void QWinTaskbarProgress_pause(QWinTaskbarProgress* _instance) {_instance->pause();}
	void QWinTaskbarProgress_resume(QWinTaskbarProgress* _instance) {_instance->resume();}
	void QWinTaskbarProgress_setPaused(QWinTaskbarProgress* _instance, bool paused) {_instance->setPaused(paused);}
	void QWinTaskbarProgress_stop(QWinTaskbarProgress* _instance) {_instance->stop();}
	QWinThumbnailToolBar* QWinThumbnailToolBar_QWinThumbnailToolBar(const char* _className, QObject* parent) {return newLQObject<QWinThumbnailToolBar>(_className, parent);}
	void QWinThumbnailToolBar_setWindow(QWinThumbnailToolBar* _instance, QWindow* window) {_instance->setWindow(window);}
	QWindow* QWinThumbnailToolBar_window(QWinThumbnailToolBar* _instance) {return _instance->window();}
	void QWinThumbnailToolBar_addButton(QWinThumbnailToolBar* _instance, QWinThumbnailToolButton* button) {_instance->addButton(button);}
	void QWinThumbnailToolBar_removeButton(QWinThumbnailToolBar* _instance, QWinThumbnailToolButton* button) {_instance->removeButton(button);}
	int QWinThumbnailToolBar_count(QWinThumbnailToolBar* _instance) {return _instance->count();}
	bool QWinThumbnailToolBar_iconicPixmapNotificationsEnabled(QWinThumbnailToolBar* _instance) {return _instance->iconicPixmapNotificationsEnabled();}
	void QWinThumbnailToolBar_setIconicPixmapNotificationsEnabled(QWinThumbnailToolBar* _instance, bool enabled) {_instance->setIconicPixmapNotificationsEnabled(enabled);}
	QByteArray QWinThumbnailToolBar_iconicThumbnailPixmap(QWinThumbnailToolBar* _instance) {return serialize(_instance->iconicThumbnailPixmap());}
	QByteArray QWinThumbnailToolBar_iconicLivePreviewPixmap(QWinThumbnailToolBar* _instance) {return serialize(_instance->iconicLivePreviewPixmap());}
	void QWinThumbnailToolBar_clear(QWinThumbnailToolBar* _instance) {_instance->clear();}
	void QWinThumbnailToolBar_setIconicThumbnailPixmap(QWinThumbnailToolBar* _instance, LStrHandle pixmap) {_instance->setIconicThumbnailPixmap(deserialize<QPixmap>(copyFromLStr(pixmap)));}
	void QWinThumbnailToolBar_setIconicLivePreviewPixmap(QWinThumbnailToolBar* _instance, LStrHandle pixmap) {_instance->setIconicLivePreviewPixmap(deserialize<QPixmap>(copyFromLStr(pixmap)));}
	QWinThumbnailToolButton* QWinThumbnailToolButton_QWinThumbnailToolButton(const char* _className, QObject* parent) {return newLQObject<QWinThumbnailToolButton>(_className, parent);}
	void QWinThumbnailToolButton_setToolTip(QWinThumbnailToolButton* _instance, const QString& toolTip) {_instance->setToolTip(toolTip);}
	QString QWinThumbnailToolButton_toolTip(QWinThumbnailToolButton* _instance) {return _instance->toolTip();}
	void QWinThumbnailToolButton_setIcon(QWinThumbnailToolButton* _instance, LStrHandle icon) {_instance->setIcon(deserialize<QIcon>(copyFromLStr(icon)));}
	QByteArray QWinThumbnailToolButton_icon(QWinThumbnailToolButton* _instance) {return serialize(_instance->icon());}
	void QWinThumbnailToolButton_setEnabled(QWinThumbnailToolButton* _instance, bool enabled) {_instance->setEnabled(enabled);}
	bool QWinThumbnailToolButton_isEnabled(QWinThumbnailToolButton* _instance) {return _instance->isEnabled();}
	void QWinThumbnailToolButton_setInteractive(QWinThumbnailToolButton* _instance, bool interactive) {_instance->setInteractive(interactive);}
	bool QWinThumbnailToolButton_isInteractive(QWinThumbnailToolButton* _instance) {return _instance->isInteractive();}
	void QWinThumbnailToolButton_setVisible(QWinThumbnailToolButton* _instance, bool visible) {_instance->setVisible(visible);}
	bool QWinThumbnailToolButton_isVisible(QWinThumbnailToolButton* _instance) {return _instance->isVisible();}
	void QWinThumbnailToolButton_setDismissOnClick(QWinThumbnailToolButton* _instance, bool dismiss) {_instance->setDismissOnClick(dismiss);}
	bool QWinThumbnailToolButton_dismissOnClick(QWinThumbnailToolButton* _instance) {return _instance->dismissOnClick();}
	void QWinThumbnailToolButton_setFlat(QWinThumbnailToolButton* _instance, bool flat) {_instance->setFlat(flat);}
	bool QWinThumbnailToolButton_isFlat(QWinThumbnailToolButton* _instance) {return _instance->isFlat();}
	void QWinThumbnailToolButton_click(QWinThumbnailToolButton* _instance) {_instance->click();}
	void QwtAbstractScale_setScale(QwtAbstractScale* _instance, double lowerBound, double upperBound) {_instance->setScale(lowerBound, upperBound);}
	void QwtAbstractScale_setLowerBound(QwtAbstractScale* _instance, double value) {_instance->setLowerBound(value);}
	double QwtAbstractScale_lowerBound(QwtAbstractScale* _instance) {return _instance->lowerBound();}
	void QwtAbstractScale_setUpperBound(QwtAbstractScale* _instance, double value) {_instance->setUpperBound(value);}
	double QwtAbstractScale_upperBound(QwtAbstractScale* _instance) {return _instance->upperBound();}
	void QwtAbstractScale_setScaleStepSize(QwtAbstractScale* _instance, double stepSize) {_instance->setScaleStepSize(stepSize);}
	double QwtAbstractScale_scaleStepSize(QwtAbstractScale* _instance) {return _instance->scaleStepSize();}
	void QwtAbstractScale_setScaleMaxMajor(QwtAbstractScale* _instance, int ticks) {_instance->setScaleMaxMajor(ticks);}
	int QwtAbstractScale_scaleMaxMinor(QwtAbstractScale* _instance) {return _instance->scaleMaxMinor();}
	void QwtAbstractScale_setScaleMaxMinor(QwtAbstractScale* _instance, int ticks) {_instance->setScaleMaxMinor(ticks);}
	int QwtAbstractScale_scaleMaxMajor(QwtAbstractScale* _instance) {return _instance->scaleMaxMajor();}
	int QwtAbstractScale_transform(QwtAbstractScale* _instance, double value) {return _instance->transform(value);}
	double QwtAbstractScale_invTransform(QwtAbstractScale* _instance, int value) {return _instance->invTransform(value);}
	bool QwtAbstractScale_isInverted(QwtAbstractScale* _instance) {return _instance->isInverted();}
	double QwtAbstractScale_minimum(QwtAbstractScale* _instance) {return _instance->minimum();}
	double QwtAbstractScale_maximum(QwtAbstractScale* _instance) {return _instance->maximum();}
	QwtThermo* QwtThermo_QwtThermo(const char* _className, QWidget* parent) {return newLQObject<QwtThermo>(_className, parent);}
	void QwtThermo_setOrientation(QwtThermo* _instance, Qt::Orientation orientation) {_instance->setOrientation(orientation);}
	Qt::Orientation QwtThermo_orientation(QwtThermo* _instance) {return _instance->orientation();}
	void QwtThermo_setScalePosition(QwtThermo* _instance, QwtThermo::ScalePosition position) {_instance->setScalePosition(position);}
	QwtThermo::ScalePosition QwtThermo_scalePosition(QwtThermo* _instance) {return _instance->scalePosition();}
	void QwtThermo_setSpacing(QwtThermo* _instance, int spacing) {_instance->setSpacing(spacing);}
	int QwtThermo_spacing(QwtThermo* _instance) {return _instance->spacing();}
	void QwtThermo_setBorderWidth(QwtThermo* _instance, int width) {_instance->setBorderWidth(width);}
	int QwtThermo_borderWidth(QwtThermo* _instance) {return _instance->borderWidth();}
	void QwtThermo_setOriginMode(QwtThermo* _instance, QwtThermo::OriginMode mode) {_instance->setOriginMode(mode);}
	QwtThermo::OriginMode QwtThermo_originMode(QwtThermo* _instance) {return _instance->originMode();}
	void QwtThermo_setOrigin(QwtThermo* _instance, double origin) {_instance->setOrigin(origin);}
	double QwtThermo_origin(QwtThermo* _instance) {return _instance->origin();}
	void QwtThermo_setFillBrush(QwtThermo* _instance, LStrHandle brush) {_instance->setFillBrush(deserialize<QBrush>(copyFromLStr(brush)));}
	QByteArray QwtThermo_fillBrush(QwtThermo* _instance) {return serialize(_instance->fillBrush());}
	void QwtThermo_setAlarmBrush(QwtThermo* _instance, LStrHandle brush) {_instance->setAlarmBrush(deserialize<QBrush>(copyFromLStr(brush)));}
	QByteArray QwtThermo_alarmBrush(QwtThermo* _instance) {return serialize(_instance->alarmBrush());}
	void QwtThermo_setAlarmLevel(QwtThermo* _instance, double level) {_instance->setAlarmLevel(level);}
	double QwtThermo_alarmLevel(QwtThermo* _instance) {return _instance->alarmLevel();}
	void QwtThermo_setAlarmEnabled(QwtThermo* _instance, bool enabled) {_instance->setAlarmEnabled(enabled);}
	bool QwtThermo_alarmEnabled(QwtThermo* _instance) {return _instance->alarmEnabled();}
	void QwtThermo_setPipeWidth(QwtThermo* _instance, int width) {_instance->setPipeWidth(width);}
	int QwtThermo_pipeWidth(QwtThermo* _instance) {return _instance->pipeWidth();}
	double QwtThermo_value(QwtThermo* _instance) {return _instance->value();}
	void QwtThermo_setValue(QwtThermo* _instance, double value) {_instance->setValue(value);}
	void QwtAbstractSlider_setValid(QwtAbstractSlider* _instance, bool valid) {_instance->setValid(valid);}
	bool QwtAbstractSlider_isValid(QwtAbstractSlider* _instance) {return _instance->isValid();}
	double QwtAbstractSlider_value(QwtAbstractSlider* _instance) {return _instance->value();}
	void QwtAbstractSlider_setWrapping(QwtAbstractSlider* _instance, bool wrapping) {_instance->setWrapping(wrapping);}
	bool QwtAbstractSlider_wrapping(QwtAbstractSlider* _instance) {return _instance->wrapping();}
	void QwtAbstractSlider_setTotalSteps(QwtAbstractSlider* _instance, quint32 totalSteps) {_instance->setTotalSteps(totalSteps);}
	quint32 QwtAbstractSlider_totalSteps(QwtAbstractSlider* _instance) {return _instance->totalSteps();}
	void QwtAbstractSlider_setSingleSteps(QwtAbstractSlider* _instance, quint32 singleSteps) {_instance->setSingleSteps(singleSteps);}
	quint32 QwtAbstractSlider_singleSteps(QwtAbstractSlider* _instance) {return _instance->singleSteps();}
	void QwtAbstractSlider_setPageSteps(QwtAbstractSlider* _instance, quint32 pageSteps) {_instance->setPageSteps(pageSteps);}
	quint32 QwtAbstractSlider_pageSteps(QwtAbstractSlider* _instance) {return _instance->pageSteps();}
	void QwtAbstractSlider_setStepAlignment(QwtAbstractSlider* _instance, bool stepAlignment) {_instance->setStepAlignment(stepAlignment);}
	bool QwtAbstractSlider_stepAlignment(QwtAbstractSlider* _instance) {return _instance->stepAlignment();}
	void QwtAbstractSlider_setTracking(QwtAbstractSlider* _instance, bool tracking) {_instance->setTracking(tracking);}
	bool QwtAbstractSlider_isTracking(QwtAbstractSlider* _instance) {return _instance->isTracking();}
	void QwtAbstractSlider_setReadOnly(QwtAbstractSlider* _instance, bool readOnly) {_instance->setReadOnly(readOnly);}
	bool QwtAbstractSlider_isReadOnly(QwtAbstractSlider* _instance) {return _instance->isReadOnly();}
	void QwtAbstractSlider_setInvertedControls(QwtAbstractSlider* _instance, bool inverted) {_instance->setInvertedControls(inverted);}
	bool QwtAbstractSlider_invertedControls(QwtAbstractSlider* _instance) {return _instance->invertedControls();}
	void QwtAbstractSlider_setValue(QwtAbstractSlider* _instance, double val) {_instance->setValue(val);}
	QwtSlider* QwtSlider_QwtSlider(const char* _className, Qt::Orientation orientation, QWidget* parent) {return newLQObject<QwtSlider>(_className, orientation, parent);}
	void QwtSlider_setOrientation(QwtSlider* _instance, Qt::Orientation orientation) {_instance->setOrientation(orientation);}
	Qt::Orientation QwtSlider_orientation(QwtSlider* _instance) {return _instance->orientation();}
	void QwtSlider_setScalePosition(QwtSlider* _instance, QwtSlider::ScalePosition position) {_instance->setScalePosition(position);}
	QwtSlider::ScalePosition QwtSlider_scalePosition(QwtSlider* _instance) {return _instance->scalePosition();}
	void QwtSlider_setTrough(QwtSlider* _instance, bool hasTrough) {_instance->setTrough(hasTrough);}
	bool QwtSlider_hasTrough(QwtSlider* _instance) {return _instance->hasTrough();}
	void QwtSlider_setGroove(QwtSlider* _instance, bool hasGroove) {_instance->setGroove(hasGroove);}
	bool QwtSlider_hasGroove(QwtSlider* _instance) {return _instance->hasGroove();}
	void QwtSlider_setHandleSize(QwtSlider* _instance, const QSize& size) {_instance->setHandleSize(size);}
	QSize QwtSlider_handleSize(QwtSlider* _instance) {return _instance->handleSize();}
	void QwtSlider_setBorderWidth(QwtSlider* _instance, int bw) {_instance->setBorderWidth(bw);}
	int QwtSlider_borderWidth(QwtSlider* _instance) {return _instance->borderWidth();}
	void QwtSlider_setSpacing(QwtSlider* _instance, int spacing) {_instance->setSpacing(spacing);}
	int QwtSlider_spacing(QwtSlider* _instance) {return _instance->spacing();}
	void QwtSlider_setUpdateInterval(QwtSlider* _instance, int interval) {_instance->setUpdateInterval(interval);}
	int QwtSlider_updateInterval(QwtSlider* _instance) {return _instance->updateInterval();}
	LQChart* LQChart_LQChart(const char* _className, int historyLength, double xMultiplier, QWidget* parent) {return newLQObject<LQChart>(_className, historyLength, xMultiplier, parent);}
	void LQChart_append(LQChart* _instance, const LQMatrix<double>& values) {_instance->append(values);}
	QString LQChart_axisTitle(LQChart* _instance, QwtPlot::Axis axisId) {return _instance->axisTitle(axisId);}
	void LQChart_clear(LQChart* _instance) {_instance->clear();}
	QStringList LQChart_curveTitles(LQChart* _instance) {return _instance->curveTitles();}
	int LQChart_historyLength(LQChart* _instance) {return _instance->historyLength();}
	bool LQChart_isAxisAutoScaling(LQChart* _instance, QwtPlot::Axis axisId) {return _instance->isAxisAutoScaling(axisId);}
	void LQChart_setAxisAutoScaling(LQChart* _instance, QwtPlot::Axis axisId, bool autoScaling) {_instance->setAxisAutoScaling(axisId, autoScaling);}
	void LQChart_setAxisTitle(LQChart* _instance, QwtPlot::Axis axisId, const QString& title) {_instance->setAxisTitle(axisId, title);}
	void LQChart_setCurveTitles(LQChart* _instance, const QStringList& titles) {_instance->setCurveTitles(titles);}
	void LQChart_setHistoryLength(LQChart* _instance, int length) {_instance->setHistoryLength(length);}
	void LQChart_setYAxisRange(LQChart* _instance, double min, double max) {_instance->setYAxisRange(min, max);}

};

// This is to be defined in lqmain.cpp
extern Bridge* bridge;

#endif // LQBRIDGE_H
