#include "memberreport.h"
#include "ui_memberreport.h"

MemberReport::MemberReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberReport)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    m_Series = new QStackedBarSeries();
    m_Active = false;

    m_PieSeries = new QPieSeries();

    m_DataBox = new DataBox(this);
    m_DataBox->hide();

    connect(ui->yearDropDown, SIGNAL(currentIndexChanged(int)), this, SLOT(YearSelected(int)));

    connect(m_Series, SIGNAL(clicked(int, QBarSet *)), this, SLOT(ClickedSet(int, QBarSet *)));
    connect(m_PieSeries, SIGNAL(clicked(QPieSlice *)), this, SLOT(ClickedSlice(QPieSlice *)));

    connect(ui->themeCheck, SIGNAL(clicked(bool)), this, SLOT(DarkMode(bool)));
}

MemberReport::~MemberReport()
{
    delete ui;
}

void MemberReport::RecieveMember(Member member){
    m_Member = member;

    this->setWindowTitle(m_Member.m_FirstName + "'s " + "Report");

    //Insert available years into search dropdown menu
    QVector<int> foundYears;
    int eventYear = 0;
    int totalHours = 0;

    for(Event event : m_Member.m_Events){
        eventYear = QDate::fromString(event.m_Date, "MM/dd/yyyy").year();

        if(!foundYears.contains(eventYear)){
            foundYears.push_back(eventYear);
        }

        totalHours += event.m_Hours;
    }

    //Sort the years
    std::sort(foundYears.begin(), foundYears.end());

    //Now loop through the sorted years and put them in the list in order
    for(int year : foundYears){
        ui->yearDropDown->addItem(QString::number(year));
    }

    ui->totEventLabel->setText("Total Events: " + QString::number(m_Member.m_Events.size()));
    ui->totHoursLabel->setText("Total Hours: " + QString::number(totalHours));

    MakePie();
}

void MemberReport::MakePie(){
    QMap<int, int> yearHours;
    QDate date;

    for(Event event : m_Member.m_Events){
        date = QDate::fromString(event.m_Date, "MM/dd/yyyy");

        yearHours[date.year()] += event.m_Hours;
    }

    QMapIterator<int, int> i(yearHours);
    while (i.hasNext()) {
        i.next(); //Must go to next before anything or out of index error occurs
        m_PieSeries->append(QString::number(i.key()), i.value());
    }

    QChart * pieChart = new QChart();
    pieChart->addSeries(m_PieSeries);
    pieChart->setAnimationOptions(QChart::AllAnimations);
    pieChart->setTitle("Hours By Year");

    m_PieView = new QChartView(pieChart, this);
    m_PieView->setRenderHint(QPainter::Antialiasing);
    ui->pieWidget->addWidget(m_PieView);
}

//Usage explained in MemberReport.h declartion of method
void MemberReport::ParseYearInfo(int year){
    QList<EventTracker> events;
    int totalYHours = 0; //Total hours for that year

    for(int i = 0; i < m_Member.m_Events.size(); i++){
        QDate date = QDate::fromString(m_Member.m_Events[i].m_Date, "MM/dd/yyyy");

        if(year == date.year()){
            events.push_back({m_Member.m_Events[i], i});
            totalYHours += m_Member.m_Events[i].m_Hours;
        }
    }

    ui->eventYearHour->setText("Events in " + QString::number(year) + ": " + QString::number(events.size()));
    ui->eventYearLabel->setText("Hour(s) in " + QString::number(year) + ": " + QString::number(totalYHours));

    UpdateChart(events);
}

void MemberReport::UpdateChart(QList<EventTracker> events){
    QBarSet * tempSet;
    QList<QBarSet *> sets;

    QDate date;

    for(EventTracker track : events){
        //Reset tempSet to put in new info and index
        tempSet = new QBarSet(track.m_Event.m_EventName + "(" + QString::number(track.m_EventIndex) + ")");
        date = QDate::fromString(track.m_Event.m_Date, "MM/dd/yyyy");

        //For some reason, the QBarSet libary does not allow you to insert a value at an index (month with hour)
        //and make the rest = 0. Making me having to do this loop >:(
        for(int i = 0; i < 12; i++){
            if(i + 1 == date.month()){ //i+1 to put in in the correct month
                tempSet->append(track.m_Event.m_Hours);
            }else{
                tempSet->append(0);
            }
        }

        sets.push_back(tempSet);
    }

    m_Series->clear();
    m_Series->append(sets);

    QChart * chart = new QChart();
    chart->addSeries(m_Series);
    chart->setTitle(m_Member.m_FirstName + "'s " + ui->yearDropDown->currentText() + " Event Report");
    chart->setAnimationOptions(QChart::AllAnimations);

    if(ui->themeCheck->isChecked()){
        chart->setTheme(QChart::ChartThemeDark);
    }

    QStringList months;
    months << "January" << "February" << "March" << "April" << "May" << "June" << "July" << "August" << "September"
           << "October" << "November" << "December";

    QBarCategoryAxis * axisX = new QBarCategoryAxis();
    axisX->append(months);
    chart->addAxis(axisX, Qt::AlignBottom);
    m_Series->attachAxis(axisX);
    QValueAxis *axisY = new QValueAxis();
    chart->addAxis(axisY, Qt::AlignLeft);
    m_Series->attachAxis(axisY);

    ui->chartWidget->removeWidget(m_ChartView);

    m_ChartView = new QChartView(chart, this);
    m_ChartView->setRenderHint(QPainter::Antialiasing);
    ui->chartWidget->addWidget(m_ChartView);
}

void MemberReport::YearSelected(int yearIndex){
    ParseYearInfo(ui->yearDropDown->itemText(yearIndex).toInt()); //Dropdown text is the year
}

void MemberReport::ClickedSlice(QPieSlice * slice){
    //If something is already exploded put it back to normal
    for(QPieSlice * checkSlice : m_PieSeries->slices()){
        if(checkSlice->isExploded()){
            //I know it's long but this is what it does,
            //Take John Smith | 3 Hour(s), it removes starting from the index of '|' - 1 (to remove space as well) to end
            checkSlice->setLabel(checkSlice->label().remove((checkSlice->label().indexOf("|") -1), checkSlice->label().size()));
            checkSlice->setExploded(false);
            checkSlice->setLabelVisible(false);
        }
    }

    slice->setExploded(true);

    slice->setLabel(slice->label() + " | " + QString::number(slice->value()) + " hour(s)");
    slice->setLabelVisible(true);
}

void MemberReport::ClickedSet(int index, QBarSet * set){
    int eventIndex = set->label().remove(QRegExp("[\\D]")).toInt(); //Remove any non-intergers to get event index
    m_Active = !m_Active;

    if(m_Active){
        m_DataBox->RecieveEvent(m_Member.m_Events[eventIndex]);

        m_DataBox->move(QCursor::pos());
        m_DataBox->show();
        m_DataBox->raise();
    }else{
        m_DataBox->hide();
    }
}

void MemberReport::DarkMode(bool mode){
    if(mode){
        m_ChartView->chart()->setTheme(QChart::ChartThemeDark);
        m_PieView->chart()->setTheme(QChart::ChartThemeDark);
    }else{
        m_ChartView->chart()->setTheme(QChart::ChartThemeLight);
        m_PieView->chart()->setTheme(QChart::ChartThemeLight);
    }
}
