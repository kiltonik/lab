#ifndef EIGHTHTASK_H
#define EIGHTHTASK_H

#include <QDialog>

namespace Ui {
class EighthTask;
}

class EighthTask : public QDialog
{
    Q_OBJECT

public:
    explicit EighthTask(QWidget *parent = nullptr);
    ~EighthTask();

private slots:
    void on_pushButton_clicked();

    void on_show_students_presence_clicked();

    void on_clear_data_clicked();

private:
    Ui::EighthTask *ui;
};

#endif // EIGHTHTASK_H
