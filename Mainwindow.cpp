//
// Created by jarillo on 28/11/20.
//

#include "Mainwindow.h"
#include "./ui_MainWindow.h"
#include "Resistencias.h"
#include "Resistencias2.h"
#include "leyohm.h"
#include "Iniciar_Bandas.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->btnCodificador->setEnabled(false);
    //ui->actionCodificador->setEnabled(false);

    //connect(ui->btnDecodificador, &QPushButton::clicked,
       //     this, &MainWindow::show_Resistencias);

    connect(ui->actionValor, &QAction::triggered,
            this, &MainWindow::show_Resistencias);

    connect(ui->actionResistencias_a_valor, &QAction::triggered,
            this, &MainWindow::show_Resistencias2);

    connect(ui->actionColor, &QAction::triggered,
            this, &MainWindow::show_leyohm);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show_Resistencias()
{
    Resistenciasven res;
    res.exec();
}

void MainWindow::show_Resistencias2()
{
    Resistenciasven2 res;
    res.exec();
}
void MainWindow::show_leyohm()
{
    leyohm ley;
    ley.exec();
}