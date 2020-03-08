#ifndef QNAWINDOW_H
#define QNAWINDOW_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class QnAWindow;
}

class QnAWindow : public QDialog
{
    Q_OBJECT

public:
    explicit QnAWindow(QWidget *parent = nullptr);
    ~QnAWindow();

private:
    Ui::QnAWindow *ui;

    void FillList(); //To fill the entire list

    QList<QListWidgetItem> m_AllItems;

private slots:
    void SearchChange(QString search);

    void BackButton();
};

#endif // QNAWINDOW_H
