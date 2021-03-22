#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fourthtask.h"
#include "fifthtask.h"
#include "sixthtask.h"
#include "eighthtask.h"
#include "ninthtask.h"
#include "tenthtask.h"
#include "twelfthtask.h"


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

void MainWindow::on_task_eight_clicked()
{
    EighthTask dialog(this);
    dialog.setWindowTitle("Task 8");
    dialog.exec();
}

void MainWindow::on_task_ninth_clicked()
{
    NinthTask dialog(this);
    dialog.setWindowTitle("Task 9");
    dialog.exec();
}

void MainWindow::on_task_tenth_clicked()
{
    TenthTask dialog(this);
    dialog.setWindowTitle("Task 10");
    dialog.exec();
}

void MainWindow::on_task_twelfth_clicked()
{
    TwelfthTask dialog(this);
    dialog.setWindowTitle("Task 12");
    dialog.exec();
}
