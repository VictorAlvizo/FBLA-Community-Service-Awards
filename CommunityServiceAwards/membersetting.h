#ifndef MEMBERSETTING_H
#define MEMBERSETTING_H

#include <QDialog>
#include <QPixmap>
#include <QVector>
#include <QMessageBox>
#include "member.h"
#include "filereader.h"

namespace Ui {
class MemberSetting;
}

class MemberSetting : public QDialog
{
    Q_OBJECT

public:
    explicit MemberSetting(QWidget *parent = nullptr);
    ~MemberSetting();

    void RecieveInformation(int memberIndex);

private:
    Ui::MemberSetting *ui;

    int m_MemberIndex;
    QVector<Member> m_Members;

private slots:
    void PasswordButton();
};

#endif // MEMBERSETTING_H
