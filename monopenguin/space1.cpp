#include "space1.h"
#include "ui_space1.h"

space1::space1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space1)
{
    ui->setupUi(this);
}

space1::~space1()
{
    delete ui;
}
