#include "buyornot.h"
#include "ui_buyornot.h"

#include "bank.h"


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

bool playerBuy=false;
//int a1,b1,locate;
//bool player1=false;

void buyORnot::on_buy_clicked()
{
    playerBuy=true;
    this->hide();

    //int a=0;
    bank x =bank();
    //int priceNow1 =x.bankCalP1(a);

    //int price;

}

void buyORnot::on_not_clicked()
{
    playerBuy=false;
    this->hide();
}
