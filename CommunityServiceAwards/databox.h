#ifndef DATABOX_H
#define DATABOX_H

#include <QDialog>
#include "event.h"

namespace Ui {
class DataBox;
}

class DataBox : public QDialog
{
    Q_OBJECT

public:
    explicit DataBox(QWidget *parent = nullptr);
    ~DataBox();

    void RecieveEvent(Event event);

private:
    Ui::DataBox *ui;
};

#endif // DATABOX_H
