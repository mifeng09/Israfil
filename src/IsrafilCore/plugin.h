#ifndef PLUGIN_H
#define PLUGIN_H

#include <QString>
#include <QVariantList>

class IsrafilCore;
class PluginInterface
{
public:
    ~PluginInterface() { }

    virtual void initcore(IsrafilCore *IC) = 0;
    virtual QString title() const = 0;
    virtual QString descryption() const = 0;
};

Q_DECLARE_INTERFACE(PluginInterface, "Israfil::Plugins")

#endif // PLUGINE_H
