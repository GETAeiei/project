#include "brazil.h"
#include "ui_brazil.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Brazil::Brazil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Brazil)
{
    ui->setupUi(this);
}

Brazil::~Brazil()
{
    delete ui;
}
