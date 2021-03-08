#include "taiwan.h"
#include "ui_taiwan.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Taiwan::Taiwan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Taiwan)
{
    ui->setupUi(this);
}

Taiwan::~Taiwan()
{
    delete ui;
}
