//
// Created by jarillo on 3/12/20.
//

#ifndef RESISTENCIAS_INICIAR_BANDAS_H
#define RESISTENCIAS_INICIAR_BANDAS_H
#include <memory>
#include <QDialog>
#include <Resistencias_autogen/include/ui_Resistencias.h>


QT_BEGIN_NAMESPACE
namespace Ui { class Bandasi; }
QT_END_NAMESPACE

class Bandasi : public QDialog
{
Q_OBJECT

public:
    Bandasi(QWidget *parent = nullptr);
    ~Bandasi();

    virtual void Inicializar()=0;


    Ui::Resistenciasven *ui;


};



class Bandas4: public Bandasi{
public:
    virtual void Inicializar();
};

class Bandas5: public Bandasi{
public:
    virtual void Inicializar();
};

enum class TipoBanda {B4, B5};

class Factoria {
public:
    std::shared_ptr<Bandasi> getBanda(TipoBanda);
};

#endif //RESISTENCIAS_INICIAR_BANDAS_H
