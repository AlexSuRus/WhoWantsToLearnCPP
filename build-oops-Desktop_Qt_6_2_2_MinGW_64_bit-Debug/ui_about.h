/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QFrame *credits;
    QVBoxLayout *verticalLayout_3;
    QLabel *credit_8;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(240, 159);
        credits = new QFrame(about);
        credits->setObjectName(QString::fromUtf8("credits"));
        credits->setGeometry(QRect(20, 10, 201, 131));
        credits->setStyleSheet(QString::fromUtf8("color:black;\n"
""));
        verticalLayout_3 = new QVBoxLayout(credits);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        credit_8 = new QLabel(credits);
        credit_8->setObjectName(QString::fromUtf8("credit_8"));

        verticalLayout_3->addWidget(credit_8);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "Developers", nullptr));
        credit_8->setText(QCoreApplication::translate("about", "<html><head/><body><p align=\"center\">Surikov AS BPM-20-2</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
