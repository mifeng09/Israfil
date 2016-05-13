#ifndef ISRAFIL_HTTP_CLIENT_HPP
#define ISRAFIL_HTTP_CLIENT_HPP

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>

#include "httprequest.hpp"
#include "httpresponse.hpp"

namespace Israfil {
    namespace Http {

        class HttpClient : public QObject {
            Q_OBJECT

        public:
            HttpClient(QObject *parent = 0);

        public:
            HttpResponse* send(HttpRequest* request);

        private:
            QNetworkAccessManager *m_manager;
        };

    }
}

#endif
