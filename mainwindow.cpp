#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fourthtask.h"
#include "fifthtask.h"
#include "sixthtask.h"


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
    dialog.setWindowTitle("Task 4");
    dialog.exec();
}

void MainWindow::on_task_fifth_clicked()
{
    FifthTask dialog(this);
    dialog.setWindowTitle("Task 5");
    dialog.exec();
}

void MainWindow::on_task_six_clicked()
{
    SixthTask dialog(this);
    dialog.setWindowTitle("Task 6");
    dialog.exec();
}
