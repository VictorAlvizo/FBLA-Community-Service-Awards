/****************************************************************************
** Meta object code from reading C++ file 'adminpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommunityServiceAwards/adminpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminPanel_t {
    QByteArrayData data[15];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminPanel_t qt_meta_stringdata_AdminPanel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AdminPanel"
QT_MOC_LITERAL(1, 11, 12), // "LogoutButton"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "RegisterButton"
QT_MOC_LITERAL(4, 40, 11), // "EventButton"
QT_MOC_LITERAL(5, 52, 10), // "EditButton"
QT_MOC_LITERAL(6, 63, 12), // "ReportButton"
QT_MOC_LITERAL(7, 76, 12), // "SearchMember"
QT_MOC_LITERAL(8, 89, 4), // "text"
QT_MOC_LITERAL(9, 94, 12), // "BackupButton"
QT_MOC_LITERAL(10, 107, 13), // "RetriveButton"
QT_MOC_LITERAL(11, 121, 12), // "ExportButton"
QT_MOC_LITERAL(12, 134, 13), // "SettingButton"
QT_MOC_LITERAL(13, 148, 11), // "ItemClicked"
QT_MOC_LITERAL(14, 160, 9) // "slotIndex"

    },
    "AdminPanel\0LogoutButton\0\0RegisterButton\0"
    "EventButton\0EditButton\0ReportButton\0"
    "SearchMember\0text\0BackupButton\0"
    "RetriveButton\0ExportButton\0SettingButton\0"
    "ItemClicked\0slotIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void AdminPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminPanel *_t = static_cast<AdminPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LogoutButton(); break;
        case 1: _t->RegisterButton(); break;
        case 2: _t->EventButton(); break;
        case 3: _t->EditButton(); break;
        case 4: _t->ReportButton(); break;
        case 5: _t->SearchMember((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->BackupButton(); break;
        case 7: _t->RetriveButton(); break;
        case 8: _t->ExportButton(); break;
        case 9: _t->SettingButton(); break;
        case 10: _t->ItemClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdminPanel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdminPanel.data,
      qt_meta_data_AdminPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminPanel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
