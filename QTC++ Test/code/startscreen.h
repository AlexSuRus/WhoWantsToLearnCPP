#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QDialog>

namespace Ui {
class startscreen;
}
/**
@brief Класс, реализующий стартовое меню.
*/
class startscreen : public QDialog
{
    Q_OBJECT
    
public:
    /**
    @brief Подключение стартового экрана.
    @param QWidget *parent
    */
    explicit startscreen(QWidget *parent = 0);
    /**
    @brief Деструктор.
    */
    ~startscreen();
    
private slots:
    void on_qbutton_clicked();

    void on_kbcbutton_clicked();

private:
    Ui::startscreen *ui;
};

#endif // STARTSCREEN_H
