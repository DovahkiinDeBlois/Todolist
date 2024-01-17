#ifndef TODO_ITEM_H
#define TODO_ITEM_H

#include <QWidget>

namespace Ui {
class todo_item;
}

class todo_item : public QWidget
{
    Q_OBJECT

public:
    explicit todo_item(QWidget *parent = 0);
    ~todo_item();

private:
    Ui::todo_item *ui;
};

#endif // TODO_ITEM_H
