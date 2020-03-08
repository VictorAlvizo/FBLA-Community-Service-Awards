#include "memberpanel.h"
#include "ui_memberpanel.h"
#include "mainwindow.h"

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
    connect(ui->settingsButton, SIGNAL(released()), this, SLOT(SettingsButton()));
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

    SortDates();
}

void MemberPanel::SortDates(){
    QList<QDate> dateList;

    for(Event event : m_Member.m_Events){ //Store all the dates into dateList
        QDate date = QDate::fromString(event.m_Date, "MM/dd/yyyy");
        dateList.push_back(date);
    }

    std::sort(dateList.begin(), dateList.end()); //Sorts list in order, std::sort() is refrenced so list is updated

    QVector<Event> sortedEvents; //Will rewrite member's events
    QString dateString; //Temp string

    for(int i = 0; i < dateList.size(); i++){ //Another for loop to identify events related to sorted dates
        dateString = dateList[i].toString("MM/dd/yyyy");

        for(int j = 0; j < m_Member.m_Events.size(); j++){ //Loop through each event to find key
            if(m_Member.m_Events[j].m_Date == dateString){
                    sortedEvents.push_back(m_Member.m_Events[j]); //Push, will naturally be in sorted order
                    m_Member.m_Events[j].m_Date = ""; //Incase of events with the same date, don't rewrite data
                    break;
                }
            }
        }

       std::reverse(sortedEvents.begin(), sortedEvents.end()); //Sort from neweset to oldest

       m_Member.m_Events = sortedEvents; //Set the member's data = to the sorted event list
       RefreshList();
}

void MemberPanel::RefreshList(){
    ui->eventList->clear();
    QDate date;
    QDate lastDate; //Used so similar date headers aren't repeated
    bool newMonth = false; //Used due to if the current month's week is the same as the last months last week, won't print

    for(int i = 0; i < m_Member.m_Events.size(); i++){
        date = QDate::fromString(m_Member.m_Events[i].m_Date, "MM/dd/yyyy");

        if(i != 0){ //Don't want to get information from index -1! Protect against that
             lastDate = QDate::fromString(m_Member.m_Events[i - 1].m_Date, "MM/dd/yyyy");
        }

        if(date.month() != lastDate.month() || date.year() != lastDate.year()){
            ui->eventList->addItem(MonthItem(date));
            newMonth = true;
        }

        if((date.day() / 7) + 1 != (lastDate.day() / 7) + 1 || newMonth){
            ui->eventList->addItem(WeekItem(date));
            newMonth = false; //No longer a new month set to false don't make exception
        }

        QListWidgetItem * eventLabel = new QListWidgetItem();
        eventLabel->setText(m_Member.m_Events[i].m_EventName.replace("_", " ") + " | "
                            + m_Member.m_Events[i].m_Category + " | "
                            + QString::number(m_Member.m_Events[i].m_Hours) + " hour(s) | "
                            + m_Member.m_Events[i].m_Date);

        eventLabel->setData(Qt::UserRole, i); //Send it with it's index
        ui->eventList->addItem(eventLabel);
    }
}

QListWidgetItem* MemberPanel::MonthItem(const QDate &date){
    QListWidgetItem * monthLabel = new QListWidgetItem();
    monthLabel->setData(Qt::UserRole, -1);

    QFont monthFont("Roboto");
    monthFont.setPointSize(12);
    monthFont.setBold(true);

    monthLabel->setText(date.toString("MMMM") + " " + date.toString("yyyy"));
    monthLabel->setFont(monthFont);

    return monthLabel;
}

QListWidgetItem* MemberPanel::WeekItem(const QDate &date){
    QListWidgetItem * weekLabel = new QListWidgetItem();
    weekLabel->setData(Qt::UserRole, -1);

    QFont weekFont("Segoe UI");
    weekFont.setPointSize(10);
    weekFont.setUnderline(true);
    weekFont.setItalic(true);

    int weekStamp = (date.day() / 7) + 1;

    weekLabel->setFont(weekFont);
    weekLabel->setText("Week " + QString::number(weekStamp));

    return weekLabel;
}

void MemberPanel::EventClicked(QListWidgetItem * item){
    int clickedIndex = item->data(Qt::UserRole).toInt();

    if(clickedIndex == -1){
        return;
    }

    EventView * eventView = new EventView();
    eventView->RecieveEvent(m_Member.m_Events[clickedIndex]);
    eventView->exec();
}

void MemberPanel::LogButton(){
    LogHours * logWindow = new LogHours(this);
    logWindow->RecieveMember(m_MemberIndex);
    logWindow->exec();
}

void MemberPanel::SettingsButton(){
    MemberSetting * memSetting = new MemberSetting();
    memSetting->RecieveInformation(m_MemberIndex);
    memSetting->exec();
}

void MemberPanel::ExitButton(){
    this->close();
    MainWindow * homeWindow = new MainWindow();
    homeWindow->show();
}
