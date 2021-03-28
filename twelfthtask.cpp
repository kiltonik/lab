#include "twelfthtask.h"
#include "ui_twelfthtask.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>


bool parseLine(QString line, QString field, QString search_key){
    QStringList params = line.split("|");
    for (const QString& item: params){
        QStringList keys = item.split(":");
        if (keys[0] == field){
            if (keys[1].contains(search_key)){
                return true;
            }
        }
    }
    return false;
}


TwelfthTask::TwelfthTask(QWidget *parent) :
    BaseDialog(parent),
    ui(new Ui::TwelfthTask)
{
    ui->setupUi(this);
    ui->field_selector->addItems({
                                     "Date",
                                     "Author",
                                     "Name",
                                     "Publishing house"
                                 });
    ui->field_selector->setCurrentIndex(0);
}

TwelfthTask::~TwelfthTask()
{
    delete ui;
}


void TwelfthTask::on_select_file_button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
                this,
                "Choose file",
                "/home"
                );
    ui->file_edit->setText(fileName);
}


void TwelfthTask::on_read_file_button_clicked()
{
    ui->entries_list->clear();
    if(ui->file_edit->text().isEmpty())
        showErrorMessage("You have to choose file first");
    else{
        QString field = ui->field_selector->currentText();
        QString field_value = ui->field_edit->text();

        QFile file(ui->file_edit->text());
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&file);
            while (!stream.atEnd()){
                QString line = stream.readLine();
                if (parseLine(line, field, field_value)){
                    ui->entries_list->addItem(line);
                }
            }
        }
        file.close();

    }
}
