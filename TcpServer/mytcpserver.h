#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>
#include<QList>
#include"mytcpsocket.h"
class MyTcpServer : public QTcpServer
{
    Q_OBJECT
public:
    MyTcpServer();

    static MyTcpServer& getInstance();
    void incomingConnection(qintptr handle) override; // 判断何时有客户端接入并处理
    bool forwardMsg(const QString caDesName, PDU *pdu);
    QString getStrRootPath() const;
    void setStrRootPath(const QString &strRootPath);
public slots:
    void deleteSocket(MyTcpSocket *mySocket);
private:
    QList<MyTcpSocket*> m_tcpSocketList;
    QString m_strRootPath;
};

#endif // MYTCPSERVER_H
