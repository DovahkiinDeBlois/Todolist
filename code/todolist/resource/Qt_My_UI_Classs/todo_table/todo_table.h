#ifndef TODO_TABLE_H
#define TODO_TABLE_H

#include <QWidget>

namespace Ui {
class todo_table;
}

class todo_table : public QWidget
{
    Q_OBJECT

public:
    explicit todo_table(QWidget *parent = 0);
    ~todo_table();

private:
    Ui::todo_table *ui;
};

#endif // TODO_TABLE_H
