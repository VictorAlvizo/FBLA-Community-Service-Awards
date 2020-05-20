/********************************************************************************
** Form generated from reading UI file 'memberreport.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERREPORT_H
#define UI_MEMBERREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MemberReport
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *StackGrid;
    QVBoxLayout *chartWidget;
    QComboBox *yearDropDown;
    QVBoxLayout *pieWidget;
    QVBoxLayout *infoLbaels;
    QLabel *totEventLabel;
    QLabel *totHoursLabel;
    QLabel *eventYearLabel;
    QLabel *eventYearHour;
    QCheckBox *themeCheck;

    void setupUi(QDialog *MemberReport)
    {
        if (MemberReport->objectName().isEmpty())
            MemberReport->setObjectName(QString::fromUtf8("MemberReport"));
        MemberReport->resize(780, 586);
        gridLayout = new QGridLayout(MemberReport);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        StackGrid = new QVBoxLayout();
        StackGrid->setObjectName(QString::fromUtf8("StackGrid"));
        chartWidget = new QVBoxLayout();
        chartWidget->setObjectName(QString::fromUtf8("chartWidget"));
        chartWidget->setSizeConstraint(QLayout::SetDefaultConstraint);

        StackGrid->addLayout(chartWidget);

        yearDropDown = new QComboBox(MemberReport);
        yearDropDown->setObjectName(QString::fromUtf8("yearDropDown"));

        StackGrid->addWidget(yearDropDown);


        gridLayout->addLayout(StackGrid, 0, 0, 1, 2);

        pieWidget = new QVBoxLayout();
        pieWidget->setObjectName(QString::fromUtf8("pieWidget"));
        pieWidget->setSizeConstraint(QLayout::SetDefaultConstraint);

        gridLayout->addLayout(pieWidget, 1, 0, 1, 1);

        infoLbaels = new QVBoxLayout();
        infoLbaels->setObjectName(QString::fromUtf8("infoLbaels"));
        totEventLabel = new QLabel(MemberReport);
        totEventLabel->setObjectName(QString::fromUtf8("totEventLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bebas Neue"));
        font.setPointSize(20);
        totEventLabel->setFont(font);

        infoLbaels->addWidget(totEventLabel);

        totHoursLabel = new QLabel(MemberReport);
        totHoursLabel->setObjectName(QString::fromUtf8("totHoursLabel"));
        totHoursLabel->setFont(font);

        infoLbaels->addWidget(totHoursLabel);

        eventYearLabel = new QLabel(MemberReport);
        eventYearLabel->setObjectName(QString::fromUtf8("eventYearLabel"));
        eventYearLabel->setFont(font);

        infoLbaels->addWidget(eventYearLabel);

        eventYearHour = new QLabel(MemberReport);
        eventYearHour->setObjectName(QString::fromUtf8("eventYearHour"));
        eventYearHour->setFont(font);

        infoLbaels->addWidget(eventYearHour);

        themeCheck = new QCheckBox(MemberReport);
        themeCheck->setObjectName(QString::fromUtf8("themeCheck"));

        infoLbaels->addWidget(themeCheck);


        gridLayout->addLayout(infoLbaels, 1, 1, 1, 1);


        retranslateUi(MemberReport);

        QMetaObject::connectSlotsByName(MemberReport);
    } // setupUi

    void retranslateUi(QDialog *MemberReport)
    {
        MemberReport->setWindowTitle(QCoreApplication::translate("MemberReport", "Dialog", nullptr));
        totEventLabel->setText(QCoreApplication::translate("MemberReport", "Total Events:", nullptr));
        totHoursLabel->setText(QCoreApplication::translate("MemberReport", "Total Hours: ", nullptr));
        eventYearLabel->setText(QCoreApplication::translate("MemberReport", "Events in year: ", nullptr));
        eventYearHour->setText(QCoreApplication::translate("MemberReport", "Hour(s) in Year: ", nullptr));
        themeCheck->setText(QCoreApplication::translate("MemberReport", "Dark Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberReport: public Ui_MemberReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERREPORT_H
