#ifndef ISRAFIL_HTTP_BODY_HPP
#define ISRAFIL_HTTP_BODY_HPP

#include <QObject>

namespace Israfil {
    namespace Http {

        class HttpBody : public QObject {
            Q_OBJECT

        public:
            HttpBody(QObject *parent = 0);
            HttpBody(QString body, QObject *parent = 0);
            HttpBody(QByteArray body, QObject *parent = 0);

        public:
            QString toString();
            QByteArray toByteArray();

        public:
            bool isEmpty();

        private:
            QString m_body;
        };

    }
}

#endif
