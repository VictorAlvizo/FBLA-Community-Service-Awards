/********************************************************************************
** Form generated from reading UI file 'calendarwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARWINDOW_H
#define UI_CALENDARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalendarWindow
{
public:
    QCalendarWidget *calendar;
    QPushButton *submitButton;

    void setupUi(QDialog *CalendarWindow)
    {
        if (CalendarWindow->objectName().isEmpty())
            CalendarWindow->setObjectName(QString::fromUtf8("CalendarWindow"));
        CalendarWindow->resize(341, 360);
        calendar = new QCalendarWidget(CalendarWindow);
        calendar->setObjectName(QString::fromUtf8("calendar"));
        calendar->setGeometry(QRect(11, 21, 311, 251));
        submitButton = new QPushButton(CalendarWindow);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(10, 300, 309, 41));

        retranslateUi(CalendarWindow);

        QMetaObject::connectSlotsByName(CalendarWindow);
    } // setupUi

    void retranslateUi(QDialog *CalendarWindow)
    {
        CalendarWindow->setWindowTitle(QCoreApplication::translate("CalendarWindow", "Dialog", nullptr));
        submitButton->setText(QCoreApplication::translate("CalendarWindow", "Submit Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalendarWindow: public Ui_CalendarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARWINDOW_H
