#include "space01.h"
#include "ui_space01.h"

space01::space01(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space01)
{
    ui->setupUi(this);
}

space01::~space01()
{
    delete ui;
}
