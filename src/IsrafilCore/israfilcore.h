#ifndef ISRAFILCORE_H
#define ISRAFILCORE_H

#include "pluginloader.h"
#include "plugin.h"
#include "pluginmgr.h"
#include "songbase.h"
//#include "ichttpclient-old.h"

class IsrafilCore: public QObject
{
    Q_OBJECT
public:
    IsrafilCore();
    PluginMgr *plmgr;
    SongList* SearchByName(QString Name);
signals:
    void icsgnSearchSongByName(QString Name, SongList *pSL);
    void icsgnSearchLyricsByName();
    void icsgnGetDownloadURLByUID();
private:
};

#endif // ISRAFILCORE_H
