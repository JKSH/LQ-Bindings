# NOTE: CINTOOLS_PATH and QWT_PATH (and VERSION for Linux) should be set by the build script that passes this file to qmake.
#       If you're not using the script, modify the paths below to point to the appropriate directories.
win32 {
    # ASSUMPTION: The dev PC is x64, while the target can be x86 or x64
    # ASSUMPTION: QWT_INSTALL_PREFIX in qwtconfig.pri is modified to facilitate multiple installations of the same version
    contains(QT_ARCH, i386) {
        !defined(CINTOOLS_PATH, var): CINTOOLS_PATH = "C:/Program Files (x86)/National Instruments/LabVIEW 2014/cintools"
        !defined(QWT_PATH,      var): QWT_PATH      = "C:/Qwt/Qwt-6.2.0_x86"
    } else {
        !defined(CINTOOLS_PATH, var): CINTOOLS_PATH = "C:/Program Files/National Instruments/LabVIEW 2014/cintools"
        !defined(QWT_PATH,      var): QWT_PATH      = "C:/Qwt/Qwt-6.2.0_x64"
    }
}
unix {
    # ASSUMPTION: The dev PC has the same architecture as the target.
    # NOTE: We only need headers from CINTOOLS_PATH. We don't need any binaries or a full-fledged installation of LabVIEW.
    # NOTE: VERSION is needed to set the binaries' soname.
    !defined(CINTOOLS_PATH, var): CINTOOLS_PATH = /usr/local/natinst/LabVIEW-2014/cintools
    !defined(QWT_PATH,      var): QWT_PATH      = /usr/local/qwt-6.2.0
    !defined(VERSION,       var): VERSION       = 0.4.0
}

TEMPLATE = lib
QT += core_private # For QMetaObjectBuilder only. Do not use other private API.
QT += widgets svg

win32 {
    # TODO: Move Qt Windows Extras to its own external library
    QT   += winextras
    LIBS += -L$$clean_path($$CINTOOLS_PATH)
    LIBS += -llabviewv -lUser32
}
unix {
    # Thanks to http://www.tripleboot.org/?p=138#Linux and
    # https://www.qt.io/blog/2011/10/28/rpath-and-runpath
    #
    # NOTE: RPATH should also be set on libqwt.so
    QMAKE_LFLAGS += -Wl,-rpath,"'\$$ORIGIN'"
}

SOURCES += \
    lqmain.cpp \
    lqlibinterface.cpp \
    lqtypes.cpp \
    lqerrors.cpp \
    lqapplication.cpp

HEADERS += \
    lqextras.h \
    lqglobal.h \
    lqmain.h \
    lqlibinterface.h \
    lqtypes.h \
    lqerrors.h \
    lqapplication.h

INCLUDEPATH += $$clean_path($$CINTOOLS_PATH)

# TODO: Move LQ Extras to its own external library
include(lqextras/LQExtras.pri)
include($$clean_path($$QWT_PATH)/features/qwt.prf)

DEFINES += LQ_LIBRARY
