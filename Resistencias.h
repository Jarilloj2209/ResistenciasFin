//
// Created by jarillo on 28/11/20.
//

#ifndef RESISTENCIAS_RESISTENCIAS_H
#define RESISTENCIAS_RESISTENCIAS_H

#include <QDialog>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class Resistenciasven; }
QT_END_NAMESPACE

class Resistenciasven : public QDialog
{
Q_OBJECT

public:
    Resistenciasven(QWidget *parent = nullptr);
    ~Resistenciasven();
    static const QColor Var;

private:
    Ui::Resistenciasven *ui;
    bool using_5_bands = true;

    void bands_5();
    void bands_4();
    void Col_Val();
    void Val_Col();
    std::basic_string<char> B1();
    std::basic_string<char> B2();
    std::basic_string<char> B3();
    std::basic_string<char> B3_4();
    std::basic_string<char> B4();
    std::basic_string<char> B4_4();
    std::basic_string<char> B5();
    void initialize_colorcombos();
    void show_menu();
};






class Colores{
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
#endif //RESISTENCIAS_RESISTENCIAS_H
