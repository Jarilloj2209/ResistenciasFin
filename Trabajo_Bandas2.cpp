//
// Created by jarillo on 3/12/20.
//

#include "Trabajo_Bandas2.h"
#include "Resistencias2.h"
#include "Trabajo_Bandas.h"
#include "Mainwindow.h"
#include "./ui_Resistencias2.h"
#include <iostream>
using namespace std;

TBanda2::TBanda2(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Resistenciasven2) {
    ui->setupUi(this);
}
TBanda2::~TBanda2()
{
    delete ui;
}

//////////////////////////////Banda4/////////////////////
void BandasT4_2::accion() {
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
void BandasT5_2::accion() {
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
/////////////////////////Acciones/////////////////////////////
std::shared_ptr<TBanda2> FactoriaT2::getBanda(TipoBandaT2 tp) {
    switch (tp) {
        case TipoBandaT2::B4:
            return std::make_shared<BandasT4_2>();
        case TipoBandaT2::B5:
            return std::make_shared<BandasT5_2>();
    }
    return nullptr;
}