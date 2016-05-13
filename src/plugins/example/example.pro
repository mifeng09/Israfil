TEMPLATE = lib
TARGET = exampleplugin

INCLUDEPATH += . ../../IsrafilCore
CONFIG += plugin

DESTDIR = $$BUILD_TREE/plugins

SOURCES += example.cpp
