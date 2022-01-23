/********************************************************************************
** Form generated from reading UI file 'resultofquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTOFQUESTION_H
#define UI_RESULTOFQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultofquestion
{
public:
    QLabel *result;
    QGraphicsView *tickorcross;
    QLabel *uhavwon;
    QLabel *money;
    QPushButton *pushButton;

    void setupUi(QWidget *resultofquestion)
    {
        if (resultofquestion->objectName().isEmpty())
            resultofquestion->setObjectName(QString::fromUtf8("resultofquestion"));
        resultofquestion->resize(640, 327);
        resultofquestion->setStyleSheet(QString::fromUtf8("background-color:white;"));
        result = new QLabel(resultofquestion);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(40, 50, 351, 81));
        tickorcross = new QGraphicsView(resultofquestion);
        tickorcross->setObjectName(QString::fromUtf8("tickorcross"));
        tickorcross->setGeometry(QRect(370, 20, 181, 151));
        tickorcross->setStyleSheet(QString::fromUtf8("border-image:url(:/resource/resource/tick.png)"));
        uhavwon = new QLabel(resultofquestion);
        uhavwon->setObjectName(QString::fromUtf8("uhavwon"));
        uhavwon->setGeometry(QRect(120, 190, 181, 51));
        money = new QLabel(resultofquestion);
        money->setObjectName(QString::fromUtf8("money"));
        money->setGeometry(QRect(320, 190, 261, 51));
        pushButton = new QPushButton(resultofquestion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 256, 211, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:black;"));

        retranslateUi(resultofquestion);

        QMetaObject::connectSlotsByName(resultofquestion);
    } // setupUi

    void retranslateUi(QWidget *resultofquestion)
    {
        resultofquestion->setWindowTitle(QCoreApplication::translate("resultofquestion", "Result", nullptr));
        result->setText(QCoreApplication::translate("resultofquestion", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Right/Wrong Answer</span></p></body></html>", nullptr));
        uhavwon->setText(QCoreApplication::translate("resultofquestion", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">You get</span></p></body></html>", nullptr));
        money->setText(QCoreApplication::translate("resultofquestion", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#3192f8;\">0</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("resultofquestion", "Go to next Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultofquestion: public Ui_resultofquestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTOFQUESTION_H
