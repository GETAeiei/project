#include "special.h"
#include "ui_special.h"

special::special(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::special)
{
    ui->setupUi(this);
}

special::~special()
{
    delete ui;
}