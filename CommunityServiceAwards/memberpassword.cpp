#include "memberpassword.h"
#include "ui_memberpassword.h"

memberPassword::memberPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberPassword)
{
    ui->setupUi(this);
}

memberPassword::~memberPassword()
{
    delete ui;
}
