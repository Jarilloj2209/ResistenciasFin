//
// Created by jarillo on 28/11/20.
//

#ifndef RESISTENCIAS_LEYOHM_H
#define RESISTENCIAS_LEYOHM_H


#include <QDialog>
#include <Resistencias_autogen/include/ui_leyohm.h>

QT_BEGIN_NAMESPACE
namespace Ui { class leyohm; }
QT_END_NAMESPACE
class leyohm : public QDialog
{
Q_OBJECT

public:
    leyohm(QWidget *parent = nullptr);
    ~leyohm();

private:
    Ui::Dialog *ui;


    void calcular();

};

#endif //RESISTENCIAS_LEYOHM_H
