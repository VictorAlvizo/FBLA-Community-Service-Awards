#include "report.h"
#include "ui_report.h"

Report::Report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Report)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowTitle("Report Panel");

    m_CentralSeries = new QPieSeries();
    m_CentralView = new QChartView();

    m_PieSeries = new QPieSeries();
    m_PieView = new QChartView();

    connect(ui->yearDropDown, SIGNAL(currentIndexChanged(int)), this, SLOT(YearSelected(int)));

    connect(m_CentralSeries, SIGNAL(clicked(QPieSlice *)), this, SLOT(ClickedCentral(QPieSlice *)));
    connect(m_PieSeries, SIGNAL(clicked(QPieSlice *)), this, SLOT(ClickedSlice(QPieSlice *)));

    connect(ui->darkBox, SIGNAL(clicked(bool)), this, SLOT(DarkMode(bool)));
}

Report::~Report()
{
    delete ui;
}

void Report::RecieveMembers(QVector<Member> memberList){
    m_Members = memberList;

    QVector<int> foundYears;
    int eventYear = 0;
    int totalHours = 0;

    for(Member member : m_Members){
        for(Event event : member.m_Events){
            eventYear = QDate::fromString(event.m_Date, "MM/dd/yyyy").year();
            totalHours += event.m_Hours;

            if(!foundYears.contains(eventYear)){
                foundYears.push_back(eventYear);
            }
        }
    }

    std::sort(foundYears.begin(), foundYears.end());

    for(int year : foundYears){
        ui->yearDropDown->addItem(QString::number(year));
    }

    ui->hourTotal->setText("Total Hour(s): " + QString::number(totalHours));

    MakePie();
}

void Report::YearInfo(int year){
    QMap<QString, int> yearInfo;

    QString fullName;
    int eventYear;

    //For information labels
    int yearHours = 0;
    QString highestName, lowestName;
    int highestHour = 0, lowestHour = 1000, currentHour = -1; //Chance of someone having 1000+ hours in 1 year unlikely

    //yearInfo will store the member and their total hours for year
    for(Member member : m_Members){
        fullName = member.m_FirstName + " " + member.m_LastName;

        for(Event event : member.m_Events){
            eventYear = QDate::fromString(event.m_Date, "MM/dd/yyyy").year();

            if(eventYear == year){
                yearInfo[fullName] += event.m_Hours;
                currentHour += event.m_Hours;
                yearHours += event.m_Hours;
            }
        }

        //For information label to show what member has the highest/lowest hours for that year
        if(currentHour > highestHour && currentHour != -1){ //-1 is needed to identify if the member had any events that year
            highestHour = currentHour;
            highestName = member.m_FirstName + " " + member.m_LastName;
        }

        if(currentHour < lowestHour && currentHour != -1){
            lowestHour = currentHour;
            lowestName = member.m_FirstName + " " + member.m_LastName;
        }

        currentHour = -1;
    }

    ui->hourYearTotal->setText("Total Hour(s) in " + ui->yearDropDown->currentText() + ": " + QString::number(yearHours));
    ui->mostHoursLabel->setText("Most Hour(s) in " + ui->yearDropDown->currentText() + ": " + highestName);
    ui->leastHoursLabel->setText("Least Hour(s) in " + ui->yearDropDown->currentText() + ": " + lowestName);

    UpdateBar(yearInfo);
}

void Report::UpdateBar(QMap<QString, int> yearInfo){
    m_CentralSeries->clear();
    //m_CentralSeries = new QPieSeries();

    QMapIterator<QString, int> i(yearInfo);
    while (i.hasNext()) {
        i.next(); //Must go to next before anything or out of index error occurs
        m_CentralSeries->append(i.key(), i.value());
    }

    QChart * pieChart = new QChart();
    pieChart->addSeries(m_CentralSeries);
    pieChart->setAnimationOptions(QChart::AllAnimations);
    pieChart->setTitle("Member(s) Hour(s) for " + ui->yearDropDown->currentText());

    if(ui->darkBox->isChecked()){
        pieChart->setTheme(QChart::ChartThemeBlueCerulean);
    }else{
        pieChart->setTheme(QChart::ChartThemeQt);
    }

    ui->centralPie->removeWidget(m_CentralView);

    m_CentralView = new QChartView(pieChart, this);
    m_CentralView->setRenderHint(QPainter::Antialiasing);
    ui->centralPie->addWidget(m_CentralView);
}

void Report::MakePie(){
    QMap<QString, int> memberInfo; //Stores member name and total hours
    QString fullName;

    //For each individual member, get their total hours
    for(Member member : m_Members){
        fullName = member.m_FirstName + " " + member.m_LastName;

        for(Event event : member.m_Events){
            memberInfo[fullName] += event.m_Hours;
        }
    }

    QMapIterator<QString, int> i(memberInfo);
    while (i.hasNext()) {
        i.next(); //Must go to next before anything or out of index error occurs
        m_PieSeries->append(i.key(), i.value());
    }

    QChart * pieChart = new QChart();
    pieChart->addSeries(m_PieSeries);
    pieChart->setAnimationOptions(QChart::AllAnimations);
    pieChart->setTitle("Members and Hours");

    m_PieView = new QChartView(pieChart, this);
    m_PieView->setRenderHint(QPainter::Antialiasing);
    ui->piechart->addWidget(m_PieView);
}

void Report::YearSelected(int yearIndex){
    YearInfo(ui->yearDropDown->itemText(yearIndex).toInt());
}

void Report::ClickedCentral(QPieSlice * slice){
    for(QPieSlice * checkSlice : m_CentralSeries->slices()){
        if(checkSlice->isExploded()){
            checkSlice->setLabel(checkSlice->label().remove((checkSlice->label().indexOf("|") -1), checkSlice->label().size()));
            checkSlice->setExploded(false);
            checkSlice->setLabelVisible(false);
        }
    }

    slice->setExploded(true);

    slice->setLabel(slice->label() + " | " + QString::number(slice->value()) + " hour(s)");
    slice->setLabelVisible(true);
}

void Report::ClickedSlice(QPieSlice * slice){
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

void Report::DarkMode(bool mode){
    if(mode){
        m_CentralView->chart()->setTheme(QChart::ChartThemeBlueCerulean);
        m_PieView->chart()->setTheme(QChart::ChartThemeDark);
    }else{
        m_CentralView->chart()->setTheme(QChart::ChartThemeQt);
        m_PieView->chart()->setTheme(QChart::ChartThemeLight);
    }
}
