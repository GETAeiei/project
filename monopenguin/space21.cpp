#include "space21.h"
#include "ui_space21.h"

space21::space21(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space21)
{
    ui->setupUi(this);
}

space21::~space21()
{
    delete ui;
}
