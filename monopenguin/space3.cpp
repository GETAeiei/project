#include "space3.h"
#include "ui_space3.h"

space3::space3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space3)
{
    ui->setupUi(this);
}

space3::~space3()
{
    delete ui;
}
