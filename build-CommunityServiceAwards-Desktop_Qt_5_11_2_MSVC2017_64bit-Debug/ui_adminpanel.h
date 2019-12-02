/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPanel
{
public:
    QLabel *logoImage;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLabel *nameOutput;
    QLabel *userLabel;
    QLabel *userOutput;
    QLabel *passwordLabel;
    QLabel *passwordOutput;
    QLabel *gradeLabel;
    QLabel *gradeOutput;
    QLabel *hoursLabel;
    QLabel *hoursOutput;
    QPushButton *eventButton;
    QPushButton *editButton;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *memberLabel;
    QPushButton *logoutButton;
    QComboBox *studentDropDown;
    QPushButton *registerButton;
    QPushButton *settingButton;

    void setupUi(QDialog *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName(QStringLiteral("AdminPanel"));
        AdminPanel->resize(750, 500);
        logoImage = new QLabel(AdminPanel);
        logoImage->setObjectName(QStringLiteral("logoImage"));
        logoImage->setGeometry(QRect(30, 220, 251, 241));
        layoutWidget = new QWidget(AdminPanel);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 20, 431, 451));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font;
        font.setPointSize(20);
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        nameOutput = new QLabel(layoutWidget);
        nameOutput->setObjectName(QStringLiteral("nameOutput"));
        nameOutput->setFont(font);

        gridLayout->addWidget(nameOutput, 0, 1, 1, 2);

        userLabel = new QLabel(layoutWidget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setFont(font);

        gridLayout->addWidget(userLabel, 1, 0, 1, 2);

        userOutput = new QLabel(layoutWidget);
        userOutput->setObjectName(QStringLiteral("userOutput"));
        userOutput->setFont(font);

        gridLayout->addWidget(userOutput, 1, 2, 1, 1);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 2);

        passwordOutput = new QLabel(layoutWidget);
        passwordOutput->setObjectName(QStringLiteral("passwordOutput"));
        passwordOutput->setFont(font);

        gridLayout->addWidget(passwordOutput, 2, 2, 1, 1);

        gradeLabel = new QLabel(layoutWidget);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setFont(font);

        gridLayout->addWidget(gradeLabel, 3, 0, 1, 2);

        gradeOutput = new QLabel(layoutWidget);
        gradeOutput->setObjectName(QStringLiteral("gradeOutput"));
        gradeOutput->setFont(font);

        gridLayout->addWidget(gradeOutput, 3, 2, 1, 1);

        hoursLabel = new QLabel(layoutWidget);
        hoursLabel->setObjectName(QStringLiteral("hoursLabel"));
        hoursLabel->setFont(font);

        gridLayout->addWidget(hoursLabel, 4, 0, 1, 2);

        hoursOutput = new QLabel(layoutWidget);
        hoursOutput->setObjectName(QStringLiteral("hoursOutput"));
        hoursOutput->setFont(font);

        gridLayout->addWidget(hoursOutput, 4, 2, 1, 1);

        eventButton = new QPushButton(layoutWidget);
        eventButton->setObjectName(QStringLiteral("eventButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Semibold"));
        font1.setBold(true);
        font1.setWeight(75);
        eventButton->setFont(font1);

        gridLayout->addWidget(eventButton, 5, 0, 1, 1);

        editButton = new QPushButton(layoutWidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setFont(font1);

        gridLayout->addWidget(editButton, 5, 1, 1, 2);

        widget = new QWidget(AdminPanel);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 291, 181));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        memberLabel = new QLabel(widget);
        memberLabel->setObjectName(QStringLiteral("memberLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Kenyan Coffee"));
        font2.setPointSize(30);
        memberLabel->setFont(font2);

        gridLayout_2->addWidget(memberLabel, 0, 0, 1, 1);

        logoutButton = new QPushButton(widget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setFont(font1);

        gridLayout_2->addWidget(logoutButton, 0, 1, 1, 1);

        studentDropDown = new QComboBox(widget);
        studentDropDown->setObjectName(QStringLiteral("studentDropDown"));

        gridLayout_2->addWidget(studentDropDown, 1, 0, 1, 1);

        registerButton = new QPushButton(widget);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setFont(font1);

        gridLayout_2->addWidget(registerButton, 1, 1, 1, 1);

        settingButton = new QPushButton(widget);
        settingButton->setObjectName(QStringLiteral("settingButton"));
        settingButton->setFont(font1);

        gridLayout_2->addWidget(settingButton, 2, 1, 1, 1);


        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QDialog *AdminPanel)
    {
        AdminPanel->setWindowTitle(QApplication::translate("AdminPanel", "Dialog", nullptr));
        logoImage->setText(QString());
        nameLabel->setText(QApplication::translate("AdminPanel", "Name: ", nullptr));
        nameOutput->setText(QString());
        userLabel->setText(QApplication::translate("AdminPanel", "Username: ", nullptr));
        userOutput->setText(QString());
        passwordLabel->setText(QApplication::translate("AdminPanel", "Password: ", nullptr));
        passwordOutput->setText(QString());
        gradeLabel->setText(QApplication::translate("AdminPanel", "Grade: ", nullptr));
        gradeOutput->setText(QString());
        hoursLabel->setText(QApplication::translate("AdminPanel", "Hour(s): ", nullptr));
        hoursOutput->setText(QString());
        eventButton->setText(QApplication::translate("AdminPanel", "View Events", nullptr));
        editButton->setText(QApplication::translate("AdminPanel", "Edit", nullptr));
        memberLabel->setText(QApplication::translate("AdminPanel", "Members", nullptr));
        logoutButton->setText(QApplication::translate("AdminPanel", "Logout", nullptr));
        registerButton->setText(QApplication::translate("AdminPanel", "Register Member", nullptr));
        settingButton->setText(QApplication::translate("AdminPanel", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
