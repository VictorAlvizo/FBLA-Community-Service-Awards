#ifndef ADMINLOGINWINDOW_H
#define ADMINLOGINWINDOW_H

#include <QDialog>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>
#include "adminpanel.h"

struct LoginInformation{
    QString m_Username;
    QString m_Password;
};

namespace Ui {
class AdminLoginWindow;
}

class AdminLoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLoginWindow(QWidget *parent = nullptr);
    ~AdminLoginWindow();

private:
    Ui::AdminLoginWindow  * ui;

    void EmergencyCreation();

    LoginInformation GetInformation();

private slots:
    void LoginButton();
    void BackButton();
};

#endif // ADMINLOGINWINDOW_H
