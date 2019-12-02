#include "eventedit.h"
#include "ui_eventedit.h"

EventEdit::EventEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventEdit)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //Remove the '?' on the title bar
    this->setFixedSize(QSize(550, 400));
    this->setWindowTitle("Event Editor");

    ui->hourSpin->setMinimum(0);
    ui->hourSpin->setMaximum(24);

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
}

bool EventEdit::ValidInformation(){
    if(ui->nameInput->text().isEmpty() || ui->categoryInput->text().isEmpty()){
        QMessageBox::warning(this, "Empty Fields", "Fields may not be left empty");
        return false;
    }

    if(!ui->dateEdit->date().isValid()){
        QMessageBox::warning(this, "Invalid Date", "Date is invalid");
        return false;
    }

    return true;
}

void EventEdit::SubmitButton(){
    if(!ValidInformation()){
        return;
    }

    QString date = ui->dateEdit->date().toString("MM/dd/yyyy"); //Date format
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
    QFile writeFile("info/memberList.txt");

    if(!writeFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");

        writeFile.close();
        return;
    }

    QTextStream out(&writeFile);

    //Write file with appropriate delimiters
    for(int i = 0; i < m_StoreMembers.size(); i++){
        out << "\n" << m_StoreMembers.at(i).m_FirstName << " " << m_StoreMembers.at(i).m_LastName
            << " " << m_StoreMembers.at(i).m_Username << " " << m_StoreMembers.at(i).m_Password
            << " " << m_StoreMembers.at(i).m_Grade;

        for(int j = 0; j < m_StoreMembers.at(i).m_Events.size(); j++){
            out << "\n* "; //* for every event

            out << m_StoreMembers.at(i).m_Events.at(j).m_Hours << " "
                << m_StoreMembers.at(i).m_Events.at(j).m_EventName << " "
                << m_StoreMembers.at(i).m_Events.at(j).m_Category << " "
                << m_StoreMembers.at(i).m_Events.at(j).m_Date;
        }

        out << "\n~"; //Finish off member with the delimiter separting the members
    }

    QMessageBox::information(this, "Saved", "Event information has been updated");
    writeFile.close();

    this->close();
}
