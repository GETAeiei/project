#include "space23.h"
#include "ui_space23.h"

space23::space23(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space23)
{
    ui->setupUi(this);
}

space23::~space23()
{
    delete ui;
}
