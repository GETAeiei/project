#include "space12.h"
#include "ui_space12.h"

space12::space12(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space12)
{
    ui->setupUi(this);
}

space12::~space12()
{
    delete ui;
}
