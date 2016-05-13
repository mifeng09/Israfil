#ifndef NEHTTPCLIENT_H
#define NEHTTPCLIENT_H
#include "../ichttpclient.h"

class NEHttpClient : public icHttpClient
{
    Q_OBJECT
public:
    NEHttpClient(QObject *parent = 0);
protected:
    void initich();

};

#endif // NEHTTPCLIENT_H
