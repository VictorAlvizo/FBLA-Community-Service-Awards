#ifndef CALENDARWINDOW_H
#define CALENDARWINDOW_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class CalendarWindow;
}

class CalendarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CalendarWindow(QWidget *parent = nullptr);
    ~CalendarWindow();

    void ReceiveDate(QString newDate);

private:
    Ui::CalendarWindow *ui;

signals:
    void NewDate(QString date);

private slots:
    void DateChange();
    void SubmitButton();
};

#endif // CALENDARWINDOW_H
