/********************************************************************************
** Form generated from reading UI file 'audiencepolldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIENCEPOLLDIALOG_H
#define UI_AUDIENCEPOLLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_audiencepolldialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *valueslayout;
    QLabel *op1;
    QLabel *op2;
    QLabel *op3;
    QLabel *op4;
    QWidget *layoutWidget_2;
    QHBoxLayout *labels;
    QLabel *op1_2;
    QLabel *op2_2;
    QLabel *op3_2;
    QLabel *op4_2;

    void setupUi(QDialog *audiencepolldialog)
    {
        if (audiencepolldialog->objectName().isEmpty())
            audiencepolldialog->setObjectName(QString::fromUtf8("audiencepolldialog"));
        audiencepolldialog->resize(648, 395);
        audiencepolldialog->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Verdana\";\n"
"\n"
""));
        layoutWidget = new QWidget(audiencepolldialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 20, 471, 33));
        valueslayout = new QHBoxLayout(layoutWidget);
        valueslayout->setObjectName(QString::fromUtf8("valueslayout"));
        valueslayout->setContentsMargins(0, 0, 0, 0);
        op1 = new QLabel(layoutWidget);
        op1->setObjectName(QString::fromUtf8("op1"));

        valueslayout->addWidget(op1);

        op2 = new QLabel(layoutWidget);
        op2->setObjectName(QString::fromUtf8("op2"));

        valueslayout->addWidget(op2);

        op3 = new QLabel(layoutWidget);
        op3->setObjectName(QString::fromUtf8("op3"));

        valueslayout->addWidget(op3);

        op4 = new QLabel(layoutWidget);
        op4->setObjectName(QString::fromUtf8("op4"));

        valueslayout->addWidget(op4);

        layoutWidget_2 = new QWidget(audiencepolldialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 310, 471, 33));
        labels = new QHBoxLayout(layoutWidget_2);
        labels->setObjectName(QString::fromUtf8("labels"));
        labels->setContentsMargins(0, 0, 0, 0);
        op1_2 = new QLabel(layoutWidget_2);
        op1_2->setObjectName(QString::fromUtf8("op1_2"));

        labels->addWidget(op1_2);

        op2_2 = new QLabel(layoutWidget_2);
        op2_2->setObjectName(QString::fromUtf8("op2_2"));

        labels->addWidget(op2_2);

        op3_2 = new QLabel(layoutWidget_2);
        op3_2->setObjectName(QString::fromUtf8("op3_2"));

        labels->addWidget(op3_2);

        op4_2 = new QLabel(layoutWidget_2);
        op4_2->setObjectName(QString::fromUtf8("op4_2"));

        labels->addWidget(op4_2);


        retranslateUi(audiencepolldialog);

        QMetaObject::connectSlotsByName(audiencepolldialog);
    } // setupUi

    void retranslateUi(QDialog *audiencepolldialog)
    {
        audiencepolldialog->setWindowTitle(QCoreApplication::translate("audiencepolldialog", "Audience Poll", nullptr));
        op1->setText(QCoreApplication::translate("audiencepolldialog", "option1", nullptr));
        op2->setText(QCoreApplication::translate("audiencepolldialog", "option2", nullptr));
        op3->setText(QCoreApplication::translate("audiencepolldialog", "option3", nullptr));
        op4->setText(QCoreApplication::translate("audiencepolldialog", "option4", nullptr));
        op1_2->setText(QCoreApplication::translate("audiencepolldialog", "A", nullptr));
        op2_2->setText(QCoreApplication::translate("audiencepolldialog", "B", nullptr));
        op3_2->setText(QCoreApplication::translate("audiencepolldialog", "C", nullptr));
        op4_2->setText(QCoreApplication::translate("audiencepolldialog", "D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class audiencepolldialog: public Ui_audiencepolldialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIENCEPOLLDIALOG_H
