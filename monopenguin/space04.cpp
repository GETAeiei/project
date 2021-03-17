#include "space04.h"
#include "ui_space04.h"

space04::space04(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space04)
{
    ui->setupUi(this);
}

space04::~space04()
{
    delete ui;
}
