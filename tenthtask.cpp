#include "tenthtask.h"
#include "ui_tenthtask.h"


//Здксь прямо в конструкторе добавляй циклом элементы
TenthTask::TenthTask(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::TenthTask)
{
    ui->setupUi(this);
    //Здесь квадраты (QString)
//    ui->squares_list->addItem();
    //Здесь корни (QString)
//    ui->origin_list->addItem();
}

TenthTask::~TenthTask()
{
    delete ui;
}
