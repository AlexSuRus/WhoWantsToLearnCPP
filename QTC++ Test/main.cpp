
#include <QApplication>
#include "ExamTest.h"
#include "startscreen.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    startscreen sc;
    sc.exec();
    ExamTest w;
    w.show();

    return a.exec();
}
