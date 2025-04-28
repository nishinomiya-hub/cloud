#ifndef FRIEND_H
#define FRIEND_H

#include <QWidget>
// 页面所用到的部件
#include <QTextEdit>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout> // 垂直布局
#include <QHBoxLayout> // 水平布局
#include "protocol.h"
#include "onlineuserwid.h" // 所有在线用户
#include "privatechatwid.h" // 私聊窗口
class Friend : public QWidget
{
    Q_OBJECT
public:
    explicit Friend(QWidget *parent = nullptr);
    void setOnlineUsers(PDU* pdu);

    QString getStrSearchName() const;
    void setStrSearchName(const QString &strSearchName);
    void updateFriendList(PDU *pdu);

    QListWidget *getPFriendLW() const;
private:

    QListWidget *m_pFriendLW;         // 好友列表
    QPushButton *m_pDelFriendPB;      // 删除好友
    QPushButton *m_pFlushFriendPB;    // 刷新好友列表
    QPushButton *m_pSOrHOnlineUserPB; // 显示/隐藏所有在线用户
    QPushButton *m_pSearchUserPB;     // 查找用户
    QLineEdit *m_pGroupInputLE;       // 群聊信息输入框
    QPushButton *m_pGroupSendMsgPB;   // 群聊发送消息
    QTextEdit *m_pGroupShowMsgTE;     // 显示群聊信息
    QPushButton *m_pPrivateChatPB;    // 私聊按钮，默认群聊

    onlineuserwid *m_pOnlineUserW;    // 所有在线用户页面

    QString m_strSearchName;          // 查找的用户的名字

    QList<privateChatWid*> m_priChatWidList; // 所有私聊的窗口

    //maybe delete
    QLineEdit *m_pInputMsgLE;
    QTextEdit *m_pShowMsgTE;
    QPushButton *m_pSendMsgPB;
public slots:
    void showOrHideOnlineUserW();     // 处理显示/隐藏所有在线用户按钮点击信号的槽函数
    // 刷新好友按钮的槽函数
    void flushFriendList();
    void groupChatSendMsg();
    void deleteFriend();
    void privateChat();
    void searchUser();
    privateChatWid *searchPriChatWid(const char *chatName);
    void insertPriChatWidList(privateChatWid *priChat);
    void updateGroupShowMsgTE(PDU *pdu);
signals:
};

#endif // FRIEND_H
