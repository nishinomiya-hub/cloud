#include "onlineuserwid.h"
#include "ui_onlineuserwid.h"
#include"tcpclient.h"
onlineuserwid::onlineuserwid(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::onlineuserwid)
{
    ui->setupUi(this);
}

void onlineuserwid::setOnlineUsers(PDU *pdu)
{
    if(NULL == pdu)
    {
        return ;
    }
    // 处理pdu的Msg部分，将所有在线用户显示出来
    uint uiSize = pdu -> uiMsgLen / 32; // 消息Msg部分包含的用户数
    char caTmp[32];

    ui -> onlineuser_lw -> clear();// 清除之前在线用户列表的旧数据
    for(uint i = 0; i < uiSize; ++ i)
    {
        memcpy(caTmp, (char*)(pdu -> caMsg) + 32 * i, 32);
        // qDebug() << "在线用户：" << caTmp;
        // 补充：不显示自己信息，防止之后添加自己为好友等操作错误
        if(strcmp(caTmp, TcpClient::getInstance().getStrName().toStdString().c_str()) == 0)
        {
            continue;
        }
        ui -> onlineuser_lw -> addItem(caTmp);
    }
}

onlineuserwid::~onlineuserwid()
{
    delete ui;
}

void onlineuserwid::on_addfriend_pb_clicked()
{
    QString strAddName = ui -> onlineuser_lw -> currentItem()->text(); // 获得要添加好友用户名
    QString strLoginName = TcpClient::getInstance().getStrName();           // 该用户自己用户名
    PDU* pdu = mkPDU(0);

    pdu -> uiMsgType = ENUM_MSG_TYPE_ADD_FRIEND_REQUEST;
    memcpy(pdu->caData, strAddName.toStdString().c_str(), strAddName.size());
    memcpy(pdu->caData + 32, strLoginName.toStdString().c_str(), strLoginName.size());
    TcpClient::getInstance().getTcpSocket().write((char*)pdu, pdu -> uiPDULen);
    free(pdu);
    pdu = NULL;
}

