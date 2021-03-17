#include "space02.h"
#include "ui_space02.h"

space02::space02(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space02)
{
    ui->setupUi(this);
}

space02::~space02()
{
    delete ui;
}
