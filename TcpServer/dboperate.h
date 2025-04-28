#ifndef DBOPERATE_H
#define DBOPERATE_H

#include <QObject>
#include <QSqlDatabase> // 连接数据库
#include <QSqlQuery> // 数据库操作
class DBOperate : public QObject
{
    Q_OBJECT
public:
    explicit DBOperate(QObject *parent = nullptr);
    static DBOperate& getInstance(); // 公用获取引用，实现单例模式
    void init(); // 初始化函数，数据库连接
    bool handleRegist(const char *name, const char *pwd);
    bool handleLogin(const char *name, const char *pwd);
    bool handleOffline(const char *name);
    QStringList handleOnlineUsers();
    int handleSearchUser(const char *name); // 处理查找用户，0存在不在线，1存在并在线，2不存在
    // 0对方存在不在线，1对方存在在线，2不存在，3已是好友，4请求错误
    int handleAddFriend(const char *addedName, const char *sourceName);
    bool handleAddFriendAgree(const char *addedName, const char *sourceName);
    int getIdByUserName(const char *name);
    QStringList handleFlushFriendRequest(const char *name);
    bool handleDeleteFriend(const char *deletedName, const char *sourceName);
    ~DBOperate(); // 析构函数，关闭数据库连接
signals:

public slots:
private:
    QSqlDatabase m_db; // 连接数据库
};

#endif // DBOPERATE_H
