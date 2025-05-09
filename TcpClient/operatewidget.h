#ifndef OPERATEWIDGET_H
#define OPERATEWIDGET_H

#include <QWidget>
#include <QListWidget>
#include"friend.h"
#include"filesystem.h"
#include<QStackedWidget>
#include<QLabel>
class OperateWidget : public QWidget
{
    Q_OBJECT
public:
    explicit OperateWidget(QWidget *parent = nullptr);
    static OperateWidget &getInstance();
    Friend *getPFriend() const;

    void setUserLabel(const char* name); // 设置登录用户信息的Label值
    FileSystem *getPFileSystem() const;
private:
    QLabel *m_pUserLabel;       // 标识客户端登录用户信息
    QListWidget *m_pListWidget; // 组织主页面左侧常用功能（好友、文件按钮等）
    Friend *m_pFriend;          // 好友页面
    FileSystem *m_pFileSystem;  // 文件页面
    QStackedWidget *m_pSW;      // 容器，每次显示一个页面（好友or文件）
signals:
};

#endif // OPERATEWIDGET_H
