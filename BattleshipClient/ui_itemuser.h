/********************************************************************************
** Form generated from reading UI file 'itemuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMUSER_H
#define UI_ITEMUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemUser
{
public:
    QPushButton *btnChallenge;
    QLabel *txtUsername;
    QLabel *txtElo;

    void setupUi(QWidget *ItemUser)
    {
        if (ItemUser->objectName().isEmpty())
            ItemUser->setObjectName(QString::fromUtf8("ItemUser"));
        ItemUser->resize(480, 50);
        btnChallenge = new QPushButton(ItemUser);
        btnChallenge->setObjectName(QString::fromUtf8("btnChallenge"));
        btnChallenge->setGeometry(QRect(390, 10, 80, 30));
        QFont font;
        font.setPointSize(11);
        btnChallenge->setFont(font);
        txtUsername = new QLabel(ItemUser);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(10, 10, 300, 30));
        txtUsername->setFont(font);
        txtElo = new QLabel(ItemUser);
        txtElo->setObjectName(QString::fromUtf8("txtElo"));
        txtElo->setGeometry(QRect(320, 10, 60, 30));
        txtElo->setFont(font);
        txtElo->setAutoFillBackground(false);
        txtElo->setStyleSheet(QString::fromUtf8("color: red;"));
        txtElo->setAlignment(Qt::AlignCenter);

        retranslateUi(ItemUser);

        QMetaObject::connectSlotsByName(ItemUser);
    } // setupUi

    void retranslateUi(QWidget *ItemUser)
    {
        ItemUser->setWindowTitle(QCoreApplication::translate("ItemUser", "Form", nullptr));
        btnChallenge->setText(QCoreApplication::translate("ItemUser", "Challenge", nullptr));
        txtUsername->setText(QCoreApplication::translate("ItemUser", "Username", nullptr));
        txtElo->setText(QCoreApplication::translate("ItemUser", "0000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemUser: public Ui_ItemUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMUSER_H
