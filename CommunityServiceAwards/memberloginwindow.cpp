#include "memberloginwindow.h"
#include "ui_memberloginwindow.h"

MemberLoginWindow::MemberLoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberLoginWindow)
{
    ui->setupUi(this);

    //Setting up window
    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //Remove the '?' on the title bar
    this->setFixedSize(QSize(750, 500));
    this->setWindowTitle("Member Login");

    QPixmap logoImage(":/images/images/MemberLogo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    //Code sets the image inside the window
    ui->logoLabel->setPixmap(logoImage.scaled(ui->logoLabel->width(), ui->logoLabel->height(), Qt::KeepAspectRatio));

    this->setWindowIcon(iconImage);

    ui->passwordLE->setEchoMode(QLineEdit::Password); //Hide password input

    connect(ui->loginButton, SIGNAL(released()), this, SLOT(LoginButton()));
    connect(ui->backButton, SIGNAL(released()), this, SLOT(BackButton()));
}

MemberLoginWindow::~MemberLoginWindow()
{
    delete ui;
}

void MemberLoginWindow::LoginButton(){
    if(ui->usernameLE->text().isEmpty() || ui->passwordLE->text().isEmpty()){
        QMessageBox::warning(this, "Empty input(s)", "Username and Password box must be filled in.");
        return;
    }

    //Incase the folder 'info' does not exist create it, this code excerpt is only found
    //here and admin login as beyond that it has been created in the case it's missing
    if(!QDir("info/").exists()){
        QDir().mkdir("info/");
    }

    QString username = ui->usernameLE->text();
    QString password = ui->passwordLE->text();

    QFile readMember("info/memberList.txt");

    if(!readMember.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Reading File", "An error occured trying to read member file");

        readMember.close();
        return;
    }

    QTextStream in(&readMember);

    QString testString;
    Member * tempMember = new Member(); //Will store the current member to check if that's the one
    bool found = false;

    //Member index is used to keep track of member in list for the Log Hours window
    int memIndex = -1;

    while(!in.atEnd()){
        in >> testString;

        //* is the delimiter for an event, store it for the member
        if(testString == "*"){
            Event tempEvent;

            in >> tempEvent.m_Hours >> tempEvent.m_EventName >> tempEvent.m_Category >> tempEvent.m_Date;
            tempMember->m_Events.push_back(tempEvent);
        }else if(testString != "*" && testString != "~"){
            memIndex++;

            tempMember->m_FirstName = testString;
            in >> tempMember->m_LastName >> tempMember->m_Username >> tempMember->m_Password >> tempMember->m_Grade;

            //Check if that is the member we're looking for
            if(username == tempMember->m_Username && password == tempMember->m_Password){
                found = true;
            }
        }else{
            if(found){ //If member was already found and it has looped through all events go to panel
                readMember.close();

                this->close();
                MemberPanel * memberPanel = new MemberPanel();
                memberPanel->ReceiveMember(*tempMember, memIndex);
                memberPanel->exec();
                return;
            }

            tempMember = new Member(); //Pointer for Member used for this reason, create new instance
        }
    }

    QMessageBox::warning(this, "Incorrect Information", "The username or password is incorrect");
    readMember.close();
}

void MemberLoginWindow::BackButton(){ //Show the parent window (Home) and close this one
    parentWidget()->show();
    this->close();
}
