#include "adminloginwindow.h"
#include "ui_adminloginwindow.h"

AdminLoginWindow::AdminLoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLoginWindow)
{
    ui->setupUi(this);

    //Set up window
    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //Remove the '?' on the title bar
    this->setFixedSize(QSize(750, 500));
    this->setWindowTitle("Admin Login");

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    ui->logoLabel->setPixmap(logoImage.scaled(ui->logoLabel->width(), ui->logoLabel->height(), Qt::KeepAspectRatio));

    this->setWindowIcon(iconImage);

    ui->passwordLE->setEchoMode(QLineEdit::Password); //Hide password input

    connect(ui->loginButton, SIGNAL(released()), this, SLOT(LoginButton()));
    connect(ui->backButton, SIGNAL(released()), this, SLOT(BackButton()));
}

AdminLoginWindow::~AdminLoginWindow()
{
    delete ui;
}

void AdminLoginWindow::LoginButton(){
    QString username = ui->usernameLE->text();
    QString password = ui->passwordLE->text();

    LoginInformation info = GetInformation();

    //Read login information from file and check if they match
    if(!username.isEmpty() && !password.isEmpty()){
        if(username == info.m_Username && password == info.m_Password){
            ui->usernameLE->setText("");
            ui->passwordLE->setText("");

            this->close();
            AdminPanel * adminPanel = new AdminPanel();
            adminPanel->exec();
        }else{
            QMessageBox::warning(this, "Incorrect Information", "The username or password is incorrect");
        }
    }else{
        QMessageBox::warning(this, "Empty input(s)", "Username and Password box must be filled in.");
    }
}

void AdminLoginWindow::EmergencyCreation(){
    //Incase the folder 'info' does not exist create it, this code excerpt is only found
    //here and member login as beyond that it has been created in the case it's missing
    if(!QDir("info/").exists()){
        QDir().mkdir("info/");
    }

    QFile writeFile("info/adminLogin.txt");

    if(!writeFile.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::critical(this, "Error Writing To File", "Unable to write login file.");

        writeFile.close();
        return;
    }

    QTextStream out(&writeFile);
    out << "AdminCrit tempPass123";

    writeFile.close();
}

LoginInformation AdminLoginWindow::GetInformation(){
    LoginInformation tempInfo;

    QFile file("info/adminLogin.txt");

    if(!file.open(QIODevice::ReadOnly | QFile::Text)){ //In this case admin file is not found create temp one
        file.close();
        QMessageBox::critical(this, "Error Reading To File", "Unable to read to file, making new login. Username: AdminCrit, Password: tempPass123");
        EmergencyCreation();

        tempInfo.m_Username = "AdminCrit";
        tempInfo.m_Password = "tempPass123";
    }else{ //Read information from file
        QTextStream in(&file);
        in >> tempInfo.m_Username;
        in >> tempInfo.m_Password;
    }

    file.close();
    return tempInfo;
}

void AdminLoginWindow::BackButton(){
    parentWidget()->show();
    this->close();
}
