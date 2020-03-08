#ifndef FILEREADER_H
#define FILEREADER_H
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QMessageBox>
#include "member.h"

//Class made to remove pipeline code. File reading code was repeated alot throughout the project
class FileReader
{
public:
    static QVector<Member> ReadMembers(QString filePath);
    static bool WriteMembers(QVector<Member> members, QString filePath);

private:
    FileReader() = delete; //Don't need a constructor; this class works as a "static class"
};

#endif // FILEREADER_H
