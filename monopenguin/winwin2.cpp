#include "winwin2.h"
#include "ui_winwin2.h"

winwin2::winwin2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::winwin2)
{
    ui->setupUi(this);
}

winwin2::~winwin2()
{
    delete ui;
}


