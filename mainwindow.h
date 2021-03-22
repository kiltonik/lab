#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_task_fourth_clicked();

    void on_task_fifth_clicked();

    void on_task_six_clicked();

    void on_task_eight_clicked();

    void on_task_ninth_clicked();

    void on_task_tenth_clicked();

    void on_task_twelfth_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
