#ifndef ICPGOCORE_H
#define ICPGOCORE_H

#include <QObject>
#include <QtPlugin>

#include "israfilcore.h"

class IcpGoCore : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
    Q_PLUGIN_METADATA(IID "Israfil::Plugins::IcpGoCore")

public:
    IcpGoCore();
    ~IcpGoCore();
    void initcore(IsrafilCore*);
    QString title() const;
    QString descryption() const;
private:
    IsrafilCore *pIC;
};

#endif // ICPGOCORE_H
