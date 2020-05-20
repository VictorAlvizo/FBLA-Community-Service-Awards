/********************************************************************************
** Form generated from reading UI file 'databox.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
            DataBox->setObjectName(QString::fromUtf8("DataBox"));
        DataBox->resize(193, 142);
        widget = new QWidget(DataBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 171, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI"));
        nameLabel->setFont(font);

        verticalLayout->addWidget(nameLabel);

        dateLabel = new QLabel(widget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setFont(font);

        verticalLayout->addWidget(dateLabel);

        categoryLabel = new QLabel(widget);
        categoryLabel->setObjectName(QString::fromUtf8("categoryLabel"));
        categoryLabel->setFont(font);

        verticalLayout->addWidget(categoryLabel);

        hourlabel = new QLabel(widget);
        hourlabel->setObjectName(QString::fromUtf8("hourlabel"));
        hourlabel->setFont(font);

        verticalLayout->addWidget(hourlabel);


        retranslateUi(DataBox);

        QMetaObject::connectSlotsByName(DataBox);
    } // setupUi

    void retranslateUi(QDialog *DataBox)
    {
        DataBox->setWindowTitle(QCoreApplication::translate("DataBox", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("DataBox", "Event Name:", nullptr));
        dateLabel->setText(QCoreApplication::translate("DataBox", "Event Date:", nullptr));
        categoryLabel->setText(QCoreApplication::translate("DataBox", "Event Category:", nullptr));
        hourlabel->setText(QCoreApplication::translate("DataBox", "Event Hour(s):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataBox: public Ui_DataBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABOX_H
