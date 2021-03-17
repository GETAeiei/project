#include "space13.h"
#include "ui_space13.h"

space13::space13(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space13)
{
    ui->setupUi(this);
}

space13::~space13()
{
    delete ui;
}
