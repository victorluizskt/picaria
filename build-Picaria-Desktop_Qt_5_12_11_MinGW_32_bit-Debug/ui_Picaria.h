/********************************************************************************
** Form generated from reading UI file 'Picaria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICARIA_H
#define UI_PICARIA_H

#include <QtCore/QVariant>
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
