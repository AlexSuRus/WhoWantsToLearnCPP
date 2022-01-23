#ifndef RESULTOFQUESTION_H
#define RESULTOFQUESTION_H

#include <QWidget>

namespace Ui {

class resultofquestion;
}
/**
@brief Класс, реализующий механики победы и
проигрыша.
*/
class resultofquestion : public QWidget
{
    Q_OBJECT
    
public:
    /**
    @brief Получение результата вопроса.
    @param QWidget *parent
    */
    explicit resultofquestion(QWidget *parent = 0);
    /**
    @brief Постановка правильного ответа.
    @param QString amount
    */
    void setcorrectanswer(QString amount);
    /**
    @brief Постановка неправильных ответов.
    @param QString amount
    */
    void setwronganswer(QString amount);
    /**
    @brief Постановка выхода из игры.
    @param QString amount
    */
    void setquitgame(QString amount);
    /**
    @brief Постановка прохождения теста.
    @param QString amount
    */
    void setwingame(QString amount);
    /**
    @brief Деструктор
    */
    ~resultofquestion();
    
private slots:
    void on_pushButton_clicked();

private:
    int answerstatus;
    Ui::resultofquestion *ui;
};

#endif // RESULTOFQUESTION_H
