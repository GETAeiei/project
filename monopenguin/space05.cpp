#include "space05.h"
#include "ui_space05.h"

space05::space05(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space05)
{
    ui->setupUi(this);
}

space05::~space05()
{
    delete ui;
}
