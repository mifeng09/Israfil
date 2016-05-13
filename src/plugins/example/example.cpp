#include <QObject>
#include <QtPlugin>

#include "israfilcore.h"

class ExamplePlugin : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
    Q_PLUGIN_METADATA(IID "Israfil::Plugins::ExamplePlugin")

public:
    QString title() const { return "ExamplePlugin"; }
    QString descryption() const {return "Example Descryption";}
};

