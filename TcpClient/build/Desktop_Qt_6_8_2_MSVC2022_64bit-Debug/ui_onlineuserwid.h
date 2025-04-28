/********************************************************************************
** Form generated from reading UI file 'onlineuserwid.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONLINEUSERWID_H
#define UI_ONLINEUSERWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_onlineuserwid
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *onlineuser_lw;
    QVBoxLayout *verticalLayout;
    QPushButton *addfriend_pb;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *onlineuserwid)
    {
        if (onlineuserwid->objectName().isEmpty())
            onlineuserwid->setObjectName("onlineuserwid");
        onlineuserwid->resize(598, 403);
        layoutWidget = new QWidget(onlineuserwid);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 110, 341, 194));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        onlineuser_lw = new QListWidget(layoutWidget);
        onlineuser_lw->setObjectName("onlineuser_lw");

        horizontalLayout->addWidget(onlineuser_lw);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addfriend_pb = new QPushButton(layoutWidget);
        addfriend_pb->setObjectName("addfriend_pb");

        verticalLayout->addWidget(addfriend_pb);

        verticalSpacer = new QSpacerItem(20, 128, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(onlineuserwid);

        QMetaObject::connectSlotsByName(onlineuserwid);
    } // setupUi

    void retranslateUi(QWidget *onlineuserwid)
    {
        onlineuserwid->setWindowTitle(QCoreApplication::translate("onlineuserwid", "Form", nullptr));
        addfriend_pb->setText(QCoreApplication::translate("onlineuserwid", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class onlineuserwid: public Ui_onlineuserwid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONLINEUSERWID_H
