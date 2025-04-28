#ifndef PRIVATECHATWID_H
#define PRIVATECHATWID_H

#include <QWidget>
#include"protocol.h"
namespace Ui {
class privateChatWid;
}

class privateChatWid : public QWidget
{
    Q_OBJECT

public:
    explicit privateChatWid(QWidget *parent = nullptr);
    QString strChatName() const;
    void setStrChatName(const QString &strChatName);
    QString strLoginName() const;
    void setStrLoginName(const QString &strLoginName);
    void updateShowMsgTE(PDU *pdu);
    void setPriChatTitle(const char *caTitle);
    ~privateChatWid();

private slots:
    void on_sendMsg_pb_clicked();

private:
    Ui::privateChatWid *ui;
    QString m_strChatName;  // 聊天对象用户名
    QString m_strLoginName; // 请求用户名
};

#endif // PRIVATECHATWID_H
