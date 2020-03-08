#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QDialog>
#include <QPixmap>
#include <QVector>
#include <QMessageBox>
#include <QFileDialog>
#include "member.h"
#include "memberreg.h"
#include "adminevent.h"
#include "memberedit.h"
#include "adminsetting.h"
#include "report.h"
#include "filereader.h"

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

    int memberIndex = -1;

    QVector<Member> * m_Members = new QVector<Member>;

private slots:
    void LogoutButton();
    void RegisterButton();

    void EventButton();
    void EditButton();

    void ReportButton();

    void SearchMember(QString text);

    void BackupButton();
    void RetriveButton();
    void ExportButton();

    void SettingButton();

    void ItemClicked(int slotIndex);
};

#endif // ADMINPANEL_H
