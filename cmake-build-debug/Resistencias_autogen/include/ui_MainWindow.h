/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionValor;
    QAction *actionColor;
    QAction *actionResistencias_a_valor;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuValor;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(280, 219);
        actionValor = new QAction(MainWindow);
        actionValor->setObjectName(QStringLiteral("actionValor"));
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        actionResistencias_a_valor = new QAction(MainWindow);
        actionResistencias_a_valor->setObjectName(QStringLiteral("actionResistencias_a_valor"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 191, 131));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 280, 34));
        menuValor = new QMenu(menubar);
        menuValor->setObjectName(QStringLiteral("menuValor"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuValor->menuAction());
        menuValor->addAction(actionValor);
        menuValor->addAction(actionResistencias_a_valor);
        menuValor->addAction(actionColor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionValor->setText(QApplication::translate("MainWindow", "Resistencias a color", nullptr));
        actionColor->setText(QApplication::translate("MainWindow", "Ley de Ohm", nullptr));
        actionResistencias_a_valor->setText(QApplication::translate("MainWindow", "Resistencias a valor", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Escoja el modo de</p><p align=\"center\">conversi\303\263n en el </p><p align=\"center\">submenu superior</p><p align=\"center\"><br/></p></body></html>", nullptr));
        menuValor->setTitle(QApplication::translate("MainWindow", "Modo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
