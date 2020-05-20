/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMission;
    QAction *actionQT;
    QAction *actionDeveloper;
    QAction *actionGithub;
    QWidget *centralWidget;
    QLabel *leydenText;
    QLabel *commLabel;
    QPushButton *adminButton;
    QPushButton *memberLogin;
    QPushButton *helpButton;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 500);
        actionMission = new QAction(MainWindow);
        actionMission->setObjectName(QString::fromUtf8("actionMission"));
        actionQT = new QAction(MainWindow);
        actionQT->setObjectName(QString::fromUtf8("actionQT"));
        actionDeveloper = new QAction(MainWindow);
        actionDeveloper->setObjectName(QString::fromUtf8("actionDeveloper"));
        actionGithub = new QAction(MainWindow);
        actionGithub->setObjectName(QString::fromUtf8("actionGithub"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        leydenText = new QLabel(centralWidget);
        leydenText->setObjectName(QString::fromUtf8("leydenText"));
        leydenText->setGeometry(QRect(150, 20, 451, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Kenyan Coffee Rg"));
        font.setPointSize(56);
        leydenText->setFont(font);
        commLabel = new QLabel(centralWidget);
        commLabel->setObjectName(QString::fromUtf8("commLabel"));
        commLabel->setGeometry(QRect(90, 120, 571, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font1.setPointSize(35);
        font1.setBold(false);
        font1.setWeight(50);
        commLabel->setFont(font1);
        adminButton = new QPushButton(centralWidget);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));
        adminButton->setGeometry(QRect(280, 240, 191, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Malgun Gothic"));
        font2.setPointSize(12);
        adminButton->setFont(font2);
        memberLogin = new QPushButton(centralWidget);
        memberLogin->setObjectName(QString::fromUtf8("memberLogin"));
        memberLogin->setGeometry(QRect(280, 310, 191, 51));
        memberLogin->setFont(font2);
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(280, 380, 191, 51));
        helpButton->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 21));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionMission);
        menuAbout->addAction(actionQT);
        menuAbout->addAction(actionDeveloper);
        menuAbout->addAction(actionGithub);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionMission->setText(QCoreApplication::translate("MainWindow", "Mission Statement", nullptr));
        actionQT->setText(QCoreApplication::translate("MainWindow", "QT", nullptr));
        actionDeveloper->setText(QCoreApplication::translate("MainWindow", "Developer", nullptr));
        actionGithub->setText(QCoreApplication::translate("MainWindow", "Github", nullptr));
        leydenText->setText(QCoreApplication::translate("MainWindow", "West Leyden ", nullptr));
        commLabel->setText(QCoreApplication::translate("MainWindow", "Community Service Awards", nullptr));
        adminButton->setText(QCoreApplication::translate("MainWindow", "Admin Login", nullptr));
        memberLogin->setText(QCoreApplication::translate("MainWindow", "Member Login", nullptr));
        helpButton->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
