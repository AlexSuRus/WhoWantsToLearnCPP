#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>

namespace Ui {
class about;
}
/**
@brief Класс, представляющий собой настройку ui программы.
*/
class about : public QDialog
{
    Q_OBJECT
    
public:
    /**
    @brief Конструктор
    @param QWidget *parent инициализация родителя
    */
    explicit about(QWidget *parent = 0);
    /**
    @brief Деструктор
    */
    ~about();
    
private:
    Ui::about *ui;
};

#endif // ABOUT_H
