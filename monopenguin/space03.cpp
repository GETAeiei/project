#include "space03.h"
#include "ui_space03.h"

space03::space03(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space03)
{
    ui->setupUi(this);
}

space03::~space03()
{
    delete ui;
}
