#ifndef QUESTION_H
#define QUESTION_H
#include <QString>

/**
@brief Класс, содержащий вопрос, его индекс и ответ на
него.
*/
class question
{public:
    /**
    @brief Список вопросов
    */
    char questions[150];
    /**
    @brief Первый ответ
    */
    char answer1[40];
    /**
    @brief Второй ответ
    */
    char answer2[40];
    /**
    @brief Третий ответ
    */
    char answer3[40];
    /**
    @brief Четвертый ответ
    */
    char answer4[40];
    /**
    @brief Правильный ответ
    */
    int rightanswer;
public:
    /**
    @brief Конструктор
    @param ()
    */
    question();
    /**
    @brief Получение ответа
    @param ()
    */
    int getanswer();
    /**
    @brief Получение информации от пользователя
    @param ()
    */
    question *getdatafromuser();

};

#endif // QUESTION_H
