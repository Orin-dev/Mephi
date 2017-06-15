/****************************************************************************
** Meta object code from reading C++ file 'propdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../propdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PropDialog_t {
    QByteArrayData data[13];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropDialog_t qt_meta_stringdata_PropDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PropDialog"
QT_MOC_LITERAL(1, 11, 8), // "PressSgn"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(4, 47, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 64, 4), // "item"
QT_MOC_LITERAL(6, 69, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 91, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 115, 25), // "on_listWidget_itemChanged"
QT_MOC_LITERAL(9, 141, 32), // "on_listWidget_currentItemChanged"
QT_MOC_LITERAL(10, 174, 7), // "current"
QT_MOC_LITERAL(11, 182, 8), // "previous"
QT_MOC_LITERAL(12, 191, 23) // "on_pushButton_3_clicked"

    },
    "PropDialog\0PressSgn\0\0on_listWidget_itemClicked\0"
    "QListWidgetItem*\0item\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_listWidget_itemChanged\0"
    "on_listWidget_currentItemChanged\0"
    "current\0previous\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
       9,    2,   58,    2, 0x08 /* Private */,
      12,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,   10,   11,
    QMetaType::Void,

       0        // eod
};

void PropDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropDialog *_t = static_cast<PropDialog *>(_o);
        switch (_id) {
        case 0: _t->PressSgn(); break;
        case 1: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_listWidget_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_listWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropDialog::PressSgn)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PropDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PropDialog.data,
      qt_meta_data_PropDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PropDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PropDialog.stringdata))
        return static_cast<void*>(const_cast< PropDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PropDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PropDialog::PressSgn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
