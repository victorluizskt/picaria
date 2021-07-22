/********************************************************************************
** Form generated from reading UI file 'Picaria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICARIA_H
#define UI_PICARIA_H

#include <Hole.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Picaria
{
public:
    QAction *actionSair;
    QAction *actionSobre;
    QAction *actionSair_2;
    QAction *action13_Buracos;
    QAction *actionSobre_2;
    QWidget *centralwidget;
    Hole *hole00;
    Hole *hole01;
    Hole *hole10;
    Hole *hole11;
    Hole *hole12;
    Hole *hole20;
    Hole *hole21;
    Hole *hole22;
    Hole *hole02;
    QMenuBar *menubar;
    QMenu *menuJogo;
    QMenu *menuAjuda;
    QMenu *menuAjuda_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Picaria)
    {
        if (Picaria->objectName().isEmpty())
            Picaria->setObjectName(QString::fromUtf8("Picaria"));
        Picaria->resize(500, 542);
        actionSair = new QAction(Picaria);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSobre = new QAction(Picaria);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        actionSair_2 = new QAction(Picaria);
        actionSair_2->setObjectName(QString::fromUtf8("actionSair_2"));
        action13_Buracos = new QAction(Picaria);
        action13_Buracos->setObjectName(QString::fromUtf8("action13_Buracos"));
        actionSobre_2 = new QAction(Picaria);
        actionSobre_2->setObjectName(QString::fromUtf8("actionSobre_2"));
        centralwidget = new QWidget(Picaria);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(500, 500));
        centralwidget->setMaximumSize(QSize(400, 400));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"	background: url(':/gridRefactor');\n"
"	background-repeat: no-repeat;\n"
"}"));
        hole00 = new Hole(centralwidget);
        hole00->setObjectName(QString::fromUtf8("hole00"));
        hole00->setGeometry(QRect(10, 10, 100, 100));
        hole00->setMinimumSize(QSize(100, 100));
        hole00->setMaximumSize(QSize(100, 100));
        hole00->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/empty"), QSize(), QIcon::Normal, QIcon::Off);
        hole00->setIcon(icon);
        hole00->setIconSize(QSize(50, 50));
        hole00->setFlat(true);
        hole00->setProperty("row", QVariant(0));
        hole00->setProperty("col", QVariant(0));
        hole01 = new Hole(centralwidget);
        hole01->setObjectName(QString::fromUtf8("hole01"));
        hole01->setGeometry(QRect(200, 10, 100, 100));
        hole01->setMinimumSize(QSize(100, 100));
        hole01->setMaximumSize(QSize(100, 100));
        hole01->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole01->setIcon(icon);
        hole01->setIconSize(QSize(50, 50));
        hole01->setFlat(true);
        hole01->setProperty("row", QVariant(0));
        hole01->setProperty("col", QVariant(1));
        hole10 = new Hole(centralwidget);
        hole10->setObjectName(QString::fromUtf8("hole10"));
        hole10->setGeometry(QRect(10, 200, 100, 100));
        hole10->setMinimumSize(QSize(100, 100));
        hole10->setMaximumSize(QSize(100, 100));
        hole10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole10->setIcon(icon);
        hole10->setIconSize(QSize(50, 50));
        hole10->setFlat(true);
        hole10->setProperty("row", QVariant(1));
        hole10->setProperty("col", QVariant(0));
        hole11 = new Hole(centralwidget);
        hole11->setObjectName(QString::fromUtf8("hole11"));
        hole11->setGeometry(QRect(200, 200, 100, 100));
        hole11->setMinimumSize(QSize(100, 100));
        hole11->setMaximumSize(QSize(100, 100));
        hole11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole11->setIcon(icon);
        hole11->setIconSize(QSize(50, 50));
        hole11->setFlat(true);
        hole11->setProperty("row", QVariant(1));
        hole11->setProperty("col", QVariant(1));
        hole12 = new Hole(centralwidget);
        hole12->setObjectName(QString::fromUtf8("hole12"));
        hole12->setGeometry(QRect(390, 200, 100, 100));
        hole12->setMinimumSize(QSize(100, 100));
        hole12->setMaximumSize(QSize(100, 100));
        hole12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole12->setIcon(icon);
        hole12->setIconSize(QSize(50, 50));
        hole12->setFlat(true);
        hole12->setProperty("row", QVariant(1));
        hole12->setProperty("col", QVariant(2));
        hole20 = new Hole(centralwidget);
        hole20->setObjectName(QString::fromUtf8("hole20"));
        hole20->setGeometry(QRect(10, 400, 100, 100));
        hole20->setMinimumSize(QSize(100, 100));
        hole20->setMaximumSize(QSize(100, 100));
        hole20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole20->setIcon(icon);
        hole20->setIconSize(QSize(50, 50));
        hole20->setFlat(true);
        hole20->setProperty("row", QVariant(2));
        hole20->setProperty("col", QVariant(0));
        hole21 = new Hole(centralwidget);
        hole21->setObjectName(QString::fromUtf8("hole21"));
        hole21->setGeometry(QRect(200, 400, 100, 100));
        hole21->setMinimumSize(QSize(100, 100));
        hole21->setMaximumSize(QSize(100, 100));
        hole21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole21->setIcon(icon);
        hole21->setIconSize(QSize(50, 50));
        hole21->setFlat(true);
        hole21->setProperty("row", QVariant(2));
        hole21->setProperty("col", QVariant(1));
        hole22 = new Hole(centralwidget);
        hole22->setObjectName(QString::fromUtf8("hole22"));
        hole22->setGeometry(QRect(390, 400, 100, 100));
        hole22->setMinimumSize(QSize(100, 100));
        hole22->setMaximumSize(QSize(100, 100));
        hole22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole22->setIcon(icon);
        hole22->setIconSize(QSize(50, 50));
        hole22->setFlat(true);
        hole22->setProperty("row", QVariant(2));
        hole22->setProperty("col", QVariant(2));
        hole02 = new Hole(centralwidget);
        hole02->setObjectName(QString::fromUtf8("hole02"));
        hole02->setGeometry(QRect(390, 10, 100, 100));
        hole02->setMinimumSize(QSize(100, 100));
        hole02->setMaximumSize(QSize(100, 100));
        hole02->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole02->setIcon(icon);
        hole02->setIconSize(QSize(50, 50));
        hole02->setFlat(true);
        hole02->setProperty("row", QVariant(0));
        hole02->setProperty("col", QVariant(2));
        Picaria->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Picaria);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 20));
        menuJogo = new QMenu(menubar);
        menuJogo->setObjectName(QString::fromUtf8("menuJogo"));
        menuAjuda = new QMenu(menubar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        menuAjuda_2 = new QMenu(menubar);
        menuAjuda_2->setObjectName(QString::fromUtf8("menuAjuda_2"));
        Picaria->setMenuBar(menubar);
        statusbar = new QStatusBar(Picaria);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Picaria->setStatusBar(statusbar);

        menubar->addAction(menuJogo->menuAction());
        menubar->addAction(menuAjuda->menuAction());
        menubar->addAction(menuAjuda_2->menuAction());
        menuJogo->addAction(actionSair);
        menuJogo->addAction(actionSair_2);
        menuAjuda->addAction(actionSobre);
        menuAjuda->addAction(action13_Buracos);
        menuAjuda_2->addAction(actionSobre_2);

        retranslateUi(Picaria);

        QMetaObject::connectSlotsByName(Picaria);
    } // setupUi

    void retranslateUi(QMainWindow *Picaria)
    {
        Picaria->setWindowTitle(QApplication::translate("Picaria", "Picaria", nullptr));
        actionSair->setText(QApplication::translate("Picaria", "Novo", nullptr));
        actionSobre->setText(QApplication::translate("Picaria", "9 Buracos", nullptr));
        actionSair_2->setText(QApplication::translate("Picaria", "Sair", nullptr));
        action13_Buracos->setText(QApplication::translate("Picaria", "13 Buracos", nullptr));
        actionSobre_2->setText(QApplication::translate("Picaria", "Sobre", nullptr));
        menuJogo->setTitle(QApplication::translate("Picaria", "Jogo", nullptr));
        menuAjuda->setTitle(QApplication::translate("Picaria", "Modo", nullptr));
        menuAjuda_2->setTitle(QApplication::translate("Picaria", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Picaria: public Ui_Picaria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICARIA_H
