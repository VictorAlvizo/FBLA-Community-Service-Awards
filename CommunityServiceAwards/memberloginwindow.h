#ifndef MEMBERLOGINWINDOW_H
#define MEMBERLOGINWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include "member.h"
#include "memberpanel.h"

namespace Ui {
class MemberLoginWindow;
}

class MemberLoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MemberLoginWindow(QWidget *parent = nullptr);
    ~MemberLoginWindow();

private:
    Ui::MemberLoginWindow *ui;

private slots:
    void LoginButton();
    void BackButton();
};

#endif // MEMBERLOGINWINDOW_H
