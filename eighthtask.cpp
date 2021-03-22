#include "eighthtask.h"
#include "ui_eighthtask.h"
#include "regex"
#include <QMessageBox>


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

//В этом методе пропиши вызовы свои функций
//для распределения элементов по двум спискам на экране
// Метод вызывается при нажатии на кнопку
void EighthTask::on_show_students_presence_clicked()
{
    //Метод ниже добавляет студента, у которого >= 8 в нужный список
    //туда надо подставить QString
//    ui->students_all_present->addItem();

    //Метод добавляет студента у которого меньше 8 в нужный список
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

// Метод добавляет запись новую запись
void EighthTask::on_add_presence_clicked()
{
    QString item = ui->presence_edit->text(); //Введенная информация в формате день, студент.
    if(std::regex_match(
                item.begin(),
                item.end(),
                std::regex("\\d{1,2}, [A-Z][a-z]+"))){
        ui->presence_list->addItem(item);
        //Пропиши тут логику сохранения
    }
    else{
        QMessageBox error(this);
        error.setText("Wrong input format");
        error.exec();
    }
}
