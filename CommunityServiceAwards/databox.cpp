#include "databox.h"
#include "ui_databox.h"

DataBox::DataBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataBox)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(193, 142));
}

DataBox::~DataBox()
{
    delete ui;
}

void DataBox::RecieveEvent(Event event){
    //Remove any _ for spaces
    QString eventName = event.m_EventName.replace("_", " ");
    QString eventCategory = event.m_Category.replace("_", " ");

    this->setWindowTitle(eventName + "'s" + " Info Box");

    ui->nameLabel->setText("Event Name: " + eventName);
    ui->categoryLabel->setText("Event Category: " + eventCategory);
    ui->dateLabel->setText("Event Date: " + event.m_Date);
    ui->hourlabel->setText("Event Hour(s): " + QString::number(event.m_Hours));
}
