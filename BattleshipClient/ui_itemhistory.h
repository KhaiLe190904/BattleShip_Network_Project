/********************************************************************************
** Form generated from reading UI file 'itemhistory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMHISTORY_H
#define UI_ITEMHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemHistory
{
public:
    QLabel *txtUsername;
    QLabel *txtPoint;

    void setupUi(QWidget *ItemHistory)
    {
        if (ItemHistory->objectName().isEmpty())
            ItemHistory->setObjectName(QString::fromUtf8("ItemHistory"));
        ItemHistory->resize(340, 50);
        txtUsername = new QLabel(ItemHistory);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(10, 10, 250, 30));
        QFont font;
        font.setPointSize(11);
        txtUsername->setFont(font);
        txtPoint = new QLabel(ItemHistory);
        txtPoint->setObjectName(QString::fromUtf8("txtPoint"));
        txtPoint->setGeometry(QRect(270, 10, 60, 30));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        txtPoint->setFont(font1);
        txtPoint->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(ItemHistory);

        QMetaObject::connectSlotsByName(ItemHistory);
    } // setupUi

    void retranslateUi(QWidget *ItemHistory)
    {
        ItemHistory->setWindowTitle(QCoreApplication::translate("ItemHistory", "Form", nullptr));
        txtUsername->setText(QCoreApplication::translate("ItemHistory", "Username", nullptr));
        txtPoint->setText(QCoreApplication::translate("ItemHistory", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemHistory: public Ui_ItemHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMHISTORY_H
