#include "space2.h"
#include "ui_space2.h"

space2::space2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space2)
{
    ui->setupUi(this);
}

space2::~space2()
{
    delete ui;
}
