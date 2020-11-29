//
// Created by jarillo on 28/11/20.
//

#include "Resistencias.h"
#include "Mainwindow.h"
#include "./ui_Resistencias.h"
#include <iostream>
using namespace std;
const int x=4;

Resistenciasven::Resistenciasven(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Resistenciasven)

{
    ui->setupUi(this);
    initialize_colorcombos();

    connect(ui->B4, &QRadioButton::clicked,
            this, &Resistenciasven::bands_4);
    connect(ui->B5, &QRadioButton::clicked,
            this, &Resistenciasven::bands_5);
    connect(ui->Ok_Res, &QPushButton::clicked,
            this, &Resistenciasven::show_menu);
    connect(ui->Col_Val, &QPushButton::clicked,
            this, &Resistenciasven::Col_Val);
}
Resistenciasven::~Resistenciasven()
{
    delete ui;
}
void Resistenciasven::bands_4() {
    initialize_colorcombos();

}
void Resistenciasven::bands_5()
{
    ui->kColor5->setVisible(1);
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
    ui->kColor1->setColors(colors);
    ui->kColor2->setColors(colors);
    ui->kColor3->setColors(colors);
    ui->kColor4->setColors(colors);
    ui->kColor5->setColors(col2);
}
//////////////////////////////////////////////////////
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

void Resistenciasven::initialize_colorcombos()
{
    ui->kColor5->setVisible(0);
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
    ui->kColor1->setColors(colors);
    ui->kColor2->setColors(colors);
    ui->kColor3->setColors(colors);
    ui->kColor4->setColors(col2);
}

void Resistenciasven::Col_Val() {
    string c,c1,c2,c3,c4,c5;
    bool x;
    x = ui->B4->isChecked();
    if (x==1) {
        c1 = Resistenciasven::B1();
        c2 = Resistenciasven::B2();
        c3 = Resistenciasven::B3_4();
        c4 = Resistenciasven::B4_4();
        string o=" Ohms";
        c = c1 + c2 + c3 + o + c4;
        cout << c1 + c2 + c3 + c4 << " Ohms" << endl;
        char cuenta[20];
        strcpy(cuenta, c.c_str());
        ui->ValorC->setText(cuenta);
    }else if (x==0){
        c1 = Resistenciasven::B1();
        c2 = Resistenciasven::B2();
        c3 = Resistenciasven::B3();
        c4 = Resistenciasven::B4();
        c5 = Resistenciasven::B5();
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

///////////////////////////////////////////////
basic_string<char> Resistenciasven::B1(){
    string a;
    const QColor b=ui->kColor1->color();
    if (b==Colores::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==Colores::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==Colores::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==Colores::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==Colores::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==Colores::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==Colores::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==Colores::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==Colores::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==Colores::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
///////////////////////////////
basic_string<char> Resistenciasven::B2(){
    string a;
    const QColor b=ui->kColor2->color();
    if (b==Colores::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==Colores::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==Colores::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==Colores::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==Colores::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==Colores::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==Colores::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==Colores::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==Colores::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==Colores::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
///////////////////////////////
basic_string<char> Resistenciasven::B3(){
    string a;
    const QColor b=ui->kColor3->color();
    if (b==Colores::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==Colores::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==Colores::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==Colores::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==Colores::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==Colores::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==Colores::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==Colores::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==Colores::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==Colores::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
///////////////////////////////
basic_string<char> Resistenciasven::B3_4(){
    string a;
    const QColor b=ui->kColor3->color();
    if (b==Colores::Negro){
        cout<<"Negro"<<endl;
        a="";
    }else if (b==Colores::Marron){
        cout<<"Marron"<<endl;
        a="0";
    }else if (b==Colores::Rojo){
        cout<<"Rojo"<<endl;
        a="00";
    }else if (b==Colores::Naranja){
        cout<<"Naranja"<<endl;
        a=" K";
    }else if (b==Colores::Amarillo){
        cout<<"Amarillo"<<endl;
        a="0 K";
    }else if (b==Colores::Verde){
        cout<<"Verde"<<endl;
        a="00 K";
    }else if (b==Colores::Azul){
        cout<<"Azul"<<endl;
        a=" M";
    }else if (b==Colores::Violeta){
        cout<<"Violeta"<<endl;
        a="0 M";
    }else if (b==Colores::Gris){
        cout<<"Gris"<<endl;
        a="00 M";
    }else if (b==Colores::Blanco){
        cout<<"Blanco"<<endl;
        a="G";
    }
    return a;
}
///////////////////////////////
basic_string<char> Resistenciasven::B4(){
    string a;
    const QColor b=ui->kColor4->color();
    if (b==Colores::Negro){
        cout<<"Negro"<<endl;
        a="";
    }else if (b==Colores::Marron){
        cout<<"Marron"<<endl;
        a="0";
    }else if (b==Colores::Rojo){
        cout<<"Rojo"<<endl;
        a="00";
    }else if (b==Colores::Naranja){
        cout<<"Naranja"<<endl;
        a=" K";
    }else if (b==Colores::Amarillo){
        cout<<"Amarillo"<<endl;
        a="0 K";
    }else if (b==Colores::Verde){
        cout<<"Verde"<<endl;
        a="00 K";
    }else if (b==Colores::Azul){
        cout<<"Azul"<<endl;
        a=" M";
    }else if (b==Colores::Violeta){
        cout<<"Violeta"<<endl;
        a="0 M";
    }else if (b==Colores::Gris){
        cout<<"Gris"<<endl;
        a="00 M";
    }else if (b==Colores::Blanco){
        cout<<"Blanco"<<endl;
        a="G";
    }
    return a;
}
///////////////////////////////
basic_string<char> Resistenciasven::B4_4(){
    string a;
    const QColor b=ui->kColor4->color();
    if (b==Colores::Plata){
        cout<<"Negro"<<endl;
        a=" +-10%";
    }else if (b==Colores::Oro){
        cout<<"Marron"<<endl;
        a=" +-5%";
    }else if (b==Colores::Rojo){
        cout<<"Rojo"<<endl;
        a=" +-2%";
    }else if (b==Colores::Marron){
        cout<<"Naranja"<<endl;
        a=" +-1%";
    }else if (b==Colores::Verde){
        cout<<"Amarillo"<<endl;
        a=" +-0.5%";
    }else if (b==Colores::Azul){
        cout<<"Verde"<<endl;
        a=" +-0.25%";
    }else if (b==Colores::Violeta){
        cout<<"Azul"<<endl;
        a=" +-0.1%";
    }
    return a;
}
///////////////////////////////
basic_string<char> Resistenciasven::B5(){
    string a;
    const QColor b=ui->kColor5->color();
    if (b==Colores::Plata){
        cout<<"Negro"<<endl;
        a=" +-10%";
    }else if (b==Colores::Oro){
        cout<<"Marron"<<endl;
        a=" +-5%";
    }else if (b==Colores::Rojo){
        cout<<"Rojo"<<endl;
        a=" +-2%";
    }else if (b==Colores::Marron){
        cout<<"Naranja"<<endl;
        a=" +-1%";
    }else if (b==Colores::Verde){
        cout<<"Amarillo"<<endl;
        a=" +-0.5%";
    }else if (b==Colores::Azul){
        cout<<"Verde"<<endl;
        a=" +-0.25%";
    }else if (b==Colores::Violeta){
        cout<<"Azul"<<endl;
        a=" +-0.1%";
    }
    return a;
}
///////////////////////////////////////////////


void Resistenciasven::show_menu()
{
    cout<<"Cerrando ventana resistencias"<<endl;
    Resistenciasven res;
    res.close();
}