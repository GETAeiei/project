#include "space16.h"
#include "ui_space16.h"

space16::space16(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space16)
{
    ui->setupUi(this);
}

space16::~space16()
{
    delete ui;
}
