#include "resultofquestion.h"
#include "ui_resultofquestion.h"

resultofquestion::resultofquestion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::resultofquestion)
{
    answerstatus=1;
    ui->setupUi(this);

}

resultofquestion::~resultofquestion()
{
    delete ui;
}

void resultofquestion::setcorrectanswer(QString amount)
{
    ui->money->setText(amount);
    ui->money->setTextFormat(Qt::RichText);
    ui->money->setAlignment(Qt::AlignCenter);
    ui->money->setStyleSheet("font-size:16pt; font-weight:600;");

    ui->pushButton->setText("Go to Next Question");

    ui->result->setText("Correct Answer");
    ui->result->setTextFormat(Qt::RichText);
    ui->result->setAlignment(Qt::AlignCenter);
    ui->result->setStyleSheet("font-size:16pt; font-weight:600;");

    ui->tickorcross->setStyleSheet("border-image:url(:/resource/resource/tick.png)");
    answerstatus=1;
}

void resultofquestion::setwronganswer(QString amount)
{

        ui->money->setText(amount);
        ui->money->setTextFormat(Qt::RichText);
        ui->money->setAlignment(Qt::AlignCenter);
        ui->money->setStyleSheet("font-size:16pt; font-weight:600;");

        ui->pushButton->setText("End the Game");

        ui->result->setText("Wrong Answer");
        ui->result->setTextFormat(Qt::RichText);
        ui->result->setAlignment(Qt::AlignCenter);
        ui->result->setStyleSheet("font-size:16pt; font-weight:600;");

        ui->tickorcross->setStyleSheet("border-image:url(:/resource/resource/cross.png)");
        answerstatus=0;
}

void resultofquestion::setquitgame(QString amount)
{


        ui->money->setText(amount);
        ui->money->setTextFormat(Qt::RichText);
        ui->money->setAlignment(Qt::AlignCenter);
        ui->money->setStyleSheet("font-size:16pt; font-weight:600;");

        ui->pushButton->setText("End the Game");

        ui->result->setText("You have quit the Game");
        ui->result->setTextFormat(Qt::RichText);
        ui->result->setAlignment(Qt::AlignCenter);
        ui->result->setStyleSheet("font-size:16pt; font-weight:600;");

        ui->tickorcross->setStyleSheet("border-image:url(:/resource/resource/clapping.png)");
        answerstatus=0;
}
void resultofquestion::setwingame(QString amount)
{

        ui->money->setText(amount);
        ui->money->setTextFormat(Qt::RichText);
        ui->money->setAlignment(Qt::AlignCenter);
        ui->money->setStyleSheet("font-size:16pt; font-weight:600;");

        ui->pushButton->setText("End the Game");

        ui->result->setText("You have passed exam!");
        ui->result->setTextFormat(Qt::RichText);
        ui->result->setAlignment(Qt::AlignCenter);
        ui->result->setStyleSheet("font-size:16pt; font-weight:600;");

        ui->tickorcross->setStyleSheet("border-image:url(:/resource/resource/winning.png)");
        answerstatus=0;
}
void resultofquestion::on_pushButton_clicked()
{
    if(answerstatus==1)
    {
        close();
    }
    else
    {
        exit(0);
    }
}
