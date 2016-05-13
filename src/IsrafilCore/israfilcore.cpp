#include "israfilcore.h"

IsrafilCore::IsrafilCore()
{
    plmgr = new PluginMgr();
}

SongList* IsrafilCore::SearchByName(QString Name)
{
    SongList *pSL = new SongList();
    emit icsgnSearchSongByName(Name, pSL);
    return pSL;
}
