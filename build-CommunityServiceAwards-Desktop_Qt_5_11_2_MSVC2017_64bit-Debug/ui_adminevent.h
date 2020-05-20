/********************************************************************************
** Form generated from reading UI file 'adminevent.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEVENT_H
#define UI_ADMINEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminEvent
{
public:
    QListWidget *eventList;
    QWidget *layoutWidget;
    QGridLayout *searchLayout;
    QComboBox *monthSearch;
    QComboBox *weekSearch;
    QLineEdit *yearSearch;
    QPushButton *searchButton;
    QLabel *filterLabel;
    QComboBox *filterDropdown;
    QPushButton *editButton;
    QPushButton *reportButton;
    QPushButton *removeButton;

    void setupUi(QDialog *AdminEvent)
    {
        if (AdminEvent->objectName().isEmpty())
            AdminEvent->setObjectName(QString::fromUtf8("AdminEvent"));
        AdminEvent->resize(525, 380);
        eventList = new QListWidget(AdminEvent);
        eventList->setObjectName(QString::fromUtf8("eventList"));
        eventList->setGeometry(QRect(20, 20, 401, 251));
        layoutWidget = new QWidget(AdminEvent);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 280, 231, 91));
        searchLayout = new QGridLayout(layoutWidget);
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchLayout->setContentsMargins(0, 0, 0, 0);
        monthSearch = new QComboBox(layoutWidget);
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->addItem(QString());
        monthSearch->setObjectName(QString::fromUtf8("monthSearch"));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI"));
        monthSearch->setFont(font);

        searchLayout->addWidget(monthSearch, 0, 0, 1, 1);

        weekSearch = new QComboBox(layoutWidget);
        weekSearch->addItem(QString());
        weekSearch->addItem(QString());
        weekSearch->addItem(QString());
        weekSearch->addItem(QString());
        weekSearch->addItem(QString());
        weekSearch->addItem(QString());
        weekSearch->setObjectName(QString::fromUtf8("weekSearch"));
        weekSearch->setFont(font);

        searchLayout->addWidget(weekSearch, 0, 1, 1, 1);

        yearSearch = new QLineEdit(layoutWidget);
        yearSearch->setObjectName(QString::fromUtf8("yearSearch"));
        yearSearch->setFont(font);

        searchLayout->addWidget(yearSearch, 0, 2, 1, 1);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setFont(font);

        searchLayout->addWidget(searchButton, 1, 0, 1, 3);

        filterLabel = new QLabel(AdminEvent);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        filterLabel->setGeometry(QRect(351, 280, 61, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bebas Neue"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        filterLabel->setFont(font1);
        filterDropdown = new QComboBox(AdminEvent);
        filterDropdown->addItem(QString());
        filterDropdown->addItem(QString());
        filterDropdown->addItem(QString());
        filterDropdown->addItem(QString());
        filterDropdown->setObjectName(QString::fromUtf8("filterDropdown"));
        filterDropdown->setGeometry(QRect(320, 330, 121, 22));
        filterDropdown->setFont(font);
        editButton = new QPushButton(AdminEvent);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(431, 45, 81, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nirmala UI"));
        font2.setPointSize(10);
        editButton->setFont(font2);
        reportButton = new QPushButton(AdminEvent);
        reportButton->setObjectName(QString::fromUtf8("reportButton"));
        reportButton->setGeometry(QRect(431, 125, 81, 41));
        reportButton->setFont(font2);
        removeButton = new QPushButton(AdminEvent);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(431, 210, 81, 41));
        removeButton->setFont(font2);

        retranslateUi(AdminEvent);

        QMetaObject::connectSlotsByName(AdminEvent);
    } // setupUi

    void retranslateUi(QDialog *AdminEvent)
    {
        AdminEvent->setWindowTitle(QCoreApplication::translate("AdminEvent", "Dialog", nullptr));
        monthSearch->setItemText(0, QCoreApplication::translate("AdminEvent", "January", nullptr));
        monthSearch->setItemText(1, QCoreApplication::translate("AdminEvent", "February", nullptr));
        monthSearch->setItemText(2, QCoreApplication::translate("AdminEvent", "March", nullptr));
        monthSearch->setItemText(3, QCoreApplication::translate("AdminEvent", "April", nullptr));
        monthSearch->setItemText(4, QCoreApplication::translate("AdminEvent", "May", nullptr));
        monthSearch->setItemText(5, QCoreApplication::translate("AdminEvent", "June", nullptr));
        monthSearch->setItemText(6, QCoreApplication::translate("AdminEvent", "July", nullptr));
        monthSearch->setItemText(7, QCoreApplication::translate("AdminEvent", "August", nullptr));
        monthSearch->setItemText(8, QCoreApplication::translate("AdminEvent", "September", nullptr));
        monthSearch->setItemText(9, QCoreApplication::translate("AdminEvent", "October", nullptr));
        monthSearch->setItemText(10, QCoreApplication::translate("AdminEvent", "November", nullptr));
        monthSearch->setItemText(11, QCoreApplication::translate("AdminEvent", "December", nullptr));

        weekSearch->setItemText(0, QCoreApplication::translate("AdminEvent", "Week 1", nullptr));
        weekSearch->setItemText(1, QCoreApplication::translate("AdminEvent", "Week 2", nullptr));
        weekSearch->setItemText(2, QCoreApplication::translate("AdminEvent", "Week 3", nullptr));
        weekSearch->setItemText(3, QCoreApplication::translate("AdminEvent", "Week 4", nullptr));
        weekSearch->setItemText(4, QCoreApplication::translate("AdminEvent", "Week 5", nullptr));
        weekSearch->setItemText(5, QCoreApplication::translate("AdminEvent", "All", nullptr));

        searchButton->setText(QCoreApplication::translate("AdminEvent", "Search Date", nullptr));
        filterLabel->setText(QCoreApplication::translate("AdminEvent", "Filter", nullptr));
        filterDropdown->setItemText(0, QCoreApplication::translate("AdminEvent", "Recent to Oldest", nullptr));
        filterDropdown->setItemText(1, QCoreApplication::translate("AdminEvent", "Oldest to Recent", nullptr));
        filterDropdown->setItemText(2, QCoreApplication::translate("AdminEvent", "Hours: High - Low", nullptr));
        filterDropdown->setItemText(3, QCoreApplication::translate("AdminEvent", "Hours: Low - High", nullptr));

        editButton->setText(QCoreApplication::translate("AdminEvent", "Edit", nullptr));
        reportButton->setText(QCoreApplication::translate("AdminEvent", "Report", nullptr));
        removeButton->setText(QCoreApplication::translate("AdminEvent", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminEvent: public Ui_AdminEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEVENT_H
