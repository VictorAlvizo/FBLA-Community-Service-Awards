/********************************************************************************
** Form generated from reading UI file 'membersetting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
    QLabel *idLabel;
    QLabel *usernameLabel;
    QPushButton *passwordButton;
    QLineEdit *passwordEdit;
    QLabel *eventAmtLabel;
    QLabel *nameLabel;
    QLabel *passwordLabel;
    QLabel *hourLabel;
    QLabel *gradeLabel;
    QLabel *awardGained;

    void setupUi(QDialog *MemberSetting)
    {
        if (MemberSetting->objectName().isEmpty())
            MemberSetting->setObjectName(QString::fromUtf8("MemberSetting"));
        MemberSetting->resize(415, 468);
        titleLabel = new QLabel(MemberSetting);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(90, -10, 251, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font.setPointSize(25);
        titleLabel->setFont(font);
        layoutWidget = new QWidget(MemberSetting);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 391, 375));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        idLabel = new QLabel(layoutWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI"));
        font1.setPointSize(20);
        idLabel->setFont(font1);

        gridLayout->addWidget(idLabel, 1, 0, 1, 1);

        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setFont(font1);

        gridLayout->addWidget(usernameLabel, 2, 0, 1, 2);

        passwordButton = new QPushButton(layoutWidget);
        passwordButton->setObjectName(QString::fromUtf8("passwordButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nirmala UI"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        passwordButton->setFont(font2);

        gridLayout->addWidget(passwordButton, 8, 0, 1, 2);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Nirmala UI"));
        font3.setPointSize(10);
        passwordEdit->setFont(font3);

        gridLayout->addWidget(passwordEdit, 3, 1, 1, 1);

        eventAmtLabel = new QLabel(layoutWidget);
        eventAmtLabel->setObjectName(QString::fromUtf8("eventAmtLabel"));
        eventAmtLabel->setFont(font1);

        gridLayout->addWidget(eventAmtLabel, 5, 0, 1, 2);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setFont(font1);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 2);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font1);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 1);

        hourLabel = new QLabel(layoutWidget);
        hourLabel->setObjectName(QString::fromUtf8("hourLabel"));
        hourLabel->setFont(font1);

        gridLayout->addWidget(hourLabel, 6, 0, 1, 2);

        gradeLabel = new QLabel(layoutWidget);
        gradeLabel->setObjectName(QString::fromUtf8("gradeLabel"));
        gradeLabel->setFont(font1);

        gridLayout->addWidget(gradeLabel, 4, 0, 1, 2);

        awardGained = new QLabel(layoutWidget);
        awardGained->setObjectName(QString::fromUtf8("awardGained"));
        awardGained->setFont(font1);

        gridLayout->addWidget(awardGained, 7, 0, 1, 1);


        retranslateUi(MemberSetting);

        QMetaObject::connectSlotsByName(MemberSetting);
    } // setupUi

    void retranslateUi(QDialog *MemberSetting)
    {
        MemberSetting->setWindowTitle(QCoreApplication::translate("MemberSetting", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("MemberSetting", "Member's Setting", nullptr));
        idLabel->setText(QCoreApplication::translate("MemberSetting", "ID:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MemberSetting", "Username: ", nullptr));
        passwordButton->setText(QCoreApplication::translate("MemberSetting", "Change Password", nullptr));
        eventAmtLabel->setText(QCoreApplication::translate("MemberSetting", "# of events: ", nullptr));
        nameLabel->setText(QCoreApplication::translate("MemberSetting", "Name: ", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MemberSetting", "Password: ", nullptr));
        hourLabel->setText(QCoreApplication::translate("MemberSetting", "Total Hours: ", nullptr));
        gradeLabel->setText(QCoreApplication::translate("MemberSetting", "Grade: ", nullptr));
        awardGained->setText(QCoreApplication::translate("MemberSetting", "CSA Award:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberSetting: public Ui_MemberSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERSETTING_H
