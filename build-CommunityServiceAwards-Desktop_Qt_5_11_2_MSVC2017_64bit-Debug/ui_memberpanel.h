/********************************************************************************
** Form generated from reading UI file 'memberpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERPANEL_H
#define UI_MEMBERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MemberPanel
{
public:
    QLabel *introLabel;
    QLabel *thLabel;
    QLabel *hourLabel;
    QListWidget *eventList;
    QPushButton *logButton;
    QPushButton *exitButton;
    QLabel *logoLabel;
    QPushButton *settingsButton;

    void setupUi(QDialog *MemberPanel)
    {
        if (MemberPanel->objectName().isEmpty())
            MemberPanel->setObjectName(QString::fromUtf8("MemberPanel"));
        MemberPanel->resize(750, 500);
        introLabel = new QLabel(MemberPanel);
        introLabel->setObjectName(QString::fromUtf8("introLabel"));
        introLabel->setGeometry(QRect(190, 10, 621, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font.setPointSize(45);
        introLabel->setFont(font);
        thLabel = new QLabel(MemberPanel);
        thLabel->setObjectName(QString::fromUtf8("thLabel"));
        thLabel->setGeometry(QRect(60, 120, 141, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Neou"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        thLabel->setFont(font1);
        hourLabel = new QLabel(MemberPanel);
        hourLabel->setObjectName(QString::fromUtf8("hourLabel"));
        hourLabel->setGeometry(QRect(110, 180, 71, 61));
        hourLabel->setFont(font);
        eventList = new QListWidget(MemberPanel);
        eventList->setObjectName(QString::fromUtf8("eventList"));
        eventList->setGeometry(QRect(200, 140, 481, 331));
        logButton = new QPushButton(MemberPanel);
        logButton->setObjectName(QString::fromUtf8("logButton"));
        logButton->setGeometry(QRect(60, 270, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semilight"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        logButton->setFont(font2);
        exitButton = new QPushButton(MemberPanel);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(60, 400, 121, 41));
        exitButton->setFont(font2);
        logoLabel = new QLabel(MemberPanel);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(60, 30, 191, 111));
        settingsButton = new QPushButton(MemberPanel);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setGeometry(QRect(60, 335, 121, 41));
        settingsButton->setFont(font2);

        retranslateUi(MemberPanel);

        QMetaObject::connectSlotsByName(MemberPanel);
    } // setupUi

    void retranslateUi(QDialog *MemberPanel)
    {
        MemberPanel->setWindowTitle(QCoreApplication::translate("MemberPanel", "Dialog", nullptr));
        introLabel->setText(QCoreApplication::translate("MemberPanel", "Member's Dashboard", nullptr));
        thLabel->setText(QCoreApplication::translate("MemberPanel", "Total Hours:", nullptr));
        hourLabel->setText(QCoreApplication::translate("MemberPanel", "0", nullptr));
        logButton->setText(QCoreApplication::translate("MemberPanel", "Log", nullptr));
        exitButton->setText(QCoreApplication::translate("MemberPanel", "Logout", nullptr));
        logoLabel->setText(QString());
        settingsButton->setText(QCoreApplication::translate("MemberPanel", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberPanel: public Ui_MemberPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERPANEL_H
