#include "loghours.h"
#include "ui_loghours.h"
#include "memberpanel.h"
#include "calendarwindow.h"

LogHours::LogHours(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogHours)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(230, 405));
    this->setWindowTitle("Log Event");

    ui->hourBox->setMinimum(1);
    ui->hourBox->setMaximum(24);

    connect(ui->dateButton, SIGNAL(released()), this, SLOT(DateButton()));
    connect(ui->submitButton, SIGNAL(released()), this, SLOT(SubmitButton()));
}

LogHours::~LogHours()
{
    delete ui;
}

void LogHours::RecieveMember(int memberIndex){
    m_MemIndex = memberIndex;
}

bool LogHours::isValid(){
    if(ui->nameOutput->text().isEmpty() || ui->otherInput->text().isEmpty()){
        QMessageBox::warning(this, "Empty Field", "All text fields must be filled out");
        return false;
    }

    if(ui->dateLabel->text().length() <= 6){ //Date: has the length of 6, if bigger, date has been chosen
        QMessageBox::warning(this, "No Date", "No event date has been chosen");
        return false;
    }

    return true;
}

void LogHours::DateButton(){
    CalendarWindow * calWindow = new CalendarWindow(this);
    connect(calWindow, SIGNAL(NewDate(QString)), this, SLOT(GetDate(QString)));
    calWindow->exec();
}

void LogHours::GetDate(QString date){
    ui->dateLabel->setText("Date: " + date);
}

void LogHours::SubmitButton(){
    if(!isValid()){
        return;
    }

    m_StoreMembers.clear();
    m_StoreMembers = FileReader::ReadMembers("info/memberList.txt");

    //Prepare new event
    Event tempEvent;
    tempEvent.m_Hours = ui->hourBox->value();
    tempEvent.m_EventName = ui->nameOutput->text().replace(" ", "_");
    tempEvent.m_Category = ui->otherInput->text().replace(" ", "_");
    tempEvent.m_Date = ui->dateLabel->text().remove(0, 6); //Remove the Date:

    //Event now in member, rewrite file with new information
    m_StoreMembers[m_MemIndex].m_Events.push_back(tempEvent);

    if(!FileReader::WriteMembers(m_StoreMembers, "info/memberList.txt")){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");
    }else{
        QMessageBox::information(this, "Event Saved", "Event has been saved");
    }

    Exit();
}

void LogHours::Exit(){
    this->parentWidget()->close(); //Done this way so it opens the member panel window again with new information
    this->close();

    MemberPanel * memPanel = new MemberPanel;
    memPanel->ReceiveMember(m_StoreMembers[m_MemIndex], m_MemIndex);
    memPanel->exec();
}
