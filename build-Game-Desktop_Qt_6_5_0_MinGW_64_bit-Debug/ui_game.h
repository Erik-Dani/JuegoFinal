/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QProgressBar *progressBar;
    QLCDNumber *lcdLevel;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(1326, 965);
        centralwidget = new QWidget(Game);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 1321, 921));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(440, 0, 118, 41));
        progressBar->setStyleSheet(QString::fromUtf8("font: 700 9pt \"8514oem\";\n"
"font: 700 30pt \"8514oem\";\n"
"selection-background-color: rgb(51, 255, 214);\n"
""));
        progressBar->setValue(24);
        progressBar->setTextVisible(true);
        lcdLevel = new QLCDNumber(centralwidget);
        lcdLevel->setObjectName("lcdLevel");
        lcdLevel->setGeometry(QRect(80, 0, 101, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 61, 41));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"8514oem\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 10, 241, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"8514oem\";"));
        Game->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Game);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1326, 21));
        Game->setMenuBar(menubar);
        statusbar = new QStatusBar(Game);
        statusbar->setObjectName("statusbar");
        Game->setStatusBar(statusbar);

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Game", nullptr));
        label->setText(QCoreApplication::translate("Game", "<html><head/><body><p><span style=\" color:#27fff8;\">Nivel</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Game", "<html><head/><body><p><span style=\" color:#17fcda;\">Destruccion Planetaria</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
