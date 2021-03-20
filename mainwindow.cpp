#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fourthtask.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_task_fourth_clicked()
{
    FourthTask dialog(this);
//    dialog.show();
    dialog.exec();
}
