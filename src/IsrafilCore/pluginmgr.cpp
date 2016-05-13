#include "pluginmgr.h"
#include "pluginloader.h"

PluginMgr::PluginMgr()
{
    //QStringList plugins;
}

void PluginMgr::LoadAllPlugins()
{
    foreach (PluginInterface *plugin, PluginLoader::plugins()){
        PluginList += plugin->title();
    }
}

void PluginMgr::PassCoreToAllPlugins(IsrafilCore *IC)
{
    foreach (PluginInterface *plugin, PluginLoader::plugins()){
        plugin->initcore(IC);
    }
}

QStringList PluginMgr::GetPluginList()
{
    return PluginList;
}
