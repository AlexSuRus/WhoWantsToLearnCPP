#ifndef QUESTIONENTRY_H
#define QUESTIONENTRY_H
#include "filehandle.h"
#include "question.h"
#include <QDialog>

namespace Ui {
class questionentry;
}
/**
@brief Класс, связующий вопросы и файл
*/
class questionentry : public QDialog
{
    Q_OBJECT
    
public:
    /**
    @brief Конструктор
    @param QWidget *parent
    */
    explicit questionentry(QWidget *parent = 0);
    /**
    @brief Деструктор
    @param ()
    */
    ~questionentry();
    /**
    @brief Вопрос
    */
    question q;
    /**
    @brief Файл
    */
    filehandle f;
    /**
    @brief Функция записи данных в файл
    @param ()
    */
    void writetodatafile();
private slots:



    void on_buttonBox_accepted();

private:
    Ui::questionentry *ui;
};

#endif // QUESTIONENTRY_H
