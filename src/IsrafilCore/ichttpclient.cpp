#include "ichttpclient.h"

icHttpClient::icHttpClient()
{
    httpClient = new QNetworkAccessManager();
    request = new QNetworkRequest();
    UserAgent = "";
    //HttpHeader = "";
}

void icHttpClient::updateHeader()
{
    for (auto it = HttpHeader.begin(); it != HttpHeader.end(); it++){ //icHeaders::iterator it;
        qDebug() << "iterator";
        request->setRawHeader(it.key().data(), it.value().data());
    }
    //qDebug() << "iterator finished";
    //request->setHeader(QNetworkRequest::UserAgentHeader, "Mozilla/5.0 (X11; U; Linux i686; en-US) AppleWebKit/534.15 (KHTML, like Gecko) Ubuntu/10.10 Chromium/10.0.613.0 Chrome/10.0.613.0 Safari/534.15");
    request->setHeader(QNetworkRequest::UserAgentHeader, UserAgent.toUtf8());//"Mozilla");
    //qDebug() << "User Agent setrawHeader finished";
}

void icHttpClient::setUserAgent(QString ua)
{
    UserAgent = ua;
    updateHeader();
    //request->setHeader(header, );
}

void icHttpClient::setHeader(icHeaders header)
{
    HttpHeader = header;
    updateHeader();
}

QByteArray icHttpClient::HttpGet(QUrl getURL)
{
    request->setUrl(getURL);
    reply = httpClient->get(*request);
    qDebug() << reply->readAll() << endl << "End.";
    return reply->readAll();
}

QByteArray icHttpClient::HttpPost(QUrl posturl, QString str)
{
    //TODO:
    /// Avoid Warning
    posturl = posturl;
    str = str;
    ///
    request->setUrl(posturl);
    reply = httpClient->post(*request, str.toUtf8());
    qDebug() << reply->readAll() << endl << "End.";
    return reply->readAll();
}

icHeaders icHttpClient::getHeader()
{
    return HttpHeader;
}
/*
icCookieJar::icCookieJar() : QNetworkCookieJar()
{
    loadCookies();
}

icCookieJar::~icCookieJar()
{
    saveCookies();
}

void icCookieJar::clearCookies()
{
    setAllCookies(QList<QNetworkCookie>());
    loadExtraCookies();
}

void icCookieJar::loadCookies()
{
    QByteArray storedCookies; //TODO
    setAllCookies(QNetworkCookie::parseCookies(storedCookies));

    loadExtraCookies();
}

void icCookieJar::saveCookies()
{
    QList<QNetworkCookie> list = allCookies();
    QByteArray data;
    foreach (const QNetworkCookie& cookie, list) {
        if (!cookie.isSessionCookie() && cookie.domain().endsWith("music.163.com")) {
            data.append(cookie.toRawForm());
            data.append("\n");
        }
    }
    //TODO: QSettings().setValue(UserConfig::KeyCookies, data);
}


void icCookieJar::loadExtraCookies()
{
    QList<QNetworkCookie> extraCookies;
    extraCookies.append(QNetworkCookie("appver", "1.6.1.82809"));
    extraCookies.append(QNetworkCookie("channel", "netease"));
    extraCookies.append(QNetworkCookie("deviceId", QtMobility::QSystemDeviceInfo().uniqueDeviceID().toUpper()));
    extraCookies.append(QNetworkCookie("os", "pc"));
    extraCookies.append(QNetworkCookie("osver", "Microsoft-Windows-8-Professional-build-9200-64bit"));
    setCookiesFromUrl(extraCookies, QUrl("http://music.163.com"));
}
*/
