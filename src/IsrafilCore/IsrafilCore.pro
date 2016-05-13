TEMPLATE = lib
TARGET = IsrafilCore
QT += network

INCLUDEPATH += .
#include(../shared/shared.pri)
DESTDIR = $$BUILD_TREE/lib
DLLDESTDIR = $$BUILD_TREE/bin

HEADERS += backendmodel.h \
    songbase.h \
    pluginmgr.h \
    plugin.h \
    pluginloader.h \
    ichttpclient.h \
    israfilcore.h \
    singleton.h
SOURCES += backendmodel.cpp \
    pluginmgr.cpp \
    pluginloader.cpp \
    ichttpclient.cpp \
    israfilcore.cpp
