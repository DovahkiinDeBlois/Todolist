#include "todo_item.h"
#include "ui_todo_item.h"

todo_item::todo_item(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::todo_item)
{
    ui->setupUi(this);
    this->scs_init();
}

todo_item::~todo_item()
{
    delete ui;
}

void todo_item::scs_init(){
    connect(this->ui->btn_date, &QPushButton::clicked, this, &todo_item::show_date);
}

void todo_item::show_date(){
    if (!show_date_flag){
        choose_date = new QCalendarWidget(this);
        choose_date->show();
        choose_date->resize(256,560);
        QPoint btm_date_pos = this->ui->btn_date->pos();
        QSize btm_date_size = this->ui->btn_date->size();
        QPoint win_date_pos = this->ui->win_date->pos();
        QSize win_date_size = this->ui->win_date->size();

        choose_date->move(btm_date_pos.x() + win_date_pos.x(), btm_date_pos.y()+btm_date_size.height()+win_date_pos.y());
        show_date_flag = true;
    }
}
