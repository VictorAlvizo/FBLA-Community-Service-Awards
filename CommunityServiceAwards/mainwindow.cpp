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

    connect(ui->adminButton, SIGNAL(released()), this, SLOT(AdminButtonLogin()));
    connect(ui->memberLogin, SIGNAL(released()), this, SLOT(MemberButtonLogin()));
    connect(ui->helpButton, SIGNAL(released()), this, SLOT(HelpButton()));

    //Connecting all the buttons and Actions to their dedicated methods
    connect(ui->actionMission, SIGNAL(triggered()), this, SLOT(ActMission()));
    connect(ui->actionQT, SIGNAL(triggered()), this, SLOT(ActQT()));
    connect(ui->actionDeveloper, SIGNAL(triggered()), this, SLOT(ActDev()));
    connect(ui->actionGithub, SIGNAL(triggered()), this, SLOT(ActGithub()));
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

void MainWindow::HelpButton(){
    QnAWindow * helpWindow = new QnAWindow();
    helpWindow->exec();
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

void MainWindow::ActGithub(){
    QDesktopServices::openUrl(QUrl("https://github.com/VictorAlvizo/FBLA-Community-Service-Awards"));
}
