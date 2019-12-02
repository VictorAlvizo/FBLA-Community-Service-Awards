/********************************************************************************
** Form generated from reading UI file 'adminevent.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEVENT_H
#define UI_ADMINEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminEvent
{
public:
    QListWidget *eventView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *editButton;
    QPushButton *removeButton;

    void setupUi(QDialog *AdminEvent)
    {
        if (AdminEvent->objectName().isEmpty())
            AdminEvent->setObjectName(QStringLiteral("AdminEvent"));
        AdminEvent->resize(550, 400);
        eventView = new QListWidget(AdminEvent);
        eventView->setObjectName(QStringLiteral("eventView"));
        eventView->setGeometry(QRect(10, 10, 371, 381));
        QFont font;
        font.setPointSize(15);
        eventView->setFont(font);
        widget = new QWidget(AdminEvent);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(390, 10, 141, 381));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        editButton = new QPushButton(widget);
        editButton->setObjectName(QStringLiteral("editButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Semibold"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        editButton->setFont(font1);

        verticalLayout->addWidget(editButton);

        removeButton = new QPushButton(widget);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setFont(font1);

        verticalLayout->addWidget(removeButton);


        retranslateUi(AdminEvent);

        QMetaObject::connectSlotsByName(AdminEvent);
    } // setupUi

    void retranslateUi(QDialog *AdminEvent)
    {
        AdminEvent->setWindowTitle(QApplication::translate("AdminEvent", "Dialog", nullptr));
        editButton->setText(QApplication::translate("AdminEvent", "Edit", nullptr));
        removeButton->setText(QApplication::translate("AdminEvent", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminEvent: public Ui_AdminEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEVENT_H
