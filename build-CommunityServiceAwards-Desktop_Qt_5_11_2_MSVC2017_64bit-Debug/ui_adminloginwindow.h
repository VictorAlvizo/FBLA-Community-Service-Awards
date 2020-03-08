/********************************************************************************
** Form generated from reading UI file 'adminloginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGINWINDOW_H
#define UI_ADMINLOGINWINDOW_H

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

class Ui_AdminLoginWindow
{
public:
    QLabel *adminLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *loginButton;
    QPushButton *backButton;
    QLineEdit *passwordLE;
    QLabel *passwordLabel;
    QLineEdit *usernameLE;
    QLabel *usernameLabel;
    QLabel *logoLabel;
    QCheckBox *passwordBox;

    void setupUi(QDialog *AdminLoginWindow)
    {
        if (AdminLoginWindow->objectName().isEmpty())
            AdminLoginWindow->setObjectName(QStringLiteral("AdminLoginWindow"));
        AdminLoginWindow->resize(750, 500);
        QFont font;
        font.setPointSize(10);
        AdminLoginWindow->setFont(font);
        adminLabel = new QLabel(AdminLoginWindow);
        adminLabel->setObjectName(QStringLiteral("adminLabel"));
        adminLabel->setGeometry(QRect(40, 60, 251, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Kenyan Coffee"));
        font1.setPointSize(50);
        adminLabel->setFont(font1);
        layoutWidget = new QWidget(AdminLoginWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 170, 331, 261));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setFont(font);

        gridLayout->addWidget(loginButton, 2, 0, 1, 2);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setFont(font);

        gridLayout->addWidget(backButton, 3, 0, 1, 2);

        passwordLE = new QLineEdit(layoutWidget);
        passwordLE->setObjectName(QStringLiteral("passwordLE"));
        QFont font2;
        font2.setPointSize(12);
        passwordLE->setFont(font2);

        gridLayout->addWidget(passwordLE, 1, 1, 1, 1);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setFont(font2);

        gridLayout->addWidget(passwordLabel, 1, 0, 1, 1);

        usernameLE = new QLineEdit(layoutWidget);
        usernameLE->setObjectName(QStringLiteral("usernameLE"));
        usernameLE->setFont(font2);

        gridLayout->addWidget(usernameLE, 0, 1, 1, 1);

        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setFont(font2);

        gridLayout->addWidget(usernameLabel, 0, 0, 1, 1);

        logoLabel = new QLabel(AdminLoginWindow);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(410, 170, 281, 261));
        passwordBox = new QCheckBox(AdminLoginWindow);
        passwordBox->setObjectName(QStringLiteral("passwordBox"));
        passwordBox->setGeometry(QRect(14, 263, 72, 19));

        retranslateUi(AdminLoginWindow);

        QMetaObject::connectSlotsByName(AdminLoginWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminLoginWindow)
    {
        AdminLoginWindow->setWindowTitle(QApplication::translate("AdminLoginWindow", "Dialog", nullptr));
        adminLabel->setText(QApplication::translate("AdminLoginWindow", "Admin Login", nullptr));
        loginButton->setText(QApplication::translate("AdminLoginWindow", "Login", nullptr));
        backButton->setText(QApplication::translate("AdminLoginWindow", "Back", nullptr));
        passwordLabel->setText(QApplication::translate("AdminLoginWindow", "Password", nullptr));
        usernameLabel->setText(QApplication::translate("AdminLoginWindow", "Username", nullptr));
        logoLabel->setText(QString());
        passwordBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminLoginWindow: public Ui_AdminLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGINWINDOW_H
