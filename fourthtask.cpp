#include "fourthtask.h"
#include "ui_fourthtask.h"

FourthTask::FourthTask(QWidget *parent) :
    BaseDialog(parent),
    vector(26),
    ui(new Ui::FourthTask)
{
    ui->setupUi(this);
    init_task_data();
}

void FourthTask::init_task_data(){
    QString output = "";
    for(int i = 0; i < 26; ++i){
        vector[i] = 'a' + i;
        output.append('a' + i);
    }
    ui->containerItems->setText(output);
}

FourthTask::~FourthTask()
{
    delete ui;
}

void FourthTask::on_fwdButton_clicked()
{
    QString output = "";
    for(int i = 0; i < static_cast<int>(vector.size()); ++i){
        output.append(vector[i]);
    }
    ui->result_text->setText(output);
}

void FourthTask::on_rewButton_clicked()
{

    QString output = "";
    for(int i = static_cast<int>(vector.size()) - 1; i >= 0; --i){
        output.append(vector[i]);
    }
    ui->result_text->setText(output);
}
