/********************************************************************************
** Form generated from reading UI file 'memberreg.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
            MemberReg->setObjectName(QStringLiteral("MemberReg"));
        MemberReg->resize(500, 397);
        layoutWidget = new QWidget(MemberReg);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 431, 401));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        firstLabel = new QLabel(layoutWidget);
        firstLabel->setObjectName(QStringLiteral("firstLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(14);
        firstLabel->setFont(font);

        gridLayout->addWidget(firstLabel, 0, 0, 1, 1);

        firstInput = new QLineEdit(layoutWidget);
        firstInput->setObjectName(QStringLiteral("firstInput"));

        gridLayout->addWidget(firstInput, 0, 2, 1, 1);

        lastInput = new QLineEdit(layoutWidget);
        lastInput->setObjectName(QStringLiteral("lastInput"));

        gridLayout->addWidget(lastInput, 1, 2, 1, 1);

        userInput = new QLineEdit(layoutWidget);
        userInput->setObjectName(QStringLiteral("userInput"));

        gridLayout->addWidget(userInput, 2, 2, 1, 1);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 1);

        userLabel = new QLabel(layoutWidget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setFont(font);

        gridLayout->addWidget(userLabel, 2, 0, 1, 1);

        lastLabel = new QLabel(layoutWidget);
        lastLabel->setObjectName(QStringLiteral("lastLabel"));
        lastLabel->setFont(font);

        gridLayout->addWidget(lastLabel, 1, 0, 1, 1);

        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        gridLayout->addWidget(submitButton, 5, 0, 1, 3);

        gradeDropDown = new QComboBox(layoutWidget);
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->setObjectName(QStringLiteral("gradeDropDown"));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        gradeDropDown->setFont(font1);

        gridLayout->addWidget(gradeDropDown, 4, 0, 1, 1);

        passwordInput = new QLineEdit(layoutWidget);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));

        gridLayout->addWidget(passwordInput, 3, 2, 1, 1);

        passwordCheck = new QCheckBox(layoutWidget);
        passwordCheck->setObjectName(QStringLiteral("passwordCheck"));

        gridLayout->addWidget(passwordCheck, 4, 2, 1, 1);


        retranslateUi(MemberReg);

        QMetaObject::connectSlotsByName(MemberReg);
    } // setupUi

    void retranslateUi(QDialog *MemberReg)
    {
        MemberReg->setWindowTitle(QApplication::translate("MemberReg", "Dialog", nullptr));
        firstLabel->setText(QApplication::translate("MemberReg", "First Name:", nullptr));
        lastInput->setText(QString());
        userInput->setText(QString());
        passwordLabel->setText(QApplication::translate("MemberReg", "Password:", nullptr));
        userLabel->setText(QApplication::translate("MemberReg", "Username:", nullptr));
        lastLabel->setText(QApplication::translate("MemberReg", "Last Name:", nullptr));
        submitButton->setText(QApplication::translate("MemberReg", "Submit", nullptr));
        gradeDropDown->setItemText(0, QApplication::translate("MemberReg", "Freshman", nullptr));
        gradeDropDown->setItemText(1, QApplication::translate("MemberReg", "Sophomore", nullptr));
        gradeDropDown->setItemText(2, QApplication::translate("MemberReg", "Junior", nullptr));
        gradeDropDown->setItemText(3, QApplication::translate("MemberReg", "Senior", nullptr));

        passwordInput->setText(QString());
        passwordCheck->setText(QApplication::translate("MemberReg", "Show Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberReg: public Ui_MemberReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERREG_H
