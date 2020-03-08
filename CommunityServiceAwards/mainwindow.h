#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>
#include "adminloginwindow.h"
#include "memberloginwindow.h"
#include "qnawindow.h"

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
    void HelpButton();

    void ActMission();
    void ActQT();
    void ActDev();
    void ActGithub();
};

#endif // MAINWINDOW_H
