QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gamebase.cpp \
    lanzador.cpp \
    main.cpp \
    game.cpp \
    nave.cpp \
    portal.cpp \
    proyectil.cpp \
    punch.cpp

HEADERS += \
    game.h \
    gamebase.h \
    lanzador.h \
    nave.h \
    portal.h \
    proyectil.h \
    punch.h

FORMS += \
    game.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagenes.qrc
