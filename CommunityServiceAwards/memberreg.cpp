#include "memberreg.h"
#include "ui_memberreg.h"
#include <QDebug>

MemberReg::MemberReg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberReg)
{
    ui->setupUi(this);

    //Set up window
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");
    this->setWindowIcon(iconImage);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(500, 397));
    this->setWindowTitle("Member Registration");

    ui->passwordInput->setEchoMode(QLineEdit::Password);

    connect(ui->submitButton, SIGNAL(released()), this, SLOT(SubmitButton()));
    connect(ui->passwordCheck, SIGNAL(clicked(bool)), this, SLOT(PasswordBox(bool)));
}

MemberReg::~MemberReg()
{
    delete ui;
}

void MemberReg::GiveMembers(QVector<Member> members){
    m_MemberList = members;
}

void MemberReg::SubmitButton(){
    QString firstName = ui->firstInput->text();
    QString lastName = ui->lastInput->text();
    QString username = ui->userInput->text();
    QString password = ui->passwordInput->text();
    QString grade = ui->gradeDropDown->currentText();
    int idNumber = ++m_MemberList[m_MemberList.size() - 1].m_ID; //Get the last persons ID and increase +1

    if(isValidInput(firstName, lastName, username, password)){
        if(!QDir("info/").exists()){
            QDir().mkdir("info/");
        }

        QFile writeMember("info/memberList.txt");

        if(!writeMember.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)){
            QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");
            return;
        }

        QTextStream out(&writeMember);
        out << "\n" << firstName << " " << lastName << " " << username << " " << password << " "
            << grade << " " << QString::number(idNumber) << "\n~";

        writeMember.close();

        QMessageBox::information(this, "Member Saved", "Member: " + firstName + " " + lastName + " has been saved");

        ui->firstInput->setText("");
        ui->lastInput->setText("");
        ui->userInput->setText("");
        ui->passwordInput->setText("");
    }
}

bool MemberReg::isValidInput(const QString &firstName, const QString &lastName, const QString &username, const QString &password){
    if(firstName.contains(" ") || lastName.contains(" ") || username.contains(" ") || password.contains(" ")){
        QMessageBox::warning(this, "Invalid Input", "Inputs may not contain spaces");
        return false;
    }

    if(firstName.contains(QRegExp("[^a-zA-Z]"))){ //^ negates, if not a letter invalidate
        QMessageBox::warning(this, "Invalid Input", "First name can only contain letters");
        return false;
    }

    if(username.count() > 13 || password.count() > 13){
        QMessageBox::warning(this, "Invalid Input", "Username or password too large, may only contain up to 12 characters");
        return false;
    }

    if(firstName.isEmpty() || lastName.isEmpty() || username.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this, "Invalid Input", "All inputs must be filled");
        return false;
    }

    for(Member currentMember : m_MemberList){
        if(username == currentMember.m_Username){
            QMessageBox::warning(this, "Invalid Input", "The username: " + username + " is already in use");
            return false;
        }
    }

    return true;
}

void MemberReg::PasswordBox(bool value){
    if(value){
        ui->passwordInput->setEchoMode(QLineEdit::Normal);
    }else{
        ui->passwordInput->setEchoMode(QLineEdit::Password);
    }
}
