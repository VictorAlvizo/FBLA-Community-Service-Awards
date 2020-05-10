#include "adminpanel.h"
#include "ui_adminpanel.h"
#include "mainwindow.h"

AdminPanel::AdminPanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);

    //Set up window, set image and connect buttons
    this->setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(QSize(750, 500));
    this->setWindowTitle("Admin Panel");

    QPixmap logoImage(":/images/images/Logo.png");
    QPixmap iconImage(":/images/images/LogoTitleIcon.png");

    ui->logoImage->setPixmap(logoImage.scaled(ui->logoImage->width(), ui->logoImage->height(), Qt::KeepAspectRatio));
    this->setWindowIcon(iconImage);

    //Connecting buttons
    connect(ui->logoutButton, SIGNAL(released()), this, SLOT(LogoutButton()));
    connect(ui->registerButton, SIGNAL(released()), this, SLOT(RegisterButton()));

    connect(ui->eventButton, SIGNAL(released()), this, SLOT(EventButton()));
    connect(ui->editButton, SIGNAL(released()), this, SLOT(EditButton()));

    connect(ui->reportButton, SIGNAL(released()), this, SLOT(ReportButton()));

    connect(ui->searchBox, SIGNAL(textEdited(QString)), this, SLOT(SearchMember(QString)));

    connect(ui->backupButton, SIGNAL(released()), this, SLOT(BackupButton()));
    connect(ui->retriveButton, SIGNAL(released()), this, SLOT(RetriveButton()));
    connect(ui->exportButton, SIGNAL(released()), this, SLOT(ExportButton()));

    connect(ui->settingButton, SIGNAL(released()), this, SLOT(SettingButton()));

    //Connecting Drop down member when clicked
    connect(ui->studentDropDown, SIGNAL(activated(int)), this, SLOT(ItemClicked(int)));

    GetMembers();
    UpdateList();
}

AdminPanel::~AdminPanel()
{
    delete ui;
}

void AdminPanel::GetMembers(){
    m_Members->clear();
    *m_Members = FileReader::ReadMembers("info/memberList.txt");

    if(m_Members->isEmpty()){
        QMessageBox::critical(this, "Error Reading File", "An error occured trying to read member file, possibility of no members");
    }
}

void AdminPanel::UpdateList(){
    //Reset labels
    ui->nameOutput->setText("");
    ui->userOutput->setText("");
    ui->passwordOutput->setText("");
    ui->gradeOutput->setText("");
    ui->hoursOutput->setText("");
    ui->idOutput->setText("");
    ui->studentDropDown->clear();
    ui->searchBox->clear();

    memberIndex = -1; //Reset anytime drop down is updated

    for(Member member : *m_Members){
        QString fullName = member.m_FirstName + " " + member.m_LastName;
        ui->studentDropDown->addItem(fullName, QVariant(member.m_Username)); //Add text but also data, used to identify
    }
}

void AdminPanel::LogoutButton(){
    ui->searchBox->releaseKeyboard(); //Release from keyboard grab so other widgets can use the keyboard
    
    this->close();
    MainWindow * homeWindow = new MainWindow();
    homeWindow->show();
}

void AdminPanel::RegisterButton(){
    ui->searchBox->releaseKeyboard();
    
    MemberReg * regWindow = new MemberReg();
    regWindow->GiveMembers(*m_Members);
    regWindow->exec();

    //Reset list after in case file was changed
    GetMembers();
    UpdateList();
}

void AdminPanel::EventButton(){
    ui->searchBox->releaseKeyboard();
    
    if(memberIndex == -1){
        QMessageBox::warning(this, "Need Member", "A member must be selected to view events");
        return;
    }

    AdminEvent * eventWindow = new AdminEvent();
    eventWindow->ReceiveMember(memberIndex, *m_Members);
    eventWindow->exec();

    //Reset list after in case file was changed
    GetMembers();
    UpdateList();
}

void AdminPanel::EditButton(){
    ui->searchBox->releaseKeyboard();
    
    if(memberIndex == -1){
        QMessageBox::warning(this, "Need Member", "A member must be selected to edit their information");
        return;
    }

   memberEdit * memEdit = new memberEdit();
   memEdit->ReceiveInformation(*m_Members, memberIndex);
   memEdit->exec();

   GetMembers();
   UpdateList();
}

void AdminPanel::SearchMember(QString text){
    ui->nameOutput->setText(""); //Clear Everything
    ui->userOutput->setText("");
    ui->passwordOutput->setText("");
    ui->gradeOutput->setText("");
    ui->hoursOutput->setText("");
    ui->idOutput->setText("");
    ui->studentDropDown->clear();

    memberIndex = -1; //Reset after the drop down is updated

    if(text.isEmpty()){ //Search is empty put in everyone
        UpdateList();
        return;
    }

    QRegExp onlyNums("\\d*");
    if(onlyNums.exactMatch(text) && text.toInt() >= 1000){ //If search text only contains numbers look for ID match
        //Works like magic! Example: 5498 modifer = 5000, do 5498 - 5000 = 498 now + 4000 = 4498. Works at N(1)
        int fullNumber = text.toInt();
        int modifer = text.remove(1, text.length()).toInt() * 1000;
        int index = (fullNumber - modifer) + (modifer - 1000);

        if(index < m_Members->size()){ //Want to avoid an out of index exception if wanted ID goes beyond avaliable
            QString fullName = m_Members->at(index).m_FirstName + " " + m_Members->at(index).m_LastName;
            ui->studentDropDown->addItem(fullName, QVariant(m_Members->at(index).m_Username));
        }
    }else{
        QString fullName = "";

        for(Member member : *m_Members){
            fullName = member.m_FirstName + " " + member.m_LastName;

            if(fullName.contains(text, Qt::CaseInsensitive)){ //Add it to valid list
                ui->studentDropDown->addItem(fullName, QVariant(member.m_Username));
            }
        }

        if(ui->studentDropDown->count() != 0){ //Dropdown is not empty
            ui->studentDropDown->showPopup();
        }else{
            ui->studentDropDown->hidePopup();
        }
    }

    ui->searchBox->grabKeyboard(); //Give the searchbox the keyboard focus back
}

void AdminPanel::ItemClicked(int slotIndex){
    QVariant data = ui->studentDropDown->itemData(slotIndex); //Get data inside (username) to then look for mem index

    for(int i = 0; i < m_Members->size(); i++){ //For loop to find data
        if(m_Members->at(i).m_Username == data){
            memberIndex = i;
            break;
        }
    }

    //When item clicked make the label display their information
    ui->nameOutput->setText(m_Members->at(memberIndex).m_FirstName + " " + m_Members->at(memberIndex).m_LastName);
    ui->userOutput->setText(m_Members->at(memberIndex).m_Username);
    ui->passwordOutput->setText(m_Members->at(memberIndex).m_Password);
    ui->gradeOutput->setText(m_Members->at(memberIndex).m_Grade);
    ui->idOutput->setText(QString::number(m_Members->at(memberIndex).m_ID));

    int hours = 0;

    //Count their total hours by adding up all the event hour(s)
    for(Event event : m_Members->at(memberIndex).m_Events){
        hours += event.m_Hours;
    }

    ui->hoursOutput->setText(QString::number(hours));
}

void AdminPanel::ReportButton(){
    if(m_Members->isEmpty()){
        QMessageBox::warning(this, "No Members", "There are no members, reports unavailable");
        return;
    }

    Report * dataReport = new Report();
    dataReport->RecieveMembers(*m_Members);
    dataReport->exec();
}

void AdminPanel::BackupButton(){
    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Save New Backup?", "Are you sure you want to rewrite the back file?",
                                         QMessageBox::Yes | QMessageBox::No);

    if(confirmation == QMessageBox::No){
        return;
    }

    if(!FileReader::WriteMembers(*m_Members, "info/BackupFile.txt")){
        QMessageBox::critical(this, "Error Writing Backup File", "An error occured while trying to write to file.");
    }else{
        QMessageBox::information(this, "Backup Saved", "Current information has been stored");
    }
}

void AdminPanel::RetriveButton(){
    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Restore Backup?", "Are you sure you want to retrive the backup file?",
                                         QMessageBox::Yes | QMessageBox::No);

    if(confirmation == QMessageBox::No){
        return;
    }

   QVector<Member> testMem = FileReader::ReadMembers("info/BackupFile.txt"); //Check if backup is empyy
    if(testMem.isEmpty()){
        QMessageBox::critical(this, "Error Reading File", "An error occured reading backup, backup may not exist or it's empty");
        return;
    }

    m_Members->clear();
    *m_Members = testMem;

    QMessageBox::information(this, "Backup Restored", "Backup information has been restored");

    //Now update non-backup file with retrived information
    if(!FileReader::WriteMembers(*m_Members, "info/memberList.txt")){
        QMessageBox::critical(this, "Error Writing Member File", "An error occured while trying to write to file.");
    }

    UpdateList();
}

void AdminPanel::ExportButton(){
    //Save as a CSV File
    QString saveLocation = QFileDialog::getSaveFileName(this, "Choose Save Location", tr("Data.csv"), tr("CSV File (*.csv)"));
    QFile writeCSV(saveLocation);

    if(!writeCSV.open(QIODevice::WriteOnly | QIODevice::Text)){
            writeCSV.close();
            QMessageBox::critical(this, "Unable to Export Data", "An error occured while trying to export data");
            return;
    }

    QTextStream out(&writeCSV);

    out << "Name,Username,Password,Grade,ID Number,,Event Name,Category,Date,Hour(s)"; //Write table header

    //Loop through all events and members, write their information
    for(Member member : *m_Members){
        out << "\n" << member.m_FirstName + " " + member.m_LastName << ","
            << member.m_Username << "," << member.m_Password << "," << member.m_Grade
            << "," << member.m_ID << ",,";

        for(Event event : member.m_Events){
            out << event.m_EventName << "," << event.m_Category << ","
                << event.m_Date << "," << QString::number(event.m_Hours);

            out << "\n" << ",,,,,,"; //6 commas to put into wanted row (check file for reference)
        }
    }

    writeCSV.close();
    QMessageBox::information(this, saveLocation, "Member data has been saved at " + saveLocation);
}

void AdminPanel::SettingButton(){
    AdminSetting * settingsWindow = new AdminSetting();
    settingsWindow->exec();
}
