#include "calendarwindow.h"
#include "ui_calendarwindow.h"

CalendarWindow::CalendarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalendarWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(341, 360));
    this->setWindowTitle("Calendar");

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    this->setWindowIcon(iconImage);

    connect(ui->calendar, SIGNAL(selectionChanged()), this, SLOT(DateChange()));
    connect(ui->submitButton, SIGNAL(released()), this, SLOT(SubmitButton()));
}

CalendarWindow::~CalendarWindow()
{
    delete ui;
}

void CalendarWindow::ReceiveDate(QString newDate){ //Some windows may use this feature, start at sent date
    QDate date = QDate::fromString(newDate, "MM/dd/yyyy");
    ui->calendar->setSelectedDate(date);
}

void CalendarWindow::DateChange(){
    emit NewDate(ui->calendar->selectedDate().toString("MM/dd/yyyy")); //Send signal of state change
}

void CalendarWindow::SubmitButton(){
    this->close();
}
