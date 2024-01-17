#include "todo_item.h"
#include "ui_todo_item.h"

todo_item::todo_item(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::todo_item)
{
    ui->setupUi(this);
}

todo_item::~todo_item()
{
    delete ui;
}
