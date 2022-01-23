#include "questionentry.h"
#include "ui_questionentry.h"

questionentry::questionentry(QWidget *parent) : QDialog(parent),ui(new Ui::questionentry)
{
    ui->setupUi(this);
    ui->spinBox->setMaximum(4);
    ui->spinBox->setMinimum(1);
    ui->total->setText(f.getinfooffile());
}

questionentry::~questionentry()
{
    delete ui;
}

void questionentry::writetodatafile()
{

    strcpy(q.questions,ui->questionbox->toPlainText().toLocal8Bit().data());
    strcpy(q.answer1,ui->option1->text().toLocal8Bit().data());
    strcpy(q.answer2,ui->option2->text().toLocal8Bit().data());
    strcpy(q.answer3,ui->option3->text().toLocal8Bit().data());
    strcpy(q.answer4,ui->option4->text().toLocal8Bit().data());
    q.rightanswer=ui->spinBox->value();
    f.writetofile(q);
    f.readfromfile(15);

}




void questionentry::on_buttonBox_accepted()
{
    writetodatafile();
}


