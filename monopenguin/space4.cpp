#include "space4.h"
#include "ui_space4.h"

space4::space4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space4)
{
    ui->setupUi(this);
}

space4::~space4()
{
    delete ui;
}
