#include "adminsetting.h"
#include "ui_adminsetting.h"

AdminSetting::AdminSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminSetting)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(400, 300));
    this->setWindowTitle("Admin Settings");

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    this->setWindowIcon(iconImage);

    ui->passwordInput->setEchoMode(QLineEdit::Password);

    connect(ui->submitButton, SIGNAL(released()), this, SLOT(SubmitButton()));

    connect(ui->showBox, SIGNAL(clicked(bool)), this, SLOT(PasswordShow(bool)));

    GetInformation();
}

AdminSetting::~AdminSetting()
{
    delete ui;
}

void AdminSetting::GetInformation(){
    QFile readFile("info/adminLogin.txt");

    if(!readFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Reading to File", "An Error occured while reading admin file");

        readFile.close();
        return;
    }

    //Write new information to admin file
    QTextStream in(&readFile);
    QString username;

    in >> username;
    in >> m_OldPassword;

    readFile.close();

    ui->userInput->setText(username);
}

bool AdminSetting::isValid(){ //Check possible errors which may occur during file writing, spaces, empty, invalid input
    if(m_OldPassword != ui->oldInput->text()){
        QMessageBox::warning(this, "Incorrect Password", "Old password is incorrect");
        return false;
    }

    if(ui->oldInput->text().isEmpty() || ui->userInput->text().isEmpty() || ui->passwordInput->text().isEmpty()){
        QMessageBox::warning(this, "Empty Fields", "Fields may not be empty");
        return false;
    }

    if(ui->oldInput->text().contains(" ") || ui->userInput->text().contains(" ") || ui->passwordInput->text().contains(" ")){
        QMessageBox::warning(this, "Invalid Input", "Fields may not contain spaces");
        return false;
    }

    return true;
}

void AdminSetting::SubmitButton(){
    if(!isValid()){
        return;
    }

    QFile writeFile("info/adminLogin.txt");

    if(!writeFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error Writing to File", "An Error occured while writing to admin file");

        writeFile.close();
        return;
    }

    QTextStream out(&writeFile);

    out << ui->userInput->text() + " " + ui->passwordInput->text();

    writeFile.close();

    QMessageBox::information(this, "Information Saved", "New admin login has been saved");
}

void AdminSetting::PasswordShow(bool state){
    if(state){
        ui->passwordInput->setEchoMode(QLineEdit::Normal);
    }else{
        ui->passwordInput->setEchoMode(QLineEdit::Password);
    }
}
