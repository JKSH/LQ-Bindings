# NOTE: CINTOOLS_PATH and QWT_PATH should be set by the build script that passes this file to qmake.
#       If you're not using the script, modify the paths below to point to the appropriate directories.
win32 {
    # ASSUMPTION: The dev PC is x64, while the target can be x86 or x64
    # ASSUMPTION: QWT_INSTALL_PREFIX in qwtconfig.pri is modified to facilitate multiple installations of the same version
    contains(QT_ARCH, i386) {
        !defined(CINTOOLS_PATH, var): CINTOOLS_PATH = "C:/Program Files (x86)/National Instruments/LabVIEW 2014/cintools"
        !defined(QWT_PATH,      var): QWT_PATH      = "C:/Qwt/Qwt-6.1.4_x86"
    } else {
        !defined(CINTOOLS_PATH, var): CINTOOLS_PATH = "C:/Program Files/National Instruments/LabVIEW 2014/cintools"
        !defined(QWT_PATH,      var): QWT_PATH      = "C:/Qwt/Qwt-6.1.4_x64"
    }
}

QT     += core_private # For QMetaObjectBuilder only. Do not use other private API.
QT     += widgets svg winextras

TARGET = LQ
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

INCLUDEPATH += $$clean_path($$CINTOOLS_PATH)
LIBS        += -L$${CINTOOLS_PATH}
LIBS        += -llabviewv -lUser32

# TODO: Move LQ Extras to its own external library
include(lqextras/LQExtras.pri)
include($$clean_path($$QWT_PATH)/features/qwt.prf)
