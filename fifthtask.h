#ifndef FIFTHTASK_H
#define FIFTHTASK_H

#include <QDialog>
#include "vector.h"
#include <string>

namespace Ui {
class FifthTask;
}

class FifthTask : public QDialog
{
    Q_OBJECT

public:
    explicit FifthTask(QWidget *parent = nullptr);
    ~FifthTask();

private slots:
    void on_add_element_button_clicked();

    void on_sort_list_button_clicked();

    void on_clear_items_list_button_clicked();

    void on_clear_sorted_list_button_clicked();

    void on_clear_list_to_exclude_button_clicked();

    void on_add_element_to_exclude_list_clicked();

    void on_exclude_elements_from_list_clicked();

private:
    Vector<std::string> items_vector;
    Vector<std::string> vector_to_exclude;
    Ui::FifthTask *ui;
    bool checkEnteredString(QString);
};

#endif // FIFTHTASK_H
