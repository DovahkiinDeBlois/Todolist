#ifndef TODO_ITEM_H
#define TODO_ITEM_H

#include <QWidget>
#include <QSize>

# include "./../../../basic_definition/basic_definition.h"

namespace Ui {
class todo_item;
}

class todo_item : public QWidget
{
    Q_OBJECT

public:
    explicit todo_item(QWidget *parent = 0);
    // void set_wh(QSize wiget_size_list[todo_item_MAX]);
    ~todo_item();

private:
    Ui::todo_item *ui;
};

#endif // TODO_ITEM_H
