#include "twelfthtask.h"
#include "ui_twelfthtask.h"
#include <QFileDialog>


TwelfthTask::TwelfthTask(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::TwelfthTask)
{
    ui->setupUi(this);
    ui->field_selector->addItems({
                                     "Date",
                                     "Author",
                                     "Header key word",
                                     "Publishing house"
                                 });
    ui->field_selector->setCurrentIndex(0);
}

TwelfthTask::~TwelfthTask()
{
    delete ui;
}

//Здесь будет выбран файл, fileName - его путь
//Однако может быть и null. На это сделал проверку далее
void TwelfthTask::on_select_file_button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
                this,
                "Choose file",
                "/home"
                );
    ui->file_edit->setText(fileName);
}

// Пользователь нажал на кнопку прочитать файл
// Надо считать только нужные данные
void TwelfthTask::on_read_file_button_clicked()
{
    if(ui->file_edit->text().isEmpty())
        showErrorMessage("You have to choose file first");
    else{
        // Поле по которому надо фильтровать
        // Но его ещё нужно привести в формат, в котором будешь записывать
        // Тут пока просто текст из спинера выбора поля
        QString field = ui->field_selector->currentText();

        //Значение по которому фильтровать
        QString field_value = ui->field_edit->text();

        //Этим методом в цикле закидываешь в виде QString записи
//        ui->entries_list->addItem()
    }
}
