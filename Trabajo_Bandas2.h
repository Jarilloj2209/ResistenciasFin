//
// Created by jarillo on 3/12/20.
//

#ifndef RESISTENCIAS_TRABAJO_BANDAS2_H
#define RESISTENCIAS_TRABAJO_BANDAS2_H
#include <memory>
#include <QDialog>
#include <./ui_Resistencias2.h>

QT_BEGIN_NAMESPACE
namespace Ui { class TBanda2; }
QT_END_NAMESPACE

class TBanda2 : public QDialog
{
Q_OBJECT

public:
    TBanda2(QWidget *parent = nullptr);
    ~TBanda2();
    virtual void accion() = 0;

    Ui::Resistenciasven2 *ui;
};



class BandasT4_2: public TBanda2{
public:
    virtual void accion();

};

class BandasT5_2: public TBanda2{
public:
    virtual void accion();

};

enum class TipoBandaT2 {B4, B5};

class FactoriaT2 {
public:
    std::shared_ptr<TBanda2> getBanda(TipoBandaT2);
};
class ColoresT2{
public:
    static const QColor Negro;
    static const QColor Marron;
    static const QColor Rojo;
    static const QColor Naranja;
    static const QColor Amarillo;
    static const QColor Verde;
    static const QColor Azul;
    static const QColor Violeta;
    static const QColor Gris;
    static const QColor Blanco;
    static const QColor Plata;
    static const QColor Oro;
};

#endif //RESISTENCIAS_TRABAJO_BANDAS_H
