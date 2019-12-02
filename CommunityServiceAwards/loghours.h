#ifndef LOGHOURS_H
#define LOGHOURS_H

#include <QDialog>
#include <QPixmap>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include "member.h"

namespace Ui {
class LogHours;
}

class LogHours : public QDialog
{
    Q_OBJECT

public:
    explicit LogHours(QWidget *parent = nullptr);
    ~LogHours();

    void RecieveMember(int memberIndex);

private:
    Ui::LogHours *ui;

    void FillList();
    void Exit();

    bool isValid();

    int m_MemIndex;
    QVector<Member> m_StoreMembers;

private slots:
    void SubmitButton();
};

#endif // LOGHOURS_H
