#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QPluginLoader>
#include "plugin.h"

class PluginLoader
{
public:
    static QList<PluginInterface *> plugins();
};

#endif // PLUGINLOADER_H
