/********************************************************************************
** Form generated from reading UI file 'membersetting.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERSETTING_H
#define UI_MEMBERSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberSetting
{
public:
    QLabel *titleLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLabel *gradeLabel;
    QLabel *eventAmtLabel;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QPushButton *passwordButton;
    QLabel *hourLabel;
    QLabel *idLabel;

    void setupUi(QDialog *MemberSetting)
    {
        if (MemberSetting->objectName().isEmpty())
            MemberSetting->setObjectName(QStringLiteral("MemberSetting"));
        MemberSetting->resize(415, 411);
        titleLabel = new QLabel(MemberSetting);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(120, -10, 201, 91));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee"));
        font.setPointSize(25);
        titleLabel->setFont(font);
        layoutWidget = new QWidget(MemberSetting);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 391, 332));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Nirmala UI"));
        font1.setPointSize(20);
        nameLabel->setFont(font1);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 2);

        gradeLabel = new QLabel(layoutWidget);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setFont(font1);

        gridLayout->addWidget(gradeLabel, 4, 0, 1, 2);

        eventAmtLabel = new QLabel(layoutWidget);
        eventAmtLabel->setObjectName(QStringLiteral("eventAmtLabel"));
        eventAmtLabel->setFont(font1);

        gridLayout->addWidget(eventAmtLabel, 5, 0, 1, 2);

        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setFont(font1);

        gridLayout->addWidget(usernameLabel, 2, 0, 1, 2);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setFont(font1);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 1);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        QFont font2;
        font2.setFamily(QStringLiteral("Nirmala UI"));
        font2.setPointSize(10);
        passwordEdit->setFont(font2);

        gridLayout->addWidget(passwordEdit, 3, 1, 1, 1);

        passwordButton = new QPushButton(layoutWidget);
        passwordButton->setObjectName(QStringLiteral("passwordButton"));
        QFont font3;
        font3.setFamily(QStringLiteral("Nirmala UI"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        passwordButton->setFont(font3);

        gridLayout->addWidget(passwordButton, 7, 0, 1, 2);

        hourLabel = new QLabel(layoutWidget);
        hourLabel->setObjectName(QStringLiteral("hourLabel"));
        hourLabel->setFont(font1);

        gridLayout->addWidget(hourLabel, 6, 0, 1, 2);

        idLabel = new QLabel(layoutWidget);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setFont(font1);

        gridLayout->addWidget(idLabel, 1, 0, 1, 1);


        retranslateUi(MemberSetting);

        QMetaObject::connectSlotsByName(MemberSetting);
    } // setupUi

    void retranslateUi(QDialog *MemberSetting)
    {
        MemberSetting->setWindowTitle(QApplication::translate("MemberSetting", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("MemberSetting", "Victor's Setting", nullptr));
        nameLabel->setText(QApplication::translate("MemberSetting", "Name: ", nullptr));
        gradeLabel->setText(QApplication::translate("MemberSetting", "Grade: ", nullptr));
        eventAmtLabel->setText(QApplication::translate("MemberSetting", "# of events: ", nullptr));
        usernameLabel->setText(QApplication::translate("MemberSetting", "Username: ", nullptr));
        passwordLabel->setText(QApplication::translate("MemberSetting", "Password: ", nullptr));
        passwordButton->setText(QApplication::translate("MemberSetting", "Change Password", nullptr));
        hourLabel->setText(QApplication::translate("MemberSetting", "Total Hours: ", nullptr));
        idLabel->setText(QApplication::translate("MemberSetting", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberSetting: public Ui_MemberSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERSETTING_H
