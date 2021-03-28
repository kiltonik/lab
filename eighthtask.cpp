#include "eighthtask.h"
#include "ui_eighthtask.h"
#include <QRegExp>
#include <bitset>
#include <iostream>


EighthTask::EighthTask(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::EighthTask)
{
    ui->setupUi(this);
}

EighthTask::~EighthTask()
{
    delete ui;
}


void EighthTask::on_show_students_presence_clicked()
{
    ui->students_all_present->clear();
    ui->students_some_present->clear();
    for (auto student: students){
        int attendance = student.get_attendance();
        QString out = "Name: " + student.get_name() + ", Present: " + QString::number(attendance);
        if (attendance >= 8){
            ui->students_all_present->addItem(out);
        }
        else{
            ui->students_some_present->addItem(out);
        }
    }
}

void EighthTask::on_clear_data_clicked()
{
    ui->presence_list->clear();
    ui->students_all_present->clear();
    ui->students_some_present->clear();
}

void EighthTask::on_add_presence_clicked()
{
    QString item = ui->presence_edit->text();
    if(item.contains(QRegExp("\\d{1,2}, [A-Z][a-z]+"))){
        ui->presence_list->addItem(item);
        QStringList tokens = item.split(", ");
        int day = tokens[0].toInt();
        if (day > 0 && day <= 12){
            QString name = tokens[1];
            bool flag = false;
            for (int i = 0; i < students.size(); i++){
                if (students[i].get_name() == name){
                    students[i].set_attendance(day);
                    flag = true;
                }
            }
            if (!flag){
                std::bitset<12> attendance_set;
                attendance_set[day] = true;
                students.push_back(Student(name, attendance_set));
            }
        }
        else
            showErrorMessage("Day must be between 1 and 12");
    }
    else
        showErrorMessage("Wrong input format");

}
