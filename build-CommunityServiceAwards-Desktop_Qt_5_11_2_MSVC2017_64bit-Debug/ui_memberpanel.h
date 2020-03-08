/********************************************************************************
** Form generated from reading UI file 'memberpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
            MemberPanel->setObjectName(QStringLiteral("MemberPanel"));
        MemberPanel->resize(750, 500);
        introLabel = new QLabel(MemberPanel);
        introLabel->setObjectName(QStringLiteral("introLabel"));
        introLabel->setGeometry(QRect(270, 10, 491, 91));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee"));
        font.setPointSize(45);
        introLabel->setFont(font);
        thLabel = new QLabel(MemberPanel);
        thLabel->setObjectName(QStringLiteral("thLabel"));
        thLabel->setGeometry(QRect(60, 120, 141, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Neou"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        thLabel->setFont(font1);
        hourLabel = new QLabel(MemberPanel);
        hourLabel->setObjectName(QStringLiteral("hourLabel"));
        hourLabel->setGeometry(QRect(110, 180, 51, 61));
        hourLabel->setFont(font);
        eventList = new QListWidget(MemberPanel);
        eventList->setObjectName(QStringLiteral("eventList"));
        eventList->setGeometry(QRect(240, 130, 481, 331));
        logButton = new QPushButton(MemberPanel);
        logButton->setObjectName(QStringLiteral("logButton"));
        logButton->setGeometry(QRect(60, 270, 121, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Semilight"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        logButton->setFont(font2);
        exitButton = new QPushButton(MemberPanel);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(60, 400, 121, 41));
        exitButton->setFont(font2);
        logoLabel = new QLabel(MemberPanel);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(60, 30, 191, 111));
        settingsButton = new QPushButton(MemberPanel);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setGeometry(QRect(60, 335, 121, 41));
        settingsButton->setFont(font2);

        retranslateUi(MemberPanel);

        QMetaObject::connectSlotsByName(MemberPanel);
    } // setupUi

    void retranslateUi(QDialog *MemberPanel)
    {
        MemberPanel->setWindowTitle(QApplication::translate("MemberPanel", "Dialog", nullptr));
        introLabel->setText(QApplication::translate("MemberPanel", "Member's Dashboard", nullptr));
        thLabel->setText(QApplication::translate("MemberPanel", "Total Hours:", nullptr));
        hourLabel->setText(QApplication::translate("MemberPanel", "0", nullptr));
        logButton->setText(QApplication::translate("MemberPanel", "Log", nullptr));
        exitButton->setText(QApplication::translate("MemberPanel", "Logout", nullptr));
        logoLabel->setText(QString());
        settingsButton->setText(QApplication::translate("MemberPanel", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberPanel: public Ui_MemberPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERPANEL_H
