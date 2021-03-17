#include "space14.h"
#include "ui_space14.h"

space14::space14(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space14)
{
    ui->setupUi(this);
}

space14::~space14()
{
    delete ui;
}
