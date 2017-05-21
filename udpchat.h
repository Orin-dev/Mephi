#ifndef UDPCHAT_H
#define UDPCHAT_H
#include <QUdpSocket>

class UdpChat: public QObject
{
    Q_OBJECT
private:
    QString nickname;
   // int port;
    QUdpSocket* socket;
    int _port;
public:
    explicit UdpChat(QObject* parent = 0);
    //UdpChat(QString nick, int port);
    ~UdpChat();
    void send(QString str, qint8 type);
public slots:
    void read();
};

#endif // UDPCHAT_H
