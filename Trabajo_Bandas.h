//
// Created by jarillo on 3/12/20.
//

#ifndef RESISTENCIAS_TRABAJO_BANDAS_H
#define RESISTENCIAS_TRABAJO_BANDAS_H
#include <memory>
#include <QDialog>
#include <Resistencias_autogen/include/ui_Resistencias.h>

QT_BEGIN_NAMESPACE
namespace Ui { class TBanda; }
QT_END_NAMESPACE

class TBanda : public QDialog
{
Q_OBJECT

public:
    TBanda(QWidget *parent = nullptr);
    ~TBanda();
    virtual std::basic_string<char> accionB1() = 0;
    virtual std::basic_string<char> accionB2() = 0;
    virtual std::basic_string<char> accionB3() = 0;
    virtual std::basic_string<char> accionB4() = 0;
    virtual std::basic_string<char> accionB5() = 0;
    Ui::Resistenciasven *ui;
};



class BandasT4: public TBanda{
public:
    virtual std::basic_string<char> accionB1();
    virtual std::basic_string<char> accionB2();
    virtual std::basic_string<char> accionB3();
    virtual std::basic_string<char> accionB4();
    virtual std::basic_string<char> accionB5();
};

class BandasT5: public TBanda{
public:
    virtual std::basic_string<char> accionB1();
    virtual std::basic_string<char> accionB2();
    virtual std::basic_string<char> accionB3();
    virtual std::basic_string<char> accionB4();
    virtual std::basic_string<char> accionB5();
};

enum class TipoBandaT {B4, B5};

class FactoriaT {
public:
    std::shared_ptr<TBanda> getBanda(TipoBandaT);
};
class ColoresT{
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
