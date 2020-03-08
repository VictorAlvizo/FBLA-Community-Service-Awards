/****************************************************************************
** Meta object code from reading C++ file 'memberreport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommunityServiceAwards/memberreport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memberreport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MemberReport_t {
    QByteArrayData data[13];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MemberReport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MemberReport_t qt_meta_stringdata_MemberReport = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MemberReport"
QT_MOC_LITERAL(1, 13, 12), // "YearSelected"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "yearText"
QT_MOC_LITERAL(4, 36, 10), // "ClickedSet"
QT_MOC_LITERAL(5, 47, 5), // "index"
QT_MOC_LITERAL(6, 53, 8), // "QBarSet*"
QT_MOC_LITERAL(7, 62, 6), // "barset"
QT_MOC_LITERAL(8, 69, 12), // "ClickedSlice"
QT_MOC_LITERAL(9, 82, 10), // "QPieSlice*"
QT_MOC_LITERAL(10, 93, 5), // "slice"
QT_MOC_LITERAL(11, 99, 8), // "DarkMode"
QT_MOC_LITERAL(12, 108, 4) // "mode"

    },
    "MemberReport\0YearSelected\0\0yearText\0"
    "ClickedSet\0index\0QBarSet*\0barset\0"
    "ClickedSlice\0QPieSlice*\0slice\0DarkMode\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MemberReport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    2,   37,    2, 0x08 /* Private */,
       8,    1,   42,    2, 0x08 /* Private */,
      11,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void MemberReport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MemberReport *_t = static_cast<MemberReport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->YearSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ClickedSet((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QBarSet*(*)>(_a[2]))); break;
        case 2: _t->ClickedSlice((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 3: _t->DarkMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSet* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MemberReport::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MemberReport.data,
      qt_meta_data_MemberReport,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MemberReport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemberReport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemberReport.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MemberReport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
