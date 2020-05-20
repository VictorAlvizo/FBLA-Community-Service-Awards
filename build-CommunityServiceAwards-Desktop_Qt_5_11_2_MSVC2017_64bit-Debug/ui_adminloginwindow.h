/********************************************************************************
** Form generated from reading UI file 'adminloginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
            AdminLoginWindow->setObjectName(QString::fromUtf8("AdminLoginWindow"));
        AdminLoginWindow->resize(750, 500);
        QFont font;
        font.setPointSize(10);
        AdminLoginWindow->setFont(font);
        adminLabel = new QLabel(AdminLoginWindow);
        adminLabel->setObjectName(QString::fromUtf8("adminLabel"));
        adminLabel->setGeometry(QRect(40, 60, 381, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font1.setPointSize(50);
        adminLabel->setFont(font1);
        layoutWidget = new QWidget(AdminLoginWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 170, 331, 261));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setFont(font);

        gridLayout->addWidget(loginButton, 2, 0, 1, 2);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setFont(font);

        gridLayout->addWidget(backButton, 3, 0, 1, 2);

        passwordLE = new QLineEdit(layoutWidget);
        passwordLE->setObjectName(QString::fromUtf8("passwordLE"));
        QFont font2;
        font2.setPointSize(12);
        passwordLE->setFont(font2);

        gridLayout->addWidget(passwordLE, 1, 1, 1, 1);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font2);

        gridLayout->addWidget(passwordLabel, 1, 0, 1, 1);

        usernameLE = new QLineEdit(layoutWidget);
        usernameLE->setObjectName(QString::fromUtf8("usernameLE"));
        usernameLE->setFont(font2);

        gridLayout->addWidget(usernameLE, 0, 1, 1, 1);

        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setFont(font2);

        gridLayout->addWidget(usernameLabel, 0, 0, 1, 1);

        logoLabel = new QLabel(AdminLoginWindow);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(410, 170, 281, 261));
        passwordBox = new QCheckBox(AdminLoginWindow);
        passwordBox->setObjectName(QString::fromUtf8("passwordBox"));
        passwordBox->setGeometry(QRect(14, 263, 72, 19));

        retranslateUi(AdminLoginWindow);

        QMetaObject::connectSlotsByName(AdminLoginWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminLoginWindow)
    {
        AdminLoginWindow->setWindowTitle(QCoreApplication::translate("AdminLoginWindow", "Dialog", nullptr));
        adminLabel->setText(QCoreApplication::translate("AdminLoginWindow", "Admin Login", nullptr));
        loginButton->setText(QCoreApplication::translate("AdminLoginWindow", "Login", nullptr));
        backButton->setText(QCoreApplication::translate("AdminLoginWindow", "Back", nullptr));
        passwordLabel->setText(QCoreApplication::translate("AdminLoginWindow", "Password", nullptr));
        usernameLabel->setText(QCoreApplication::translate("AdminLoginWindow", "Username", nullptr));
        logoLabel->setText(QString());
        passwordBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminLoginWindow: public Ui_AdminLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGINWINDOW_H
