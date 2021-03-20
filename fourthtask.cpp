#include "fourthtask.h"
#include "ui_fourthtask.h"

FourthTask::FourthTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FourthTask)
{
    ui->setupUi(this);
    initUi();
}

void FourthTask::initUi(){
    ui->rewButton->setStyleSheet(ui->fwdButton->styleSheet());
}

FourthTask::~FourthTask()
{
    delete ui;
}

void FourthTask::on_fwdButton_clicked()
{

}

void FourthTask::on_rewButton_clicked()
{

}
