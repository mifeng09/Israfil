#ifndef PLUGINMGR_H
#define PLUGINMGR_H
#include <QStringList>

class IsrafilCore;

class PluginMgr
{
public:
    PluginMgr();
    void LoadAllPlugins();
    void PassCoreToAllPlugins(IsrafilCore *IC);
    QStringList GetPluginList();
private:
    QStringList PluginList;
};

#endif // PLUGINMGR_H
