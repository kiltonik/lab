#ifndef FOURTHTASK_H
#define FOURTHTASK_H

#include <QDialog>

namespace Ui {
class FourthTask;
}

class FourthTask : public QDialog
{
    Q_OBJECT

public:
    explicit FourthTask(QWidget *parent = nullptr);
    ~FourthTask();

private slots:
    void on_fwdButton_clicked();

    void on_rewButton_clicked();

private:
    void initUi();
    Ui::FourthTask *ui;
};

#endif // FOURTHTASK_H
