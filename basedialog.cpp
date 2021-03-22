#include "basedialog.h"
#include <QMessageBox>


BaseDialog::BaseDialog(QWidget *parent) : QDialog(parent)  {}

void BaseDialog::showErrorMessage(QString message){
    QMessageBox error(this);
    if(message.isEmpty())
        error.setText("Whoops, something went wrong");
    else
        error.setText(message);
    error.exec();
}


