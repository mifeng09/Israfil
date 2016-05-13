#ifndef PLUGIN_H
#define PLUGIN_H

#include <QString>

class PluginInterface
{
public:
    ~PluginInterface() { }

    virtual QString title() const = 0;
};

Q_DECLARE_INTERFACE(PluginInterface, "Israfil::Plugins")

#endif // PLUGINE_H
