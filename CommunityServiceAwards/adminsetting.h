#ifndef ADMINSETTING_H
#define ADMINSETTING_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>

namespace Ui {
class AdminSetting;
}

class AdminSetting : public QDialog
{
    Q_OBJECT

public:
    explicit AdminSetting(QWidget *parent = nullptr);
    ~AdminSetting();

private:
    Ui::AdminSetting *ui;

    void GetInformation();

    bool isValid();

    QString m_OldPassword;

private slots:
    void SubmitButton();

    void PasswordShow(bool state);
};

#endif // ADMINSETTING_H
