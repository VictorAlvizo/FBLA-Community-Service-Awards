/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Report
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *centralPie;
    QComboBox *yearDropDown;
    QVBoxLayout *piechart;
    QVBoxLayout *verticalLayout_2;
    QLabel *hourTotal;
    QLabel *hourYearTotal;
    QLabel *mostHoursLabel;
    QLabel *leastHoursLabel;
    QCheckBox *darkBox;

    void setupUi(QDialog *Report)
    {
        if (Report->objectName().isEmpty())
            Report->setObjectName(QStringLiteral("Report"));
        Report->resize(741, 567);
        gridLayout = new QGridLayout(Report);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        centralPie = new QVBoxLayout();
        centralPie->setObjectName(QStringLiteral("centralPie"));

        verticalLayout->addLayout(centralPie);

        yearDropDown = new QComboBox(Report);
        yearDropDown->setObjectName(QStringLiteral("yearDropDown"));

        verticalLayout->addWidget(yearDropDown);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        piechart = new QVBoxLayout();
        piechart->setObjectName(QStringLiteral("piechart"));

        gridLayout->addLayout(piechart, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hourTotal = new QLabel(Report);
        hourTotal->setObjectName(QStringLiteral("hourTotal"));
        QFont font;
        font.setFamily(QStringLiteral("Bebas Neue"));
        font.setPointSize(20);
        hourTotal->setFont(font);

        verticalLayout_2->addWidget(hourTotal);

        hourYearTotal = new QLabel(Report);
        hourYearTotal->setObjectName(QStringLiteral("hourYearTotal"));
        hourYearTotal->setFont(font);

        verticalLayout_2->addWidget(hourYearTotal);

        mostHoursLabel = new QLabel(Report);
        mostHoursLabel->setObjectName(QStringLiteral("mostHoursLabel"));
        mostHoursLabel->setFont(font);

        verticalLayout_2->addWidget(mostHoursLabel);

        leastHoursLabel = new QLabel(Report);
        leastHoursLabel->setObjectName(QStringLiteral("leastHoursLabel"));
        leastHoursLabel->setFont(font);

        verticalLayout_2->addWidget(leastHoursLabel);

        darkBox = new QCheckBox(Report);
        darkBox->setObjectName(QStringLiteral("darkBox"));

        verticalLayout_2->addWidget(darkBox);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);


        retranslateUi(Report);

        QMetaObject::connectSlotsByName(Report);
    } // setupUi

    void retranslateUi(QDialog *Report)
    {
        Report->setWindowTitle(QApplication::translate("Report", "Dialog", nullptr));
        hourTotal->setText(QApplication::translate("Report", "Total Hour(s): ", nullptr));
        hourYearTotal->setText(QApplication::translate("Report", "Total Hour(s) in yyyy:", nullptr));
        mostHoursLabel->setText(QApplication::translate("Report", "Most Hour(s) in yyyy:", nullptr));
        leastHoursLabel->setText(QApplication::translate("Report", "Least Hour(s) in yyyy:", nullptr));
        darkBox->setText(QApplication::translate("Report", "Dark Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Report: public Ui_Report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
