#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Setting up project
    this->setFixedSize(QSize(750, 500));
    setWindowTitle("Community Service Awards");

    QPixmap iconImage(":/images/images/LogoTitleIcon.png");
    this->setWindowIcon(iconImage);

    //Connecting all the buttons and Actions to their dedicated methods
    connect(ui->actionMission, SIGNAL(triggered()), this, SLOT(ActMission()));
    connect(ui->actionQT, SIGNAL(triggered()), this, SLOT(ActQT()));
    connect(ui->actionDeveloper, SIGNAL(triggered()), this, SLOT(ActDev()));
    connect(ui->adminHelp, SIGNAL(triggered()), this, SLOT(ActAdHelp()));
    connect(ui->memberHelp, SIGNAL(triggered()), this, SLOT(ActMemHelp()));

    connect(ui->adminButton, SIGNAL(released()), this, SLOT(AdminButtonLogin()));
    connect(ui->memberLogin, SIGNAL(released()), this, SLOT(MemberButtonLogin()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AdminButtonLogin(){
    this->hide(); //Hide this window while this one runs
    AdminLoginWindow * adminLW = new AdminLoginWindow(this); //Makes this window the parent window and control it from child
    adminLW->exec();
}

void MainWindow::MemberButtonLogin(){
    this->hide();
    MemberLoginWindow * memberLW = new MemberLoginWindow(this);
    memberLW->exec();
}

void MainWindow::ActMission(){
    QMessageBox::information(this, "Mission Statement", "Community Service Awards program made for FBLA");
}

void MainWindow::ActQT(){
    QMessageBox::aboutQt(this, "About QT");
}

void MainWindow::ActDev(){
    QMessageBox::information(this, "Developer | Victor Alvizo", "Program created by Victor Alvizo");
}

void MainWindow::ActAdHelp(){
    QMessageBox::information(this, "Admin Help", "Click on the admin login and proceed to enter admin information. Inside admin panel various options regarding members appears");
}

void MainWindow::ActMemHelp(){
    QMessageBox::information(this, "Member Help", "Sign in using your login, if any help is needed regarding information on account inquire the admin. Inside panel various options such as logging hours appears");
}
