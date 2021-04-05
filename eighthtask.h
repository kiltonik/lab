#ifndef EIGHTHTASK_H
#define EIGHTHTASK_H
#include "student.h"
#include <bitset>


#include "basedialog.h"


namespace Ui {
class EighthTask;
}

class EighthTask : public BaseDialog
{
    Q_OBJECT

public:
    explicit EighthTask(QWidget *parent = nullptr);
    ~EighthTask();

private slots:
    void on_show_students_presence_clicked();

    void on_clear_data_clicked();

    void on_add_presence_clicked();

private:
    std::vector<Student> students;
    Ui::EighthTask *ui;
};

#endif // EIGHTHTASK_H
