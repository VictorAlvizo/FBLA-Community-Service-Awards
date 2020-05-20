/********************************************************************************
** Form generated from reading UI file 'adminsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSETTING_H
#define UI_ADMINSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminSetting
{
public:
    QLabel *settingLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *oldLabel;
    QLineEdit *oldInput;
    QLabel *userLabel;
    QLineEdit *userInput;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QPushButton *submitButton;
    QCheckBox *showBox;

    void setupUi(QDialog *AdminSetting)
    {
        if (AdminSetting->objectName().isEmpty())
            AdminSetting->setObjectName(QString::fromUtf8("AdminSetting"));
        AdminSetting->resize(400, 343);
        settingLabel = new QLabel(AdminSetting);
        settingLabel->setObjectName(QString::fromUtf8("settingLabel"));
        settingLabel->setGeometry(QRect(150, 10, 121, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font.setPointSize(25);
        settingLabel->setFont(font);
        layoutWidget = new QWidget(AdminSetting);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 61, 361, 241));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        oldLabel = new QLabel(layoutWidget);
        oldLabel->setObjectName(QString::fromUtf8("oldLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font1.setPointSize(15);
        oldLabel->setFont(font1);

        gridLayout->addWidget(oldLabel, 0, 0, 1, 1);

        oldInput = new QLineEdit(layoutWidget);
        oldInput->setObjectName(QString::fromUtf8("oldInput"));

        gridLayout->addWidget(oldInput, 0, 2, 1, 1);

        userLabel = new QLabel(layoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setFont(font1);

        gridLayout->addWidget(userLabel, 1, 0, 1, 2);

        userInput = new QLineEdit(layoutWidget);
        userInput->setObjectName(QString::fromUtf8("userInput"));

        gridLayout->addWidget(userInput, 1, 2, 1, 1);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font1);

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 2);

        passwordInput = new QLineEdit(layoutWidget);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));

        gridLayout->addWidget(passwordInput, 2, 2, 1, 1);

        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        gridLayout->addWidget(submitButton, 3, 0, 1, 1);

        showBox = new QCheckBox(layoutWidget);
        showBox->setObjectName(QString::fromUtf8("showBox"));

        gridLayout->addWidget(showBox, 3, 1, 1, 2);


        retranslateUi(AdminSetting);

        QMetaObject::connectSlotsByName(AdminSetting);
    } // setupUi

    void retranslateUi(QDialog *AdminSetting)
    {
        AdminSetting->setWindowTitle(QCoreApplication::translate("AdminSetting", "Dialog", nullptr));
        settingLabel->setText(QCoreApplication::translate("AdminSetting", "Settings", nullptr));
        oldLabel->setText(QCoreApplication::translate("AdminSetting", "Old Password", nullptr));
        userLabel->setText(QCoreApplication::translate("AdminSetting", "New Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("AdminSetting", "New Password", nullptr));
        passwordInput->setText(QString());
        submitButton->setText(QCoreApplication::translate("AdminSetting", "Submit", nullptr));
        showBox->setText(QCoreApplication::translate("AdminSetting", "Show Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminSetting: public Ui_AdminSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSETTING_H
