#include "adminevent.h"
#include "ui_adminevent.h"

AdminEvent::AdminEvent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEvent)
{
    ui->setupUi(this);

    //Set up window / connecting buttons
    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //Remove the '?' on the title bar
    this->setFixedSize(QSize(525, 380));

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    this->setWindowIcon(iconImage);

    m_SelectedIndex = -1;

    ui->yearSearch->setValidator(new QIntValidator(0, 9000, this)); //QLineEdit widget to only accept ints (for years)

    connect(ui->eventList, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(EventClicked(QListWidgetItem *)));
    connect(ui->searchButton, SIGNAL(released()), this, SLOT(SearchButton()));

    connect(ui->filterDropdown, SIGNAL(currentIndexChanged(int)), this, SLOT(FilterSelected(int)));

    connect(ui->editButton, SIGNAL(released()), this, SLOT(EditButton()));
    connect(ui->reportButton, SIGNAL(released()), this, SLOT(ReportButton()));
    connect(ui->removeButton, SIGNAL(released()), this, SLOT(RemoveButton()));
}

AdminEvent::~AdminEvent()
{
    delete ui;
}

void AdminEvent::ReceiveMember(int memberIndex, QVector<Member> memberList){
    m_MemberIndex = memberIndex;
    m_StoreMembers = memberList;

    this->setWindowTitle(memberList.at(m_MemberIndex).m_FirstName + "'s " + "Events");

    FilterDates(false); //Update list Newest to oldest
}

void AdminEvent::FilterSelected(int filterIndex){
    switch(filterIndex){
        case 0: //Filter Newest to Oldest
            FilterDates(false);
            break;

        case 1: //Filter Oldest to Newest
            FilterDates(true);
            break;

        case 2: //Filter Hours Greatest to Least
            FilterHours(true);
            break;

        case 3: //Filter Hours Least to Greatest
            FilterHours(false);
            break;

        default:
            break;
    }
}

void AdminEvent::FilterDates(bool oldtoNew){
    QList<QDate> dateList;

    for(Event event : m_StoreMembers[m_MemberIndex].m_Events){ //Loop to push all member's dates onto list
        QDate date = QDate::fromString(event.m_Date, "MM/dd/yyyy");
        dateList.push_back(date);
    }

    std::sort(dateList.begin(), dateList.end()); //Sorts list in order, std::sort() is refrenced so list is updated

    QVector<Event> sortedEvents; //Will rewrite member's events
    QString dateString; //Temp string

    for(int i = 0; i < dateList.size(); i++){ //Another for loop to identify events related to sorted dates
        dateString = dateList[i].toString("MM/dd/yyyy");

        for(int j = 0; j < m_StoreMembers[m_MemberIndex].m_Events.size(); j++){ //Loop through each event to find key
            if(m_StoreMembers[m_MemberIndex].m_Events[j].m_Date == dateString){
                sortedEvents.push_back(m_StoreMembers[m_MemberIndex].m_Events[j]); //Push, will naturally be in sorted order
                m_StoreMembers[m_MemberIndex].m_Events[j].m_Date = ""; //Incase of events with the same date, don't rewrite data
                break;
            }
        }
    }

    if(!oldtoNew){
        std::reverse(sortedEvents.begin(), sortedEvents.end()); //Reverse so it's from greatest to least
    }

    m_StoreMembers[m_MemberIndex].m_Events = sortedEvents; //Set the member's data = to the sorted event list
    UpdateList();
}

void AdminEvent::FilterHours(bool filterSetting){
    QList<int> hourList;

    for(Event event : m_StoreMembers[m_MemberIndex].m_Events){
        hourList.push_back(event.m_Hours);
    }

    std::sort(hourList.begin(), hourList.end()); //Sort list greatest to least
    QVector<Event> sortedEvents;

    for(int i = 0; i < hourList.size(); i++){ //Another for loop to identify the hours with the events
        for(int j = 0; j < m_StoreMembers[m_MemberIndex].m_Events.size(); j++){ //Loop through each event to find key
            if(m_StoreMembers[m_MemberIndex].m_Events[j].m_Hours == hourList[i]){
                sortedEvents.push_back(m_StoreMembers[m_MemberIndex].m_Events[j]); //Push, will naturally be in sorted order
                m_StoreMembers[m_MemberIndex].m_Events[j].m_Hours = -1; //Incase of events with the same hour, don't rewrite
                break;
            }
        }
    }

    if(filterSetting){ //Wants least to greatest hours, reverse list
        std::reverse(sortedEvents.begin(), sortedEvents.end());
    }

    m_StoreMembers[m_MemberIndex].m_Events = sortedEvents; //Set it = to new sorted event list
    UpdateList();
}

void AdminEvent::UpdateList(){
    ui->eventList->clear();
    m_SelectedIndex = -1;

    QDate date;
    QDate lastDate; //Used so similar date headers aren't repeated
    bool newMonth = false; //Used due to if the current month's week is the same as the last months last week, won't print

    for(int i = 0; i < m_StoreMembers[m_MemberIndex].m_Events.size(); i++){
        date = QDate::fromString(m_StoreMembers[m_MemberIndex].m_Events[i].m_Date, "MM/dd/yyyy");

        if(i != 0){ //Don't want to get information from index -1! Protect against that
             lastDate = QDate::fromString(m_StoreMembers[m_MemberIndex].m_Events[i - 1].m_Date, "MM/dd/yyyy");
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
        eventLabel->setText(m_StoreMembers[m_MemberIndex].m_Events[i].m_EventName.replace("_", " ") + " | "
                            + m_StoreMembers[m_MemberIndex].m_Events[i].m_Category + " | "
                            + QString::number(m_StoreMembers[m_MemberIndex].m_Events[i].m_Hours) + " hour(s) | "
                            + m_StoreMembers[m_MemberIndex].m_Events[i].m_Date);

        m_StoreMembers[m_MemberIndex].m_Events[i].m_EventName.replace(" ", "_"); //Needed, caused a bug when writing,
                                                                                 //event name had a space due to ^

        eventLabel->setData(Qt::UserRole, i); //Send it with it's index
        ui->eventList->addItem(eventLabel);
    }
}

QListWidgetItem* AdminEvent::MonthItem(const QDate &date){
    QListWidgetItem * monthLabel = new QListWidgetItem();
    monthLabel->setData(Qt::UserRole, -1);

    QFont monthFont("Roboto");
    monthFont.setPointSize(12);
    monthFont.setBold(true);

    monthLabel->setText(date.toString("MMMM") + " " + date.toString("yyyy"));
    monthLabel->setFont(monthFont);

    return monthLabel;
}

QListWidgetItem* AdminEvent::WeekItem(const QDate &date){
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

void AdminEvent::SearchButton(){
    if(ui->yearSearch->text().isEmpty()){
        QMessageBox::warning(this, "No Year", "Need a year to search for events");
        return;
    }

    ui->eventList->clear();
    m_SelectedIndex = -1;

    bool allWeeks = false;

    int searchMonth = ui->monthSearch->currentIndex() + 1; //Index starts at 0 so + 1 to adjust to month
    int searchWeek = ui->weekSearch->currentIndex() + 1; //Same reason + 1 for the month
    int searchYear = ui->yearSearch->text().toInt();

    if(searchWeek == 6){ //6th option is the "All" option
        allWeeks = true;
    }

    QVector<EventSearch> validEvents; //Need to keep index of the valid events as the index is needed for the dropdown data
    QDate date;

    for(int i = 0; i < m_StoreMembers[m_MemberIndex].m_Events.size(); i++){
        date = QDate::fromString(m_StoreMembers[m_MemberIndex].m_Events[i].m_Date, "MM/dd/yyyy");

        if(allWeeks && date.month() == searchMonth && searchYear == date.year()){ //If the "all" option is selected
            validEvents.push_back(EventSearch{m_StoreMembers[m_MemberIndex].m_Events[i], i});
        }else if(date.month() == searchMonth && searchWeek == ((date.day() / 7) + 1) && searchYear == date.year()){
            validEvents.push_back(EventSearch{m_StoreMembers[m_MemberIndex].m_Events[i], i});
        }
    }

    ui->eventList->addItem(MonthItem(QDate(searchYear, searchMonth, 1)));

    if(!allWeeks){ //If a week is selected show it on list
         ui->eventList->addItem(WeekItem(QDate(searchYear, searchMonth, (searchWeek - 1) * 7))); //Used algebra for that one haha
    }

    for(EventSearch eventInfo : validEvents){
        QListWidgetItem * eventLabel = new QListWidgetItem();
        eventLabel->setText(eventInfo.m_Event.m_EventName.replace("_", " ") + " | "
                            + eventInfo.m_Event.m_Category + " | "
                            + QString::number(eventInfo.m_Event.m_Hours) + " hour(s) | "
                            + eventInfo.m_Event.m_Date);

        eventLabel->setData(Qt::UserRole, eventInfo.m_Index); //Send it with it's index
        ui->eventList->addItem(eventLabel);
    }
}

void AdminEvent::EditButton(){
    if(m_SelectedIndex == -1){
        QMessageBox::warning(this, "Need Event", "An event must be selected to edit its information");
        return;
    }

    this->close(); //Needed as a new admin panel window will open with updated information

    EventEdit * eventEdit = new EventEdit();
    eventEdit->ReceiveInformation(m_MemberIndex, m_SelectedIndex, m_StoreMembers);
    eventEdit->exec();
}

void AdminEvent::ReportButton(){
    if(m_StoreMembers[m_MemberIndex].m_Events.isEmpty()){
        QMessageBox::warning(this, "No Events", "This member does not have any events, reports unavailable");
        return;
    }

    MemberReport * memReport = new MemberReport();
    memReport->RecieveMember(m_StoreMembers[m_MemberIndex]);
    memReport->exec();
}

void AdminEvent::RemoveButton(){
    if(m_SelectedIndex == -1){
        QMessageBox::warning(this, "No Event Selected", "No event has been selected to remove");
        return;
    }

    m_StoreMembers[m_MemberIndex].m_Events.remove(m_SelectedIndex);

    //Remove the event from the member and rewrite the file with the updated list
    if(!FileReader::WriteMembers(m_StoreMembers, "info/memberList.txt")){
        QMessageBox::critical(this, "Error Writing to File", "An error occured trying to write to member file");
        return;
    }else{
        QMessageBox::information(this, "Event Removed", "Selected event has been removed");
    }

    UpdateList();
}

void AdminEvent::EventClicked(QListWidgetItem * item){
    int clickedIndex = item->data(Qt::UserRole).toInt();

    if(clickedIndex == -1){
        return;
    }

    m_SelectedIndex = clickedIndex;
}
