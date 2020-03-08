#include "qnawindow.h"
#include "ui_qnawindow.h"
#include <qdebug.h>

QnAWindow::QnAWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QnAWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowTitle("Help Window");
    this->setFixedSize(QSize(559, 408));

    connect(ui->searchBox, SIGNAL(textEdited(QString)), this, SLOT(SearchChange(QString)));
    connect(ui->backButton, SIGNAL(released()), this, SLOT(BackButton()));

    //The list's items were made in the .ui, need to store them in code
    for(int i = 0; i < ui->helpList->count(); i++){
        m_AllItems.push_back(*ui->helpList->item(i));
    }
}

QnAWindow::~QnAWindow()
{
    delete ui;
}

void QnAWindow::FillList(){
    ui->helpList->clear();

    for(QListWidgetItem item : m_AllItems){
        ui->helpList->addItem(item.text());
    }
}

void QnAWindow::SearchChange(QString search){
    bool sameQuestion = false;
    QString text;

    if(search.isEmpty()){ //Refill list with everything if search is empty
        FillList();
        return;
    }

    ui->helpList->clear();

    for(int i = 0; i < m_AllItems.count(); i++){
        text = m_AllItems[i].text();

        if(text.isEmpty() && sameQuestion){ //If empty, means question block is over, check if block is active
            sameQuestion = false;           //to avoid extra spaces
            ui->helpList->addItem("");
        }

        if((text.contains("Q:") && text.contains(search, Qt::CaseSensitivity::CaseInsensitive)) || sameQuestion){ //If same question also include it for
            ui->helpList->addItem(text);                                    //the question block
            sameQuestion = true;
        }
    }
}

void QnAWindow::BackButton(){
    this->close();
}
