#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>
#include "adminloginwindow.h"
#include "memberloginwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow * ui;

private slots:
    void AdminButtonLogin();
    void MemberButtonLogin();

    void ActMission();
    void ActQT();
    void ActDev();
    void ActAdHelp();
    void ActMemHelp();
};

#endif // MAINWINDOW_H
