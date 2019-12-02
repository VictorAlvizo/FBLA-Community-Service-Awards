#include "adminevent.h"
#include "ui_adminevent.h"

AdminEvent::AdminEvent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEvent)
{
    ui->setupUi(this);

    //Set up window / connecting buttons
    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //Remove the '?' on the title bar
    this->setFixedSize(QSize(550, 400));

    connect(ui->editButton, SIGNAL(released()), this, SLOT(EditButton()));
    connect(ui->removeButton, SIGNAL(released()), this, SLOT(RemoveButton()));
}

AdminEvent::~AdminEvent()
{
    delete ui;
}

void AdminEvent::ReceiveMember(int memberIndex, QVector<Member> memberList){
    m_MemberIndex = memberIndex;
    m_StoreMembers = memberList;

    this->setWindowTitle(memberList.at(m_MemberIndex).m_FirstName + "'s " + "Events");

    RefreshList();
}

void AdminEvent::RefreshList(){
    ui->eventView->clear();

    //Loop through each event and add it to the list with its own information
    for(Event event : m_StoreMembers.at(m_MemberIndex).m_Events){
        ui->eventView->addItem(QString::number(event.m_Hours) + " " + event.m_EventName + " " +
                               event.m_Category + " " + event.m_Date);
    }
}

void AdminEvent::EditButton(){
    //No items selected or there are no events
    if(m_StoreMembers.at(m_MemberIndex).m_Events.isEmpty() || ui->eventView->currentItem() == nullptr){
        QMessageBox::information(this, "Nothing Selected", "No event has been selected to edit");
        return;
    }

    this->close();
    EventEdit * eventEdit = new EventEdit();
    eventEdit->ReceiveInformation(m_MemberIndex, ui->eventView->currentRow(), m_StoreMembers);
    eventEdit->exec();
}

void AdminEvent::RemoveButton(){
    if(m_StoreMembers.at(m_MemberIndex).m_Events.isEmpty() || ui->eventView->currentItem() == nullptr){
        QMessageBox::information(this, "Nothing Selected", "No event has been selected to edit");
        return;
    }

    //Remove the event from the member and rewrite the file with the updated list
    m_StoreMembers[m_MemberIndex].m_Events.remove(ui->eventView->currentRow());

    QFile writeFile("info/memberList.txt");

    if(!writeFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");
        return;
    }

    QTextStream out(&writeFile);

    //Loop through each member, write their information then loop again to cover their events
    for(int i = 0; i < m_StoreMembers.size(); i++){
        out << "\n" << m_StoreMembers.at(i).m_FirstName << " " << m_StoreMembers.at(i).m_LastName
            << " " << m_StoreMembers.at(i).m_Username << " " << m_StoreMembers.at(i).m_Password
            << " " << m_StoreMembers.at(i).m_Grade;

        for(int j = 0; j < m_StoreMembers.at(i).m_Events.size(); j++){
            out << "\n* ";

            out << m_StoreMembers.at(i).m_Events.at(j).m_Hours << " "
                << m_StoreMembers.at(i).m_Events.at(j).m_EventName << " "
                << m_StoreMembers.at(i).m_Events.at(j).m_Category << " "
                << m_StoreMembers.at(i).m_Events.at(j).m_Date;
        }

        out << "\n~";
    }

    QMessageBox::information(this, "Removed", "Event information has been removed");
    writeFile.close();

    RefreshList();
}
