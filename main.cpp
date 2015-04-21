#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//todya is a fine day!
    MainWindow w;
    w.show();

    return a.exec();
}
