/********************************************************************************
** Form generated from reading UI file 'memberreport.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
            MemberReport->setObjectName(QStringLiteral("MemberReport"));
        MemberReport->resize(780, 586);
        gridLayout = new QGridLayout(MemberReport);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        StackGrid = new QVBoxLayout();
        StackGrid->setObjectName(QStringLiteral("StackGrid"));
        chartWidget = new QVBoxLayout();
        chartWidget->setObjectName(QStringLiteral("chartWidget"));
        chartWidget->setSizeConstraint(QLayout::SetDefaultConstraint);

        StackGrid->addLayout(chartWidget);

        yearDropDown = new QComboBox(MemberReport);
        yearDropDown->setObjectName(QStringLiteral("yearDropDown"));

        StackGrid->addWidget(yearDropDown);


        gridLayout->addLayout(StackGrid, 0, 0, 1, 2);

        pieWidget = new QVBoxLayout();
        pieWidget->setObjectName(QStringLiteral("pieWidget"));
        pieWidget->setSizeConstraint(QLayout::SetDefaultConstraint);

        gridLayout->addLayout(pieWidget, 1, 0, 1, 1);

        infoLbaels = new QVBoxLayout();
        infoLbaels->setObjectName(QStringLiteral("infoLbaels"));
        totEventLabel = new QLabel(MemberReport);
        totEventLabel->setObjectName(QStringLiteral("totEventLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Bebas Neue"));
        font.setPointSize(20);
        totEventLabel->setFont(font);

        infoLbaels->addWidget(totEventLabel);

        totHoursLabel = new QLabel(MemberReport);
        totHoursLabel->setObjectName(QStringLiteral("totHoursLabel"));
        totHoursLabel->setFont(font);

        infoLbaels->addWidget(totHoursLabel);

        eventYearLabel = new QLabel(MemberReport);
        eventYearLabel->setObjectName(QStringLiteral("eventYearLabel"));
        eventYearLabel->setFont(font);

        infoLbaels->addWidget(eventYearLabel);

        eventYearHour = new QLabel(MemberReport);
        eventYearHour->setObjectName(QStringLiteral("eventYearHour"));
        eventYearHour->setFont(font);

        infoLbaels->addWidget(eventYearHour);

        themeCheck = new QCheckBox(MemberReport);
        themeCheck->setObjectName(QStringLiteral("themeCheck"));

        infoLbaels->addWidget(themeCheck);


        gridLayout->addLayout(infoLbaels, 1, 1, 1, 1);


        retranslateUi(MemberReport);

        QMetaObject::connectSlotsByName(MemberReport);
    } // setupUi

    void retranslateUi(QDialog *MemberReport)
    {
        MemberReport->setWindowTitle(QApplication::translate("MemberReport", "Dialog", nullptr));
        totEventLabel->setText(QApplication::translate("MemberReport", "Total Events:", nullptr));
        totHoursLabel->setText(QApplication::translate("MemberReport", "Total Hours: ", nullptr));
        eventYearLabel->setText(QApplication::translate("MemberReport", "Events in year: ", nullptr));
        eventYearHour->setText(QApplication::translate("MemberReport", "Hour(s) in Year: ", nullptr));
        themeCheck->setText(QApplication::translate("MemberReport", "Dark Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberReport: public Ui_MemberReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERREPORT_H
