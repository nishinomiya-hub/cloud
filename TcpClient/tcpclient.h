#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QWidget>
#include<QFile>
#include<QTcpSocket>
QT_BEGIN_NAMESPACE
namespace Ui {
class TcpClient;
}
QT_END_NAMESPACE

class TcpClient : public QWidget
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = nullptr);
    ~TcpClient();
    void LoadConfig();

    static TcpClient &getInstance();
    QTcpSocket& getTcpSocket();
    QString getStrName();
    void setStrName(const QString &strName);
    QString getStrRootPath() const;
    QString getStrCurPath() const;
    void setStrCurPath(const QString &strCurPath);
public slots:
    void showConnect();
    void receiveMsg();
private slots:

    void on_regist_pb_clicked();

    void on_login_pb_clicked();

private:
    Ui::TcpClient *ui;
    QString m_strIP;
    qint64 m_usPort;

    QTcpSocket m_tcpSocket;
    QString m_strName;
    QString m_strRootPath;
    QString m_strCurPath;
};
#endif // TCPCLIENT_H
