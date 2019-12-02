#include "memberpanel.h"
#include "ui_memberpanel.h"
#include "mainwindow.h"
#include <QDebug>

MemberPanel::MemberPanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberPanel)
{
    ui->setupUi(this);

    //Set up window
    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(750, 500));
    this->setWindowTitle("Member Panel");

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    ui->logoLabel->setPixmap(logoImage.scaled(ui->logoLabel->width(), ui->logoLabel->height(), Qt::KeepAspectRatio));
    this->setWindowIcon(iconImage);

    connect(ui->eventList, SIGNAL(itemDoubleClicked(QListWidgetItem *)), this, SLOT(EventClicked(QListWidgetItem *)));

    connect(ui->logButton, SIGNAL(released()), this, SLOT(LogButton()));
    connect(ui->printButton, SIGNAL(released()), this, SLOT(PrintButton()));
    connect(ui->exitButton, SIGNAL(released()), this, SLOT(ExitButton()));
}

MemberPanel::~MemberPanel()
{
    delete ui;
}


void MemberPanel::ReceiveMember(Member newMember, int memIndex){
    m_Member = newMember;
    m_MemberIndex = memIndex;

    ui->introLabel->setText(m_Member.m_FirstName + "'s " + "Dashboard");

    m_Hours = 0;

    //Get total hours to display
    for(int i = 0; i < m_Member.m_Events.size(); i++){
        m_Hours += m_Member.m_Events.at(i).m_Hours;
    }

    ui->hourLabel->setText(QString::number(m_Hours));

    RefreshList();
}

void MemberPanel::RefreshList(){
    ui->eventList->clear();

    for(Event event : m_Member.m_Events){
        ui->eventList->addItem(event.m_EventName + " " + QString::number(event.m_Hours));
    }
}

void MemberPanel::EventClicked(QListWidgetItem * item){
    EventView * eventView = new EventView();
    eventView->RecieveEvent(m_Member.m_Events.at(ui->eventList->currentRow()));
    eventView->exec();
}

void MemberPanel::LogButton(){
    LogHours * logWindow = new LogHours(this);
    logWindow->RecieveMember(m_MemberIndex);
    logWindow->exec();

    RefreshList();
}

void MemberPanel::PrintButton(){
    QPrinter printer;
    QPrintDialog printDialog(&printer, this);

    if(printDialog.exec() == QDialog::Rejected){
        QMessageBox::critical(this, "Printer Rejected", "Printer chosen has been rejected");
        return;
    }

    //String to print out in file
    QString printText = "Member Name: " + m_Member.m_FirstName + " " + m_Member.m_LastName + "\n"
                        + "Member Grade: " + m_Member.m_Grade + "\n"
                        + "Member Hours: " + QString::number(m_Hours)
                        + "\n----------------- EVENTS -----------------\n";

    //Loop through each event and add it to the print string as well
    for(Event event : m_Member.m_Events){
        printText += "Event Name: " + event.m_EventName + "\n" + "Event Category: " + event.m_Category + "\n"
                     + "Event Date: " + event.m_Date + "\n" + "Event Hour(s): " + QString::number(event.m_Hours)
                     + "\n--------------------------\n";
    }

    QPainter textPainter;
    textPainter.begin(&printer);

    textPainter.drawText(100, 100, 2000, 2000, Qt::AlignLeft|Qt::AlignTop, printText);

    textPainter.end();

    QMessageBox::information(this, "File Printed", "Member information has been printed");
}

void MemberPanel::ExitButton(){
    this->close();
    MainWindow * homeWindow = new MainWindow();
    homeWindow->show();
}
