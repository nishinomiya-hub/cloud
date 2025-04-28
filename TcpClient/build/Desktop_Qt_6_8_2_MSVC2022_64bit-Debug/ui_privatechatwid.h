/********************************************************************************
** Form generated from reading UI file 'privatechatwid.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATECHATWID_H
#define UI_PRIVATECHATWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_privateChatWid
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *showMsg_te;
    QHBoxLayout *horizontalLayout;
    QLineEdit *inputMsg_le;
    QPushButton *sendMsg_pb;

    void setupUi(QWidget *privateChatWid)
    {
        if (privateChatWid->objectName().isEmpty())
            privateChatWid->setObjectName("privateChatWid");
        privateChatWid->resize(616, 410);
        gridLayout = new QGridLayout(privateChatWid);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(privateChatWid);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        showMsg_te = new QTextEdit(privateChatWid);
        showMsg_te->setObjectName("showMsg_te");

        verticalLayout->addWidget(showMsg_te);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        inputMsg_le = new QLineEdit(privateChatWid);
        inputMsg_le->setObjectName("inputMsg_le");

        horizontalLayout->addWidget(inputMsg_le);

        sendMsg_pb = new QPushButton(privateChatWid);
        sendMsg_pb->setObjectName("sendMsg_pb");

        horizontalLayout->addWidget(sendMsg_pb);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(privateChatWid);

        QMetaObject::connectSlotsByName(privateChatWid);
    } // setupUi

    void retranslateUi(QWidget *privateChatWid)
    {
        privateChatWid->setWindowTitle(QCoreApplication::translate("privateChatWid", "Form", nullptr));
        label->setText(QCoreApplication::translate("privateChatWid", "\347\247\201\350\201\212\345\257\271\350\261\241", nullptr));
        sendMsg_pb->setText(QCoreApplication::translate("privateChatWid", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class privateChatWid: public Ui_privateChatWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATECHATWID_H
