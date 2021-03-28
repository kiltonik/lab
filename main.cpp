#include "mainwindow.h"
#include "seventhtask.h"
#include "iostream"
#include "QApplication"
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
        QApplication a(argc, argv);
        MainWindow w;
        w.setWindowTitle("Lab");
        w.show();
        return a.exec();
}
