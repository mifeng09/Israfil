#ifndef NETEASEAPI_H
#define NETEASEAPI_H

#include <QMap>
#include "../icHttpClient/httpclient.hpp"

using namespace Israfil::Http;

namespace Israfil{
namespace Netease{


class NeteaseAPI
{
public:
    NeteaseAPI();
    QString testSearch(); //TODO: delete when done
private:
    HttpRequest *request;
    QMap<QString, QString> headers;
};


} //End Netease
} //End Israfil
#endif // NETEASEAPI_H
