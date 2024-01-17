#include "todolist_main.h"
#include "ui_todolist_main.h"

Todolist_Main::Todolist_Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Todolist_Main)
{
    ui->setupUi(this);
}

Todolist_Main::~Todolist_Main()
{
    delete ui;
}
