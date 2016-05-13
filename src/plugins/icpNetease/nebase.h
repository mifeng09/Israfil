#ifndef NEBASE_H
#define NEBASE_H

#include <QtCore>

const QString MagicKey = "3go8&$8*3*3h0k(2)2";
const QString NEBase = "http://music.163.com";
const QString NEAPIBase = NEBase+"/api";
const QString NESongInfo = NEAPIBase + "/song/detail?ids=[%d]";
const QString NESongCDN = "http://m%d.music.126.net/%s/%d.mp3";
const QString NESongURL = NEBase + "/#/song?id=%d";
const int NERetOK = 200;
const bool DEBUG = 0;

class NeteaseMusicInfo{
public:
    quint64 DfsID;
    quint32 BitRate;
};

class NeteaseArtistSubRet{
public:
    QString Name;
    quint64 ID;
    QString PicURL;
    quint32 SongNum;
    quint32 AlbumNum;
};

class NeteaseSongSubRet {
public:
    bool starred;
    QString Mp3URL;
    QString Name;
    quint64 ID;
    quint64 Duration;
    QVector<NeteaseArtistSubRet> Artists;
    QVector<NeteaseMusicInfo> MusicURLInfo;
};



#endif // NEBASE_H
