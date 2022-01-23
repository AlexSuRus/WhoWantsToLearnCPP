#include "audiencepolldialog.h"
#include "ui_audiencepolldialog.h"
#include<QPainter>

audiencepolldialog::audiencepolldialog(QWidget *parent,int answer) :QDialog(parent),ui(new Ui::audiencepolldialog)
{
    ui->setupUi(this);
    randomhistogramvalues(answer);
    setvalues();

}

audiencepolldialog::~audiencepolldialog()
{
    delete ui;
}
void audiencepolldialog::paintEvent(QPaintEvent *e)
{
  Q_UNUSED(e);
  QPainter qp(this);
  drawhistograms(&qp);
}

void audiencepolldialog::drawhistograms(QPainter *qp)
{
  qp->setBrush(QBrush("#49e2dd"));
  qp->drawRect(110, 300, 40, -300*option[0]/100.0);
  qp->drawRect(230, 300, 40, -300*option[1]/100.0);
  qp->drawRect(350, 300, 40, -300*option[2]/100.0);
  qp->drawRect(470, 300, 40, -300*option[3]/100.0);

}
void audiencepolldialog::randomhistogramvalues(int correctoption)
{
    int randomvalues[4];    /*randomvalues[0] will contain 50% to 80%
                            , randomvalues[1 to 3] will contain remaining % */

    int remain;

    randomvalues[0]=((rand()%30)+50);  //this will giv values between 50% to 80%
    remain=100-randomvalues[0];
    randomvalues[1]=(rand()%remain);
    remain=100-(randomvalues[1]+randomvalues[0]);
    randomvalues[2]=(rand()%remain);
    remain=100-(randomvalues[1]+randomvalues[0]+randomvalues[2]);
    randomvalues[3]=remain;

    //Assigning random values for the histogram
    //using Mastermind's Algorithm


    correctoption--;
    option[correctoption]=randomvalues[0];

    for(int i=-2,j=1;i<=2 && j<=3;++i)
    {
        if(((3-correctoption)-i)!=correctoption && ((3-correctoption)-i)>=0 && (((3-correctoption)-i)<=3))
        {
            option[((3-correctoption)-i)]=randomvalues[j];
            ++j;
        }

    }
}


void audiencepolldialog::setvalues()
{
    ui->op1->setText(QString::number(option[0])+" %");
    ui->op2->setText(QString::number(option[1])+" %");
    ui->op3->setText(QString::number(option[2])+" %");
    ui->op4->setText(QString::number(option[3])+" %");

}
