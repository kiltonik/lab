#include "sixthtask.h"
#include "ui_sixthtask.h"
#include "utils.h"
#include <QMessageBox>
#include <utility>


using namespace std;


SixthTask::SixthTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SixthTask),
    dates(10000)
{
    ui->setupUi(this);
}

SixthTask::~SixthTask()
{
    delete ui;
}

void SixthTask::on_add_date_clicked()
{
    QString date = ui->date_edit->text();
    if(date.isEmpty()){
        QMessageBox error(this);
        error.setText("Date can not be empty");
        error.exec();
    }
    else{
        int formated_date = this->
                convert_date_to_numeric_yy_mm_dd(date.toStdString());
        if(formated_date == -1){
            QMessageBox error(this);
            error.setText("Date format is not acceptable."
"\nUse one of the listed bellow:"
"\n1. MmmYY"
"\n2. MmmYYYY"
"\n3. dd.mm.yyyy"
"\n4. yyyy.mm.dd"
"\nComma, dot or slash could be used as separator in cases 3-4");
            error.exec();
        }
        else{
            ui->date_edit->clear();
            int i = this->dates.size() - 1;
            for(
                i;
                i > 0 && dates[i-1].second < formated_date;
                i--)
                    dates[i] = dates[i-1];
            dates[i] = make_pair(date.toStdString(), formated_date);
            ui->dates_list->clear();
            for(
                auto i = dates.begin();
                i != dates.end();
                i++)
                ui->dates_list->addItem(QString::fromStdString((*i).first));
        }
    }
}

int SixthTask::convert_date_to_numeric_yy_mm_dd(std::string date){
    if(Utils::date_in_mmm_yy(date))
        return stoi(date.substr(3, 2)) * 10000 +
                Utils::month_to_number(date.substr(0, 3)) * 100;
    else if(Utils::date_in_mmm_yyyy(date))
        return stoi(date.substr(5, 2)) * 10000 +
                Utils::month_to_number(date.substr(0, 3)) * 100;
    else if(Utils::date_in_dd_mm_yyyy(date))
        return stoi(date.substr(8, 4)) * 10000 +
                stoi(date.substr(3, 2)) * 100 +
                stoi(date.substr(0, 2));
    else if(Utils::date_in_yyyy_mm_dd(date))
        return stoi(date.substr(2, 4)) * 10000 +
                stoi(date.substr(5, 2)) * 100 +
                stoi(date.substr(8, 2));
    else return -1;
}

void SixthTask::on_clear_list_button_clicked()
{
    ui->dates_list->clear();
    this->dates.~Vector();
    this->dates = Vector<std::pair<std::string, int>>(10000);
}
