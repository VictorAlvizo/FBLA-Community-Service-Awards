/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
    QLabel *userLabel;
    QLabel *nameOutput;
    QLabel *hoursOutput;
    QLabel *passwordLabel;
    QLabel *gradeLabel;
    QLabel *hoursLabel;
    QLabel *gradeOutput;
    QLabel *passwordOutput;
    QLineEdit *searchBox;
    QPushButton *editButton;
    QLabel *idOutput;
    QPushButton *eventButton;
    QLabel *userOutput;
    QLabel *nameLabel;
    QLabel *idLabel;
    QLabel *csaAwardLabel;
    QLabel *awardGained;
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
            AdminPanel->setObjectName(QString::fromUtf8("AdminPanel"));
        AdminPanel->resize(750, 500);
        logoImage = new QLabel(AdminPanel);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 250, 251, 211));
        layoutWidget = new QWidget(AdminPanel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 20, 421, 471));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        userLabel = new QLabel(layoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        QFont font;
        font.setPointSize(20);
        userLabel->setFont(font);

        gridLayout->addWidget(userLabel, 2, 0, 1, 2);

        nameOutput = new QLabel(layoutWidget);
        nameOutput->setObjectName(QString::fromUtf8("nameOutput"));
        nameOutput->setFont(font);

        gridLayout->addWidget(nameOutput, 0, 1, 1, 2);

        hoursOutput = new QLabel(layoutWidget);
        hoursOutput->setObjectName(QString::fromUtf8("hoursOutput"));
        hoursOutput->setFont(font);

        gridLayout->addWidget(hoursOutput, 5, 2, 1, 1);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 2);

        gradeLabel = new QLabel(layoutWidget);
        gradeLabel->setObjectName(QString::fromUtf8("gradeLabel"));
        gradeLabel->setFont(font);

        gridLayout->addWidget(gradeLabel, 4, 0, 1, 2);

        hoursLabel = new QLabel(layoutWidget);
        hoursLabel->setObjectName(QString::fromUtf8("hoursLabel"));
        hoursLabel->setFont(font);

        gridLayout->addWidget(hoursLabel, 5, 0, 1, 2);

        gradeOutput = new QLabel(layoutWidget);
        gradeOutput->setObjectName(QString::fromUtf8("gradeOutput"));
        gradeOutput->setFont(font);

        gridLayout->addWidget(gradeOutput, 4, 2, 1, 1);

        passwordOutput = new QLabel(layoutWidget);
        passwordOutput->setObjectName(QString::fromUtf8("passwordOutput"));
        passwordOutput->setFont(font);

        gridLayout->addWidget(passwordOutput, 3, 2, 1, 1);

        searchBox = new QLineEdit(layoutWidget);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        gridLayout->addWidget(searchBox, 7, 0, 1, 1);

        editButton = new QPushButton(layoutWidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setBold(true);
        font1.setWeight(75);
        editButton->setFont(font1);

        gridLayout->addWidget(editButton, 7, 2, 1, 1);

        idOutput = new QLabel(layoutWidget);
        idOutput->setObjectName(QString::fromUtf8("idOutput"));
        idOutput->setFont(font);

        gridLayout->addWidget(idOutput, 1, 2, 1, 1);

        eventButton = new QPushButton(layoutWidget);
        eventButton->setObjectName(QString::fromUtf8("eventButton"));
        eventButton->setFont(font1);

        gridLayout->addWidget(eventButton, 7, 1, 1, 1);

        userOutput = new QLabel(layoutWidget);
        userOutput->setObjectName(QString::fromUtf8("userOutput"));
        userOutput->setFont(font);

        gridLayout->addWidget(userOutput, 2, 2, 1, 1);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        idLabel = new QLabel(layoutWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setFont(font);

        gridLayout->addWidget(idLabel, 1, 0, 1, 2);

        csaAwardLabel = new QLabel(layoutWidget);
        csaAwardLabel->setObjectName(QString::fromUtf8("csaAwardLabel"));
        csaAwardLabel->setFont(font);

        gridLayout->addWidget(csaAwardLabel, 6, 0, 1, 2);

        awardGained = new QLabel(layoutWidget);
        awardGained->setObjectName(QString::fromUtf8("awardGained"));
        awardGained->setFont(font);

        gridLayout->addWidget(awardGained, 6, 2, 1, 1);

        layoutWidget1 = new QWidget(AdminPanel);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 40, 291, 213));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        memberLabel = new QLabel(layoutWidget1);
        memberLabel->setObjectName(QString::fromUtf8("memberLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font2.setPointSize(30);
        memberLabel->setFont(font2);

        gridLayout_2->addWidget(memberLabel, 0, 0, 1, 1);

        settingButton = new QPushButton(layoutWidget1);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setFont(font1);

        gridLayout_2->addWidget(settingButton, 3, 1, 1, 1);

        studentDropDown = new QComboBox(layoutWidget1);
        studentDropDown->setObjectName(QString::fromUtf8("studentDropDown"));

        gridLayout_2->addWidget(studentDropDown, 1, 0, 1, 1);

        registerButton = new QPushButton(layoutWidget1);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setFont(font1);

        gridLayout_2->addWidget(registerButton, 1, 1, 1, 1);

        backupButton = new QPushButton(layoutWidget1);
        backupButton->setObjectName(QString::fromUtf8("backupButton"));
        backupButton->setFont(font1);

        gridLayout_2->addWidget(backupButton, 4, 1, 1, 1);

        retriveButton = new QPushButton(layoutWidget1);
        retriveButton->setObjectName(QString::fromUtf8("retriveButton"));
        retriveButton->setFont(font1);

        gridLayout_2->addWidget(retriveButton, 5, 1, 1, 1);

        reportButton = new QPushButton(layoutWidget1);
        reportButton->setObjectName(QString::fromUtf8("reportButton"));
        reportButton->setFont(font1);

        gridLayout_2->addWidget(reportButton, 2, 1, 1, 1);

        logoutButton = new QPushButton(layoutWidget1);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setFont(font1);

        gridLayout_2->addWidget(logoutButton, 0, 1, 1, 1);

        exportButton = new QPushButton(layoutWidget1);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setFont(font1);

        gridLayout_2->addWidget(exportButton, 6, 1, 1, 1);


        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QDialog *AdminPanel)
    {
        AdminPanel->setWindowTitle(QCoreApplication::translate("AdminPanel", "Dialog", nullptr));
        logoImage->setText(QString());
        userLabel->setText(QCoreApplication::translate("AdminPanel", "Username: ", nullptr));
        nameOutput->setText(QString());
        hoursOutput->setText(QString());
        passwordLabel->setText(QCoreApplication::translate("AdminPanel", "Password: ", nullptr));
        gradeLabel->setText(QCoreApplication::translate("AdminPanel", "Grade: ", nullptr));
        hoursLabel->setText(QCoreApplication::translate("AdminPanel", "Hour(s): ", nullptr));
        gradeOutput->setText(QString());
        passwordOutput->setText(QString());
        editButton->setText(QCoreApplication::translate("AdminPanel", "Edit", nullptr));
        idOutput->setText(QString());
        eventButton->setText(QCoreApplication::translate("AdminPanel", "View Events", nullptr));
        userOutput->setText(QString());
        nameLabel->setText(QCoreApplication::translate("AdminPanel", "Name: ", nullptr));
        idLabel->setText(QCoreApplication::translate("AdminPanel", "ID:", nullptr));
        csaAwardLabel->setText(QCoreApplication::translate("AdminPanel", "CSA Award:", nullptr));
        awardGained->setText(QString());
        memberLabel->setText(QCoreApplication::translate("AdminPanel", "Members", nullptr));
        settingButton->setText(QCoreApplication::translate("AdminPanel", "Settings", nullptr));
        registerButton->setText(QCoreApplication::translate("AdminPanel", "Register Member", nullptr));
        backupButton->setText(QCoreApplication::translate("AdminPanel", "Backup Data", nullptr));
        retriveButton->setText(QCoreApplication::translate("AdminPanel", "Retrive Data", nullptr));
        reportButton->setText(QCoreApplication::translate("AdminPanel", "Report", nullptr));
        logoutButton->setText(QCoreApplication::translate("AdminPanel", "Logout", nullptr));
        exportButton->setText(QCoreApplication::translate("AdminPanel", "Export Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
