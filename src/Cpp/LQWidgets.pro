QT     += core_private # For QMetaObjectBuilder only. Do not use other private API.
QT     += widgets svg winextras

TARGET = LQWidgets
TEMPLATE = lib

SOURCES += \
    lqmain.cpp \
    lqlibinterface.cpp \
    lqtypes.cpp \
    lqerrors.cpp \
    lqapplication.cpp

HEADERS += \
    lqmain.h \
    lqlibinterface.h \
    lqtypes.h \
    lqerrors.h \
    lqapplication.h

# TODO: Move LQ Extras to its own external library
SOURCES += \
	lqextras/lqchart.cpp \
	lqextras/historylengthdialog.cpp \
	lqextras/axisrangedialog.cpp

HEADERS  += \
	lqextras/lqchart.h \
	lqextras/historylengthdialog.h \
	lqextras/axisrangedialog.h

FORMS += \
	lqextras/historylengthdialog.ui \
	lqextras/axisrangedialog.ui

# NOTE: Modify the following to point to the appropriate libraries
INCLUDEPATH += "C:/Program Files (x86)/National Instruments/LabVIEW 2013/cintools"
LIBS        += "C:/Program Files (x86)/National Instruments/LabVIEW 2013/cintools/labviewv.lib"

include(C:/Qwt-6.1.2/features/qwt.prf)
