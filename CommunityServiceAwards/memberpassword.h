#ifndef MEMBERPASSWORD_H
#define MEMBERPASSWORD_H

#include <QDialog>

namespace Ui {
class memberPassword;
}

class memberPassword : public QDialog
{
    Q_OBJECT

public:
    explicit memberPassword(QWidget *parent = nullptr);
    ~memberPassword();

private:
    Ui::memberPassword *ui;
};

#endif // MEMBERPASSWORD_H
