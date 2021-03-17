#include "space09.h"
#include "ui_space09.h"

space09::space09(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space09)
{
    ui->setupUi(this);
}

space09::~space09()
{
    delete ui;
}
