#include "space07.h"
#include "ui_space07.h"

space07::space07(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space07)
{
    ui->setupUi(this);
}

space07::~space07()
{
    delete ui;
}
