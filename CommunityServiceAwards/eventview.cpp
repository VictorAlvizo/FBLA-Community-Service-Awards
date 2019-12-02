#include "eventview.h"
#include "ui_eventview.h"

EventView::EventView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventView)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(300, 350)); //Fixed window size so window won't be able to resize
    this->setWindowTitle("Event View");
}

EventView::~EventView()
{
    delete ui;
}

void EventView::RecieveEvent(Event event){ //Displays event information to member
    QString eventName = event.m_EventName.replace("_", " "); //'_' from file replaced with spaces for viewing
    QString categoryName = event.m_Category.replace("_", " ");

    ui->nameInput->setText(eventName);
    ui->categoryInput->setText(categoryName);
    ui->dateInput->setText(event.m_Date);
    ui->hourInput->setText(QString::number(event.m_Hours));
}
