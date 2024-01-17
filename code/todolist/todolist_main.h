#ifndef TODOLIST_MAIN_H
#define TODOLIST_MAIN_H

#include <QMainWindow>

namespace Ui {
class Todolist_Main;
}

class Todolist_Main : public QMainWindow
{
    Q_OBJECT

public:
    explicit Todolist_Main(QWidget *parent = 0);
    ~Todolist_Main();

private:
    Ui::Todolist_Main *ui;
};

#endif // TODOLIST_MAIN_H
