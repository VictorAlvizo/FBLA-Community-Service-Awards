#ifndef ADMINEVENT_H
#define ADMINEVENT_H

#include <QDialog>
#include <QPixmap>
#include <QListWidgetItem>
#include <QVector>
#include "eventedit.h"
#include "member.h"

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

    void RefreshList();

    int m_MemberIndex;

    QVector<Member> m_StoreMembers; //For file writing

private slots:
    void EditButton();
    void RemoveButton();
};

#endif // ADMINEVENT_H
