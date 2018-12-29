# NOTE: Modify these paths to point to the appropriate libraries
CINTOOLS_PATH = "C:/Program Files (x86)/National Instruments/LabVIEW 2014/cintools"
QWT_PATH      = "C:/Qwt-6.1.3"

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

INCLUDEPATH +=   $${CINTOOLS_PATH}
LIBS        += -L$${CINTOOLS_PATH}
LIBS        += -llabviewv -lUser32

# TODO: Move LQ Extras to its own external library
include(lqextras/LQExtras.pri)
include($${QWT_PATH}/features/qwt.prf)
