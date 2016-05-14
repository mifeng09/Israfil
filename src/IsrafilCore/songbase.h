#ifndef SONGBASE_H
#define SONGBASE_H

#include <QStringList>
#include <QVector>

// Describe a Lyrics Structure
struct LyricsBase{ QStringList URL;};
/*  Define Album with Name, Album URL of the \
 *  specific Source and its cover picture URL */
struct AlbumBase{ QString Name;QString URL;QString PicURL;};
// Define a singer with Name, URL and Singer Picture URL
struct AuthorBase{ QString Name;QString URL;QString PicURL;};

struct SongBase
{
/*public:
    SongBase();
    // Update function. If the variable is "" or null, nothing will be updated.
    void updateAuthor(QString, QString, QString);
    void updateAlbum(QString, QString, QString);
    void updateLyrics(QStringList);
    void updateSong(QString, QString, qint64, qint8, QString, QStringList);
protected:*/
    QString UID; // Universal Song ID
    QString Name; // Name of the Song
    QString ID; // ID of the specific Source
    qint8 Source; // Source: Netease, QQ, etc.
    QString URL; // Where User can find this song.
    QStringList SongDldURL; // The absolute URL of the song with different bitrates
    LyricsBase Lyrics;
    AlbumBase Album;
    AuthorBase Author;
};

typedef QVector<SongBase> SongList;




#endif // SONGBASE_H
