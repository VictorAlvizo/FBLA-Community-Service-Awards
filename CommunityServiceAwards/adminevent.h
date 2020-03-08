#ifndef ADMINEVENT_H
#define ADMINEVENT_H

#include <QDialog>
#include <QPixmap>
#include <QListWidgetItem>
#include <QVector>
#include <QDate>
#include "eventedit.h"
#include "memberreport.h"
#include "member.h"
#include "filereader.h"

struct EventSearch{ //Tried using a QMap, didn't work. made a struct to solve the problem
    Event m_Event;
    int m_Index;
};

namespace Ui {
class AdminEvent;
}

class AdminEvent : public QDialog
{
    Q_OBJECT

public:
    explicit AdminEvent(QWidget *parent = nullptr);
    ~AdminEvent();

    void ReceiveMember(int memberIndex, QVector<Member> memberList);

private:
    Ui::AdminEvent *ui;

    void UpdateList();

    void FilterDates(bool oldtoNew); //For the filter options regarding dates
    void FilterHours(bool filterSetting);

    QListWidgetItem* MonthItem(const QDate &date);
    QListWidgetItem* WeekItem(const QDate &date);

    int m_MemberIndex;
    int m_SelectedIndex; //Used to keep track of what item is selected, -1 means nothing is selected

    QVector<Member> m_StoreMembers; //For file writing

private slots:
    void EventClicked(QListWidgetItem * item);

    void SearchButton();
    void FilterSelected(int filterIndex);

    void EditButton();
    void ReportButton();
    void RemoveButton();
};

#endif // ADMINEVENT_H
