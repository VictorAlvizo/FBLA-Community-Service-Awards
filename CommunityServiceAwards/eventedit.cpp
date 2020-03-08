#include "eventedit.h"
#include "ui_eventedit.h"
#include "calendarwindow.h"

EventEdit::EventEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventEdit)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //Remove the '?' on the title bar
    this->setFixedSize(QSize(550, 400));
    this->setWindowTitle("Event Editor");

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    this->setWindowIcon(iconImage);

    ui->hourSpin->setMinimum(1);
    ui->hourSpin->setMaximum(24);

    connect(ui->dateButton, SIGNAL(released()), this, SLOT(DateButton()));
    connect(ui->submitButton, SIGNAL(released()), this, SLOT(SubmitButton()));
}

EventEdit::~EventEdit()
{
    delete ui;
}

void EventEdit::ReceiveInformation(int memberIndex, int eventIndex, QVector<Member> memberList){
    m_MemberIndex = memberIndex;
    m_EventIndex = eventIndex;
    m_StoreMembers = memberList;

    //Receive information and set it to the event labels
    ui->hourSpin->setValue(m_StoreMembers.at(m_MemberIndex).m_Events.at(m_EventIndex).m_Hours);
    ui->nameInput->setText(m_StoreMembers.at(m_MemberIndex).m_Events.at(m_EventIndex).m_EventName);
    ui->categoryInput->setText(m_StoreMembers.at(m_MemberIndex).m_Events.at(m_EventIndex).m_Category);
    ui->dateLabel->setText("Event Date: " + m_StoreMembers[m_MemberIndex].m_Events[m_EventIndex].m_Date);
}

bool EventEdit::ValidInformation(){
    if(ui->nameInput->text().isEmpty() || ui->categoryInput->text().isEmpty()){
        QMessageBox::warning(this, "Empty Fields", "Fields may not be left empty");
        return false;
    }

    return true;
}

void EventEdit::DateButton(){
    CalendarWindow * calendar = new CalendarWindow();
    calendar->ReceiveDate(ui->dateLabel->text().remove(0, 12)); //Not sending from mem vector to get updated date
    connect(calendar, SIGNAL(NewDate(QString)), this, SLOT(GetDate(QString)));
    calendar->exec();
}

void EventEdit::GetDate(QString date){
    ui->dateLabel->setText("Event Date: " + date);
}

void EventEdit::SubmitButton(){
    if(!ValidInformation()){
        return;
    }

    QString date = ui->dateLabel->text().remove(0, 12);
    QString eventName = ui->nameInput->text().replace(" ", "_"); //Replace spaces with '_' for file writing
    QString categoryName = ui->categoryInput->text().replace(" ", "_");

    //Set new information to member as file will be rewritten with new data
    m_StoreMembers[m_MemberIndex].m_Events[m_EventIndex].m_Hours = ui->hourSpin->value();
    m_StoreMembers[m_MemberIndex].m_Events[m_EventIndex].m_EventName = eventName;
    m_StoreMembers[m_MemberIndex].m_Events[m_EventIndex].m_Category = categoryName;
    m_StoreMembers[m_MemberIndex].m_Events[m_EventIndex].m_Date = date;

    SaveInformation();
}

void EventEdit::SaveInformation(){
    if(!FileReader::WriteMembers(m_StoreMembers, "info/memberList.txt")){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");
        return;
    }else{
        QMessageBox::information(this, "Saved", "Event information has been updated");
    }

    this->close();
}
