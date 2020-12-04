//
// Created by jarillo on 28/11/20.
//

#include "Resistencias.h"
#include "Iniciar_Bandas.h"
#include "Trabajo_Bandas.h"
#include "Mainwindow.h"
#include <iostream>
using namespace std;

Resistenciasven::Resistenciasven(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Resistenciasven)
{
    ui->setupUi(this);
    connect(ui->B4, &QRadioButton::clicked,
            this, &Resistenciasven::bands_4);
    connect(ui->B5, &QRadioButton::clicked,
            this, &Resistenciasven::bands_5);
    //connect(ui->Ok_Res, &QPushButton::clicked,
      //      this, &Resistenciasven::show_menu);
    connect(ui->Col_Val, &QPushButton::clicked,
            this, &Resistenciasven::Col_Val);

}
Resistenciasven::~Resistenciasven()
{
    delete ui;
}
///////////////Inicialiar_Bandas///////////////////////////////
void Resistenciasven::bands_4() {
    cout<<"entrando"<<endl;
    Factoria Fr;
    shared_ptr<Bandasi> N4Bandas = Fr.getBanda(TipoBanda ::B4);
    N4Bandas->Inicializar();
}

void Resistenciasven::bands_5() {
    Factoria fr;
    std::shared_ptr<Bandasi> N5bandas = fr.getBanda(TipoBanda ::B5);
    N5bandas->Inicializar();
}

void Resistenciasven::Col_Val() {
    FactoriaT ftr;
    std::shared_ptr<TBanda> T4Bandas = ftr.getBanda(TipoBandaT ::B4);
    std::shared_ptr<TBanda> T5Bandas = ftr.getBanda(TipoBandaT ::B5);

    string c,c1,c2,c3,c4,c5;
    bool x;
    x = ui->B4->isChecked();
    if (x==1) {
        c1 = T4Bandas->accionB1();
        c2 = T4Bandas->accionB2();
        c3 = T4Bandas->accionB3();
        c4 = T4Bandas->accionB4();
        string o=" Ohms";
        c = c1 + c2 + c3 + o + c4;
        cout << c1 + c2 + c3 + c4 << " Ohms" << endl;
        char cuenta[20];
        strcpy(cuenta, c.c_str());
        ui->ValorC->setText(cuenta);
    }else if (x==0){
        c1 = T5Bandas->accionB1();
        c2 = T5Bandas->accionB2();
        c3 = T5Bandas->accionB3();
        c4 = T5Bandas->accionB4();
        c5 = T5Bandas->accionB5();
        string o=" Ohms";
        c = c1 + c2 + c3 + c4+ o + c5;
        cout << c1 + c2 + c3 + c4 + c5<< " Ohms" << endl;
        char cuenta[30];
        strcpy(cuenta, c.c_str());
        ui->ValorC->setText(cuenta);
    }else{
        ui->ValorC->setText("Elige No. Bandas");
    }
}

//////////////////////////Definir Colores////////////////////////////
const QColor Colores::Negro = QColor(0, 0, 0);
const QColor Colores::Marron = QColor(152, 101, 54);
const QColor Colores::Rojo = QColor(255, 5, 5);
const QColor Colores::Naranja = QColor(255, 120, 47);
const QColor Colores::Amarillo = QColor(248, 255, 0);
const QColor Colores::Verde = QColor(0, 153, 1);
const QColor Colores::Azul = QColor(10, 0, 255);
const QColor Colores::Violeta = QColor(76, 40, 130);
const QColor Colores::Gris = QColor(156, 156, 156);
const QColor Colores::Blanco = QColor(255, 255, 255);
const QColor Colores::Plata = QColor(192, 192, 192);
const QColor Colores::Oro = QColor(212, 175, 55);
//////////////////////////////////////////////////////

