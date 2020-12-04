/********************************************************************************
** Form generated from reading UI file 'leyohm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEYOHM_H
#define UI_LEYOHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *T_R;
    QLineEdit *T_V;
    QLineEdit *T_I;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Ok_Lo;
    QPushButton *Calcular_lo;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(293, 196);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 101, 20));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 63, 20));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 63, 20));
        T_R = new QLineEdit(Dialog);
        T_R->setObjectName(QStringLiteral("T_R"));
        T_R->setGeometry(QRect(100, 10, 113, 36));
        T_V = new QLineEdit(Dialog);
        T_V->setObjectName(QStringLiteral("T_V"));
        T_V->setGeometry(QRect(100, 50, 113, 36));
        T_I = new QLineEdit(Dialog);
        T_I->setObjectName(QStringLiteral("T_I"));
        T_I->setGeometry(QRect(100, 90, 113, 36));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 20, 63, 20));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 60, 63, 20));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 100, 63, 20));
        Ok_Lo = new QPushButton(Dialog);
        Ok_Lo->setObjectName(QStringLiteral("Ok_Lo"));
        Ok_Lo->setGeometry(QRect(20, 140, 106, 36));
        Calcular_lo = new QPushButton(Dialog);
        Calcular_lo->setObjectName(QStringLiteral("Calcular_lo"));
        Calcular_lo->setGeometry(QRect(140, 140, 106, 36));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Resistencia", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Voltaje", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Corriente", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Ohms", nullptr));
        label_5->setText(QApplication::translate("Dialog", "Volts", nullptr));
        label_6->setText(QApplication::translate("Dialog", "Amperes", nullptr));
        Ok_Lo->setText(QApplication::translate("Dialog", "Ok", nullptr));
        Calcular_lo->setText(QApplication::translate("Dialog", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEYOHM_H
