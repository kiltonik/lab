#ifndef SIXTHTASK_H
#define SIXTHTASK_H

#include <QDialog>
#include "vector.h"
#include <utility>
#include <string>


namespace Ui {
class SixthTask;
}

class SixthTask : public QDialog
{
    Q_OBJECT

public:
    explicit SixthTask(QWidget *parent = nullptr);
    ~SixthTask();

private slots:
    void on_add_date_clicked();

    void on_clear_list_button_clicked();

private:
    Ui::SixthTask *ui;
    Vector<std::pair<std::string, int>> dates;
    //We are ensured that dates are within one century
    int convert_date_to_numeric_yy_mm_dd(std::string date);
};

#endif // SIXTHTASK_H
