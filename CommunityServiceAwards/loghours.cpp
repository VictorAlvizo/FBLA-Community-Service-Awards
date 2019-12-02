#include "loghours.h"
#include "ui_loghours.h"
#include "memberpanel.h"

LogHours::LogHours(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogHours)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(230, 300));
    this->setWindowTitle("Log Event");

    ui->hourBox->setMinimum(-1);
    ui->hourBox->setMaximum(24);

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

    if(!ui->dateEdit->date().isValid()){
        QMessageBox::warning(this, "Invalid Date", "Date entered is not valid");
        return false;
    }

    return true;
}

void LogHours::FillList(){ //Read file data to fill QVector<Member>
    m_StoreMembers.clear();

    QFile readMember("info/memberList.txt");

    if(!readMember.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Reading File", "An error occured trying to read member file");

        readMember.close();
        return;
    }

    QTextStream in(&readMember);

    Member * tempMember = new Member();
    QString testString;

    while(!in.atEnd()){
        in >> testString;

        if(testString == "*"){
            Event tempEvent;

            in >> tempEvent.m_Hours >> tempEvent.m_EventName >> tempEvent.m_Category >> tempEvent.m_Date;
            tempMember->m_Events.push_back(tempEvent);
        }else if(testString != "*" && testString != "~"){
            tempMember->m_FirstName = testString;
            in >> tempMember->m_LastName >> tempMember->m_Username >> tempMember->m_Password >> tempMember->m_Grade;
        }else{
            m_StoreMembers.push_back(*tempMember);
            tempMember = new Member();
        }
    }

    readMember.close();
}

void LogHours::SubmitButton(){
    if(!isValid()){
        return;
    }

    FillList();

    //Prepare new event
    Event tempEvent;
    tempEvent.m_Hours = ui->hourBox->value();
    tempEvent.m_EventName = ui->nameOutput->text().replace(" ", "_");
    tempEvent.m_Category = ui->otherInput->text().replace(" ", "_");
    tempEvent.m_Date = ui->dateEdit->date().toString("MM/dd/yyyy");

    //Event now in member, rewrite file with new information
    m_StoreMembers[m_MemIndex].m_Events.push_back(tempEvent);

    QFile writeFile("info/memberList.txt");

    if(!writeFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");

        writeFile.close();
        return;
    }

    QTextStream out(&writeFile);

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

    QMessageBox::information(this, "Event Saved", "Event has been saved");
    writeFile.close();

    Exit();
}

void LogHours::Exit(){
    this->parentWidget()->close();
    this->close();

    MemberPanel * memPanel = new MemberPanel;
    memPanel->ReceiveMember(m_StoreMembers[m_MemIndex], m_MemIndex);
    memPanel->exec();
}
