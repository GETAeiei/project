#include "space19.h"
#include "ui_space19.h"

space19::space19(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space19)
{
    ui->setupUi(this);
}

space19::~space19()
{
    delete ui;
}
