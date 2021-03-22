#include "ninthtask.h"
#include "ui_ninthtask.h"

NinthTask::NinthTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NinthTask)
{
    ui->setupUi(this);
}

NinthTask::~NinthTask()
{
    delete ui;
}

//Здесь нажали на кнопку вычилсить и надо замеры сделать
void NinthTask::on_pushButton_clicked()
{
    //Сюда подставь время для вектора (QString)
//    ui->vector_time->setText();

    //Сюда подставь время для списка (QString)
//    ui->list_time->setText();
}
