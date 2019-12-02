/********************************************************************************
** Form generated from reading UI file 'memberedit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBEREDIT_H
#define UI_MEMBEREDIT_H

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

class Ui_memberEdit
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *firstLabel;
    QLineEdit *firstInput;
    QLabel *lastLabel;
    QLineEdit *lastInput;
    QLabel *userLabel;
    QLineEdit *userInput;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QLabel *gradeLabel;
    QComboBox *gradeDropDown;
    QPushButton *submitButton;
    QPushButton *removeButton;

    void setupUi(QDialog *memberEdit)
    {
        if (memberEdit->objectName().isEmpty())
            memberEdit->setObjectName(QStringLiteral("memberEdit"));
        memberEdit->resize(550, 400);
        QFont font;
        font.setPointSize(14);
        memberEdit->setFont(font);
        widget = new QWidget(memberEdit);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 521, 381));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        firstLabel = new QLabel(widget);
        firstLabel->setObjectName(QStringLiteral("firstLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Semibold"));
        font1.setBold(true);
        font1.setWeight(75);
        firstLabel->setFont(font1);

        gridLayout->addWidget(firstLabel, 0, 0, 1, 1);

        firstInput = new QLineEdit(widget);
        firstInput->setObjectName(QStringLiteral("firstInput"));

        gridLayout->addWidget(firstInput, 0, 1, 1, 1);

        lastLabel = new QLabel(widget);
        lastLabel->setObjectName(QStringLiteral("lastLabel"));
        lastLabel->setFont(font1);

        gridLayout->addWidget(lastLabel, 1, 0, 1, 1);

        lastInput = new QLineEdit(widget);
        lastInput->setObjectName(QStringLiteral("lastInput"));

        gridLayout->addWidget(lastInput, 1, 1, 1, 1);

        userLabel = new QLabel(widget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setFont(font1);

        gridLayout->addWidget(userLabel, 2, 0, 1, 1);

        userInput = new QLineEdit(widget);
        userInput->setObjectName(QStringLiteral("userInput"));

        gridLayout->addWidget(userInput, 2, 1, 1, 1);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setFont(font1);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 1);

        passwordInput = new QLineEdit(widget);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));

        gridLayout->addWidget(passwordInput, 3, 1, 1, 1);

        gradeLabel = new QLabel(widget);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setFont(font1);

        gridLayout->addWidget(gradeLabel, 4, 0, 1, 1);

        gradeDropDown = new QComboBox(widget);
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->addItem(QString());
        gradeDropDown->setObjectName(QStringLiteral("gradeDropDown"));
        QFont font2;
        font2.setPointSize(8);
        gradeDropDown->setFont(font2);

        gridLayout->addWidget(gradeDropDown, 4, 1, 1, 1);

        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setFont(font2);

        gridLayout->addWidget(submitButton, 5, 0, 1, 1);

        removeButton = new QPushButton(widget);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setFont(font2);

        gridLayout->addWidget(removeButton, 5, 1, 1, 1);


        retranslateUi(memberEdit);

        QMetaObject::connectSlotsByName(memberEdit);
    } // setupUi

    void retranslateUi(QDialog *memberEdit)
    {
        memberEdit->setWindowTitle(QApplication::translate("memberEdit", "Dialog", nullptr));
        firstLabel->setText(QApplication::translate("memberEdit", "First Name", nullptr));
        lastLabel->setText(QApplication::translate("memberEdit", "Last Name", nullptr));
        userLabel->setText(QApplication::translate("memberEdit", "Username", nullptr));
        passwordLabel->setText(QApplication::translate("memberEdit", "Password", nullptr));
        gradeLabel->setText(QApplication::translate("memberEdit", "Grade", nullptr));
        gradeDropDown->setItemText(0, QApplication::translate("memberEdit", "Freshman", nullptr));
        gradeDropDown->setItemText(1, QApplication::translate("memberEdit", "Sophomore", nullptr));
        gradeDropDown->setItemText(2, QApplication::translate("memberEdit", "Junior", nullptr));
        gradeDropDown->setItemText(3, QApplication::translate("memberEdit", "Senior", nullptr));

        submitButton->setText(QApplication::translate("memberEdit", "Save", nullptr));
        removeButton->setText(QApplication::translate("memberEdit", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberEdit: public Ui_memberEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBEREDIT_H
