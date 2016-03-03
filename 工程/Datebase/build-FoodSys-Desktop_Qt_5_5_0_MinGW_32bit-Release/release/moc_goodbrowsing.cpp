/****************************************************************************
** Meta object code from reading C++ file 'goodbrowsing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FoodSys/goodbrowsing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'goodbrowsing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GoodBrowsing_t {
    QByteArrayData data[19];
    char stringdata0[456];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoodBrowsing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoodBrowsing_t qt_meta_stringdata_GoodBrowsing = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GoodBrowsing"
QT_MOC_LITERAL(1, 13, 7), // "display"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "indexNum"
QT_MOC_LITERAL(4, 31, 24), // "on_PayBillButton_clicked"
QT_MOC_LITERAL(5, 56, 25), // "on_PreviousButton_clicked"
QT_MOC_LITERAL(6, 82, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(7, 104, 26), // "on_ReadOrderButton_clicked"
QT_MOC_LITERAL(8, 131, 23), // "on_ReturnButton_clicked"
QT_MOC_LITERAL(9, 155, 29), // "on_FoodToMenuButton_1_clicked"
QT_MOC_LITERAL(10, 185, 29), // "on_FoodToMenuButton_2_clicked"
QT_MOC_LITERAL(11, 215, 29), // "on_FoodToMenuButton_3_clicked"
QT_MOC_LITERAL(12, 245, 29), // "on_FoodToMenuButton_4_clicked"
QT_MOC_LITERAL(13, 275, 29), // "on_FoodToMenuButton_5_clicked"
QT_MOC_LITERAL(14, 305, 29), // "on_FoodToMenuButton_6_clicked"
QT_MOC_LITERAL(15, 335, 29), // "on_FoodToMenuButton_7_clicked"
QT_MOC_LITERAL(16, 365, 29), // "on_FoodToMenuButton_8_clicked"
QT_MOC_LITERAL(17, 395, 29), // "on_FoodToMenuButton_9_clicked"
QT_MOC_LITERAL(18, 425, 30) // "on_FoodToMenuButton_10_clicked"

    },
    "GoodBrowsing\0display\0\0indexNum\0"
    "on_PayBillButton_clicked\0"
    "on_PreviousButton_clicked\0"
    "on_NextButton_clicked\0on_ReadOrderButton_clicked\0"
    "on_ReturnButton_clicked\0"
    "on_FoodToMenuButton_1_clicked\0"
    "on_FoodToMenuButton_2_clicked\0"
    "on_FoodToMenuButton_3_clicked\0"
    "on_FoodToMenuButton_4_clicked\0"
    "on_FoodToMenuButton_5_clicked\0"
    "on_FoodToMenuButton_6_clicked\0"
    "on_FoodToMenuButton_7_clicked\0"
    "on_FoodToMenuButton_8_clicked\0"
    "on_FoodToMenuButton_9_clicked\0"
    "on_FoodToMenuButton_10_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoodBrowsing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   97,    2, 0x08 /* Private */,
       5,    0,   98,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GoodBrowsing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GoodBrowsing *_t = static_cast<GoodBrowsing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_PayBillButton_clicked(); break;
        case 2: _t->on_PreviousButton_clicked(); break;
        case 3: _t->on_NextButton_clicked(); break;
        case 4: _t->on_ReadOrderButton_clicked(); break;
        case 5: _t->on_ReturnButton_clicked(); break;
        case 6: _t->on_FoodToMenuButton_1_clicked(); break;
        case 7: _t->on_FoodToMenuButton_2_clicked(); break;
        case 8: _t->on_FoodToMenuButton_3_clicked(); break;
        case 9: _t->on_FoodToMenuButton_4_clicked(); break;
        case 10: _t->on_FoodToMenuButton_5_clicked(); break;
        case 11: _t->on_FoodToMenuButton_6_clicked(); break;
        case 12: _t->on_FoodToMenuButton_7_clicked(); break;
        case 13: _t->on_FoodToMenuButton_8_clicked(); break;
        case 14: _t->on_FoodToMenuButton_9_clicked(); break;
        case 15: _t->on_FoodToMenuButton_10_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GoodBrowsing::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GoodBrowsing::display)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GoodBrowsing::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GoodBrowsing.data,
      qt_meta_data_GoodBrowsing,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GoodBrowsing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoodBrowsing::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GoodBrowsing.stringdata0))
        return static_cast<void*>(const_cast< GoodBrowsing*>(this));
    if (!strcmp(_clname, "BaseImformation"))
        return static_cast< BaseImformation*>(const_cast< GoodBrowsing*>(this));
    return QWidget::qt_metacast(_clname);
}

int GoodBrowsing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void GoodBrowsing::display(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
