#ifndef MEMBEREDIT_H
#define MEMBEREDIT_H

#include <QDialog>
#include <QPixmap>
#include <QVector>
#include <QMessageBox>
#include "member.h"
#include "filereader.h"

namespace Ui {
class memberEdit;
}

class memberEdit : public QDialog
{
    Q_OBJECT

public:
    explicit memberEdit(QWidget *parent = nullptr);
    ~memberEdit();

    void ReceiveInformation(QVector<Member> members, int memberIndex);

private:
    Ui::memberEdit *ui;

    void SaveInformation();

    bool isValid();

    int m_MemberIndex;

    QVector<Member> m_Members;

private slots:
    void SubmitButton();
    void RemoveButton();
};

#endif // MEMBEREDIT_H
