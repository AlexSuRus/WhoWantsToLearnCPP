#include "ExamTest.h"
#include "ui_ExamTest.h"
#include <QObject>
#include "code/question.h"
#include <iostream>
#include "resultofquestion.h"
#include "code/audiencepolldialog.h"
#include "code/about.h"

using namespace std;

char * numbertostring(int no);
/* Random question selector variables*/
list <int> qidlist;
list <int> ::iterator iter;
int n;

int playeranschosen=0;
QString playerwinningscore="0";




//----------------------------------------
int ll[3]={0,0,0};
question ques;

ExamTest::ExamTest(QWidget *parent) :QMainWindow(parent),ui(new Ui::ExamTest)
{
    questioncount=-1;
    filehandle fileinfo;
    n=fileinfo.getinfooffile().toInt();
    for(int i=1;i<=n;++i)
    {
        qidlist.push_back(i);
    }
    iter=qidlist.begin();


    questioncount=-1;
    ui->setupUi(this);
    ui->tb0->setStyleSheet("background-color:#006cff");
    ui->QuestionBox->setText("This is a sample question");
    ui->QuestionBox->setAlignment(Qt::AlignCenter);
    ui->QuestionGroup->setVisible(false);
/*Disable lifelines before the start button is clicked */


}

ExamTest::~ExamTest()
{
    delete ui;
}

void ExamTest::on_Exit_clicked()
{
    exit(0);
}

void ExamTest::updatescore()
{
    questioncount++;
    if(questioncount==5)
    {
        playerwinningscore="score 3";
    }else if(questioncount==10)
    {
        playerwinningscore="score 4";

    }
    else if(questioncount==13)
    {
        playerwinningscore="score 5";
        rqwindow.setwingame(playerwinningscore);
        rqwindow.show();
        ui->QuestionGroup->setVisible(false);
    }

    switch(questioncount)
    {
    case 0:ui->tb0->setStyleSheet("background-color:#006cff");
        break;
    case 1:ui->tb1->setStyleSheet("background-color:#006cff");
        ui->tb0->setStyleSheet("background-color:#000000");
        break;
    case 2:ui->tb2->setStyleSheet("background-color:#006cff");
        ui->tb1->setStyleSheet("background-color:#000000");
        break;
    case 3:ui->tb3->setStyleSheet("background-color:#006cff");
        ui->tb2->setStyleSheet("background-color:#000000");
        break;
    case 4:ui->tb4->setStyleSheet("background-color:#006cff");
        ui->tb3->setStyleSheet("background-color:#000000");
        break;
    case 5:ui->tb5->setStyleSheet("background-color:#006cff");
        ui->tb4->setStyleSheet("background-color:#000000");
        break;
    case 6:ui->tb6->setStyleSheet("background-color:#006cff");
        ui->tb5->setStyleSheet("background-color:#000000");
        break;
    case 7:ui->tb7->setStyleSheet("background-color:#006cff");
        ui->tb6->setStyleSheet("background-color:#000000");
        break;
    case 8:ui->tb8->setStyleSheet("background-color:#006cff");
        ui->tb7->setStyleSheet("background-color:#000000");
        break;
    case 9:ui->tb9->setStyleSheet("background-color:#006cff");
        ui->tb8->setStyleSheet("background-color:#000000");
        break;
    case 10:ui->tb10->setStyleSheet("background-color:#006cff");
        ui->tb9->setStyleSheet("background-color:#000000");
        break;
    case 11:ui->tb11->setStyleSheet("background-color:#006cff");
        ui->tb10->setStyleSheet("background-color:#000000");
        break;
    case 12:ui->tb12->setStyleSheet("background-color:#006cff");
        ui->tb11->setStyleSheet("background-color:#000000");
        break;
    case 13:ui->tb13->setStyleSheet("background-color:#006cff");
        ui->tb12->setStyleSheet("background-color:#000000");
        break;
    }

}



void ExamTest::on_ll_fiftyfifty_clicked()
{

    int answeroption=ques.rightanswer;

    int randomvalue;
    int fiftyfiftycount=1;
    int previousrandomvalue=-1;
    while(fiftyfiftycount<=2)
    {
        randomvalue=(rand()%4)+1;
        if(randomvalue!=answeroption && randomvalue!=previousrandomvalue)
        {
            previousrandomvalue=randomvalue;
            switch(randomvalue)
            {
            case 1:ui->option1->setVisible(false);fiftyfiftycount++;break;

            case 2:ui->option2->setVisible(false);fiftyfiftycount++;break;

            case 3:ui->option3->setVisible(false);fiftyfiftycount++;break;

            case 4:ui->option4->setVisible(false);fiftyfiftycount++;break;
            default:;
            }
        }
    }
    ll[0]=1;

}


void ExamTest::on_gamebeginbutton_clicked()
{
    uidefaulter();
    ui->gamebeginbutton->setVisible(false);
    ui->QuestionGroup->setVisible(true);
    ui->credits->setVisible(false);

    evaluatechoice(0);

}



question getquestion()
{
    filehandle f;

    int randomvalue=(rand()%n)+1;
    iter=qidlist.begin();
    for(int i=1;i<randomvalue;++i)
    {
        iter++;

    }
    int returnvalue=*iter;
    qidlist.remove(returnvalue);
    n--;

    return f.readfromfile(returnvalue);


}

void ExamTest::evaluatechoice(int playerchoice)
{
    if(playerchoice == ques.rightanswer)
     {
        if(questioncount!=-1)
         {
            rqwindow.setcorrectanswer(convertqidtoamount(questioncount+1));
            rqwindow.show();
         }
          updatescore();
          question q=getquestion();
          ques=q;
          ui->QuestionBox->setText(q.questions);
          ui->option1->setText(q.answer1);
          ui->option2->setText(q.answer2);
          ui->option3->setText(q.answer3);
          ui->option4->setText(q.answer4);

     }
    else
    {   rqwindow.setwronganswer(playerwinningscore);
        rqwindow.show();

    }

}
void ExamTest::uidefaulter()
{
    ui->option1->setVisible(true);
    ui->option2->setVisible(true);
    ui->option3->setVisible(true);
    ui->option4->setVisible(true);
}

void ExamTest::on_option1_clicked()
{
    playeranschosen=1;
    evaluatechoice(playeranschosen);
    uidefaulter();


}

void ExamTest::on_option2_clicked()
{
    playeranschosen=2;
    evaluatechoice(playeranschosen);
    uidefaulter();
}

void ExamTest::on_option3_clicked()
{
    playeranschosen=3;
    evaluatechoice(playeranschosen);
    uidefaulter();
}

void ExamTest::on_option4_clicked()
{
    playeranschosen=4;
    evaluatechoice(playeranschosen);
    uidefaulter();
}

void ExamTest::gameover()
{

    exit(0);
}

void ExamTest::on_quitthegame_clicked()
{
    rqwindow.setquitgame(convertqidtoamount(questioncount-1));
    rqwindow.show();
}

void ExamTest::on_ll_audiencepoll_clicked()
{
     ll[1]=1;

     audiencepolldialog adp(new QWidget(),ques.getanswer());
     adp.exec();
}

void ExamTest::on_ll_flip_question_clicked()
{
    question q=getquestion();
    ques=q;
    ui->QuestionBox->setText(q.questions);
    ui->option1->setText(q.answer1);
    ui->option2->setText(q.answer2);
    ui->option3->setText(q.answer3);
    ui->option4->setText(q.answer4);
    ll[2]=1;
}

QString convertqidtoamount(int qid)
{
    switch(qid)
    {
        case 0:return "0";break;
        case 1:return "1";break;
        case 2:return "2";break;
        case 3:return "3";break;
        case 4:return "4";break;
        case 5:return "50";break;
        case 6:return "6";break;
        case 7:return "7";break;
        case 8:return "8";break;
        case 9:return "9";break;
        case 10:return "10";break;
        case 11:return "11";break;
        case 12:return "12";break;
        case 13:return "13";break;
    default:return "0";
    }

}

void ExamTest::on_pushButton_clicked()
{
    about abt;
    abt.exec();
}
