#include "buyornot.h"
#include "ui_buyornot.h"
#include <QDebug>
#include <iostream>
using namespace std;

buyORnot::buyORnot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buyORnot)
{
    ui->setupUi(this);
}

buyORnot::~buyORnot()
{
    delete ui;
}




int buyORnot::on_buy_clicked()
{
    buy_play1 = 1;
    return buy_play1;
    this->hide();
}
