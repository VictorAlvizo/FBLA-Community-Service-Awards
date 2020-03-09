#include "filereader.h"

QVector<Member> FileReader::ReadMembers(QString filePath){
    QVector<Member> returnMembers;

    QFile readMember(filePath);

    if(!readMember.open(QIODevice::ReadOnly | QIODevice::Text)){
        readMember.close();
        return returnMembers;
    }

    QTextStream in(&readMember);

    Member * tempMember = new Member();
    QString testString;

    //Gather entire member database from file
    while(!in.atEnd()){
        in >> testString;

        if(testString == "*"){
            Event tempEvent;

            in >> tempEvent.m_Hours >> tempEvent.m_EventName >> tempEvent.m_Category >> tempEvent.m_Date;
            tempMember->m_Events.push_back(tempEvent);
        }else if(testString != "*" && testString != "~"){
            tempMember->m_FirstName = testString;
            in >> tempMember->m_LastName >> tempMember->m_Username >> tempMember->m_Password >> tempMember->m_Grade >> tempMember->m_ID;
        }else{
            returnMembers.push_back(*tempMember);
            tempMember = new Member();
        }
    }

    readMember.close();
    return returnMembers;
}

bool FileReader::WriteMembers(QVector<Member> members, QString filePath){
    QFile writeMembers(filePath);

    if(!writeMembers.open(QIODevice::WriteOnly | QIODevice::Text)){
        writeMembers.close();
        return false;
    }

    QTextStream out(&writeMembers);

    //Nested foreach loop, write every member and their events
    for(Member member : members){
        out << "\n" << member.m_FirstName << " " << member.m_LastName <<
               " " << member.m_Username  << " " << member.m_Password <<
               " " << member.m_Grade << " " << QString::number(member.m_ID);

        for(Event event : member.m_Events){
            out << "\n* "; //* works as an event indicator

            out << event.m_Hours << " " << event.m_EventName << " "
                << event.m_Category << " " << event.m_Date;
        }

        out << "\n~"; //~ works to indicate the end of a membe's information block
    }

    writeMembers.close();
    return true;
}
