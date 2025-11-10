/****************************************************************************
** Meta object code from reading C++ file 'mysql.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mysql.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mysql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN5MysqlE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5MysqlE = QtMocHelpers::stringData(
    "Mysql",
    "connectToDatabaseSignal",
    "",
    "disconnectFromDatabase",
    "on_connectionStatusChanged",
    "connected",
    "message",
    "on_queryResultsReady",
    "success",
    "QList<QVariantList>",
    "results",
    "on_exit_clicked",
    "on_showall_clicked",
    "on_deleteall_clicked",
    "on_inquire_clicked",
    "on_nowtime_clicked",
    "on_oneday_clicked",
    "on_threeday_clicked",
    "on_aweek_clicked",
    "on_dateinquire_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5MysqlE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    0,   93,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   94,    2, 0x08,    3 /* Private */,
       7,    3,   99,    2, 0x08,    6 /* Private */,
      11,    0,  106,    2, 0x08,   10 /* Private */,
      12,    0,  107,    2, 0x08,   11 /* Private */,
      13,    0,  108,    2, 0x08,   12 /* Private */,
      14,    0,  109,    2, 0x08,   13 /* Private */,
      15,    0,  110,    2, 0x08,   14 /* Private */,
      16,    0,  111,    2, 0x08,   15 /* Private */,
      17,    0,  112,    2, 0x08,   16 /* Private */,
      18,    0,  113,    2, 0x08,   17 /* Private */,
      19,    0,  114,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 9, QMetaType::QString,    8,   10,    6,
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

Q_CONSTINIT const QMetaObject Mysql::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN5MysqlE.offsetsAndSizes,
    qt_meta_data_ZN5MysqlE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5MysqlE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Mysql, std::true_type>,
        // method 'connectToDatabaseSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnectFromDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_connectionStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_queryResultsReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QVariantList> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_showall_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteall_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_inquire_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nowtime_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_oneday_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_threeday_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_aweek_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dateinquire_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Mysql::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Mysql *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->connectToDatabaseSignal(); break;
        case 1: _t->disconnectFromDatabase(); break;
        case 2: _t->on_connectionStatusChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->on_queryResultsReady((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QVariantList>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->on_exit_clicked(); break;
        case 5: _t->on_showall_clicked(); break;
        case 6: _t->on_deleteall_clicked(); break;
        case 7: _t->on_inquire_clicked(); break;
        case 8: _t->on_nowtime_clicked(); break;
        case 9: _t->on_oneday_clicked(); break;
        case 10: _t->on_threeday_clicked(); break;
        case 11: _t->on_aweek_clicked(); break;
        case 12: _t->on_dateinquire_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Mysql::*)();
            if (_q_method_type _q_method = &Mysql::connectToDatabaseSignal; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Mysql::*)();
            if (_q_method_type _q_method = &Mysql::disconnectFromDatabase; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Mysql::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mysql::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5MysqlE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Mysql::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Mysql::connectToDatabaseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mysql::disconnectFromDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
