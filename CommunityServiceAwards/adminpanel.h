#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QDialog>
#include <QPixmap>
#include <QVector>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include "member.h"
#include "memberreg.h"
#include "adminevent.h"
#include "memberedit.h"
#include "adminsetting.h"

namespace Ui {
class AdminPanel;
}

class AdminPanel : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();

private:
    Ui::AdminPanel * ui;

    void GetMembers();
    void UpdateList();

    QVector<Member> * m_Members = new QVector<Member>;

private slots:
    void LogoutButton();
    void RegisterButton();
    void EventButton();
    void EditButton();
    void SettingButton();

    void ItemClicked(int index);
};

#endif // ADMINPANEL_H
