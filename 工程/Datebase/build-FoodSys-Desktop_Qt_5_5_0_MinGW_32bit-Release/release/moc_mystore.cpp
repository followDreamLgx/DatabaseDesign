/****************************************************************************
** Meta object code from reading C++ file 'mystore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FoodSys/mystore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mystore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyStore_t {
    QByteArrayData data[15];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyStore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyStore_t qt_meta_stringdata_MyStore = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyStore"
QT_MOC_LITERAL(1, 8, 7), // "display"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "indexNum"
QT_MOC_LITERAL(4, 26, 29), // "on_ReadTurnoverButton_clicked"
QT_MOC_LITERAL(5, 56, 23), // "on_ReturnButton_clicked"
QT_MOC_LITERAL(6, 80, 19), // "on_Delete_1_clicked"
QT_MOC_LITERAL(7, 100, 19), // "on_Delete_2_clicked"
QT_MOC_LITERAL(8, 120, 19), // "on_Delete_3_clicked"
QT_MOC_LITERAL(9, 140, 19), // "on_Delete_4_clicked"
QT_MOC_LITERAL(10, 160, 19), // "on_Delete_5_clicked"
QT_MOC_LITERAL(11, 180, 19), // "on_Delete_6_clicked"
QT_MOC_LITERAL(12, 200, 19), // "on_Delete_7_clicked"
QT_MOC_LITERAL(13, 220, 19), // "on_Delete_8_clicked"
QT_MOC_LITERAL(14, 240, 30) // "on_AddFoodToMenuButton_clicked"

    },
    "MyStore\0display\0\0indexNum\0"
    "on_ReadTurnoverButton_clicked\0"
    "on_ReturnButton_clicked\0on_Delete_1_clicked\0"
    "on_Delete_2_clicked\0on_Delete_3_clicked\0"
    "on_Delete_4_clicked\0on_Delete_5_clicked\0"
    "on_Delete_6_clicked\0on_Delete_7_clicked\0"
    "on_Delete_8_clicked\0on_AddFoodToMenuButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyStore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyStore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyStore *_t = static_cast<MyStore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_ReadTurnoverButton_clicked(); break;
        case 2: _t->on_ReturnButton_clicked(); break;
        case 3: _t->on_Delete_1_clicked(); break;
        case 4: _t->on_Delete_2_clicked(); break;
        case 5: _t->on_Delete_3_clicked(); break;
        case 6: _t->on_Delete_4_clicked(); break;
        case 7: _t->on_Delete_5_clicked(); break;
        case 8: _t->on_Delete_6_clicked(); break;
        case 9: _t->on_Delete_7_clicked(); break;
        case 10: _t->on_Delete_8_clicked(); break;
        case 11: _t->on_AddFoodToMenuButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyStore::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyStore::display)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MyStore::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyStore.data,
      qt_meta_data_MyStore,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyStore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyStore::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyStore.stringdata0))
        return static_cast<void*>(const_cast< MyStore*>(this));
    if (!strcmp(_clname, "BaseImformation"))
        return static_cast< BaseImformation*>(const_cast< MyStore*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyStore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MyStore::display(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
