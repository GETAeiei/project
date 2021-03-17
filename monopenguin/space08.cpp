#include "space08.h"
#include "ui_space08.h"

space08::space08(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space08)
{
    ui->setupUi(this);
}

space08::~space08()
{
    delete ui;
}
