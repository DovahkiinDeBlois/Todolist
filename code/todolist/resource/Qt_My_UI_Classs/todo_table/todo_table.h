#ifndef TODO_TABLE_H
#define TODO_TABLE_H

#include <QWidget>
# include <QVector>


# include "./../todo_item/todo_item.h"

namespace Ui {
class todo_table;
}

class todo_table : public QWidget
{
    Q_OBJECT

public:
    QVector<todo_item> qv_todo_item_list;
    explicit todo_table(QWidget *parent = 0);
    ~todo_table();

private:
    Ui::todo_table *ui;
};

#endif // TODO_TABLE_H
