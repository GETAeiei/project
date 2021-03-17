#include "space10.h"
#include "ui_space10.h"

space10::space10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space10)
{
    ui->setupUi(this);
}

space10::~space10()
{
    delete ui;
}
