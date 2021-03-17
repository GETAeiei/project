#include "china.h"
#include "ui_china.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

China::China(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::China)
{
    ui->setupUi(this);
}

China::~China()
{
    delete ui;
}
