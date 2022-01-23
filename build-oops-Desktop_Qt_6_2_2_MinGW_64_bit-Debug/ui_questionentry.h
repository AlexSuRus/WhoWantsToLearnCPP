/********************************************************************************
** Form generated from reading UI file 'questionentry.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONENTRY_H
#define UI_QUESTIONENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_questionentry
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *answer1;
    QLabel *answer2;
    QLabel *answer3;
    QLabel *answer4;
    QSpinBox *spinBox;
    QLabel *answeroption;
    QTextEdit *questionbox;
    QLabel *question;
    QLabel *total;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *option1;
    QLineEdit *option2;
    QLineEdit *option3;
    QLineEdit *option4;

    void setupUi(QDialog *questionentry)
    {
        if (questionentry->objectName().isEmpty())
            questionentry->setObjectName(QString::fromUtf8("questionentry"));
        questionentry->resize(640, 480);
        questionentry->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(questionentry);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        answer1 = new QLabel(questionentry);
        answer1->setObjectName(QString::fromUtf8("answer1"));
        answer1->setGeometry(QRect(140, 180, 67, 17));
        answer2 = new QLabel(questionentry);
        answer2->setObjectName(QString::fromUtf8("answer2"));
        answer2->setGeometry(QRect(140, 220, 67, 17));
        answer3 = new QLabel(questionentry);
        answer3->setObjectName(QString::fromUtf8("answer3"));
        answer3->setGeometry(QRect(140, 270, 67, 17));
        answer4 = new QLabel(questionentry);
        answer4->setObjectName(QString::fromUtf8("answer4"));
        answer4->setGeometry(QRect(140, 320, 67, 17));
        spinBox = new QSpinBox(questionentry);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(240, 390, 61, 27));
        answeroption = new QLabel(questionentry);
        answeroption->setObjectName(QString::fromUtf8("answeroption"));
        answeroption->setGeometry(QRect(120, 390, 121, 20));
        questionbox = new QTextEdit(questionentry);
        questionbox->setObjectName(QString::fromUtf8("questionbox"));
        questionbox->setGeometry(QRect(230, 40, 256, 91));
        question = new QLabel(questionentry);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(130, 80, 67, 17));
        total = new QLabel(questionentry);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(390, 10, 67, 17));
        label = new QLabel(questionentry);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(96, 10, 211, 20));
        layoutWidget = new QWidget(questionentry);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 150, 211, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        option1 = new QLineEdit(layoutWidget);
        option1->setObjectName(QString::fromUtf8("option1"));

        verticalLayout->addWidget(option1);

        option2 = new QLineEdit(layoutWidget);
        option2->setObjectName(QString::fromUtf8("option2"));

        verticalLayout->addWidget(option2);

        option3 = new QLineEdit(layoutWidget);
        option3->setObjectName(QString::fromUtf8("option3"));

        verticalLayout->addWidget(option3);

        option4 = new QLineEdit(layoutWidget);
        option4->setObjectName(QString::fromUtf8("option4"));

        verticalLayout->addWidget(option4);


        retranslateUi(questionentry);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, questionentry, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, questionentry, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(questionentry);
    } // setupUi

    void retranslateUi(QDialog *questionentry)
    {
        questionentry->setWindowTitle(QCoreApplication::translate("questionentry", "Enter the question", nullptr));
        answer1->setText(QCoreApplication::translate("questionentry", "Answer 1", nullptr));
        answer2->setText(QCoreApplication::translate("questionentry", "Answer 2", nullptr));
        answer3->setText(QCoreApplication::translate("questionentry", "Answer 3", nullptr));
        answer4->setText(QCoreApplication::translate("questionentry", "Answer 4", nullptr));
        answeroption->setText(QCoreApplication::translate("questionentry", "Answer option", nullptr));
        question->setText(QCoreApplication::translate("questionentry", "Question", nullptr));
        total->setText(QCoreApplication::translate("questionentry", "infoofquestion", nullptr));
        label->setText(QCoreApplication::translate("questionentry", "Number in Question list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class questionentry: public Ui_questionentry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONENTRY_H
