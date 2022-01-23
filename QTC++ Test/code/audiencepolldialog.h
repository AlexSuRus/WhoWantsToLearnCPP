#ifndef AUDIENCEPOLLDIALOG_H
#define AUDIENCEPOLLDIALOG_H

#include <QDialog>

namespace Ui {
class audiencepolldialog;
}
/**
@brief Класс, включающий в себя отрисовку
изображений.
*/
class audiencepolldialog : public QDialog
{
    Q_OBJECT
    
public:
    /**
    @brief Присваивание значений
    @param ()
    */
    void setvalues();
    /**
    @brief Разбивка очереди по случайному признаку
    @param int correctoption
    */
    void randomhistogramvalues(int correctoption);
    /**
    @brief Создание сверки ответа пользователя и верного
    @param QWidget *parent int answer
    */
    explicit audiencepolldialog(QWidget *parent = 0, int answer=1);
    /**
    @brief Деструктор
    @param ()
    */
    ~audiencepolldialog();
    /**
    @brief Создание графики
    @param QPaintEvent *event
    */
    void paintEvent(QPaintEvent *event);
    /**
    @brief Создание дистограмм
    @param QPainter *qp
    */
    void drawhistograms(QPainter *qp);
    
private:
    /**
    @brief Четыре варианта ответа
    @param int[4]
    */
    int option[4];
    Ui::audiencepolldialog *ui;
};

#endif // AUDIENCEPOLLDIALOG_H
