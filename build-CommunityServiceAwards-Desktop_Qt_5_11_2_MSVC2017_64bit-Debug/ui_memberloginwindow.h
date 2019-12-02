/********************************************************************************
** Form generated from reading UI file 'memberloginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERLOGINWINDOW_H
#define UI_MEMBERLOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberLoginWindow
{
public:
    QLabel *memberLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *loginButton;
    QPushButton *backButton;
    QLineEdit *passwordLE;
    QLabel *passwordLabel;
    QLineEdit *usernameLE;
    QLabel *usernameLabel;
    QLabel *logoLabel;

    void setupUi(QDialog *MemberLoginWindow)
    {
        if (MemberLoginWindow->objectName().isEmpty())
            MemberLoginWindow->setObjectName(QStringLiteral("MemberLoginWindow"));
        MemberLoginWindow->resize(750, 500);
        memberLabel = new QLabel(MemberLoginWindow);
        memberLabel->setObjectName(QStringLiteral("memberLabel"));
        memberLabel->setGeometry(QRect(40, 60, 301, 81));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee"));
        font.setPointSize(50);
        memberLabel->setFont(font);
        layoutWidget = new QWidget(MemberLoginWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 180, 331, 261));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QFont font1;
        font1.setPointSize(10);
        loginButton->setFont(font1);

        gridLayout->addWidget(loginButton, 2, 0, 1, 2);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setFont(font1);

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

        logoLabel = new QLabel(MemberLoginWindow);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(410, 170, 281, 261));

        retranslateUi(MemberLoginWindow);

        QMetaObject::connectSlotsByName(MemberLoginWindow);
    } // setupUi

    void retranslateUi(QDialog *MemberLoginWindow)
    {
        MemberLoginWindow->setWindowTitle(QApplication::translate("MemberLoginWindow", "Dialog", nullptr));
        memberLabel->setText(QApplication::translate("MemberLoginWindow", "Member Login", nullptr));
        loginButton->setText(QApplication::translate("MemberLoginWindow", "Login", nullptr));
        backButton->setText(QApplication::translate("MemberLoginWindow", "Back", nullptr));
        passwordLabel->setText(QApplication::translate("MemberLoginWindow", "Password", nullptr));
        usernameLabel->setText(QApplication::translate("MemberLoginWindow", "Username", nullptr));
        logoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MemberLoginWindow: public Ui_MemberLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERLOGINWINDOW_H
