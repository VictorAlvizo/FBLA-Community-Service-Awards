/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 500);
        actionMission = new QAction(MainWindow);
        actionMission->setObjectName(QStringLiteral("actionMission"));
        actionQT = new QAction(MainWindow);
        actionQT->setObjectName(QStringLiteral("actionQT"));
        actionDeveloper = new QAction(MainWindow);
        actionDeveloper->setObjectName(QStringLiteral("actionDeveloper"));
        actionGithub = new QAction(MainWindow);
        actionGithub->setObjectName(QStringLiteral("actionGithub"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        leydenText = new QLabel(centralWidget);
        leydenText->setObjectName(QStringLiteral("leydenText"));
        leydenText->setGeometry(QRect(240, 20, 301, 91));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee Rg"));
        font.setPointSize(56);
        leydenText->setFont(font);
        commLabel = new QLabel(centralWidget);
        commLabel->setObjectName(QStringLiteral("commLabel"));
        commLabel->setGeometry(QRect(90, 120, 571, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Yu Gothic UI"));
        font1.setPointSize(35);
        font1.setBold(false);
        font1.setWeight(50);
        commLabel->setFont(font1);
        adminButton = new QPushButton(centralWidget);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setGeometry(QRect(280, 240, 191, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Malgun Gothic"));
        font2.setPointSize(12);
        adminButton->setFont(font2);
        memberLogin = new QPushButton(centralWidget);
        memberLogin->setObjectName(QStringLiteral("memberLogin"));
        memberLogin->setGeometry(QRect(280, 310, 191, 51));
        memberLogin->setFont(font2);
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setGeometry(QRect(280, 380, 191, 51));
        helpButton->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 20));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionMission->setText(QApplication::translate("MainWindow", "Mission Statement", nullptr));
        actionQT->setText(QApplication::translate("MainWindow", "QT", nullptr));
        actionDeveloper->setText(QApplication::translate("MainWindow", "Developer", nullptr));
        actionGithub->setText(QApplication::translate("MainWindow", "Github", nullptr));
        leydenText->setText(QApplication::translate("MainWindow", "West Leyden ", nullptr));
        commLabel->setText(QApplication::translate("MainWindow", "Community Service Awards", nullptr));
        adminButton->setText(QApplication::translate("MainWindow", "Admin Login", nullptr));
        memberLogin->setText(QApplication::translate("MainWindow", "Member Login", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "Help", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
