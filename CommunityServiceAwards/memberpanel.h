#ifndef MEMBERPANEL_H
#define MEMBERPANEL_H

#include <QDialog>
#include <QPixmap>
#include <QListWidget>
#include <QListWidgetItem>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include "eventview.h"
#include "loghours.h"
#include "membersetting.h"
#include "member.h"

namespace Ui {
class MemberPanel;
}

class MemberPanel : public QDialog
{
    Q_OBJECT

public:
    explicit MemberPanel(QWidget *parent = nullptr);
    ~MemberPanel();

    void ReceiveMember(Member newMember, int memIndex);

private:
    Ui::MemberPanel *ui;

    void SortDates();

    void RefreshList();

    QListWidgetItem* MonthItem(const QDate &date);
    QListWidgetItem* WeekItem(const QDate &date);

    Member m_Member;
    int m_MemberIndex;
    int m_Hours;

private slots:
    void EventClicked(QListWidgetItem * item);

    void LogButton();
    void SettingsButton();
    void ExitButton();
};

#endif // MEMBERPANEL_H
