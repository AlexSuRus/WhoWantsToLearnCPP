/********************************************************************************
** Form generated from reading UI file 'ExamTest.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMTEST_H
#define UI_EXAMTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamTest
{
public:
    QWidget *centralWidget;
    QGraphicsView *QTApplogo;
    QGroupBox *pointstablegroup;
    QVBoxLayout *verticalLayout;
    QTextBrowser *tb13;
    QTextBrowser *tb12;
    QTextBrowser *tb11;
    QTextBrowser *tb10;
    QTextBrowser *tb9;
    QTextBrowser *tb8;
    QTextBrowser *tb7;
    QTextBrowser *tb6;
    QTextBrowser *tb5;
    QTextBrowser *tb4;
    QTextBrowser *tb3;
    QTextBrowser *tb2;
    QTextBrowser *tb1;
    QTextBrowser *tb0;
    QPushButton *quitthegame;
    QGraphicsView *separator;
    QGroupBox *QuestionGroup;
    QGridLayout *gridLayout;
    QPushButton *option2;
    QPushButton *option4;
    QPushButton *option3;
    QPushButton *option1;
    QTextBrowser *QuestionBox;
    QPushButton *Exit;
    QPushButton *gamebeginbutton;
    QLabel *credit_4;
    QPushButton *pushButton;
    QFrame *credits;
    QVBoxLayout *verticalLayout_3;
    QLabel *credit;
    QLabel *credit_8;

    void setupUi(QMainWindow *ExamTest)
    {
        if (ExamTest->objectName().isEmpty())
            ExamTest->setObjectName(QString::fromUtf8("ExamTest"));
        ExamTest->resize(830, 698);
        ExamTest->setMinimumSize(QSize(830, 698));
        ExamTest->setMaximumSize(QSize(830, 698));
        ExamTest->setStyleSheet(QString::fromUtf8("background-color:black;"));
        centralWidget = new QWidget(ExamTest);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QTApplogo = new QGraphicsView(centralWidget);
        QTApplogo->setObjectName(QString::fromUtf8("QTApplogo"));
        QTApplogo->setGeometry(QRect(90, 50, 391, 321));
        QTApplogo->setStyleSheet(QString::fromUtf8("border-image:url(:/resource/resource/CPP icon.jpg) 100% ;\n"
"border-color:rgb(0, 0, 0)"));
        pointstablegroup = new QGroupBox(centralWidget);
        pointstablegroup->setObjectName(QString::fromUtf8("pointstablegroup"));
        pointstablegroup->setGeometry(QRect(610, 70, 191, 491));
        pointstablegroup->setMinimumSize(QSize(191, 491));
        pointstablegroup->setMaximumSize(QSize(191, 491));
        pointstablegroup->setStyleSheet(QString::fromUtf8("color:#f78d10;\n"
"background-color:#000000;\n"
"border-image:url(:/resource/resource/box.png);\n"
"border: 2px solid gray; \n"
"border-radius: 3px; \n"
""));
        verticalLayout = new QVBoxLayout(pointstablegroup);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tb13 = new QTextBrowser(pointstablegroup);
        tb13->setObjectName(QString::fromUtf8("tb13"));
        tb13->setMinimumSize(QSize(171, 31));
        tb13->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb13);

        tb12 = new QTextBrowser(pointstablegroup);
        tb12->setObjectName(QString::fromUtf8("tb12"));
        tb12->setMinimumSize(QSize(171, 31));
        tb12->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb12);

        tb11 = new QTextBrowser(pointstablegroup);
        tb11->setObjectName(QString::fromUtf8("tb11"));
        tb11->setMinimumSize(QSize(171, 31));
        tb11->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb11);

        tb10 = new QTextBrowser(pointstablegroup);
        tb10->setObjectName(QString::fromUtf8("tb10"));
        tb10->setMinimumSize(QSize(171, 31));
        tb10->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb10);

        tb9 = new QTextBrowser(pointstablegroup);
        tb9->setObjectName(QString::fromUtf8("tb9"));
        tb9->setMinimumSize(QSize(171, 31));
        tb9->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb9);

        tb8 = new QTextBrowser(pointstablegroup);
        tb8->setObjectName(QString::fromUtf8("tb8"));
        tb8->setMinimumSize(QSize(171, 31));
        tb8->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb8);

        tb7 = new QTextBrowser(pointstablegroup);
        tb7->setObjectName(QString::fromUtf8("tb7"));
        tb7->setMinimumSize(QSize(171, 31));
        tb7->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb7);

        tb6 = new QTextBrowser(pointstablegroup);
        tb6->setObjectName(QString::fromUtf8("tb6"));
        tb6->setMinimumSize(QSize(171, 31));
        tb6->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb6);

        tb5 = new QTextBrowser(pointstablegroup);
        tb5->setObjectName(QString::fromUtf8("tb5"));
        tb5->setMinimumSize(QSize(171, 31));
        tb5->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb5);

        tb4 = new QTextBrowser(pointstablegroup);
        tb4->setObjectName(QString::fromUtf8("tb4"));
        tb4->setMinimumSize(QSize(171, 31));
        tb4->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb4);

        tb3 = new QTextBrowser(pointstablegroup);
        tb3->setObjectName(QString::fromUtf8("tb3"));
        tb3->setMinimumSize(QSize(171, 31));
        tb3->setMaximumSize(QSize(171, 31));

        verticalLayout->addWidget(tb3);

        tb2 = new QTextBrowser(pointstablegroup);
        tb2->setObjectName(QString::fromUtf8("tb2"));
        tb2->setMinimumSize(QSize(171, 31));
        tb2->setMaximumSize(QSize(171, 31));
        tb2->setStyleSheet(QString::fromUtf8("border-color:#ffffff"));

        verticalLayout->addWidget(tb2);

        tb1 = new QTextBrowser(pointstablegroup);
        tb1->setObjectName(QString::fromUtf8("tb1"));
        tb1->setMinimumSize(QSize(171, 31));
        tb1->setMaximumSize(QSize(171, 31));
        tb1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tb1);

        tb0 = new QTextBrowser(pointstablegroup);
        tb0->setObjectName(QString::fromUtf8("tb0"));
        tb0->setMinimumSize(QSize(171, 31));
        tb0->setMaximumSize(QSize(171, 31));
        tb0->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tb0);

        quitthegame = new QPushButton(centralWidget);
        quitthegame->setObjectName(QString::fromUtf8("quitthegame"));
        quitthegame->setGeometry(QRect(630, 650, 141, 31));
        quitthegame->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background-color:rgb(255, 255, 255)"));
        separator = new QGraphicsView(centralWidget);
        separator->setObjectName(QString::fromUtf8("separator"));
        separator->setGeometry(QRect(570, 0, 16, 721));
        separator->setStyleSheet(QString::fromUtf8("border-image:url(:/resource/resource/separator.png);"));
        QuestionGroup = new QGroupBox(centralWidget);
        QuestionGroup->setObjectName(QString::fromUtf8("QuestionGroup"));
        QuestionGroup->setGeometry(QRect(80, 430, 421, 251));
        QuestionGroup->setStyleSheet(QString::fromUtf8("background-color:black;"));
        gridLayout = new QGridLayout(QuestionGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        option2 = new QPushButton(QuestionGroup);
        option2->setObjectName(QString::fromUtf8("option2"));
        option2->setMinimumSize(QSize(191, 61));
        option2->setMaximumSize(QSize(191, 61));
        option2->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout->addWidget(option2, 1, 1, 1, 1);

        option4 = new QPushButton(QuestionGroup);
        option4->setObjectName(QString::fromUtf8("option4"));
        option4->setMinimumSize(QSize(191, 61));
        option4->setMaximumSize(QSize(191, 61));
        option4->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout->addWidget(option4, 2, 1, 1, 1);

        option3 = new QPushButton(QuestionGroup);
        option3->setObjectName(QString::fromUtf8("option3"));
        option3->setMinimumSize(QSize(191, 61));
        option3->setMaximumSize(QSize(191, 61));
        option3->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout->addWidget(option3, 2, 0, 1, 1);

        option1 = new QPushButton(QuestionGroup);
        option1->setObjectName(QString::fromUtf8("option1"));
        option1->setMinimumSize(QSize(191, 61));
        option1->setMaximumSize(QSize(191, 61));
        option1->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout->addWidget(option1, 1, 0, 1, 1);

        QuestionBox = new QTextBrowser(QuestionGroup);
        QuestionBox->setObjectName(QString::fromUtf8("QuestionBox"));
        QuestionBox->setStyleSheet(QString::fromUtf8("\n"
"color:white;"));

        gridLayout->addWidget(QuestionBox, 0, 0, 1, 2);

        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(20, 10, 91, 27));
        Exit->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:rgb(255, 17, 17);"));
        gamebeginbutton = new QPushButton(centralWidget);
        gamebeginbutton->setObjectName(QString::fromUtf8("gamebeginbutton"));
        gamebeginbutton->setGeometry(QRect(200, 450, 171, 51));
        gamebeginbutton->setStyleSheet(QString::fromUtf8("\n"
"color:black;\n"
"background-color:rgb(235, 235, 235);"));
        credit_4 = new QLabel(centralWidget);
        credit_4->setObjectName(QString::fromUtf8("credit_4"));
        credit_4->setGeometry(QRect(170, 690, 176, 29));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 10, 99, 27));
        pushButton->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:rgb(125, 209, 209)"));
        credits = new QFrame(centralWidget);
        credits->setObjectName(QString::fromUtf8("credits"));
        credits->setGeometry(QRect(180, 530, 201, 131));
        credits->setStyleSheet(QString::fromUtf8("color:white;"));
        verticalLayout_3 = new QVBoxLayout(credits);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        credit = new QLabel(credits);
        credit->setObjectName(QString::fromUtf8("credit"));

        verticalLayout_3->addWidget(credit);

        credit_8 = new QLabel(credits);
        credit_8->setObjectName(QString::fromUtf8("credit_8"));

        verticalLayout_3->addWidget(credit_8);

        ExamTest->setCentralWidget(centralWidget);
        credits->raise();
        gamebeginbutton->raise();
        QTApplogo->raise();
        pointstablegroup->raise();
        quitthegame->raise();
        separator->raise();
        Exit->raise();
        credit_4->raise();
        pushButton->raise();
        QuestionGroup->raise();

        retranslateUi(ExamTest);

        QMetaObject::connectSlotsByName(ExamTest);
    } // setupUi

    void retranslateUi(QMainWindow *ExamTest)
    {
        ExamTest->setWindowTitle(QCoreApplication::translate("ExamTest", "QTC++ Test", nullptr));
        tb13->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt; color:#ffaa00;\">13</span></p></body></html>", nullptr));
        tb12->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">12</span></p></body></html>", nullptr));
        tb11->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">11</span></p></body></html>", nullptr));
        tb10->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt; color:#ffaa00;\">10</span></p></body></html>", nullptr));
        tb9->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">9</span></p></body></html>", nullptr));
        tb8->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">8</span></p></body></html>", nullptr));
        tb7->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">7</span></p></body></html>", nullptr));
        tb6->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">6</span></p></body></html>", nullptr));
        tb5->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt; color:#ffaa00;\">5</span></p></body></html>", nullptr));
        tb4->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">4</span></p></body></html>", nullptr));
        tb3->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">3</span></p></body></html>", nullptr));
        tb2->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">2</span></p></body></html>", nullptr));
        tb1->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">1</span></p></body></html>", nullptr));
        tb0->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">0</span></p></body></html>", nullptr));
        quitthegame->setText(QCoreApplication::translate("ExamTest", "Leave the Game", nullptr));
        option2->setText(QCoreApplication::translate("ExamTest", "Option2", nullptr));
        option4->setText(QCoreApplication::translate("ExamTest", "Option4", nullptr));
        option3->setText(QCoreApplication::translate("ExamTest", "Option3", nullptr));
        option1->setText(QCoreApplication::translate("ExamTest", "Option1", nullptr));
        QuestionBox->setHtml(QCoreApplication::translate("ExamTest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>", nullptr));
        Exit->setText(QCoreApplication::translate("ExamTest", "Exit", nullptr));
        gamebeginbutton->setText(QCoreApplication::translate("ExamTest", "Let the Game Begin", nullptr));
        credit_4->setText(QCoreApplication::translate("ExamTest", "Prasanna - 1RV11CS082", nullptr));
        pushButton->setText(QCoreApplication::translate("ExamTest", "Creators", nullptr));
        credit->setText(QCoreApplication::translate("ExamTest", "<html><head/><body><p align=\"center\"><span style=\" text-decoration: underline; color:#a3a3a3;\">You have only 1 try</span></p></body></html>", nullptr));
        credit_8->setText(QCoreApplication::translate("ExamTest", "<html><head/><body><p align=\"center\">Choose carefully</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamTest: public Ui_ExamTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMTEST_H
