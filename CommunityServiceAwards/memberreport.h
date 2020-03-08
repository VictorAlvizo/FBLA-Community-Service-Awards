#ifndef MEMBERREPORT_H
#define MEMBERREPORT_H

#include <QDialog>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QStackedBarSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QCategoryAxis>
#include <QPieSeries>
#include <QPieSlice>

#include <QVector>
#include <QMap>
#include <QList>
#include "member.h"
#include "databox.h"

using namespace QtCharts;

//Used to store the event and its index for the chart tool
struct EventTracker{
    Event m_Event;
    int m_EventIndex;
};

namespace Ui {
class MemberReport;
}

class MemberReport : public QDialog
{
    Q_OBJECT

public:
    explicit MemberReport(QWidget *parent = nullptr);
    ~MemberReport();

    void RecieveMember(Member member);

private:
    Ui::MemberReport *ui;

    void MakePie(); //Make pie chart

    void ParseYearInfo(int year); //Will send information to UpdateChart() with given year info
    void UpdateChart(QList<EventTracker> events);

    QStackedBarSeries * m_Series;
    QChartView * m_ChartView;
    bool m_Active; //Used for toggling the databox

    QChartView * m_PieView;
    QPieSeries * m_PieSeries;

    DataBox * m_DataBox;

    Member m_Member;

private slots:
    void YearSelected(int yearText);

    void ClickedSet(int index, QBarSet * barset);
    void ClickedSlice(QPieSlice * slice);

    void DarkMode(bool mode);
};

#endif // MEMBERREPORT_H
