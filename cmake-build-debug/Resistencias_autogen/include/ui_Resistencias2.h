/********************************************************************************
** Form generated from reading UI file 'Resistencias2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESISTENCIAS2_H
#define UI_RESISTENCIAS2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include "kcolorcombo.h"

QT_BEGIN_NAMESPACE

class Ui_Resistenciasven2
{
public:
    QPushButton *Col_Val;
    QPushButton *Ok_Res;
    KColorCombo *kColor1;
    KColorCombo *kColor2;
    KColorCombo *kColor3;
    KColorCombo *kColor4;
    KColorCombo *kColor5;
    QLabel *label;
    QLineEdit *ValorC;
    QRadioButton *B4;
    QRadioButton *B5;
    QComboBox *comboTol;

    void setupUi(QDialog *Resistenciasven2)
    {
        if (Resistenciasven2->objectName().isEmpty())
            Resistenciasven2->setObjectName(QStringLiteral("Resistenciasven2"));
        Resistenciasven2->resize(354, 190);
        Col_Val = new QPushButton(Resistenciasven2);
        Col_Val->setObjectName(QStringLiteral("Col_Val"));
        Col_Val->setGeometry(QRect(240, 50, 111, 41));
        Ok_Res = new QPushButton(Resistenciasven2);
        Ok_Res->setObjectName(QStringLiteral("Ok_Res"));
        Ok_Res->setGeometry(QRect(110, 150, 106, 36));
        kColor1 = new KColorCombo(Resistenciasven2);
        kColor1->setObjectName(QStringLiteral("kColor1"));
        kColor1->setGeometry(QRect(10, 100, 61, 38));
        kColor1->setEditable(false);
        kColor1->setCurrentText(QStringLiteral(""));
        kColor1->setProperty("color", QVariant(QColor(0, 0, 0)));
        kColor2 = new KColorCombo(Resistenciasven2);
        kColor2->setObjectName(QStringLiteral("kColor2"));
        kColor2->setGeometry(QRect(80, 100, 61, 38));
        kColor2->setEditable(false);
        kColor2->setCurrentText(QStringLiteral(""));
        kColor2->setProperty("color", QVariant(QColor(0, 0, 0)));
        kColor3 = new KColorCombo(Resistenciasven2);
        kColor3->setObjectName(QStringLiteral("kColor3"));
        kColor3->setGeometry(QRect(150, 100, 61, 38));
        kColor3->setEditable(false);
        kColor3->setCurrentText(QStringLiteral(""));
        kColor3->setProperty("color", QVariant(QColor(0, 0, 0)));
        kColor4 = new KColorCombo(Resistenciasven2);
        kColor4->setObjectName(QStringLiteral("kColor4"));
        kColor4->setGeometry(QRect(220, 100, 61, 38));
        kColor4->setEditable(false);
        kColor4->setCurrentText(QStringLiteral(""));
        kColor4->setProperty("color", QVariant(QColor(0, 0, 0)));
        kColor5 = new KColorCombo(Resistenciasven2);
        kColor5->setObjectName(QStringLiteral("kColor5"));
        kColor5->setGeometry(QRect(290, 100, 61, 38));
        kColor5->setEditable(false);
        kColor5->setCurrentText(QStringLiteral(""));
        kColor5->setProperty("color", QVariant(QColor(0, 0, 0)));
        label = new QLabel(Resistenciasven2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 63, 20));
        ValorC = new QLineEdit(Resistenciasven2);
        ValorC->setObjectName(QStringLiteral("ValorC"));
        ValorC->setGeometry(QRect(60, 10, 171, 36));
        B4 = new QRadioButton(Resistenciasven2);
        B4->setObjectName(QStringLiteral("B4"));
        B4->setGeometry(QRect(10, 60, 115, 24));
        B5 = new QRadioButton(Resistenciasven2);
        B5->setObjectName(QStringLiteral("B5"));
        B5->setGeometry(QRect(110, 60, 115, 24));
        comboTol = new QComboBox(Resistenciasven2);
        comboTol->addItem(QString());
        comboTol->addItem(QString());
        comboTol->addItem(QString());
        comboTol->addItem(QString());
        comboTol->addItem(QString());
        comboTol->addItem(QString());
        comboTol->setObjectName(QStringLiteral("comboTol"));
        comboTol->setGeometry(QRect(240, 10, 79, 36));

        retranslateUi(Resistenciasven2);

        QMetaObject::connectSlotsByName(Resistenciasven2);
    } // setupUi

    void retranslateUi(QDialog *Resistenciasven2)
    {
        Resistenciasven2->setWindowTitle(QApplication::translate("Resistenciasven2", "Dialog", nullptr));
        Col_Val->setText(QApplication::translate("Resistenciasven2", "Converitr", nullptr));
        Ok_Res->setText(QApplication::translate("Resistenciasven2", "Ok", nullptr));
        label->setText(QApplication::translate("Resistenciasven2", "Valor:", nullptr));
        B4->setText(QApplication::translate("Resistenciasven2", "4 Bandas", nullptr));
        B5->setText(QApplication::translate("Resistenciasven2", "5 Bandas", nullptr));
        comboTol->setItemText(0, QApplication::translate("Resistenciasven2", "10%", nullptr));
        comboTol->setItemText(1, QApplication::translate("Resistenciasven2", "5%", nullptr));
        comboTol->setItemText(2, QApplication::translate("Resistenciasven2", "1%", nullptr));
        comboTol->setItemText(3, QApplication::translate("Resistenciasven2", "0.5%", nullptr));
        comboTol->setItemText(4, QApplication::translate("Resistenciasven2", "0.25%", nullptr));
        comboTol->setItemText(5, QApplication::translate("Resistenciasven2", "0.1%", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Resistenciasven2: public Ui_Resistenciasven2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESISTENCIAS2_H
