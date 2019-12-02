#ifndef EVENTVIEW_H
#define EVENTVIEW_H

#include <QDialog>
#include "event.h"

namespace Ui {
class EventView;
}

class EventView : public QDialog
{
    Q_OBJECT

public:
    explicit EventView(QWidget *parent = nullptr);
    ~EventView();

    void RecieveEvent(Event event);

private:
    Ui::EventView *ui;
};

#endif // EVENTVIEW_H
