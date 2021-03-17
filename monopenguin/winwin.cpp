#include "winwin.h"
#include "ui_winwin.h"

Winwin::Winwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winwin)
{
    ui->setupUi(this);
}

Winwin::~Winwin()
{
    delete ui;
}
