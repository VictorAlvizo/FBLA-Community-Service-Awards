/********************************************************************************
** Form generated from reading UI file 'adminsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
    QWidget *widget;
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
            AdminSetting->setObjectName(QStringLiteral("AdminSetting"));
        AdminSetting->resize(400, 300);
        settingLabel = new QLabel(AdminSetting);
        settingLabel->setObjectName(QStringLiteral("settingLabel"));
        settingLabel->setGeometry(QRect(150, 10, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee"));
        font.setPointSize(25);
        settingLabel->setFont(font);
        widget = new QWidget(AdminSetting);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 61, 361, 241));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        oldLabel = new QLabel(widget);
        oldLabel->setObjectName(QStringLiteral("oldLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Kenyan Coffee"));
        font1.setPointSize(15);
        oldLabel->setFont(font1);

        gridLayout->addWidget(oldLabel, 0, 0, 1, 1);

        oldInput = new QLineEdit(widget);
        oldInput->setObjectName(QStringLiteral("oldInput"));

        gridLayout->addWidget(oldInput, 0, 2, 1, 1);

        userLabel = new QLabel(widget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setFont(font1);

        gridLayout->addWidget(userLabel, 1, 0, 1, 2);

        userInput = new QLineEdit(widget);
        userInput->setObjectName(QStringLiteral("userInput"));

        gridLayout->addWidget(userInput, 1, 2, 1, 1);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setFont(font1);

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 2);

        passwordInput = new QLineEdit(widget);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));

        gridLayout->addWidget(passwordInput, 2, 2, 1, 1);

        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        gridLayout->addWidget(submitButton, 3, 0, 1, 1);

        showBox = new QCheckBox(widget);
        showBox->setObjectName(QStringLiteral("showBox"));

        gridLayout->addWidget(showBox, 3, 1, 1, 2);


        retranslateUi(AdminSetting);

        QMetaObject::connectSlotsByName(AdminSetting);
    } // setupUi

    void retranslateUi(QDialog *AdminSetting)
    {
        AdminSetting->setWindowTitle(QApplication::translate("AdminSetting", "Dialog", nullptr));
        settingLabel->setText(QApplication::translate("AdminSetting", "Settings", nullptr));
        oldLabel->setText(QApplication::translate("AdminSetting", "Old Password", nullptr));
        userLabel->setText(QApplication::translate("AdminSetting", "New Username", nullptr));
        passwordLabel->setText(QApplication::translate("AdminSetting", "New Password", nullptr));
        passwordInput->setText(QString());
        submitButton->setText(QApplication::translate("AdminSetting", "Submit", nullptr));
        showBox->setText(QApplication::translate("AdminSetting", "Show Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminSetting: public Ui_AdminSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSETTING_H
