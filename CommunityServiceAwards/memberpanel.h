#ifndef MEMBERPANEL_H
#define MEMBERPANEL_H

#include <QDialog>
#include <QPixmap>
#include <QListWidget>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include "eventview.h"
#include "loghours.h"
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

    void FillList();

    void RefreshList();

    Member m_Member;
    int m_MemberIndex;

    int m_Hours;

private slots:
    void EventClicked(QListWidgetItem * item);

    void LogButton();
    void PrintButton();
    void ExitButton();
};

#endif // MEMBERPANEL_H
