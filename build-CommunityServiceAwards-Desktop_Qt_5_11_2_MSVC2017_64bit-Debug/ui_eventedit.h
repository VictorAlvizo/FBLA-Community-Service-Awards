/********************************************************************************
** Form generated from reading UI file 'eventedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTEDIT_H
#define UI_EVENTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventEdit
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *hourLabel;
    QSpinBox *hourSpin;
    QLabel *nameLabel;
    QLineEdit *categoryInput;
    QLineEdit *nameInput;
    QLabel *categoryLabel;
    QLabel *dateLabel;
    QPushButton *submitButton;
    QPushButton *dateButton;

    void setupUi(QDialog *EventEdit)
    {
        if (EventEdit->objectName().isEmpty())
            EventEdit->setObjectName(QString::fromUtf8("EventEdit"));
        EventEdit->resize(535, 373);
        layoutWidget = new QWidget(EventEdit);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 491, 331));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        hourLabel = new QLabel(layoutWidget);
        hourLabel->setObjectName(QString::fromUtf8("hourLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        hourLabel->setFont(font);

        gridLayout->addWidget(hourLabel, 0, 0, 1, 1);

        hourSpin = new QSpinBox(layoutWidget);
        hourSpin->setObjectName(QString::fromUtf8("hourSpin"));

        gridLayout->addWidget(hourSpin, 1, 0, 1, 1);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        categoryInput = new QLineEdit(layoutWidget);
        categoryInput->setObjectName(QString::fromUtf8("categoryInput"));

        gridLayout->addWidget(categoryInput, 3, 0, 1, 1);

        nameInput = new QLineEdit(layoutWidget);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        gridLayout->addWidget(nameInput, 1, 1, 1, 1);

        categoryLabel = new QLabel(layoutWidget);
        categoryLabel->setObjectName(QString::fromUtf8("categoryLabel"));
        categoryLabel->setFont(font);

        gridLayout->addWidget(categoryLabel, 2, 0, 1, 1);

        dateLabel = new QLabel(layoutWidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setFont(font);

        gridLayout->addWidget(dateLabel, 2, 1, 1, 1);

        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        gridLayout->addWidget(submitButton, 4, 0, 1, 1);

        dateButton = new QPushButton(layoutWidget);
        dateButton->setObjectName(QString::fromUtf8("dateButton"));

        gridLayout->addWidget(dateButton, 3, 1, 1, 1);


        retranslateUi(EventEdit);

        QMetaObject::connectSlotsByName(EventEdit);
    } // setupUi

    void retranslateUi(QDialog *EventEdit)
    {
        EventEdit->setWindowTitle(QCoreApplication::translate("EventEdit", "Dialog", nullptr));
        hourLabel->setText(QCoreApplication::translate("EventEdit", "Event Hour(s)", nullptr));
        nameLabel->setText(QCoreApplication::translate("EventEdit", "Event Name", nullptr));
        categoryInput->setText(QString());
        categoryLabel->setText(QCoreApplication::translate("EventEdit", "Event Category", nullptr));
        dateLabel->setText(QCoreApplication::translate("EventEdit", "Event Date: ", nullptr));
        submitButton->setText(QCoreApplication::translate("EventEdit", "Save", nullptr));
        dateButton->setText(QCoreApplication::translate("EventEdit", "Change Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventEdit: public Ui_EventEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTEDIT_H
