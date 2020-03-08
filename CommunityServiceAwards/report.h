#ifndef REPORT_H
#define REPORT_H

#include <QDialog>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QCategoryAxis>
#include <QPieSeries>
#include <QPieSlice>

#include <QVector>
#include <QMap>
#include "member.h"

namespace Ui {
class Report;
}

class Report : public QDialog
{
    Q_OBJECT

public:
    explicit Report(QWidget *parent = nullptr);
    ~Report();

    void RecieveMembers(QVector<Member> memberList);

private:
    Ui::Report *ui;

    void YearInfo(int year);

    void UpdateBar(QMap<QString, int> yearInfo);
    void MakePie();

    //Main graph showing the hours for a certain year
    QPieSeries * m_CentralSeries;
    QChartView * m_CentralView;

    QPieSeries * m_PieSeries;
    QChartView * m_PieView;

    QVector<Member> m_Members;

private slots:
    void YearSelected(int yearIndex);

    void ClickedCentral(QPieSlice * slice);
    void ClickedSlice(QPieSlice * slice);

    void DarkMode(bool mode);
};

#endif // REPORT_H
