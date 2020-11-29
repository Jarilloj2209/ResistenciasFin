#include "Mainwindow.h"

#include <QApplication>

//cmake-build-debug/Mainwindow.cpp cmake-build-debug/Mainwindow.h cmake-build-debug/Resistencias.cpp cmake-build-debug/Resistencias.h cmake-build-debug/leyohm.cpp cmake-build-debug/leyohm.h
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}