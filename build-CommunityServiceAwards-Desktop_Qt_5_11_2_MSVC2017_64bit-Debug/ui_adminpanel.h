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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPanel
{
public:
    QLabel *logoImage;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *passwordLabel;
    QLabel *hoursOutput;
    QLabel *gradeOutput;
    QLineEdit *searchBox;
    QPushButton *eventButton;
    QLabel *gradeLabel;
    QLabel *hoursLabel;
    QLabel *passwordOutput;
    QPushButton *editButton;
    QLabel *userOutput;
    QLabel *userLabel;
    QLabel *nameLabel;
    QLabel *nameOutput;
    QLabel *idLabel;
    QLabel *idOutput;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *memberLabel;
    QPushButton *settingButton;
    QComboBox *studentDropDown;
    QPushButton *registerButton;
    QPushButton *backupButton;
    QPushButton *retriveButton;
    QPushButton *reportButton;
    QPushButton *logoutButton;
    QPushButton *exportButton;

    void setupUi(QDialog *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName(QStringLiteral("AdminPanel"));
        AdminPanel->resize(750, 500);
        logoImage = new QLabel(AdminPanel);
        logoImage->setObjectName(QStringLiteral("logoImage"));
        logoImage->setGeometry(QRect(30, 250, 251, 211));
        layoutWidget = new QWidget(AdminPanel);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 20, 421, 471));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        QFont font;
        font.setPointSize(20);
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 2);

        hoursOutput = new QLabel(layoutWidget);
        hoursOutput->setObjectName(QStringLiteral("hoursOutput"));
        hoursOutput->setFont(font);

        gridLayout->addWidget(hoursOutput, 5, 2, 1, 1);

        gradeOutput = new QLabel(layoutWidget);
        gradeOutput->setObjectName(QStringLiteral("gradeOutput"));
        gradeOutput->setFont(font);

        gridLayout->addWidget(gradeOutput, 4, 2, 1, 1);

        searchBox = new QLineEdit(layoutWidget);
        searchBox->setObjectName(QStringLiteral("searchBox"));

        gridLayout->addWidget(searchBox, 6, 0, 1, 1);

        eventButton = new QPushButton(layoutWidget);
        eventButton->setObjectName(QStringLiteral("eventButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Semibold"));
        font1.setBold(true);
        font1.setWeight(75);
        eventButton->setFont(font1);

        gridLayout->addWidget(eventButton, 6, 1, 1, 1);

        gradeLabel = new QLabel(layoutWidget);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setFont(font);

        gridLayout->addWidget(gradeLabel, 4, 0, 1, 2);

        hoursLabel = new QLabel(layoutWidget);
        hoursLabel->setObjectName(QStringLiteral("hoursLabel"));
        hoursLabel->setFont(font);

        gridLayout->addWidget(hoursLabel, 5, 0, 1, 2);

        passwordOutput = new QLabel(layoutWidget);
        passwordOutput->setObjectName(QStringLiteral("passwordOutput"));
        passwordOutput->setFont(font);

        gridLayout->addWidget(passwordOutput, 3, 2, 1, 1);

        editButton = new QPushButton(layoutWidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setFont(font1);

        gridLayout->addWidget(editButton, 6, 2, 1, 1);

        userOutput = new QLabel(layoutWidget);
        userOutput->setObjectName(QStringLiteral("userOutput"));
        userOutput->setFont(font);

        gridLayout->addWidget(userOutput, 2, 2, 1, 1);

        userLabel = new QLabel(layoutWidget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setFont(font);

        gridLayout->addWidget(userLabel, 2, 0, 1, 2);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        nameOutput = new QLabel(layoutWidget);
        nameOutput->setObjectName(QStringLiteral("nameOutput"));
        nameOutput->setFont(font);

        gridLayout->addWidget(nameOutput, 0, 1, 1, 2);

        idLabel = new QLabel(layoutWidget);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setFont(font);

        gridLayout->addWidget(idLabel, 1, 0, 1, 2);

        idOutput = new QLabel(layoutWidget);
        idOutput->setObjectName(QStringLiteral("idOutput"));
        idOutput->setFont(font);

        gridLayout->addWidget(idOutput, 1, 2, 1, 1);

        layoutWidget1 = new QWidget(AdminPanel);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 40, 291, 213));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        memberLabel = new QLabel(layoutWidget1);
        memberLabel->setObjectName(QStringLiteral("memberLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Kenyan Coffee"));
        font2.setPointSize(30);
        memberLabel->setFont(font2);

        gridLayout_2->addWidget(memberLabel, 0, 0, 1, 1);

        settingButton = new QPushButton(layoutWidget1);
        settingButton->setObjectName(QStringLiteral("settingButton"));
        settingButton->setFont(font1);

        gridLayout_2->addWidget(settingButton, 3, 1, 1, 1);

        studentDropDown = new QComboBox(layoutWidget1);
        studentDropDown->setObjectName(QStringLiteral("studentDropDown"));

        gridLayout_2->addWidget(studentDropDown, 1, 0, 1, 1);

        registerButton = new QPushButton(layoutWidget1);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setFont(font1);

        gridLayout_2->addWidget(registerButton, 1, 1, 1, 1);

        backupButton = new QPushButton(layoutWidget1);
        backupButton->setObjectName(QStringLiteral("backupButton"));
        backupButton->setFont(font1);

        gridLayout_2->addWidget(backupButton, 4, 1, 1, 1);

        retriveButton = new QPushButton(layoutWidget1);
        retriveButton->setObjectName(QStringLiteral("retriveButton"));
        retriveButton->setFont(font1);

        gridLayout_2->addWidget(retriveButton, 5, 1, 1, 1);

        reportButton = new QPushButton(layoutWidget1);
        reportButton->setObjectName(QStringLiteral("reportButton"));
        reportButton->setFont(font1);

        gridLayout_2->addWidget(reportButton, 2, 1, 1, 1);

        logoutButton = new QPushButton(layoutWidget1);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setFont(font1);

        gridLayout_2->addWidget(logoutButton, 0, 1, 1, 1);

        exportButton = new QPushButton(layoutWidget1);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setFont(font1);

        gridLayout_2->addWidget(exportButton, 6, 1, 1, 1);


        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QDialog *AdminPanel)
    {
        AdminPanel->setWindowTitle(QApplication::translate("AdminPanel", "Dialog", nullptr));
        logoImage->setText(QString());
        passwordLabel->setText(QApplication::translate("AdminPanel", "Password: ", nullptr));
        hoursOutput->setText(QString());
        gradeOutput->setText(QString());
        eventButton->setText(QApplication::translate("AdminPanel", "View Events", nullptr));
        gradeLabel->setText(QApplication::translate("AdminPanel", "Grade: ", nullptr));
        hoursLabel->setText(QApplication::translate("AdminPanel", "Hour(s): ", nullptr));
        passwordOutput->setText(QString());
        editButton->setText(QApplication::translate("AdminPanel", "Edit", nullptr));
        userOutput->setText(QString());
        userLabel->setText(QApplication::translate("AdminPanel", "Username: ", nullptr));
        nameLabel->setText(QApplication::translate("AdminPanel", "Name: ", nullptr));
        nameOutput->setText(QString());
        idLabel->setText(QApplication::translate("AdminPanel", "ID:", nullptr));
        idOutput->setText(QString());
        memberLabel->setText(QApplication::translate("AdminPanel", "Members", nullptr));
        settingButton->setText(QApplication::translate("AdminPanel", "Settings", nullptr));
        registerButton->setText(QApplication::translate("AdminPanel", "Register Member", nullptr));
        backupButton->setText(QApplication::translate("AdminPanel", "Backup Data", nullptr));
        retriveButton->setText(QApplication::translate("AdminPanel", "Retrive Data", nullptr));
        reportButton->setText(QApplication::translate("AdminPanel", "Report", nullptr));
        logoutButton->setText(QApplication::translate("AdminPanel", "Logout", nullptr));
        exportButton->setText(QApplication::translate("AdminPanel", "Export Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
