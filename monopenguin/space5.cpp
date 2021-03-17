#include "space5.h"
#include "ui_space5.h"

space5::space5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space5)
{
    ui->setupUi(this);
}

space5::~space5()
{
    delete ui;
}
