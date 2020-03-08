#pragma once

#ifndef MEMBER_H
#define MEMBER_H

#endif // MEMBER_H
#include <QString>
#include <QVector>
#include "event.h"

struct Member{
     QString m_FirstName, m_LastName;
     QString m_Username, m_Password;
     QString m_Grade;

     int m_ID;

     QVector<Event> m_Events; //Store all the events member may have
};
