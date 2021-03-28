#include "tenthtask.h"
#include "ui_tenthtask.h"
#include <QString>


TenthTask::TenthTask(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::TenthTask)
{
    ui->setupUi(this);
    std::vector<double> _vector;
    for (int i = 1; i <= 100; i++){
            _vector.push_back(i * i);
        }

    std::for_each(_vector.begin(), _vector.end(), [this] (double item){ui->squares_list->addItem(QString::number(item));});
    std::for_each(_vector.begin(), _vector.end(), [this] (double item){ui->origin_list->addItem(QString::number(sqrt(item)));});
}

TenthTask::~TenthTask()
{
    delete ui;
}
