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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogHours
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameOutput;
    QLabel *categoryLabel;
    QLabel *otherLabel;
    QLineEdit *otherInput;
    QLabel *hourLabel;
    QSpinBox *hourBox;
    QLabel *dateLabel;
    QDateEdit *dateEdit;
    QPushButton *submitButton;

    void setupUi(QDialog *LogHours)
    {
        if (LogHours->objectName().isEmpty())
            LogHours->setObjectName(QStringLiteral("LogHours"));
        LogHours->resize(230, 300);
        widget = new QWidget(LogHours);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 191, 481));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Kenyan Coffee"));
        font.setPointSize(15);
        nameLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::SpanningRole, nameLabel);

        nameOutput = new QLineEdit(widget);
        nameOutput->setObjectName(QStringLiteral("nameOutput"));

        formLayout->setWidget(2, QFormLayout::FieldRole, nameOutput);

        categoryLabel = new QLabel(widget);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setFont(font);

        formLayout->setWidget(5, QFormLayout::SpanningRole, categoryLabel);

        otherLabel = new QLabel(widget);
        otherLabel->setObjectName(QStringLiteral("otherLabel"));
        otherLabel->setFont(font);

        formLayout->setWidget(8, QFormLayout::LabelRole, otherLabel);

        otherInput = new QLineEdit(widget);
        otherInput->setObjectName(QStringLiteral("otherInput"));

        formLayout->setWidget(10, QFormLayout::FieldRole, otherInput);

        hourLabel = new QLabel(widget);
        hourLabel->setObjectName(QStringLiteral("hourLabel"));
        hourLabel->setFont(font);

        formLayout->setWidget(14, QFormLayout::LabelRole, hourLabel);

        hourBox = new QSpinBox(widget);
        hourBox->setObjectName(QStringLiteral("hourBox"));

        formLayout->setWidget(17, QFormLayout::FieldRole, hourBox);

        dateLabel = new QLabel(widget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setFont(font);

        formLayout->setWidget(19, QFormLayout::SpanningRole, dateLabel);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(20, QFormLayout::FieldRole, dateEdit);

        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        formLayout->setWidget(23, QFormLayout::SpanningRole, submitButton);


        retranslateUi(LogHours);

        QMetaObject::connectSlotsByName(LogHours);
    } // setupUi

    void retranslateUi(QDialog *LogHours)
    {
        LogHours->setWindowTitle(QApplication::translate("LogHours", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("LogHours", "Event Name ", nullptr));
        categoryLabel->setText(QApplication::translate("LogHours", "Event Category", nullptr));
        otherLabel->setText(QApplication::translate("LogHours", "Other", nullptr));
        otherInput->setText(QString());
        hourLabel->setText(QApplication::translate("LogHours", "Hours", nullptr));
        dateLabel->setText(QApplication::translate("LogHours", "Date", nullptr));
        submitButton->setText(QApplication::translate("LogHours", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogHours: public Ui_LogHours {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGHOURS_H
