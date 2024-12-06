/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QLabel *label_2;
    QLineEdit *edtPassword;
    QLabel *label;
    QPushButton *btnSignUp;
    QLineEdit *edtUsername;
    QPushButton *btnSignIn;
    QWidget *mainPage;
    QPushButton *btnSignOut;
    QPushButton *btnGetUsers;
    QListWidget *listWidget;
    QLabel *label_5;
    QLabel *txtUsername;
    QListWidget *listWidgetHistory;
    QPushButton *btnQuickMatch;
    QPushButton *btnShowRank;
    QPushButton *btnPlayWithBot;
    QWidget *matchPage;
    QGraphicsView *myView;
    QGraphicsView *enemyView;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *txtStatus;
    QPushButton *btnOk;
    QLabel *txtMe;
    QLabel *txtEnemy;
    QPushButton *btnSurrender;
    QPlainTextEdit *chattxt;
    QListWidget *listchat;
    QWidget *replayPage;
    QGraphicsView *player1View;
    QGraphicsView *player2View;
    QLabel *txtPlayer1;
    QLabel *txtPlayer2;
    QPushButton *btnExit;
    QPushButton *btnPrev;
    QPushButton *btnNext;
    QLabel *txtReplayStatus;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 520);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1100, 520));
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 170, 80, 30));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        edtPassword = new QLineEdit(loginPage);
        edtPassword->setObjectName(QString::fromUtf8("edtPassword"));
        edtPassword->setGeometry(QRect(440, 170, 220, 30));
        edtPassword->setFont(font);
        edtPassword->setEchoMode(QLineEdit::Password);
        label = new QLabel(loginPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 120, 80, 30));
        label->setFont(font);
        btnSignUp = new QPushButton(loginPage);
        btnSignUp->setObjectName(QString::fromUtf8("btnSignUp"));
        btnSignUp->setGeometry(QRect(400, 270, 220, 30));
        edtUsername = new QLineEdit(loginPage);
        edtUsername->setObjectName(QString::fromUtf8("edtUsername"));
        edtUsername->setGeometry(QRect(440, 120, 220, 30));
        edtUsername->setFont(font);
        btnSignIn = new QPushButton(loginPage);
        btnSignIn->setObjectName(QString::fromUtf8("btnSignIn"));
        btnSignIn->setGeometry(QRect(400, 220, 220, 30));
        stackedWidget->addWidget(loginPage);
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        btnSignOut = new QPushButton(mainPage);
        btnSignOut->setObjectName(QString::fromUtf8("btnSignOut"));
        btnSignOut->setGeometry(QRect(20, 290, 150, 30));
        btnGetUsers = new QPushButton(mainPage);
        btnGetUsers->setObjectName(QString::fromUtf8("btnGetUsers"));
        btnGetUsers->setGeometry(QRect(20, 50, 150, 30));
        listWidget = new QListWidget(mainPage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(190, 10, 500, 500));
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget->setItemAlignment(Qt::AlignHCenter);
        label_5 = new QLabel(mainPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(710, 10, 370, 30));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: red;"));
        label_5->setAlignment(Qt::AlignCenter);
        txtUsername = new QLabel(mainPage);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(20, 10, 150, 30));
        txtUsername->setFont(font);
        txtUsername->setStyleSheet(QString::fromUtf8("color: blue;"));
        txtUsername->setTextFormat(Qt::AutoText);
        txtUsername->setScaledContents(false);
        txtUsername->setAlignment(Qt::AlignCenter);
        listWidgetHistory = new QListWidget(mainPage);
        listWidgetHistory->setObjectName(QString::fromUtf8("listWidgetHistory"));
        listWidgetHistory->setGeometry(QRect(710, 40, 370, 470));
        listWidgetHistory->setSelectionMode(QAbstractItemView::NoSelection);
        btnQuickMatch = new QPushButton(mainPage);
        btnQuickMatch->setObjectName(QString::fromUtf8("btnQuickMatch"));
        btnQuickMatch->setGeometry(QRect(20, 110, 150, 30));
        btnShowRank = new QPushButton(mainPage);
        btnShowRank->setObjectName(QString::fromUtf8("btnShowRank"));
        btnShowRank->setGeometry(QRect(20, 170, 150, 30));
        btnPlayWithBot = new QPushButton(mainPage);
        btnPlayWithBot->setObjectName(QString::fromUtf8("btnPlayWithBot"));
        btnPlayWithBot->setGeometry(QRect(20, 230, 150, 30));
        stackedWidget->addWidget(mainPage);
        matchPage = new QWidget();
        matchPage->setObjectName(QString::fromUtf8("matchPage"));
        myView = new QGraphicsView(matchPage);
        myView->setObjectName(QString::fromUtf8("myView"));
        myView->setGeometry(QRect(30, 90, 380, 380));
        enemyView = new QGraphicsView(matchPage);
        enemyView->setObjectName(QString::fromUtf8("enemyView"));
        enemyView->setGeometry(QRect(690, 90, 380, 380));
        label_3 = new QLabel(matchPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 50, 380, 30));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: green;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(matchPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(690, 50, 380, 30));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: red;"));
        label_4->setAlignment(Qt::AlignCenter);
        txtStatus = new QLabel(matchPage);
        txtStatus->setObjectName(QString::fromUtf8("txtStatus"));
        txtStatus->setGeometry(QRect(250, 20, 600, 30));
        QFont font3;
        font3.setPointSize(11);
        txtStatus->setFont(font3);
        txtStatus->setStyleSheet(QString::fromUtf8("color: blue;"));
        txtStatus->setAlignment(Qt::AlignCenter);
        btnOk = new QPushButton(matchPage);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(460, 90, 180, 30));
        txtMe = new QLabel(matchPage);
        txtMe->setObjectName(QString::fromUtf8("txtMe"));
        txtMe->setGeometry(QRect(30, 480, 380, 30));
        txtMe->setFont(font);
        txtMe->setStyleSheet(QString::fromUtf8("color: green;"));
        txtMe->setAlignment(Qt::AlignCenter);
        txtEnemy = new QLabel(matchPage);
        txtEnemy->setObjectName(QString::fromUtf8("txtEnemy"));
        txtEnemy->setGeometry(QRect(690, 480, 380, 30));
        txtEnemy->setFont(font);
        txtEnemy->setStyleSheet(QString::fromUtf8("color: red;"));
        txtEnemy->setAlignment(Qt::AlignCenter);
        btnSurrender = new QPushButton(matchPage);
        btnSurrender->setObjectName(QString::fromUtf8("btnSurrender"));
        btnSurrender->setGeometry(QRect(460, 440, 180, 30));
        chattxt = new QPlainTextEdit(matchPage);
        chattxt->setObjectName(QString::fromUtf8("chattxt"));
        chattxt->setGeometry(QRect(420, 399, 261, 31));
        listchat = new QListWidget(matchPage);
        listchat->setObjectName(QString::fromUtf8("listchat"));
        listchat->setGeometry(QRect(420, 130, 261, 261));
        stackedWidget->addWidget(matchPage);
        replayPage = new QWidget();
        replayPage->setObjectName(QString::fromUtf8("replayPage"));
        player1View = new QGraphicsView(replayPage);
        player1View->setObjectName(QString::fromUtf8("player1View"));
        player1View->setGeometry(QRect(30, 90, 380, 380));
        player2View = new QGraphicsView(replayPage);
        player2View->setObjectName(QString::fromUtf8("player2View"));
        player2View->setGeometry(QRect(690, 90, 380, 380));
        txtPlayer1 = new QLabel(replayPage);
        txtPlayer1->setObjectName(QString::fromUtf8("txtPlayer1"));
        txtPlayer1->setGeometry(QRect(30, 480, 380, 30));
        txtPlayer1->setFont(font);
        txtPlayer1->setStyleSheet(QString::fromUtf8("color: green;"));
        txtPlayer1->setAlignment(Qt::AlignCenter);
        txtPlayer2 = new QLabel(replayPage);
        txtPlayer2->setObjectName(QString::fromUtf8("txtPlayer2"));
        txtPlayer2->setGeometry(QRect(690, 480, 380, 30));
        txtPlayer2->setFont(font);
        txtPlayer2->setStyleSheet(QString::fromUtf8("color: red;"));
        txtPlayer2->setAlignment(Qt::AlignCenter);
        btnExit = new QPushButton(replayPage);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(440, 430, 220, 40));
        btnExit->setFont(font);
        btnPrev = new QPushButton(replayPage);
        btnPrev->setObjectName(QString::fromUtf8("btnPrev"));
        btnPrev->setGeometry(QRect(440, 90, 100, 40));
        btnPrev->setFont(font);
        btnNext = new QPushButton(replayPage);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(560, 90, 100, 40));
        btnNext->setFont(font);
        txtReplayStatus = new QLabel(replayPage);
        txtReplayStatus->setObjectName(QString::fromUtf8("txtReplayStatus"));
        txtReplayStatus->setGeometry(QRect(310, 20, 480, 30));
        txtReplayStatus->setFont(font3);
        txtReplayStatus->setStyleSheet(QString::fromUtf8("color: blue;"));
        txtReplayStatus->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(replayPage);
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(edtUsername, edtPassword);
        QWidget::setTabOrder(edtPassword, btnSignIn);
        QWidget::setTabOrder(btnSignIn, btnSignUp);
        QWidget::setTabOrder(btnSignUp, btnSignOut);
        QWidget::setTabOrder(btnSignOut, btnGetUsers);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        btnSignIn->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Battleship", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        edtPassword->setInputMask(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        btnSignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        btnSignIn->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        btnSignOut->setText(QCoreApplication::translate("MainWindow", "Sign Out", nullptr));
        btnGetUsers->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        txtUsername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        btnQuickMatch->setText(QCoreApplication::translate("MainWindow", "Quick Match", nullptr));
        btnShowRank->setText(QCoreApplication::translate("MainWindow", "Show Rank", nullptr));
        btnPlayWithBot->setText(QCoreApplication::translate("MainWindow", "Play with bot", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Your board", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enemy board", nullptr));
        txtStatus->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        btnOk->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        txtMe->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        txtEnemy->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnSurrender->setText(QCoreApplication::translate("MainWindow", "Surrender", nullptr));
        txtPlayer1->setText(QCoreApplication::translate("MainWindow", "Player1's board", nullptr));
        txtPlayer2->setText(QCoreApplication::translate("MainWindow", "Player2's board", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        btnPrev->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        btnNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        txtReplayStatus->setText(QCoreApplication::translate("MainWindow", "Replay status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
