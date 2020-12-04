//
// Created by jarillo on 3/12/20.
//

#include "Iniciar_BandasT.h"
#include "Resistencias2.h"
#include "Mainwindow.h"
#include "./ui_Resistencias2.h"
#include <iostream>
using namespace std;

Bandasi2::Bandasi2(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Resistenciasven2)
{
    ui->setupUi(this);
}
Bandasi2::~Bandasi2()
{
    delete ui;
}



void Bandas4i2::Inicializar() {
    std::cout << "Inicializando para 4 bandas" << std::endl;
    ui->kColor5->setVisible(0);
    cout<<"colores"<<endl;
    QList<QColor> colors;
    colors.append(Colores2::Negro);       // NEGRO
    colors.append(Colores2::Marron);  // MARRÓN
    colors.append(Colores2::Rojo);     // ROJO
    colors.append(Colores2::Naranja);  // NARANJA
    colors.append(Colores2::Amarillo);   // AMARILLO
    colors.append(Colores2::Verde);     // VERDE
    colors.append(Colores2::Azul);    // AZUL
    colors.append(Colores2::Violeta);   // VIOLETA
    colors.append(Colores2::Gris); // GRIS
    colors.append(Colores2::Blanco); // BLANCO
    QList<QColor> col2;
    col2.append(Colores2::Plata);
    col2.append(Colores2::Oro);
    col2.append(Colores2::Rojo);
    col2.append(Colores2::Marron);
    col2.append(Colores2::Verde);
    col2.append(Colores2::Azul);
    col2.append(Colores2::Violeta);
    ui->ValorC->setText("Inicializado");
    ui->kColor1->setColors(colors);
    ui->kColor2->setColors(colors);
    ui->kColor3->setColors(colors);
    ui->kColor4->setColors(col2);
    cout<<"fin inicializado 4"<<endl;
}


void Bandas5i2::Inicializar() {
    std::cout << "Inicializando para 5 bandas" << std::endl;
    ui->kColor5->setVisible(1);
    ui->ValorC->setPlaceholderText("Valor Resistencia");
    QList<QColor> color4s;
    color4s.append(Colores2::Negro);       // NEGRO
    color4s.append(Colores2::Marron);  // MARRÓN
    color4s.append(Colores2::Rojo);     // ROJO
    color4s.append(Colores2::Naranja);  // NARANJA
    color4s.append(Colores2::Amarillo);   // AMARILLO
    color4s.append(Colores2::Verde);     // VERDE
    color4s.append(Colores2::Azul);    // AZUL
    color4s.append(Colores2::Violeta);   // VIOLETA
    color4s.append(Colores2::Gris); // GRIS
    color4s.append(Colores2::Blanco); // BLANCO
    QList<QColor> col24;
    col24.append(Colores2::Plata);
    col24.append(Colores2::Oro);
    col24.append(Colores2::Rojo);
    col24.append(Colores2::Marron);
    col24.append(Colores2::Verde);
    col24.append(Colores2::Azul);
    col24.append(Colores2::Violeta);
    ui->kColor1->setColors(color4s);
    ui->kColor2->setColors(color4s);
    ui->kColor3->setColors(color4s);
    ui->kColor4->setColors(color4s);
    ui->kColor5->setColors(col24);
}


std::shared_ptr<Bandasi2> Factoriai2::getBanda(TipoBandai2 tp) {
    switch (tp) {
        case TipoBandai2::B4:
            return std::make_shared<Bandas4i2>();
        case TipoBandai2::B5:
            return std::make_shared<Bandas5i2>();
    }
    return nullptr;
}

