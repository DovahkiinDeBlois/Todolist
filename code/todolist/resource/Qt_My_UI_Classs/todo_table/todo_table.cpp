#include "todo_table.h"
#include "ui_todo_table.h"

todo_table::todo_table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::todo_table)
{
    ui->setupUi(this);
}

todo_table::~todo_table()
{
    delete ui;
}
