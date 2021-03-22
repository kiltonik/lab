#ifndef NINTHTASK_H
#define NINTHTASK_H

#include "basedialog.h"


namespace Ui {
class NinthTask;
}

class NinthTask : public BaseDialog
{
    Q_OBJECT

public:
    explicit NinthTask(QWidget *parent = nullptr);
    ~NinthTask();

private slots:

    void on_calculate_time_button_clicked();

private:
    Ui::NinthTask *ui;
};

#endif // NINTHTASK_H
