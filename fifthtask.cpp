#include "fifthtask.h"
#include "ui_fifthtask.h"
#include "utils.h"
#include "vector.h"


FifthTask::FifthTask(QWidget *parent) :
    BaseDialog(parent),
    items_vector(10000),
    vector_to_exclude(10000),
    ui(new Ui::FifthTask)
{
    ui->setupUi(this);

}

FifthTask::~FifthTask()
{
    delete ui;
}

bool FifthTask::checkEnteredString(QString string){
    if(string.isEmpty()){
       showErrorMessage("Item name can not be empty");
       return false;
    }
    else if(Utils::stringInEnglish(string.toStdString())){
        return true;
    }
    else{
        showErrorMessage("Item name must contain only latin letters");
        return false;
    }
}

void FifthTask::on_add_element_button_clicked()
{
    QString itemName = ui->element_to_add_edit->text();
    if(checkEnteredString(itemName)){
        this->items_vector[ui->items_list->count()] = itemName.toStdString();
        ui->items_list->addItem(itemName);
        ui->element_to_add_edit->clear();
    }
}



void FifthTask::on_sort_list_button_clicked()
{
    ui->sorted_list->clear();
    //Works only if i is string
    for(
        auto i = this->items_vector.begin();
        i != this->items_vector.end();
        i++
    ){
        if((*i)[0] == 'a'){
            ui->sorted_list->addItem(QString::fromStdString(*i));
        }
    }
}

void FifthTask::on_clear_items_list_button_clicked()
{
    ui->items_list->clear();
    this->items_vector.clear();
}



void FifthTask::on_clear_sorted_list_button_clicked()
{
    ui->sorted_list->clear();
}



void FifthTask::on_clear_list_to_exclude_button_clicked()
{
    ui->elements_to_exclude_list->clear();
    this->vector_to_exclude.clear();
}

void FifthTask::on_add_element_to_exclude_list_clicked()
{
    QString itemName = ui->element_to_exclude_edit->text();
    if(checkEnteredString(itemName)){
        this->vector_to_exclude[ui->items_list->count()]
                = itemName.toStdString();
        ui->elements_to_exclude_list->addItem(itemName);
        ui->element_to_exclude_edit->clear();
    }
}



void FifthTask::on_exclude_elements_from_list_clicked()
{
    ui->sorted_list->clear();
    for(
        auto i = this->items_vector.begin();
        i != this->items_vector.end();
        i++
    ) {
      if(!this->vector_to_exclude.contains((*i)))
          ui->sorted_list->addItem(QString::fromStdString(*i));
    }
}
