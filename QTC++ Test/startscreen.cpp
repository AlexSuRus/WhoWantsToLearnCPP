#include "startscreen.h"
#include "ui_startscreen.h"

#include "code/questionentry.h"
startscreen::startscreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::startscreen)
{
    ui->setupUi(this);
}

startscreen::~startscreen()
{
    delete ui;
}

void startscreen::on_qbutton_clicked()
{
    questionentry qe;
    qe.exec();
}

void startscreen::on_kbcbutton_clicked()
{

   this->close();

}
