#include "bhutan.h"
#include "ui_bhutan.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Bhutan::Bhutan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bhutan)
{
    ui->setupUi(this);
}

Bhutan::~Bhutan()
{
    delete ui;
}
