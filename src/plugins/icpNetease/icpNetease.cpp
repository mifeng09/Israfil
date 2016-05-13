#include "icpNetease.h"

Netease::Netease(){

    //connect(pIC, SIGNAL(icsgnSearchSongByName(QString, SongList*)), this, SLOT(icsltSearchByName(QString,SongList*)));
}

Netease::~Netease(){

}

QString Netease::title() const
{
    return "Netease";
}

QString Netease::descryption() const
{
    return "Israfil Core Plugin Netease";
}

void Netease::initcore(IsrafilCore *IC)
{
    pIC = IC;
    connect(pIC, &IsrafilCore::icsgnSearchSongByName, this, &Netease::icsltSearchByName);
}

void Netease::icsltSearchByName(QString Name, SongList *pSL)
{
    SongBase tmpSB;
    tmpSB.UID="123487678";
    pSL->append(tmpSB);
}

//#include "icpNetease.moc"
