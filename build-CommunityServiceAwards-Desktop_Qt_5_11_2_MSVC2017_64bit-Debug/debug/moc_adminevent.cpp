/****************************************************************************
** Meta object code from reading C++ file 'adminevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommunityServiceAwards/adminevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminEvent_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminEvent_t qt_meta_stringdata_AdminEvent = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AdminEvent"
QT_MOC_LITERAL(1, 11, 12), // "EventClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 42, 4), // "item"
QT_MOC_LITERAL(5, 47, 12), // "SearchButton"
QT_MOC_LITERAL(6, 60, 14), // "FilterSelected"
QT_MOC_LITERAL(7, 75, 11), // "filterIndex"
QT_MOC_LITERAL(8, 87, 10), // "EditButton"
QT_MOC_LITERAL(9, 98, 12), // "ReportButton"
QT_MOC_LITERAL(10, 111, 12) // "RemoveButton"

    },
    "AdminEvent\0EventClicked\0\0QListWidgetItem*\0"
    "item\0SearchButton\0FilterSelected\0"
    "filterIndex\0EditButton\0ReportButton\0"
    "RemoveButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminEvent *_t = static_cast<AdminEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EventClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->SearchButton(); break;
        case 2: _t->FilterSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->EditButton(); break;
        case 4: _t->ReportButton(); break;
        case 5: _t->RemoveButton(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdminEvent::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdminEvent.data,
      qt_meta_data_AdminEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminEvent.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
