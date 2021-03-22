#ifndef NINTHTASK_H
#define NINTHTASK_H

#include <QDialog>

namespace Ui {
class NinthTask;
}

class NinthTask : public QDialog
{
    Q_OBJECT

public:
    explicit NinthTask(QWidget *parent = nullptr);
    ~NinthTask();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NinthTask *ui;
};

#endif // NINTHTASK_H
