//
// Created by jarillo on 3/12/20.
//

#include "Iniciar_Bandas.h"
#include "Resistencias.h"
#include "Mainwindow.h"
#include "./ui_Resistencias.h"
#include <iostream>
using namespace std;

Bandasi::Bandasi(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Resistenciasven)
        {
    ui->setupUi(this);
        }
Bandasi::~Bandasi()
{
    delete ui;
}



void Bandas4::Inicializar() {
    std::cout << "Inicializando para 4 bandas" << std::endl;
    ui->kColor5->setVisible(0);
    cout<<"colores"<<endl;
    QList<QColor> colors;
    colors.append(Colores::Negro);       // NEGRO
    colors.append(Colores::Marron);  // MARRÓN
    colors.append(Colores::Rojo);     // ROJO
    colors.append(Colores::Naranja);  // NARANJA
    colors.append(Colores::Amarillo);   // AMARILLO
    colors.append(Colores::Verde);     // VERDE
    colors.append(Colores::Azul);    // AZUL
    colors.append(Colores::Violeta);   // VIOLETA
    colors.append(Colores::Gris); // GRIS
    colors.append(Colores::Blanco); // BLANCO
    QList<QColor> col2;
    col2.append(Colores::Plata);
    col2.append(Colores::Oro);
    col2.append(Colores::Rojo);
    col2.append(Colores::Marron);
    col2.append(Colores::Verde);
    col2.append(Colores::Azul);
    col2.append(Colores::Violeta);
    ui->ValorC->setText("Inicializado");
    ui->kColor1->setColors(colors);
    ui->kColor2->setColors(colors);
    ui->kColor3->setColors(colors);
    ui->kColor4->setColors(col2);
    cout<<"fin inicializado 4"<<endl;
}


void Bandas5::Inicializar() {
    std::cout << "Inicializando para 5 bandas" << std::endl;
    ui->kColor5->setVisible(1);
    ui->ValorC->setPlaceholderText("Valor Resistencia");
    QList<QColor> color4s;
    color4s.append(Colores::Negro);       // NEGRO
    color4s.append(Colores::Marron);  // MARRÓN
    color4s.append(Colores::Rojo);     // ROJO
    color4s.append(Colores::Naranja);  // NARANJA
    color4s.append(Colores::Amarillo);   // AMARILLO
    color4s.append(Colores::Verde);     // VERDE
    color4s.append(Colores::Azul);    // AZUL
    color4s.append(Colores::Violeta);   // VIOLETA
    color4s.append(Colores::Gris); // GRIS
    color4s.append(Colores::Blanco); // BLANCO
    QList<QColor> col24;
    col24.append(Colores::Plata);
    col24.append(Colores::Oro);
    col24.append(Colores::Rojo);
    col24.append(Colores::Marron);
    col24.append(Colores::Verde);
    col24.append(Colores::Azul);
    col24.append(Colores::Violeta);
    ui->kColor1->setColors(color4s);
    ui->kColor2->setColors(color4s);
    ui->kColor3->setColors(color4s);
    ui->kColor4->setColors(color4s);
    ui->kColor5->setColors(col24);
}


std::shared_ptr<Bandasi> Factoria::getBanda(TipoBanda tp) {
    switch (tp) {
        case TipoBanda::B4:
            return std::make_shared<Bandas4>();
        case TipoBanda::B5:
            return std::make_shared<Bandas5>();
    }
    return nullptr;
}

