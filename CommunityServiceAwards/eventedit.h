#ifndef EVENTEDIT_H
#define EVENTEDIT_H

#include <QDialog>
#include <QVector>
#include <QMessageBox>
#include <QPixmap>
#include "member.h"
#include "filereader.h"

namespace Ui {
class EventEdit;
}

class EventEdit : public QDialog
{
    Q_OBJECT

public:
    explicit EventEdit(QWidget *parent = nullptr);
    ~EventEdit();

    void ReceiveInformation(int memberIndex, int eventIndex, QVector<Member> memberList);

private:
    Ui::EventEdit * ui;

    void SaveInformation();

    bool ValidInformation();

    int m_MemberIndex;
    int m_EventIndex;

    QVector<Member> m_StoreMembers;

private slots:
    void DateButton();
    void GetDate(QString date);
    void SubmitButton();
};

#endif // EVENTEDIT_H
