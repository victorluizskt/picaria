#include "Picaria.h"
#include "ui_Picaria.h"

Picaria::Picaria(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Picaria)
{
    ui->setupUi(this);
}

Picaria::~Picaria()
{
    delete ui;
}

