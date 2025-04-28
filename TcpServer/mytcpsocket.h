#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QTcpSocket>
#include"protocol.h"
#include"dboperate.h"
#include<QTimer>
#include<QFile>
class MyTcpSocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit MyTcpSocket(QObject *parent = nullptr);
    PDU* handleLoginRequest(PDU* pdu,QString& m_strName);
    QString getStrName();
private:
    QString m_strname;
    TransFile* m_uploadFile; // 上传文件的信息

    QFile *m_pDownloadFile; // 客户端要下载的文件
    QTimer *m_pTimer; // 计时器
public slots:
    void recvMsg();
    void handleClientOffline();
    void handledownloadFileData(); // 向客户端实际传输要下载的文件数据

signals:
    void offline(MyTcpSocket *socket); // 通过信号传送给mytcpserver用户下线通知，然后附带参数socket地址方便删除
};

#endif // MYTCPSOCKET_H
