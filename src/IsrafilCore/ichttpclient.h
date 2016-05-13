#ifndef ICHTTPCLIENT_H
#define ICHTTPCLIENT_H

#include <QtNetwork/QNetworkAccessManager>
#include <QUrl>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
//#include <QtNetwork/QNetworkCookieJar>
//#include <QSettings>
///Debug
#include <QDebug>

//#include "singleton.h"

typedef QMap<QByteArray, QByteArray> icHeaders; // Http Header structure

//class icCookieJar;
class icHttpClient
{
public:
    icHttpClient();
    void setUserAgent(QString);
    void setHeader(icHeaders);
    void updateHeader();
    QByteArray HttpGet(QUrl);
    QByteArray HttpPost(QUrl, QString);
    icHeaders getHeader();
private:
    QNetworkAccessManager *httpClient;
    QNetworkRequest *request;
    QNetworkReply *reply;
    QString UserAgent;
    icHeaders HttpHeader;
};

/*
class icCookieJar : public QNetworkCookieJar
{
    Q_OBJECT
    DECLARE_SINGLETON(icCookieJar)
public:
    ~icCookieJar();
    void clearCookies();
private:
    icCookieJar();
    void loadCookies();
    void saveCookies();
    void loadExtraCookies();
};
*/
#endif // ICHTTPCLIENT_H
