/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Game/game.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGameENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGameENDCLASS = QtMocHelpers::stringData(
    "Game",
    "aviso",
    "",
    "ReboteDestruk",
    "EjectMove",
    "CargaB",
    "CargaMov",
    "CargarPunch",
    "on_lcdLevel_overflow",
    "on_progressBar_valueChanged",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[5];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[10];
    char stringdata5[7];
    char stringdata6[9];
    char stringdata7[12];
    char stringdata8[21];
    char stringdata9[28];
    char stringdata10[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameENDCLASS_t qt_meta_stringdata_CLASSGameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Game"
        QT_MOC_LITERAL(5, 5),  // "aviso"
        QT_MOC_LITERAL(11, 0),  // ""
        QT_MOC_LITERAL(12, 13),  // "ReboteDestruk"
        QT_MOC_LITERAL(26, 9),  // "EjectMove"
        QT_MOC_LITERAL(36, 6),  // "CargaB"
        QT_MOC_LITERAL(43, 8),  // "CargaMov"
        QT_MOC_LITERAL(52, 11),  // "CargarPunch"
        QT_MOC_LITERAL(64, 20),  // "on_lcdLevel_overflow"
        QT_MOC_LITERAL(85, 27),  // "on_progressBar_valueChanged"
        QT_MOC_LITERAL(113, 5)   // "value"
    },
    "Game",
    "aviso",
    "",
    "ReboteDestruk",
    "EjectMove",
    "CargaB",
    "CargaMov",
    "CargarPunch",
    "on_lcdLevel_overflow",
    "on_progressBar_valueChanged",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   65,    2, 0x08,    3 /* Private */,
       4,    0,   66,    2, 0x08,    4 /* Private */,
       5,    0,   67,    2, 0x08,    5 /* Private */,
       6,    0,   68,    2, 0x08,    6 /* Private */,
       7,    0,   69,    2, 0x08,    7 /* Private */,
       8,    0,   70,    2, 0x08,    8 /* Private */,
       9,    1,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Game, std::true_type>,
        // method 'aviso'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ReboteDestruk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EjectMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CargaB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CargaMov'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CargarPunch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lcdLevel_overflow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_progressBar_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aviso((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->ReboteDestruk(); break;
        case 2: _t->EjectMove(); break;
        case 3: _t->CargaB(); break;
        case 4: _t->CargaMov(); break;
        case 5: _t->CargarPunch(); break;
        case 6: _t->on_lcdLevel_overflow(); break;
        case 7: _t->on_progressBar_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(int );
            if (_t _q_method = &Game::aviso; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Game::aviso(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
