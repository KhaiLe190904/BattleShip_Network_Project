/********************************************************************************
** Form generated from reading UI file 'listrank.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTRANK_H
#define UI_LISTRANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listrank
{
public:
    QWidget *centralwidget;
    QTableWidget *rank;

    void setupUi(QMainWindow *listrank)
    {
        if (listrank->objectName().isEmpty())
            listrank->setObjectName(QString::fromUtf8("listrank"));
        listrank->resize(324, 404);
        centralwidget = new QWidget(listrank);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        rank = new QTableWidget(centralwidget);
        if (rank->columnCount() < 2)
            rank->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        rank->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        rank->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        rank->setObjectName(QString::fromUtf8("rank"));
        rank->setGeometry(QRect(60, 20, 201, 341));
        listrank->setCentralWidget(centralwidget);

        retranslateUi(listrank);

        QMetaObject::connectSlotsByName(listrank);
    } // setupUi

    void retranslateUi(QMainWindow *listrank)
    {
        listrank->setWindowTitle(QCoreApplication::translate("listrank", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = rank->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("listrank", "user name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = rank->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("listrank", "elo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listrank: public Ui_listrank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTRANK_H
