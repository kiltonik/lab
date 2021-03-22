#ifndef TENTHTASK_H
#define TENTHTASK_H

#include <QDialog>

namespace Ui {
class TenthTask;
}

class TenthTask : public QDialog
{
    Q_OBJECT

public:
    explicit TenthTask(QWidget *parent = nullptr);
    ~TenthTask();

private:
    Ui::TenthTask *ui;
};

#endif // TENTHTASK_H
