#ifndef MEMBERREG_H
#define MEMBERREG_H

#include <QDialog>
#include <QPixmap>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include "member.h"
#include "filereader.h"

namespace Ui {
class MemberReg;
}

class MemberReg : public QDialog
{
    Q_OBJECT

public:
    explicit MemberReg(QWidget *parent = nullptr);
    ~MemberReg();

    void GiveMembers(QVector<Member> members);

private:
    Ui::MemberReg * ui;

    bool isValidInput(const QString &firstName, const QString &lastName, const QString &username, const QString &password);

    QVector<Member> m_MemberList;

private slots:
    void SubmitButton();
    void PasswordBox(bool value);
};

#endif // MEMBERREG_H
