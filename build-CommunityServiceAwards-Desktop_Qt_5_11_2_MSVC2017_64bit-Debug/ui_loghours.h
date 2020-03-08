/********************************************************************************
** Form generated from reading UI file 'loghours.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGHOURS_H
#define UI_LOGHOURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogHours
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLineEdit *nameOutput;
    QLabel *categoryLabel;
    QLineEdit *otherInput;
    QLabel *hourLabel;
    QSpinBox *hourBox;
    QLabel *dateLabel;
    QPushButton *dateButton;
    QPushButton *submitButton;

    void setupUi(QDialog *LogHours)
    {
        if (LogHours->objectName().isEmpty())
            LogHours->setObjectName(QStringLiteral("LogHours"));
        LogHours->resize(230, 405);
        layoutWidget = new QWidget(LogHours);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 11, 191, 391));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee"));
        font.setPointSize(15);
        nameLabel->setFont(font);

        verticalLayout->addWidget(nameLabel);

        nameOutput = new QLineEdit(layoutWidget);
        nameOutput->setObjectName(QStringLiteral("nameOutput"));

        verticalLayout->addWidget(nameOutput);

        categoryLabel = new QLabel(layoutWidget);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setFont(font);

        verticalLayout->addWidget(categoryLabel);

        otherInput = new QLineEdit(layoutWidget);
        otherInput->setObjectName(QStringLiteral("otherInput"));

        verticalLayout->addWidget(otherInput);

        hourLabel = new QLabel(layoutWidget);
        hourLabel->setObjectName(QStringLiteral("hourLabel"));
        hourLabel->setFont(font);

        verticalLayout->addWidget(hourLabel);

        hourBox = new QSpinBox(layoutWidget);
        hourBox->setObjectName(QStringLiteral("hourBox"));

        verticalLayout->addWidget(hourBox);

        dateLabel = new QLabel(layoutWidget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setFont(font);

        verticalLayout->addWidget(dateLabel);

        dateButton = new QPushButton(layoutWidget);
        dateButton->setObjectName(QStringLiteral("dateButton"));

        verticalLayout->addWidget(dateButton);

        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        verticalLayout->addWidget(submitButton);


        retranslateUi(LogHours);

        QMetaObject::connectSlotsByName(LogHours);
    } // setupUi

    void retranslateUi(QDialog *LogHours)
    {
        LogHours->setWindowTitle(QApplication::translate("LogHours", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("LogHours", "Event Name ", nullptr));
        categoryLabel->setText(QApplication::translate("LogHours", "Event Category", nullptr));
        otherInput->setText(QString());
        hourLabel->setText(QApplication::translate("LogHours", "Hours", nullptr));
        dateLabel->setText(QApplication::translate("LogHours", "Date: ", nullptr));
        dateButton->setText(QApplication::translate("LogHours", "Select Date", nullptr));
        submitButton->setText(QApplication::translate("LogHours", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogHours: public Ui_LogHours {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGHOURS_H
