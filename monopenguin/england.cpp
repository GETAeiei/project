#include "england.h"
#include "ui_england.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

England::England(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::England)
{
    ui->setupUi(this);
}

England::~England()
{
    delete ui;
}
