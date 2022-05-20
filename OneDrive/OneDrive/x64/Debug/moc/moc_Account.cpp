/****************************************************************************
** Meta object code from reading C++ file 'Account.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Account.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Account_t {
    const uint offsetsAndSize[44];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Account_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Account_t qt_meta_stringdata_Account = {
    {
QT_MOC_LITERAL(0, 7), // "Account"
QT_MOC_LITERAL(8, 16), // "renameFileSignal"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 12), // "std::string&"
QT_MOC_LITERAL(39, 8), // "selected"
QT_MOC_LITERAL(48, 16), // "deleteFileSignal"
QT_MOC_LITERAL(65, 9), // "addFolder"
QT_MOC_LITERAL(75, 15), // "backFolderLocal"
QT_MOC_LITERAL(91, 16), // "backFolderServer"
QT_MOC_LITERAL(108, 14), // "renameFileSlot"
QT_MOC_LITERAL(123, 21), // "renameLocalSendSignal"
QT_MOC_LITERAL(145, 21), // "deleteLocalSendSignal"
QT_MOC_LITERAL(167, 12), // "refreshLocal"
QT_MOC_LITERAL(180, 13), // "refreshServer"
QT_MOC_LITERAL(194, 12), // "refreshTrash"
QT_MOC_LITERAL(207, 14), // "deleteFileSlot"
QT_MOC_LITERAL(222, 7), // "refresh"
QT_MOC_LITERAL(230, 7), // "polling"
QT_MOC_LITERAL(238, 9), // "showTrash"
QT_MOC_LITERAL(248, 7), // "restore"
QT_MOC_LITERAL(256, 7), // "addFile"
QT_MOC_LITERAL(264, 11) // "deleteLocal"

    },
    "Account\0renameFileSignal\0\0std::string&\0"
    "selected\0deleteFileSignal\0addFolder\0"
    "backFolderLocal\0backFolderServer\0"
    "renameFileSlot\0renameLocalSendSignal\0"
    "deleteLocalSendSignal\0refreshLocal\0"
    "refreshServer\0refreshTrash\0deleteFileSlot\0"
    "refresh\0polling\0showTrash\0restore\0"
    "addFile\0deleteLocal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Account[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       5,    1,  125,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  128,    2, 0x08,    5 /* Private */,
       7,    0,  129,    2, 0x08,    6 /* Private */,
       8,    0,  130,    2, 0x08,    7 /* Private */,
       9,    1,  131,    2, 0x08,    8 /* Private */,
      10,    0,  134,    2, 0x08,   10 /* Private */,
      11,    0,  135,    2, 0x08,   11 /* Private */,
      12,    0,  136,    2, 0x08,   12 /* Private */,
      13,    0,  137,    2, 0x08,   13 /* Private */,
      14,    0,  138,    2, 0x08,   14 /* Private */,
      15,    1,  139,    2, 0x08,   15 /* Private */,
      16,    0,  142,    2, 0x08,   17 /* Private */,
      17,    0,  143,    2, 0x08,   18 /* Private */,
      18,    0,  144,    2, 0x08,   19 /* Private */,
      19,    0,  145,    2, 0x08,   20 /* Private */,
      20,    0,  146,    2, 0x08,   21 /* Private */,
      21,    0,  147,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Account::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Account *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->renameFileSignal((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->deleteFileSignal((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->addFolder(); break;
        case 3: _t->backFolderLocal(); break;
        case 4: _t->backFolderServer(); break;
        case 5: _t->renameFileSlot((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 6: _t->renameLocalSendSignal(); break;
        case 7: _t->deleteLocalSendSignal(); break;
        case 8: _t->refreshLocal(); break;
        case 9: _t->refreshServer(); break;
        case 10: _t->refreshTrash(); break;
        case 11: _t->deleteFileSlot((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 12: _t->refresh(); break;
        case 13: _t->polling(); break;
        case 14: _t->showTrash(); break;
        case 15: _t->restore(); break;
        case 16: _t->addFile(); break;
        case 17: _t->deleteLocal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Account::*)(std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::renameFileSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Account::*)(std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::deleteFileSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Account::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Account.offsetsAndSize,
    qt_meta_data_Account,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Account_t
, QtPrivate::TypeAndForceComplete<Account, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Account::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Account::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Account.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Account::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Account::renameFileSignal(std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Account::deleteFileSignal(std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
