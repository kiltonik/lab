#ifndef FOURTHTASK_H
#define FOURTHTASK_H

#include "vector.h"
#include "basedialog.h"


namespace Ui {
class FourthTask;
}

class FourthTask : public BaseDialog
{
    Q_OBJECT

public:
    explicit FourthTask(QWidget *parent = nullptr);
    ~FourthTask();

private slots:
    void on_fwdButton_clicked();

    void on_rewButton_clicked();

private:
    Vector<char> vector;
    void init_task_data();
    Ui::FourthTask *ui;
};

#endif // FOURTHTASK_H
