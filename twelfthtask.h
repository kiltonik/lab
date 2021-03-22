#ifndef TWELFTHTASK_H
#define TWELFTHTASK_H

#include "basedialog.h"


namespace Ui {
class TwelfthTask;
}

class TwelfthTask : public BaseDialog
{
    Q_OBJECT

public:
    explicit TwelfthTask(QWidget *parent = nullptr);
    ~TwelfthTask();

private slots:
    void on_select_file_button_clicked();

    void on_read_file_button_clicked();

private:
    Ui::TwelfthTask *ui;
};

#endif // TWELFTHTASK_H
