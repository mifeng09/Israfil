#ifndef ICPNETEASE_H
#define ICPNETEASE_H

#include <QObject>
#include <QtPlugin>

#include "israfilcore.h"

class Netease : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
    Q_PLUGIN_METADATA(IID "Israfil::Plugins::Netease")

public:
    Netease();
    ~Netease();
    void initcore(IsrafilCore*);
    QString title() const;
    QString descryption() const;
public slots:
    void icsltSearchByName(QString Name, SongList *pSL);
private:
    IsrafilCore *pIC;
};

#endif // ICPNETEASE_H
