//
// Created by jarillo on 28/11/20.
//

#include "leyohm.h"
#include "./ui_leyohm.h"
#include <iostream>
using namespace std;
leyohm::leyohm(QWidget *parent)
        : QDialog(parent)
        , ui(new Ui::Dialog)

{
    ui->setupUi(this);

    connect(ui->Calcular_lo, &QPushButton::clicked,
            this, &leyohm::calcular);

}
leyohm::~leyohm()
{
    delete ui;
}

void leyohm::calcular() {
    cout<<"calculando"<<endl;
    const QString i=ui->T_I->text();
    float In =i.toFloat();
    const QString v=ui->T_V->text();
    float Vn =v.toFloat();
    const QString r=ui->T_R->text();
    float Rn =r.toFloat();
    cout<<In<<"i"<<Vn<<"v"<<Rn<<"ohms"<<endl;
    if (In>0){
        if (Vn>0){
            cout<<"voltaje*I"<<endl;
            float r=Vn/In;
            char Resistencia[64];
            int ret = snprintf(Resistencia, sizeof Resistencia, "%f", r);
            ui->T_R->setText(Resistencia);
        }else {
            float V=Rn*In;
            char Voltaje[20];
            sprintf(Voltaje, "%f", V);
            ui->T_V->setText(Voltaje);
        }

    }else{
        float I=Vn/Rn;
        char Corriente[20];
        sprintf(Corriente, "%f", I);
        ui->T_I->setText(Corriente);
    }
}