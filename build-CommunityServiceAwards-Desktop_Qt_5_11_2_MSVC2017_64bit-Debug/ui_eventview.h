/********************************************************************************
** Form generated from reading UI file 'eventview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
    QWidget *widget;
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
            EventView->setObjectName(QStringLiteral("EventView"));
        EventView->resize(300, 350);
        hourLabel = new QLabel(EventView);
        hourLabel->setObjectName(QStringLiteral("hourLabel"));
        hourLabel->setGeometry(QRect(100, 200, 101, 41));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee"));
        font.setPointSize(30);
        hourLabel->setFont(font);
        hourInput = new QLabel(EventView);
        hourInput->setObjectName(QStringLiteral("hourInput"));
        hourInput->setGeometry(QRect(130, 240, 71, 91));
        QFont font1;
        font1.setFamily(QStringLiteral("Neou"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        hourInput->setFont(font1);
        widget = new QWidget(EventView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 281, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Kenyan Coffee"));
        font2.setPointSize(15);
        nameLabel->setFont(font2);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        nameInput = new QLabel(widget);
        nameInput->setObjectName(QStringLiteral("nameInput"));
        QFont font3;
        font3.setFamily(QStringLiteral("Neou"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        nameInput->setFont(font3);

        gridLayout->addWidget(nameInput, 0, 1, 1, 1);

        categoryLabel = new QLabel(widget);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setFont(font2);

        gridLayout->addWidget(categoryLabel, 1, 0, 1, 1);

        categoryInput = new QLabel(widget);
        categoryInput->setObjectName(QStringLiteral("categoryInput"));
        categoryInput->setFont(font3);

        gridLayout->addWidget(categoryInput, 1, 1, 1, 1);

        dateLabel = new QLabel(widget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setFont(font2);

        gridLayout->addWidget(dateLabel, 2, 0, 1, 1);

        dateInput = new QLabel(widget);
        dateInput->setObjectName(QStringLiteral("dateInput"));
        dateInput->setFont(font3);

        gridLayout->addWidget(dateInput, 2, 1, 1, 1);


        retranslateUi(EventView);

        QMetaObject::connectSlotsByName(EventView);
    } // setupUi

    void retranslateUi(QDialog *EventView)
    {
        EventView->setWindowTitle(QApplication::translate("EventView", "Dialog", nullptr));
        hourLabel->setText(QApplication::translate("EventView", "Hours:", nullptr));
        hourInput->setText(QApplication::translate("EventView", "0", nullptr));
        nameLabel->setText(QApplication::translate("EventView", "Event Name: ", nullptr));
        nameInput->setText(QApplication::translate("EventView", "Text: ", nullptr));
        categoryLabel->setText(QApplication::translate("EventView", "Category: ", nullptr));
        categoryInput->setText(QApplication::translate("EventView", "Text", nullptr));
        dateLabel->setText(QApplication::translate("EventView", "Date: ", nullptr));
        dateInput->setText(QApplication::translate("EventView", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventView: public Ui_EventView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTVIEW_H
