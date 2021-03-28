#include "ninthtask.h"
#include "ui_ninthtask.h"
#include "indexlist.h"
#include "vector.h"
#include <chrono>
#include <QString>

NinthTask::NinthTask(QWidget *parent) :
    BaseDialog(parent),
    vector(100),
    ui(new Ui::NinthTask)
{
    ui->setupUi(this);
}

NinthTask::~NinthTask()
{
    delete ui;
}


void NinthTask::on_calculate_time_button_clicked()
{

//    for (int i = 0; i < 100; i++){
//        index_list.put(&i);
//    }
//    std::chrono::steady_clock::time_point list_begin = std::chrono::steady_clock::now();
//    int sth = index_list[99];
//    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - list_begin);
//    QString list_duration = QString::number(duration.count());

    std::chrono::steady_clock::time_point vector_begin = std::chrono::steady_clock::now();
    vector[99];
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - vector_begin);
    QString vector_duration = QString::number(duration.count());

    ui->vector_time->setText(vector_duration);
//    ui->list_time->setText(list_duration);
}
