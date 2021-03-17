#include "space15.h"
#include "ui_space15.h"

space15::space15(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space15)
{
    ui->setupUi(this);
}

space15::~space15()
{
    delete ui;
}
