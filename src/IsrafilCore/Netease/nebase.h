#ifndef NEBASE_H
#define NEBASE_H
namespace Israfil{
namespace Netease{

const QString magicKey = "3go8&$8*3*3h0k(2)2";
const QString NEBaseURL = "http://music.163.com";
const QString NEAPIBase = NEBaseURL + "/api";
const QString NEWeAPIBase = NEBaseURL + "/weapi";
const QString NESearchURL = NEAPIBase + "/search/get";
const QString NESongInfo = NEAPIBase + "/song/detail?ids=[%d]";
const QString NELoginURL = NEWeAPIBase + "/login";
const QString NECellLoginURL = NEWeAPIBase + "/login/cellphone";
const QString NESongCDN = "http://m%d.music.126.net/%s/%d.mp3";
const QString NESongNewCDN = NEWeAPIBase + "/song/enhance/player/url?csrf_token=";
const QString NESongURL = NEBase + "/#/song?id=%d"; // web url

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

} //End namespace Netease
} //End namespace Israfil
#endif // NEBASE_H
