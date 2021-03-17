#include "space18.h"
#include "ui_space18.h"

space18::space18(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space18)
{
    ui->setupUi(this);
}

space18::~space18()
{
    delete ui;
}
