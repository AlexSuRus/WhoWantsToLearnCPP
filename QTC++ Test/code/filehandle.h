#ifndef FILEHANDLE_H
#define FILEHANDLE_H
#include <fstream>
#include "question.h"

/**
@brief Класс, работающий с чтением файла.
*/
class filehandle
{
public:
    /**
    @brief Создание входящего файлового потока
    */
    std::ifstream fin;
    /**
    @brief Создание исходящего файлового потока
    */
    std::ofstream fout;
    /**
    @brief Конструктор
    @param ()
    */
    filehandle();
    /**
    @brief Вписать в файл вопрос
    @param question qobj
    */
    void writetofile(question qobj);
    /**
    @brief Считать с файла позицию
    @param int pos
    */
    question readfromfile(int pos);
    /**
    @brief Считать в файл
    @param ()
    */
    QString getinfooffile();
};

#endif // FILEHANDLE_H
