//
// Created by jarillo on 28/11/20.
//

#ifndef RESISTENCIAS_MAINWINDOW_H
#define RESISTENCIAS_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui{};

protected:

    void show_Resistencias();
};
#endif //RESISTENCIAS_MAINWINDOW_H
