/********************************************************************************
** Form generated from reading UI file 'qnawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QNAWINDOW_H
#define UI_QNAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QnAWindow
{
public:
    QLabel *helpLabel;
    QListWidget *helpList;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLabel;
    QLineEdit *searchBox;
    QPushButton *backButton;

    void setupUi(QDialog *QnAWindow)
    {
        if (QnAWindow->objectName().isEmpty())
            QnAWindow->setObjectName(QString::fromUtf8("QnAWindow"));
        QnAWindow->resize(559, 408);
        helpLabel = new QLabel(QnAWindow);
        helpLabel->setObjectName(QString::fromUtf8("helpLabel"));
        helpLabel->setGeometry(QRect(10, 10, 381, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bebas Neue"));
        font.setPointSize(25);
        helpLabel->setFont(font);
        helpList = new QListWidget(QnAWindow);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI"));
        font1.setPointSize(12);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(helpList);
        __qlistwidgetitem->setFont(font1);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(helpList);
        __qlistwidgetitem1->setFont(font1);
        new QListWidgetItem(helpList);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(helpList);
        __qlistwidgetitem2->setFont(font1);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(helpList);
        __qlistwidgetitem3->setFont(font1);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(helpList);
        __qlistwidgetitem4->setFont(font1);
        new QListWidgetItem(helpList);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(helpList);
        __qlistwidgetitem5->setFont(font1);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(helpList);
        __qlistwidgetitem6->setFont(font1);
        new QListWidgetItem(helpList);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(helpList);
        __qlistwidgetitem7->setFont(font1);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(helpList);
        __qlistwidgetitem8->setFont(font1);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(helpList);
        __qlistwidgetitem9->setFont(font1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nirmala UI"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(helpList);
        __qlistwidgetitem10->setFont(font2);
        new QListWidgetItem(helpList);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(helpList);
        __qlistwidgetitem11->setFont(font1);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(helpList);
        __qlistwidgetitem12->setFont(font1);
        new QListWidgetItem(helpList);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(helpList);
        __qlistwidgetitem13->setFont(font1);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        new QListWidgetItem(helpList);
        helpList->setObjectName(QString::fromUtf8("helpList"));
        helpList->setGeometry(QRect(10, 60, 531, 291));
        helpList->setFont(font1);
        helpList->setSelectionMode(QAbstractItemView::NoSelection);
        layoutWidget = new QWidget(QnAWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 360, 531, 37));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchLabel = new QLabel(layoutWidget);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Kenyan Coffee"));
        font3.setPointSize(20);
        searchLabel->setFont(font3);

        horizontalLayout->addWidget(searchLabel);

        searchBox = new QLineEdit(layoutWidget);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Nirmala UI"));
        font4.setPointSize(10);
        searchBox->setFont(font4);

        horizontalLayout->addWidget(searchBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setFont(font4);

        horizontalLayout_2->addWidget(backButton);


        retranslateUi(QnAWindow);

        QMetaObject::connectSlotsByName(QnAWindow);
    } // setupUi

    void retranslateUi(QDialog *QnAWindow)
    {
        QnAWindow->setWindowTitle(QCoreApplication::translate("QnAWindow", "Dialog", nullptr));
        helpLabel->setText(QCoreApplication::translate("QnAWindow", "Community Service | Help", nullptr));

        const bool __sortingEnabled = helpList->isSortingEnabled();
        helpList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = helpList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QnAWindow", "Q: How to add a member?", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = helpList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QnAWindow", "A: Add a member by", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = helpList->item(3);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QnAWindow", "Q: Where can I find the source code?", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = helpList->item(4);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QnAWindow", "A: In the home page, the action menu contains a button called \"Github\". ", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = helpList->item(5);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QnAWindow", "    This will open up the website containing the source code.", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = helpList->item(7);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QnAWindow", "Q: What if I loose my password [Member]?", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = helpList->item(8);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QnAWindow", "A: Contact your administrator,  they have access to your password.", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = helpList->item(10);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QnAWindow", "Q: What if I loose my password [Admin]?", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = helpList->item(11);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("QnAWindow", "A: Inside the program file, delete \"adminLogin.txt\". Next time you login", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = helpList->item(12);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("QnAWindow", "    you will be given temporary credentials that, can changed inside", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = helpList->item(13);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("QnAWindow", "    the admin panel", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = helpList->item(15);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("QnAWindow", "Q: How can I edit a member's information?", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = helpList->item(16);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("QnAWindow", "A: In the admin panel, clicking the \"Edit\" button", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = helpList->item(18);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("QnAWindow", "Q: How can I view/edit a member's events?", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = helpList->item(19);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("QnAWindow", "A: Once the member is chosen, click on \"View Events\", this will provide", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = helpList->item(20);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("QnAWindow", "    you the ability to view and edit an event's information", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = helpList->item(22);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("QnAWindow", "Q: How to export data to Excel or other similar mediums?", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = helpList->item(23);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("QnAWindow", "A: In the admin panel, click on \"Export Data\" and choose a save location", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = helpList->item(25);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("QnAWindow", "Q: How to backup my data?", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = helpList->item(26);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("QnAWindow", "A: In the admin panel, click on \"Backup Data\"", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = helpList->item(28);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("QnAWindow", "Q: Will retriving my backup data keep the new additions?", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = helpList->item(29);
        ___qlistwidgetitem21->setText(QCoreApplication::translate("QnAWindow", "A: No, retriving your backed up data will restore", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = helpList->item(30);
        ___qlistwidgetitem22->setText(QCoreApplication::translate("QnAWindow", "    to its original backup state", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = helpList->item(32);
        ___qlistwidgetitem23->setText(QCoreApplication::translate("QnAWindow", "Q: How many hours for the CSA Award?", nullptr));
        QListWidgetItem *___qlistwidgetitem24 = helpList->item(33);
        ___qlistwidgetitem24->setText(QCoreApplication::translate("QnAWindow", "A: A minum of 15 hours is required", nullptr));
        helpList->setSortingEnabled(__sortingEnabled);

        searchLabel->setText(QCoreApplication::translate("QnAWindow", "Search:", nullptr));
        backButton->setText(QCoreApplication::translate("QnAWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QnAWindow: public Ui_QnAWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QNAWINDOW_H
