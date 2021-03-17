#include "space20.h"
#include "ui_space20.h"

space20::space20(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space20)
{
    ui->setupUi(this);
}

space20::~space20()
{
    delete ui;
}
