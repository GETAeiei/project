#include "space11.h"
#include "ui_space11.h"

space11::space11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space11)
{
    ui->setupUi(this);
}

space11::~space11()
{
    delete ui;
}
