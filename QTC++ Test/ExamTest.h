#ifndef EXAMTEST_H
#define EXAMTEST_H
#include "resultofquestion.h"
#include <QMainWindow>
#include "code/filehandle.h"
namespace Ui
{

/**
@brief Класс, реализующий входа и выхода и общей логики программы.
*/
class ExamTest;
}
using namespace std;
/*variables for random getquestion*/
/**
@brief Получение вопроса.
@param ()
*/
question getquestion();

/*---------------------------------*/
/**
@brief Перевод баллов в строку
@param int qid
*/
QString convertqidtoamount(int qid);


/**
@brief Класс, реализующий входа и выхода и общей логики программы.
*/
class ExamTest : public QMainWindow
{
    Q_OBJECT
    
public:
    /**
    @brief Обновление баллов
    @param ()
    */
    void updatescore();
    /**
    @brief Оценить по количеству баллов
    @param int
    */
    void evaluatechoice(int);
    /**
    @brief Создание ui
    @param ()
    */
    void uidefaulter();
    /**
    @brief Создание приложения
    @param QWidget *parent
    */
    explicit ExamTest(QWidget *parent = 0);
    /**
    @brief Деструктор
    @param ()
    */
    ~ExamTest();
    
private slots:
    void on_Exit_clicked();

    void on_ll_fiftyfifty_clicked();

    void on_quitthegame_clicked();

    void on_ll_audiencepoll_clicked();

    void on_gamebeginbutton_clicked();

    void on_option1_clicked();

    void on_option2_clicked();

    void on_option3_clicked();

    void on_option4_clicked();

    void on_ll_flip_question_clicked();

    void on_pushButton_clicked();

private:
    resultofquestion rqwindow;

    Ui::ExamTest *ui;
    int questioncount;
    void gameover();

};
#endif // EXAMTEST_H
