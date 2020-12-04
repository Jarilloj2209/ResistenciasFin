//
// Created by jarillo on 28/11/20.
//

#ifndef RESISTENCIAS_RESISTENCIAS2_H
#define RESISTENCIAS_RESISTENCIAS2_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Resistenciasven2; }
QT_END_NAMESPACE

class Resistenciasven2 : public QDialog
{
Q_OBJECT

public:
    Resistenciasven2(QWidget *parent = nullptr);
    ~Resistenciasven2();
    static const QColor Var;

private:
    Ui::Resistenciasven2 *ui;

    void initialize_colorcombos4();
    void initialize_colorcombos5();
    void Col_Val();
    void cambio4();
    void cambio5();
    void bands_4();
    void bands_5();
};

class Colores2{
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
#endif //RESISTENCIAS_RESISTENCIAS2_H
