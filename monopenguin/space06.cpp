#include "space06.h"
#include "ui_space06.h"

space06::space06(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space06)
{
    ui->setupUi(this);
}

space06::~space06()
{
    delete ui;
}
