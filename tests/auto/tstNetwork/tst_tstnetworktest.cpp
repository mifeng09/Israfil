#include <QString>
#include <QByteArray>
#include <QtTest>
#include "ichttpclient.h"

class TstNetworkTest : public QObject
{
    Q_OBJECT

public:
    icHttpClient ichc;

private Q_SLOTS:
    void testHeader();
};

void TstNetworkTest::testHeader()
{
    ichc.setUserAgent("Mozilla/5.0 (X11; U; Linux i686; en-US) AppleWebKit/534.15 (KHTML, like Gecko) Ubuntu/10.10 Chromium/10.0.613.0 Chrome/10.0.613.0 Safari/534.15");
    icHeaders ih = ichc.getHeader();
    icHeaders::iterator it;
    for (it = ih.begin(); it != ih.end(); it++){
        qDebug() << it.key().data() << ": " << it.value().data();
    }
    //QByteArray res = ichc.HttpGet(QUrl("http://headers.cloxy.net/request.php"));
    //if (res.contains(QByteArray("Mozilla/5.0 (X11; U; Linux i686; en-US) AppleWebKit/534.15 (KHTML, like Gecko) Ubuntu/10.10 Chromium/10.0.613.0 Chrome/10.0.613.0 Safari/534.15")))
    //{
    //    QCOMPARE("right", "right");
    //}
    //else{
    //    QCOMPARE("right", "wrong");
    //}
}

QTEST_MAIN(TstNetworkTest)

#include "tst_tstnetworktest.moc"
