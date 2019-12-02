/********************************************************************************
** Form generated from reading UI file 'eventedit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTEDIT_H
#define UI_EVENTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *hourLabel;
    QLabel *nameLabel;
    QSpinBox *hourSpin;
    QLineEdit *nameInput;
    QLabel *categoryLabel;
    QLabel *dateLabel;
    QLineEdit *categoryInput;
    QDateEdit *dateEdit;
    QPushButton *submitButton;

    void setupUi(QDialog *EventEdit)
    {
        if (EventEdit->objectName().isEmpty())
            EventEdit->setObjectName(QStringLiteral("EventEdit"));
        EventEdit->resize(535, 373);
        widget = new QWidget(EventEdit);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 491, 331));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        hourLabel = new QLabel(widget);
        hourLabel->setObjectName(QStringLiteral("hourLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Semibold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        hourLabel->setFont(font);

        gridLayout->addWidget(hourLabel, 0, 0, 1, 1);

        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        hourSpin = new QSpinBox(widget);
        hourSpin->setObjectName(QStringLiteral("hourSpin"));

        gridLayout->addWidget(hourSpin, 1, 0, 1, 1);

        nameInput = new QLineEdit(widget);
        nameInput->setObjectName(QStringLiteral("nameInput"));

        gridLayout->addWidget(nameInput, 1, 1, 1, 1);

        categoryLabel = new QLabel(widget);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setFont(font);

        gridLayout->addWidget(categoryLabel, 2, 0, 1, 1);

        dateLabel = new QLabel(widget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setFont(font);

        gridLayout->addWidget(dateLabel, 2, 1, 1, 1);

        categoryInput = new QLineEdit(widget);
        categoryInput->setObjectName(QStringLiteral("categoryInput"));

        gridLayout->addWidget(categoryInput, 3, 0, 1, 1);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 3, 1, 1, 1);

        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        gridLayout->addWidget(submitButton, 4, 0, 1, 1);


        retranslateUi(EventEdit);

        QMetaObject::connectSlotsByName(EventEdit);
    } // setupUi

    void retranslateUi(QDialog *EventEdit)
    {
        EventEdit->setWindowTitle(QApplication::translate("EventEdit", "Dialog", nullptr));
        hourLabel->setText(QApplication::translate("EventEdit", "Event Hour(s)", nullptr));
        nameLabel->setText(QApplication::translate("EventEdit", "Event Name", nullptr));
        categoryLabel->setText(QApplication::translate("EventEdit", "Event Category", nullptr));
        dateLabel->setText(QApplication::translate("EventEdit", "Event Date", nullptr));
        categoryInput->setText(QString());
        submitButton->setText(QApplication::translate("EventEdit", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventEdit: public Ui_EventEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTEDIT_H
