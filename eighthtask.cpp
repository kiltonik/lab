#include "eighthtask.h"
#include "ui_eighthtask.h"

EighthTask::EighthTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EighthTask)
{
    ui->setupUi(this);
}

EighthTask::~EighthTask()
{
    delete ui;
}

// Метод добавляет запись новую запись
void EighthTask::on_pushButton_clicked()
{
    QString item = ui->presence_edit->text(); //Введенная информация в формате день, студент.
    //Другие форматы я отсеку потом

    ui->presence_list->addItem(item);
}

//Метод будет закидывать в разные списки студентов на экране
void EighthTask::on_show_students_presence_clicked()
{
    //Метод ниже добавляет студентов, у которых >= 8
    //туда надо подставить QString
//    ui->students_all_present->addItem();

    //Метод добавляет студентов у кого меньше 8
    //Аналогично нужен QString
//    ui->students_some_present->addItem();
}

//Удали тут все локальные данные
void EighthTask::on_clear_data_clicked()
{
    ui->presence_list->clear();
    ui->students_all_present->clear();
    ui->students_some_present->clear();
}
