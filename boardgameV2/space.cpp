#include "space.h"
#include "ui_space.h"
#include "main3.h"
#include <iostream>
#include "ui_main3.h"
#include<QPixmap>

using namespace std;

space::space(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::space)
{

    ui->setupUi(this);
    //here

}

space::~space()
{
    delete ui;
}



bool buy=false;
void space::on_buy_clicked()
{
    buy =true;
    this->setHidden(true);
}

void space::on_notbuy_clicked()
{
    buy=false;
    this->setHidden(true);
}


bool space::buystreet(){
    if(buy==true) return true;
    else return false;
}



