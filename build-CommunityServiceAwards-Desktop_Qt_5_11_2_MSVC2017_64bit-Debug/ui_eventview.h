/********************************************************************************
** Form generated from reading UI file 'eventview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTVIEW_H
#define UI_EVENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventView
{
public:
    QLabel *hourLabel;
    QLabel *hourInput;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLabel *nameInput;
    QLabel *categoryLabel;
    QLabel *categoryInput;
    QLabel *dateLabel;
    QLabel *dateInput;

    void setupUi(QDialog *EventView)
    {
        if (EventView->objectName().isEmpty())
            EventView->setObjectName(QString::fromUtf8("EventView"));
        EventView->resize(300, 350);
        hourLabel = new QLabel(EventView);
        hourLabel->setObjectName(QString::fromUtf8("hourLabel"));
        hourLabel->setGeometry(QRect(100, 200, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font.setPointSize(30);
        hourLabel->setFont(font);
        hourInput = new QLabel(EventView);
        hourInput->setObjectName(QString::fromUtf8("hourInput"));
        hourInput->setGeometry(QRect(130, 240, 71, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Neou"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        hourInput->setFont(font1);
        layoutWidget = new QWidget(EventView);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 281, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font2.setPointSize(15);
        nameLabel->setFont(font2);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        nameInput = new QLabel(layoutWidget);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Neou"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        nameInput->setFont(font3);

        gridLayout->addWidget(nameInput, 0, 1, 1, 1);

        categoryLabel = new QLabel(layoutWidget);
        categoryLabel->setObjectName(QString::fromUtf8("categoryLabel"));
        categoryLabel->setFont(font2);

        gridLayout->addWidget(categoryLabel, 1, 0, 1, 1);

        categoryInput = new QLabel(layoutWidget);
        categoryInput->setObjectName(QString::fromUtf8("categoryInput"));
        categoryInput->setFont(font3);

        gridLayout->addWidget(categoryInput, 1, 1, 1, 1);

        dateLabel = new QLabel(layoutWidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setFont(font2);

        gridLayout->addWidget(dateLabel, 2, 0, 1, 1);

        dateInput = new QLabel(layoutWidget);
        dateInput->setObjectName(QString::fromUtf8("dateInput"));
        dateInput->setFont(font3);

        gridLayout->addWidget(dateInput, 2, 1, 1, 1);


        retranslateUi(EventView);

        QMetaObject::connectSlotsByName(EventView);
    } // setupUi

    void retranslateUi(QDialog *EventView)
    {
        EventView->setWindowTitle(QCoreApplication::translate("EventView", "Dialog", nullptr));
        hourLabel->setText(QCoreApplication::translate("EventView", "Hours:", nullptr));
        hourInput->setText(QCoreApplication::translate("EventView", "0", nullptr));
        nameLabel->setText(QCoreApplication::translate("EventView", "Event Name: ", nullptr));
        nameInput->setText(QCoreApplication::translate("EventView", "Text: ", nullptr));
        categoryLabel->setText(QCoreApplication::translate("EventView", "Category: ", nullptr));
        categoryInput->setText(QCoreApplication::translate("EventView", "Text", nullptr));
        dateLabel->setText(QCoreApplication::translate("EventView", "Date: ", nullptr));
        dateInput->setText(QCoreApplication::translate("EventView", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventView: public Ui_EventView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTVIEW_H
