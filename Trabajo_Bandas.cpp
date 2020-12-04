//
// Created by jarillo on 3/12/20.
//

#include "Trabajo_Bandas.h"
#include "Resistencias.h"
#include "Mainwindow.h"
#include "./ui_Resistencias.h"
#include <iostream>
using namespace std;

TBanda::TBanda(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Resistenciasven) {
    ui->setupUi(this);
}
TBanda::~TBanda()
{
    delete ui;
}
//////////////////////////Definir Colores////////////////////////////
const QColor ColoresT::Negro = QColor(0, 0, 0);
const QColor ColoresT::Marron = QColor(152, 101, 54);
const QColor ColoresT::Rojo = QColor(255, 5, 5);
const QColor ColoresT::Naranja = QColor(255, 120, 47);
const QColor ColoresT::Amarillo = QColor(248, 255, 0);
const QColor ColoresT::Verde = QColor(0, 153, 1);
const QColor ColoresT::Azul = QColor(10, 0, 255);
const QColor ColoresT::Violeta = QColor(76, 40, 130);
const QColor ColoresT::Gris = QColor(156, 156, 156);
const QColor ColoresT::Blanco = QColor(255, 255, 255);
const QColor ColoresT::Plata = QColor(192, 192, 192);
const QColor ColoresT::Oro = QColor(212, 175, 55);
/////////////////////////Acciones/////////////////////////////
//////////////////////////////Banda4/////////////////////
basic_string<char> BandasT4::accionB1() {
    string a;
    const QColor b=ui->kColor1->color();
    if (b==ColoresT::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==ColoresT::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==ColoresT::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==ColoresT::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==ColoresT::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==ColoresT::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==ColoresT::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==ColoresT::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==ColoresT::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
//////////////////
basic_string<char> BandasT4::accionB2() {
    string a;
    const QColor b=ui->kColor2->color();
    if (b==ColoresT::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==ColoresT::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==ColoresT::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==ColoresT::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==ColoresT::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==ColoresT::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==ColoresT::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==ColoresT::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==ColoresT::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
////////////////////////////////
basic_string<char> BandasT4::accionB3(){
    string a;
    const QColor b=ui->kColor3->color();
    if (b==ColoresT::Negro){
        cout<<"Negro"<<endl;
        a="";
    }else if (b==ColoresT::Marron){
        cout<<"Marron"<<endl;
        a="0";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a="00";
    }else if (b==ColoresT::Naranja){
        cout<<"Naranja"<<endl;
        a=" K";
    }else if (b==ColoresT::Amarillo){
        cout<<"Amarillo"<<endl;
        a="0 K";
    }else if (b==ColoresT::Verde){
        cout<<"Verde"<<endl;
        a="00 K";
    }else if (b==ColoresT::Azul){
        cout<<"Azul"<<endl;
        a=" M";
    }else if (b==ColoresT::Violeta){
        cout<<"Violeta"<<endl;
        a="0 M";
    }else if (b==ColoresT::Gris){
        cout<<"Gris"<<endl;
        a="00 M";
    }else if (b==ColoresT::Blanco){
        cout<<"Blanco"<<endl;
        a="G";
    }
    return a;
}
///////////////////////////////
basic_string<char> BandasT4::accionB4(){
    string a;
    const QColor b=ui->kColor4->color();
    if (b==ColoresT::Plata){
        cout<<"Negro"<<endl;
        a=" +-10%";
    }else if (b==ColoresT::Oro){
        cout<<"Marron"<<endl;
        a=" +-5%";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a=" +-2%";
    }else if (b==ColoresT::Marron){
        cout<<"Naranja"<<endl;
        a=" +-1%";
    }else if (b==ColoresT::Verde){
        cout<<"Amarillo"<<endl;
        a=" +-0.5%";
    }else if (b==ColoresT::Azul){
        cout<<"Verde"<<endl;
        a=" +-0.25%";
    }else if (b==ColoresT::Violeta){
        cout<<"Azul"<<endl;
        a=" +-0.1%";
    }
    return a;
}
///////////////////////////////
basic_string<char> BandasT4::accionB5() {
    return "0";
}

//////////////////////////////Banda5/////////////////////
basic_string<char> BandasT5::accionB1() {
    string a;
    const QColor b=ui->kColor1->color();
    if (b==ColoresT::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==ColoresT::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==ColoresT::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==ColoresT::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==ColoresT::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==ColoresT::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==ColoresT::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==ColoresT::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==ColoresT::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
//////////////////
basic_string<char> BandasT5::accionB2() {
    string a;
    const QColor b=ui->kColor2->color();
    if (b==ColoresT::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==ColoresT::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==ColoresT::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==ColoresT::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==ColoresT::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==ColoresT::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==ColoresT::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==ColoresT::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==ColoresT::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
////////////////////////////////
basic_string<char> BandasT5::accionB3(){
    string a;
    const QColor b=ui->kColor3->color();
    if (b==ColoresT::Negro){
        cout<<"Negro"<<endl;
        a="0";
    }else if (b==ColoresT::Marron){
        cout<<"Marron"<<endl;
        a="1";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a="2";
    }else if (b==ColoresT::Naranja){
        cout<<"Naranja"<<endl;
        a="3";
    }else if (b==ColoresT::Amarillo){
        cout<<"Amarillo"<<endl;
        a="4";
    }else if (b==ColoresT::Verde){
        cout<<"Verde"<<endl;
        a="5";
    }else if (b==ColoresT::Azul){
        cout<<"Azul"<<endl;
        a="6";
    }else if (b==ColoresT::Violeta){
        cout<<"Violeta"<<endl;
        a="7";
    }else if (b==ColoresT::Gris){
        cout<<"Gris"<<endl;
        a="8";
    }else if (b==ColoresT::Blanco){
        cout<<"Blanco"<<endl;
        a="9";
    }
    return a;
}
///////////////////////////////
basic_string<char> BandasT5::accionB4(){
    string a;
    const QColor b=ui->kColor4->color();
    if (b==ColoresT::Negro){
        cout<<"Negro"<<endl;
        a="";
    }else if (b==ColoresT::Marron){
        cout<<"Marron"<<endl;
        a="0";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a="00";
    }else if (b==ColoresT::Naranja){
        cout<<"Naranja"<<endl;
        a=" K";
    }else if (b==ColoresT::Amarillo){
        cout<<"Amarillo"<<endl;
        a="0 K";
    }else if (b==ColoresT::Verde){
        cout<<"Verde"<<endl;
        a="00 K";
    }else if (b==ColoresT::Azul){
        cout<<"Azul"<<endl;
        a=" M";
    }else if (b==ColoresT::Violeta){
        cout<<"Violeta"<<endl;
        a="0 M";
    }else if (b==ColoresT::Gris){
        cout<<"Gris"<<endl;
        a="00 M";
    }else if (b==ColoresT::Blanco){
        cout<<"Blanco"<<endl;
        a="G";
    }
    return a;
}
///////////////////////////////
basic_string<char> BandasT5::accionB5() {
    string a;
    const QColor b=ui->kColor5->color();
    if (b==ColoresT::Plata){
        cout<<"Negro"<<endl;
        a=" +-10%";
    }else if (b==ColoresT::Oro){
        cout<<"Marron"<<endl;
        a=" +-5%";
    }else if (b==ColoresT::Rojo){
        cout<<"Rojo"<<endl;
        a=" +-2%";
    }else if (b==ColoresT::Marron){
        cout<<"Naranja"<<endl;
        a=" +-1%";
    }else if (b==ColoresT::Verde){
        cout<<"Amarillo"<<endl;
        a=" +-0.5%";
    }else if (b==ColoresT::Azul){
        cout<<"Verde"<<endl;
        a=" +-0.25%";
    }else if (b==ColoresT::Violeta){
        cout<<"Azul"<<endl;
        a=" +-0.1%";
    }
    return a;
}

/////////////////////////Acciones/////////////////////////////
std::shared_ptr<TBanda> FactoriaT::getBanda(TipoBandaT tp) {
    switch (tp) {
        case TipoBandaT::B4:
            return std::make_shared<BandasT4>();
        case TipoBandaT::B5:
            return std::make_shared<BandasT5>();
    }
    return nullptr;
}