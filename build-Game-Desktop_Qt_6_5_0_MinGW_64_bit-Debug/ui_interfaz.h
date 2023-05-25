/********************************************************************************
** Form generated from reading UI file 'interfaz.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZ_H
#define UI_INTERFAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfaz
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Interfaz)
    {
        if (Interfaz->objectName().isEmpty())
            Interfaz->setObjectName("Interfaz");
        Interfaz->resize(1308, 711);
        frame = new QFrame(Interfaz);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1311, 701));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/Recursos/ppg.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 280, 171, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 25pt \"8514oem\";\n"
"color: rgb(30, 255, 210);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(570, 350, 201, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 25pt \"8514oem\";\n"
"color: rgb(30, 255, 210);"));

        retranslateUi(Interfaz);

        QMetaObject::connectSlotsByName(Interfaz);
    } // setupUi

    void retranslateUi(QWidget *Interfaz)
    {
        Interfaz->setWindowTitle(QCoreApplication::translate("Interfaz", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Interfaz", "FACIL", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Interfaz", "DIFICIL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interfaz: public Ui_Interfaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZ_H
