#include "todo_table.h"
#include "ui_todo_table.h"

todo_table::todo_table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::todo_table)
{
    ui->setupUi(this);

    todo_item * test_TDI = new todo_item(this->ui->TDI_tables);
    test_TDI->move(0,0);
    test_TDI->resize(741, 131);
}

todo_table::~todo_table()
{
    delete ui;
}
