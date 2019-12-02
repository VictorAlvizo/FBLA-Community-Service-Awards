#include "adminpanel.h"
#include "ui_adminpanel.h"
#include "mainwindow.h"
#include <QMessageBox>

AdminPanel::AdminPanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);

    //Set up window, set image and connect buttons
    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(750, 500));
    this->setWindowTitle("Admin Panel");

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    ui->logoImage->setPixmap(logoImage.scaled(ui->logoImage->width(), ui->logoImage->height(), Qt::KeepAspectRatio));
    this->setWindowIcon(iconImage);

    //Connecting buttons
    connect(ui->logoutButton, SIGNAL(released()), this, SLOT(LogoutButton()));
    connect(ui->registerButton, SIGNAL(released()), this, SLOT(RegisterButton()));
    connect(ui->eventButton, SIGNAL(released()), this, SLOT(EventButton()));
    connect(ui->editButton, SIGNAL(released()), this, SLOT(EditButton()));
    connect(ui->settingButton, SIGNAL(released()), this, SLOT(SettingButton()));

    //Connecting Drop down member when clicked
    connect(ui->studentDropDown, SIGNAL(activated(int)), this, SLOT(ItemClicked(int)));

    GetMembers();
    UpdateList();
}

AdminPanel::~AdminPanel()
{
    delete ui;
}

void AdminPanel::GetMembers(){
    m_Members->clear();

    QFile readMember("info/memberList.txt");

    if(!readMember.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Reading File", "An error occured trying to read member file, possiblity of no members");

        readMember.close();
        return;
    }

    QTextStream in(&readMember);

    Member * tempMember = new Member();
    QString testString;

    //Gather entire member database from file
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
            m_Members->push_back(*tempMember);
            tempMember = new Member();
        }
    }

    readMember.close();
}

void AdminPanel::UpdateList(){
    //Reset labels
    ui->nameOutput->setText("");
    ui->userOutput->setText("");
    ui->passwordOutput->setText("");
    ui->gradeOutput->setText("");
    ui->hoursOutput->setText("");
    ui->studentDropDown->clear();

    for(int i = 0; i < m_Members->size(); i++){
        QString fullName = m_Members->at(i).m_FirstName + " " + m_Members->at(i).m_LastName;
        ui->studentDropDown->addItem(fullName);
    }
}

void AdminPanel::LogoutButton(){
    this->close();
    MainWindow * homeWindow = new MainWindow();
    homeWindow->show();
}

void AdminPanel::RegisterButton(){
    MemberReg * regWindow = new MemberReg();
    regWindow->GiveMembers(*m_Members);
    regWindow->exec();

    //Reset list after in case file was changed
    GetMembers();
    UpdateList();
}

void AdminPanel::EventButton(){
    if(ui->nameOutput->text().isEmpty()){
        QMessageBox::warning(this, "Need Member", "A member must be selected to view events");
        return;
    }

    AdminEvent * eventWindow = new AdminEvent();
    eventWindow->ReceiveMember(ui->studentDropDown->currentIndex(), *m_Members);
    eventWindow->exec();

    //Reset list after in case file was changed
    GetMembers();
    UpdateList();
}

void AdminPanel::EditButton(){
    if(ui->nameOutput->text().isEmpty()){
        QMessageBox::warning(this, "Need Member", "A member must be selected to edit their information");
        return;
    }

   memberEdit * memEdit = new memberEdit();
   memEdit->ReceiveInformation(*m_Members, ui->studentDropDown->currentIndex());
   memEdit->exec();

   GetMembers();
   UpdateList();
}

void AdminPanel::ItemClicked(int index){
    //When item clicked make the label display their information
    ui->nameOutput->setText(m_Members->at(index).m_FirstName + " " + m_Members->at(index).m_LastName);
    ui->userOutput->setText(m_Members->at(index).m_Username);
    ui->passwordOutput->setText(m_Members->at(index).m_Password);
    ui->gradeOutput->setText(m_Members->at(index).m_Grade);

    int hours = 0;

    //Count their total hours by adding up all the event hour(s)
    for(int i = 0; i < m_Members->at(index).m_Events.size(); i++){
        hours += m_Members->at(index).m_Events.at(i).m_Hours;
    }

    ui->hoursOutput->setText(QString::number(hours));
}

void AdminPanel::SettingButton(){
    AdminSetting * settingsWindow = new AdminSetting();
    settingsWindow->exec();
}
