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
    israfilcore.h \
    Netease/nebase.h \
    Netease/nehttpclient.h \
    icHttpClient/httpbody.hpp \
    icHttpClient/httpclient.hpp \
    icHttpClient/httprequest.hpp \
    icHttpClient/httpresponse.hpp
SOURCES += backendmodel.cpp \
    pluginmgr.cpp \
    pluginloader.cpp \
    israfilcore.cpp \
    Netease/nebase.cpp \
    Netease/nehttpclient.cpp \
    icHttpClient/httpbody.cpp \
    icHttpClient/httpclient.cpp \
    icHttpClient/httprequest.cpp \
    icHttpClient/httpresponse.cpp
