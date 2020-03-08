/********************************************************************************
** Form generated from reading UI file 'databox.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABOX_H
#define UI_DATABOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataBox
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLabel *dateLabel;
    QLabel *categoryLabel;
    QLabel *hourlabel;

    void setupUi(QDialog *DataBox)
    {
        if (DataBox->objectName().isEmpty())
            DataBox->setObjectName(QStringLiteral("DataBox"));
        DataBox->resize(193, 142);
        widget = new QWidget(DataBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 171, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Nirmala UI"));
        nameLabel->setFont(font);

        verticalLayout->addWidget(nameLabel);

        dateLabel = new QLabel(widget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setFont(font);

        verticalLayout->addWidget(dateLabel);

        categoryLabel = new QLabel(widget);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setFont(font);

        verticalLayout->addWidget(categoryLabel);

        hourlabel = new QLabel(widget);
        hourlabel->setObjectName(QStringLiteral("hourlabel"));
        hourlabel->setFont(font);

        verticalLayout->addWidget(hourlabel);


        retranslateUi(DataBox);

        QMetaObject::connectSlotsByName(DataBox);
    } // setupUi

    void retranslateUi(QDialog *DataBox)
    {
        DataBox->setWindowTitle(QApplication::translate("DataBox", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("DataBox", "Event Name:", nullptr));
        dateLabel->setText(QApplication::translate("DataBox", "Event Date:", nullptr));
        categoryLabel->setText(QApplication::translate("DataBox", "Event Category:", nullptr));
        hourlabel->setText(QApplication::translate("DataBox", "Event Hour(s):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataBox: public Ui_DataBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABOX_H
