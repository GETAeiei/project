#include "space22.h"
#include "ui_space22.h"

space22::space22(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space22)
{
    ui->setupUi(this);
}

space22::~space22()
{
    delete ui;
}
