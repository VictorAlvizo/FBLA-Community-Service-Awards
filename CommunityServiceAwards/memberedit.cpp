#include "memberedit.h"
#include "ui_memberedit.h"

memberEdit::memberEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberEdit)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(550, 400));
    this->setWindowTitle("Member Settings");

    connect(ui->submitButton, SIGNAL(released()), this, SLOT(SubmitButton()));
    connect(ui->removeButton, SIGNAL(released()), this, SLOT(RemoveButton()));
}

memberEdit::~memberEdit()
{
    delete ui;
}

void memberEdit::ReceiveInformation(QVector<Member> members, int memberIndex){
    m_Members = members;
    m_MemberIndex = memberIndex;

    //Set current information to edit boxes
    ui->firstInput->setText(m_Members[memberIndex].m_FirstName);
    ui->lastInput->setText(m_Members[memberIndex].m_LastName);
    ui->userInput->setText(m_Members[memberIndex].m_Username);
    ui->passwordInput->setText(m_Members[memberIndex].m_Password);
}

bool memberEdit::isValid(){
    if(ui->firstInput->text().isEmpty() || ui->lastInput->text().isEmpty() ||ui->userInput->text().isEmpty() || ui->passwordInput->text().isEmpty()){
        QMessageBox::warning(this, "Empty Fields", "Fields may not be left empty");
        return false;
    }

    if(ui->firstInput->text().contains(" ") || ui->lastInput->text().contains(" ") || ui->userInput->text().contains(" ") || ui->passwordInput->text().contains(" ")){
        QMessageBox::warning(this, "Invalid Characters", "Input fields may not have spaces");
        return false;
    }

    if(ui->userInput->text().size() > 13 || ui->passwordInput->text().size() > 13){
        QMessageBox::critical(this, "Invalid Input", "Username or password too large, may only contain up to 12 characters");
        return false;
    }

    for(Member currentMember : m_Members){
        if(ui->userInput->text() == currentMember.m_Username && ui->userInput->text() != m_Members[m_MemberIndex].m_Username){
            QMessageBox::critical(this, "Invalid Input", "The username: " + ui->userInput->text() + " is already in use");
            return false;
        }
    }

    return true;
}

void memberEdit::SubmitButton(){
    if(!isValid()){
        return;
    }

    //Get new information to replace old
    m_Members[m_MemberIndex].m_FirstName = ui->firstInput->text();
    m_Members[m_MemberIndex].m_LastName = ui->lastInput->text();
    m_Members[m_MemberIndex].m_Username = ui->userInput->text();
    m_Members[m_MemberIndex].m_Password = ui->passwordInput->text();
    m_Members[m_MemberIndex].m_Grade = ui->gradeDropDown->currentText();

    SaveInformation();
    QMessageBox::information(this, "Information Changed", "Member's information has been updated");

    this->close();
}

void memberEdit::RemoveButton(){
    m_Members.remove(m_MemberIndex);

    SaveInformation();
    QMessageBox::information(this, "Member Removed", "Member's information has been removed");

    this->close();
}

void memberEdit::SaveInformation(){
    QFile writeFile("info/memberList.txt");

    if(!writeFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");

        writeFile.close();
        return;
    }

    QTextStream out(&writeFile);

    //Rewrite file with new information
    for(int i = 0; i < m_Members.size(); i++){
        out << "\n" << m_Members.at(i).m_FirstName << " " << m_Members.at(i).m_LastName
            << " " << m_Members.at(i).m_Username << " " << m_Members.at(i).m_Password
            << " " << m_Members.at(i).m_Grade;

        for(int j = 0; j < m_Members.at(i).m_Events.size(); j++){
            out << "\n* ";

            out << m_Members.at(i).m_Events.at(j).m_Hours << " "
                << m_Members.at(i).m_Events.at(j).m_EventName << " "
                << m_Members.at(i).m_Events.at(j).m_Category << " "
                << m_Members.at(i).m_Events.at(j).m_Date;
        }

        out << "\n~";
    }
}
