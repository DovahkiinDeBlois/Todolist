#ifndef TODO_ITEM_H
#define TODO_ITEM_H

#include <QWidget>
#include <QSize>
# include <QCalendarWidget>

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
    // 链接槽函数的函数
    void scs_init();
    bool show_date_flag = false; // 判断当前是否有显示可供选择的日历

    // 日历变量，使用前请判断是否是空指针，不使用的时候设置为空指针
    QCalendarWidget * choose_date = nullptr;
    // 显示日历并选择
    void show_date();
};

#endif // TODO_ITEM_H
