#include "space17.h"
#include "ui_space17.h"

space17::space17(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space17)
{
    ui->setupUi(this);
}

space17::~space17()
{
    delete ui;
}
