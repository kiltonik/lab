#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#include <QDialog>

class BaseDialog : public QDialog
{
    Q_OBJECT
public:
    explicit BaseDialog(QWidget *parent = nullptr);
protected:
    void showErrorMessage(QString message);

signals:

};

#endif // BASEDIALOG_H
