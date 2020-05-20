#-------------------------------------------------
#
# Project created by QtCreator 2019-11-15T20:11:58
#
#-------------------------------------------------

QT       += core gui printsupport charts network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CommunityServiceAwards
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    adminloginwindow.cpp \
    adminpanel.cpp \
    memberreg.cpp \
    memberloginwindow.cpp \
    memberpanel.cpp \
    adminevent.cpp \
    eventedit.cpp \
    memberedit.cpp \
    eventview.cpp \
    loghours.cpp \
    adminsetting.cpp \
    calendarwindow.cpp \
    membersetting.cpp \
    memberreport.cpp \
    databox.cpp \
    report.cpp \
    qnawindow.cpp \
    filereader.cpp

HEADERS += \
        mainwindow.h \
    adminloginwindow.h \
    adminpanel.h \
    memberreg.h \
    event.h \
    member.h \
    memberloginwindow.h \
    memberpanel.h \
    adminevent.h \
    eventedit.h \
    memberedit.h \
    eventview.h \
    loghours.h \
    adminsetting.h \
    calendarwindow.h \
    membersetting.h \
    memberreport.h \
    databox.h \
    report.h \
    qnawindow.h \
    filereader.h

FORMS += \
        mainwindow.ui \
    adminloginwindow.ui \
    adminpanel.ui \
    memberreg.ui \
    memberloginwindow.ui \
    memberpanel.ui \
    adminevent.ui \
    eventedit.ui \
    memberedit.ui \
    eventview.ui \
    loghours.ui \
    adminsetting.ui \
    calendarwindow.ui \
    membersetting.ui \
    memberreport.ui \
    databox.ui \
    report.ui \
    qnawindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
