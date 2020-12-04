//
// Created by jarillo on 3/12/20.
//

#ifndef RESISTENCIAS_INICIAR_BANDAST_H
#define RESISTENCIAS_INICIAR_BANDAST_H
#include "./ui_Resistencias2.h"
#include <memory>
#include <QDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class Bandasi2; }
QT_END_NAMESPACE

class Bandasi2 : public QDialog
{
Q_OBJECT

public:
    Bandasi2(QWidget *parent = nullptr);
    ~Bandasi2();
    virtual void Inicializar()=0;
    Ui::Resistenciasven2 *ui;


};
class Bandas4i2: public Bandasi2{
public:
    virtual void Inicializar();
};

class Bandas5i2: public Bandasi2{
public:
    virtual void Inicializar();
};

enum class TipoBandai2 {B4, B5};

class Factoriai2 {
public:
    std::shared_ptr<Bandasi2> getBanda(TipoBandai2);
};



#endif //RESISTENCIAS_INICIAR_BANDAST_H
