/********************************************************************************
** Form generated from reading UI file 'startscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_startscreen
{
public:
    QGraphicsView *KBC;
    QGraphicsView *graphicsView;
    QPushButton *kbcbutton;
    QPushButton *qbutton;

    void setupUi(QDialog *startscreen)
    {
        if (startscreen->objectName().isEmpty())
            startscreen->setObjectName(QString::fromUtf8("startscreen"));
        startscreen->resize(640, 480);
        startscreen->setStyleSheet(QString::fromUtf8("background-color:#000000"));
        KBC = new QGraphicsView(startscreen);
        KBC->setObjectName(QString::fromUtf8("KBC"));
        KBC->setGeometry(QRect(60, 90, 260, 210));
        KBC->setStyleSheet(QString::fromUtf8("border-image:url(:/resource/resource/CPP icon.jpg);\n"
""));
        graphicsView = new QGraphicsView(startscreen);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(360, 90, 260, 210));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image:url(:/resource/resource/C++ quest.jpg);"));
        kbcbutton = new QPushButton(startscreen);
        kbcbutton->setObjectName(QString::fromUtf8("kbcbutton"));
        kbcbutton->setGeometry(QRect(60, 310, 261, 51));
        kbcbutton->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color:#000000"));
        qbutton = new QPushButton(startscreen);
        qbutton->setObjectName(QString::fromUtf8("qbutton"));
        qbutton->setGeometry(QRect(360, 310, 260, 51));
        qbutton->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-color:#000000"));

        retranslateUi(startscreen);

        QMetaObject::connectSlotsByName(startscreen);
    } // setupUi

    void retranslateUi(QDialog *startscreen)
    {
        startscreen->setWindowTitle(QCoreApplication::translate("startscreen", "QTC++ Test", nullptr));
        kbcbutton->setText(QCoreApplication::translate("startscreen", "Take test", nullptr));
        qbutton->setText(QCoreApplication::translate("startscreen", "Add questions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startscreen: public Ui_startscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
