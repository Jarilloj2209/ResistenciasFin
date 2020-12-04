//
// Created by jarillo on 2/12/20.
//

#include "Resistencias2.h"
#include "Mainwindow.h"
#include "./ui_Resistencias2.h"
#include <iostream>
using namespace std;


Resistenciasven2::Resistenciasven2(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Resistenciasven2)
{
    ui->setupUi(this);
    initialize_colorcombos4();

    connect(ui->Col_Val, &QPushButton::clicked,
          this, &Resistenciasven2::Col_Val);
    connect(ui->B5, &QRadioButton::clicked,
            this, &Resistenciasven2::b5);
    connect(ui->B4, &QRadioButton::clicked,
            this, &Resistenciasven2::b4);


}
Resistenciasven2::~Resistenciasven2()
{
    delete ui;
}

//////////////////////////////////////////////////////
const QColor Colores2::Negro = QColor(0, 0, 0);
const QColor Colores2::Marron = QColor(152, 101, 54);
const QColor Colores2::Rojo = QColor(255, 5, 5);
const QColor Colores2::Naranja = QColor(255, 120, 47);
const QColor Colores2::Amarillo = QColor(248, 255, 0);
const QColor Colores2::Verde = QColor(0, 153, 1);
const QColor Colores2::Azul = QColor(10, 0, 255);
const QColor Colores2::Violeta = QColor(76, 40, 130);
const QColor Colores2::Gris = QColor(156, 156, 156);
const QColor Colores2::Blanco = QColor(255, 255, 255);
const QColor Colores2::Plata = QColor(192, 192, 192);
const QColor Colores2::Oro = QColor(212, 175, 55);
//////////////////////////////////////////////////////

void Resistenciasven2::initialize_colorcombos4()
{
    ui->ValorC->setPlaceholderText("Valor Resistencia");
    ui->kColor5->setVisible(0);
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
    ui->kColor1->setColors(colors);
    ui->kColor2->setColors(colors);
    ui->kColor3->setColors(colors);
    ui->kColor4->setColors(col2);
}

void Resistenciasven2::initialize_colorcombos5()
{
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
    ui->kColor1->setColors(colors);
    ui->kColor2->setColors(colors);
    ui->kColor3->setColors(colors);
    ui->kColor4->setColors(colors);
    ui->kColor5->setColors(col2);
}

void Resistenciasven2::Col_Val() {
    bool b4= ui->B4->isChecked();
    bool b5= ui->B5->isChecked();
    if (b4==true)
    {
        cambio4();
    }else if (b5==true){
        cambio5();
    }else {
        ui->ValorC->setPlaceholderText("Error de elección");
    }



}
void Resistenciasven2::b4() {
    ui->kColor5->setVisible(0);
    initialize_colorcombos4();
}
void Resistenciasven2::b5() {
    ui->kColor5->setVisible(1);
    initialize_colorcombos5();
}
void Resistenciasven2::cambio4() {
    const QString a = ui->ValorC->text();
    string valor = a.toStdString();
    cout << "std "<<valor<<endl;
    int v=valor.length();
    cout<<v<<endl;
    int count=0;
    for(int i=0; i <=  v; i=i+1)
    {
        char y=(valor[i]);
        string x(1, y);

        if (x == "0")
        {
            count=count+1;
        }

    }

    string x1(1, valor[0]);
    string x2(1, valor[1]);
    if (count==0)
    {
        ui->kColor3->setColor(Colores2::Negro);
    }else if (count==1)
    {
        ui->kColor3->setColor(Colores2::Marron);
    }
    else if (count==2)
    {
        ui->kColor3->setColor(Colores2::Rojo);
    }else if (count==3)
    {
        ui->kColor3->setColor(Colores2::Naranja);
    }else if (count==4)
    {
        ui->kColor3->setColor(Colores2::Amarillo);
    }else if (count==5)
    {
        ui->kColor3->setColor(Colores2::Verde);
    }else if (count==6)
    {
        ui->kColor3->setColor(Colores2::Azul);
    }else if (count==7)
    {
        ui->kColor3->setColor(Colores2::Violeta);
    }else if (count==8)
    {
        ui->ValorC->setText("Fuera de rango");
    }

    if (x1=="0")
    {
        ui->kColor1->setColor(Colores2::Negro);
    }else if (x1=="1")
    {
        ui->kColor1->setColor(Colores2::Marron);
    }
    else if (x1=="2")
    {
        ui->kColor1->setColor(Colores2::Rojo);
    }else if (x1=="3")
    {
        ui->kColor1->setColor(Colores2::Naranja);
    }else if (x1=="4")
    {
        ui->kColor1->setColor(Colores2::Amarillo);
    }else if (x1=="5")
    {
        ui->kColor1->setColor(Colores2::Verde);
    }else if (x1=="6")
    {
        ui->kColor1->setColor(Colores2::Azul);
    }else if (x1=="7")
    {
        ui->kColor1->setColor(Colores2::Violeta);
    }else if (x1=="8")
    {
        ui->kColor1->setColor(Colores2::Gris);
    }else if (x1=="9")
    {
        ui->kColor1->setColor(Colores2::Blanco);
    }

    if (x2=="0")
    {
        ui->kColor2->setColor(Colores2::Negro);
    }else if (x2=="1")
    {
        ui->kColor2->setColor(Colores2::Marron);
    }
    else if (x2=="2")
    {
        ui->kColor2->setColor(Colores2::Rojo);
    }else if (x2=="3")
    {
        ui->kColor2->setColor(Colores2::Naranja);
    }else if (x2=="4")
    {
        ui->kColor2->setColor(Colores2::Amarillo);
    }else if (x2=="5")
    {
        ui->kColor2->setColor(Colores2::Verde);
    }else if (x2=="6")
    {
        ui->kColor2->setColor(Colores2::Azul);
    }else if (x2=="7")
    {
        ui->kColor2->setColor(Colores2::Violeta);
    }else if (x2=="8")
    {
        ui->kColor2->setColor(Colores2::Gris);
    }else if (x2=="9")
    {
        ui->kColor2->setColor(Colores2::Blanco);
    }

    const QString tol = (ui->comboTol->currentText());
    string tole = tol.toStdString();
    cout<<tole<<endl;
    if (tole=="10%")
    {
        ui->kColor4->setColor(Colores2::Plata);
    }else if (tole=="5%")
    {
        ui->kColor4->setColor(Colores2::Oro);
    }else if (tole=="1%")
    {
        ui->kColor4->setColor(Colores2::Marron);
    }else if (tole=="0.5%")
    {
        ui->kColor4->setColor(Colores2::Verde);
    }else if (tole=="0.25%")
    {
        ui->kColor4->setColor(Colores2::Azul);
    }else if (tole=="0.1%")
    {
        ui->kColor4->setColor(Colores2::Violeta);
    }

}
///////////////////////////////////////////////////////
void Resistenciasven2::cambio5(){

    const QString a = ui->ValorC->text();
    string valor = a.toStdString();
    cout << "std "<<valor<<endl;
    int v=valor.length();
    cout<<v<<endl;
    int count=0;
    for(int i=0; i <=  v; i=i+1)
    {
        char y=(valor[i]);
        string x(1, y);

        if (x == "0")
        {
            count=count+1;
        }

    }

    string x1(1, valor[0]);
    string x2(1, valor[1]);
    string x3(1, valor[2]);


    if (x1=="0")
    {
        ui->kColor1->setColor(Colores2::Negro);
    }else if (x1=="1")
    {
        ui->kColor1->setColor(Colores2::Marron);
    }
    else if (x1=="2")
    {
        ui->kColor1->setColor(Colores2::Rojo);
    }else if (x1=="3")
    {
        ui->kColor1->setColor(Colores2::Naranja);
    }else if (x1=="4")
    {
        ui->kColor1->setColor(Colores2::Amarillo);
    }else if (x1=="5")
    {
        ui->kColor1->setColor(Colores2::Verde);
    }else if (x1=="6")
    {
        ui->kColor1->setColor(Colores2::Azul);
    }else if (x1=="7")
    {
        ui->kColor1->setColor(Colores2::Violeta);
    }else if (x1=="8")
    {
        ui->kColor1->setColor(Colores2::Gris);
    }else if (x1=="9")
    {
        ui->kColor1->setColor(Colores2::Blanco);
    }

    if (x2=="0")
    {
        ui->kColor2->setColor(Colores2::Negro);
    }else if (x2=="1")
    {
        ui->kColor2->setColor(Colores2::Marron);
    }
    else if (x2=="2")
    {
        ui->kColor2->setColor(Colores2::Rojo);
    }else if (x2=="3")
    {
        ui->kColor2->setColor(Colores2::Naranja);
    }else if (x2=="4")
    {
        ui->kColor2->setColor(Colores2::Amarillo);
    }else if (x2=="5")
    {
        ui->kColor2->setColor(Colores2::Verde);
    }else if (x2=="6")
    {
        ui->kColor2->setColor(Colores2::Azul);
    }else if (x2=="7")
    {
        ui->kColor2->setColor(Colores2::Violeta);
    }else if (x2=="8")
    {
        ui->kColor2->setColor(Colores2::Gris);
    }else if (x2=="9")
    {
        ui->kColor2->setColor(Colores2::Blanco);
    }


    if (x3=="0")
    {
        ui->kColor3->setColor(Colores2::Negro);
    }else if (x3=="1")
    {
        ui->kColor3->setColor(Colores2::Marron);
    }
    else if (x3=="2")
    {
        ui->kColor3->setColor(Colores2::Rojo);
    }else if (x2=="3")
    {
        ui->kColor3->setColor(Colores2::Naranja);
    }else if (x3=="4")
    {
        ui->kColor3->setColor(Colores2::Amarillo);
    }else if (x3=="5")
    {
        ui->kColor3->setColor(Colores2::Verde);
    }else if (x3=="6")
    {
        ui->kColor3->setColor(Colores2::Azul);
    }else if (x3=="7")
    {
        ui->kColor3->setColor(Colores2::Violeta);
    }else if (x3=="8")
    {
        ui->kColor3->setColor(Colores2::Gris);
    }else if (x3=="9")
    {
        ui->kColor3->setColor(Colores2::Blanco);
    }

    if (count==0)
    {
        ui->kColor4->setColor(Colores2::Negro);
    }else if (count==1)
    {
        ui->kColor4->setColor(Colores2::Marron);
    }
    else if (count==2)
    {
        ui->kColor4->setColor(Colores2::Rojo);
    }else if (count==3)
    {
        ui->kColor4->setColor(Colores2::Naranja);
    }else if (count==4)
    {
        ui->kColor4->setColor(Colores2::Amarillo);
    }else if (count==5)
    {
        ui->kColor4->setColor(Colores2::Verde);
    }else if (count==6)
    {
        ui->kColor4->setColor(Colores2::Azul);
    }else if (count==7)
    {
        ui->kColor4->setColor(Colores2::Violeta);
    }else if (count==8)
    {
        ui->ValorC->setText("Fuera de rango");
    }

    const QString tol = (ui->comboTol->currentText());
    string tole = tol.toStdString();
    cout<<tole<<endl;
    if (tole=="10%")
    {
        ui->kColor5->setColor(Colores2::Plata);
    }else if (tole=="5%")
    {
        ui->kColor5->setColor(Colores2::Oro);
    }else if (tole=="1%")
    {
        ui->kColor5->setColor(Colores2::Marron);
    }else if (tole=="0.5%")
    {
        ui->kColor5->setColor(Colores2::Verde);
    }else if (tole=="0.25%")
    {
        ui->kColor5->setColor(Colores2::Azul);
    }else if (tole=="0.1%")
    {
        ui->kColor5->setColor(Colores2::Violeta);
    }
}