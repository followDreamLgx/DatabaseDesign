/****************************************************************************
** Meta object code from reading C++ file 'myhistory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FoodSys/myhistory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myhistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyHistory_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyHistory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyHistory_t qt_meta_stringdata_MyHistory = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MyHistory"
QT_MOC_LITERAL(1, 10, 7), // "display"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "indexNum"
QT_MOC_LITERAL(4, 28, 25), // "on_PreviousButton_clicked"
QT_MOC_LITERAL(5, 54, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(6, 76, 23) // "on_ReturnButton_clicked"

    },
    "MyHistory\0display\0\0indexNum\0"
    "on_PreviousButton_clicked\0"
    "on_NextButton_clicked\0on_ReturnButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyHistory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyHistory *_t = static_cast<MyHistory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_PreviousButton_clicked(); break;
        case 2: _t->on_NextButton_clicked(); break;
        case 3: _t->on_ReturnButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyHistory::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyHistory::display)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MyHistory::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyHistory.data,
      qt_meta_data_MyHistory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyHistory.stringdata0))
        return static_cast<void*>(const_cast< MyHistory*>(this));
    if (!strcmp(_clname, "BaseImformation"))
        return static_cast< BaseImformation*>(const_cast< MyHistory*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MyHistory::display(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
