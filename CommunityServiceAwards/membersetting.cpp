#include "membersetting.h"
#include "ui_membersetting.h"

MemberSetting::MemberSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberSetting)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(415, 468));

    connect(ui->passwordButton, SIGNAL(released()), this, SLOT(PasswordButton()));
}

MemberSetting::~MemberSetting()
{
    delete ui;
}

void MemberSetting::RecieveInformation(int memberIndex){
    m_MemberIndex = memberIndex;
    m_Members.clear();
    m_Members = FileReader::ReadMembers("info/memberList.txt");

    this->setWindowTitle(m_Members[m_MemberIndex].m_FirstName + "'s Settings");

    //Fill in all the information labels
    ui->titleLabel->setText(m_Members[m_MemberIndex].m_FirstName + "'s" + " Settings");
    ui->nameLabel->setText("Name: " + m_Members[m_MemberIndex].m_FirstName + " " + m_Members[m_MemberIndex].m_LastName);
    ui->idLabel->setText("ID: " + QString::number(m_Members[m_MemberIndex].m_ID));
    ui->usernameLabel->setText("Username: " + m_Members[m_MemberIndex].m_Username);
    ui->passwordEdit->setText(m_Members[m_MemberIndex].m_Password);
    ui->gradeLabel->setText("Grade: " + m_Members[m_MemberIndex].m_Grade);
    ui->eventAmtLabel->setText("# of events: " + QString::number(m_Members[m_MemberIndex].m_Events.size()));

    int totalHours = 0;

    for(Event event : m_Members[m_MemberIndex].m_Events){
        totalHours += event.m_Hours;
    }

    ui->hourLabel->setText("Total Hour(s): " + QString::number(totalHours));

    QString award = totalHours >= 15 ? "Yes" : "No";
    ui->awardGained->setText("CSA Award: " + award);
}

void MemberSetting::PasswordButton(){
    if(ui->passwordEdit->text().isEmpty() || ui->passwordEdit->text().contains(" ")){
        QMessageBox::warning(this, "Invalid Password", "Password may not be empty or contain spaces");
        return;
    }

    m_Members[m_MemberIndex].m_Password = ui->passwordEdit->text();

    if(!FileReader::WriteMembers(m_Members, "info/memberList.txt")){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write to member file.");
        return;
    }

    QMessageBox::information(this, "Password Changed", "New password has been saved");
}
