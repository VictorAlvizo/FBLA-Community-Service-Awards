/********************************************************************************
** Form generated from reading UI file 'memberreg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERREG_H
#define UI_MEMBERREG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberReg
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *firstLabel;
    QLineEdit *firstInput;
    QLineEdit *lastInput;
    QLineEdit *userInput;
    QLabel *passwordLabel;
    QLabel *userLabel;
    QLabel *lastLabel;
    QPushButton *submitButton;
    QComboBox *gradeDropDown;
    QLineEdit *passwordInput;
    QCheckBox *passwordCheck;

    void setupUi(QDialog *MemberReg)
    {
        if (MemberReg->objectName().isEmpty())
            MemberReg->setObjectName(QString::fromUtf8("MemberReg"));
        MemberReg->resize(500, 397);
        layoutWidget = new QWidget(MemberReg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 431, 401));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        firstLabel = new QLabel(layoutWidget);
        firstLabel->setObjectName(QString::fromUtf8("firstLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setPointSize(14);
        firstLabel->setFont(font);

        gridLayout->addWidget(firstLabel, 0, 0, 1, 1);

        firstInput = new QLineEdit(layoutWidget);
        firstInput->setObjectName(QString::fromUtf8("firstInput"));

        gridLayout->addWidget(firstInput, 0, 2, 1, 1);

        lastInput = new QLineEdit(layoutWidget);
        lastInput->setObjectName(QString::fromUtf8("lastInput"));

        gridLayout->addWidget(lastInput, 1, 2, 1, 1);

        userInput = new QLineEdit(layoutWidget);
        userInput->setObjectName(QString::fromUtf8("userInput"));

        gridLayout->addWidget(userInput, 2, 2, 1, 1);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 1);

        userLabel = new QLabel(layoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setFont(font);

        gridLayout->addWidget(userLabel, 2, 0, 1, 1);

        lastLabel = new QLabel(layoutWidget);
        lastLabel->setObjectName(QString::fromUtf8("lastLabel"));
        lastLabel->setFont(font);

        gridLayout->addWidget(lastLabel, 1, 0, 1, 1);

        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        gridLayout->addWidget(submitButton, 5, 0, 1, 3);

        gradeDropDown = new QComboBox(layoutWidget);
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->setObjectName(QString::fromUtf8("gradeDropDown"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Roboto"));
        gradeDropDown->setFont(font1);

        gridLayout->addWidget(gradeDropDown, 4, 0, 1, 1);

        passwordInput = new QLineEdit(layoutWidget);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));

        gridLayout->addWidget(passwordInput, 3, 2, 1, 1);

        passwordCheck = new QCheckBox(layoutWidget);
        passwordCheck->setObjectName(QString::fromUtf8("passwordCheck"));

        gridLayout->addWidget(passwordCheck, 4, 2, 1, 1);


        retranslateUi(MemberReg);

        QMetaObject::connectSlotsByName(MemberReg);
    } // setupUi

    void retranslateUi(QDialog *MemberReg)
    {
        MemberReg->setWindowTitle(QCoreApplication::translate("MemberReg", "Dialog", nullptr));
        firstLabel->setText(QCoreApplication::translate("MemberReg", "First Name:", nullptr));
        lastInput->setText(QString());
        userInput->setText(QString());
        passwordLabel->setText(QCoreApplication::translate("MemberReg", "Password:", nullptr));
        userLabel->setText(QCoreApplication::translate("MemberReg", "Username:", nullptr));
        lastLabel->setText(QCoreApplication::translate("MemberReg", "Last Name:", nullptr));
        submitButton->setText(QCoreApplication::translate("MemberReg", "Submit", nullptr));
        gradeDropDown->setItemText(0, QCoreApplication::translate("MemberReg", "Freshman", nullptr));
        gradeDropDown->setItemText(1, QCoreApplication::translate("MemberReg", "Sophomore", nullptr));
        gradeDropDown->setItemText(2, QCoreApplication::translate("MemberReg", "Junior", nullptr));
        gradeDropDown->setItemText(3, QCoreApplication::translate("MemberReg", "Senior", nullptr));

        passwordInput->setText(QString());
        passwordCheck->setText(QCoreApplication::translate("MemberReg", "Show Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberReg: public Ui_MemberReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERREG_H
