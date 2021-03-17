#include "main2.h"
#include "ui_main2.h"

#include "main3.h"

#include<iostream>
#include<string>
using namespace std;

main2::main2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main2)
{
    ui->setupUi(this);
    ui->next->setEnabled(false);
    chkBtnOne =chkBtnTwo =chkBtnThree =chkBtnFour =false;
    connect(ui->smile,SIGNAL(clicked()),this,SLOT(buttonOneClicked()));
    connect(ui->kob,SIGNAL(clicked()),this,SLOT(buttonTwoClicked()));
    connect(ui->bingbing,SIGNAL(clicked()),this,SLOT(buttonThreeClicked()));
    connect(ui->ploy,SIGNAL(clicked()),this,SLOT(buttonFourClicked()));
}

main2::~main2()
{
    delete ui;
}


void main2::on_smile_clicked(){
    chkBtnOne =true;
    if(chkBtnTwo==false&&chkBtnThree==false&&chkBtnFour==false){
        ui->smileplayer->setText("PLAYER 1");

    }else if(chkBtnTwo==true||chkBtnThree==true||chkBtnFour==true){
        ui->smileplayer->setText("PLAYER 2");

        ui->next->setEnabled(true);
    }
    checkButton();
}

void main2::on_kob_clicked(){
    chkBtnTwo =true;
    if(chkBtnOne==false&&chkBtnThree==false&&chkBtnFour==false){
        ui->kobplayer->setText("PLAYER 1");

    }else if(chkBtnOne==true||chkBtnThree==true||chkBtnFour==true){
        ui->kobplayer->setText("PLAYER 2");

        ui->next->setEnabled(true);
    }
    checkButton();
}

void main2::on_bingbing_clicked(){
    chkBtnThree =true;
    if(chkBtnOne==false&&chkBtnTwo==false&&chkBtnFour==false){
        ui->bbplayer->setText("PLAYER 1");

    }else if(chkBtnOne==true||chkBtnTwo==true||chkBtnFour==true){
        ui->bbplayer->setText("PLAYER 2");

        ui->next->setEnabled(true);
    }
    checkButton();
}

void main2::on_ploy_clicked(){
    chkBtnFour =true;
    if(chkBtnOne==false&&chkBtnTwo==false&&chkBtnThree==false){
        ui->ployplayer->setText("PLAYER 1");

    }else if(chkBtnOne==true||chkBtnTwo==true||chkBtnThree==true){
        ui->ployplayer->setText("PLAYER 2");

        ui->next->setEnabled(true);
    }
    checkButton();
}


void main2::checkButton(){
    if (chkBtnOne==true&& chkBtnTwo==true){
        ui->bingbing->setEnabled(false);
        ui->ploy->setEnabled(false);
    }
    else if (chkBtnOne==true&& chkBtnThree==true){
        ui->kob->setEnabled(false);
        ui->ploy->setEnabled(false);
    }
    else if (chkBtnOne==true&& chkBtnFour==true){
        ui->kob->setEnabled(false);
        ui->bingbing->setEnabled(false);
    }
    else if (chkBtnTwo && chkBtnThree){
        ui->smile->setEnabled(false);
        ui->ploy->setEnabled(false);
    }
    else if (chkBtnTwo && chkBtnFour){
        ui->smile->setEnabled(false);
        ui->bingbing->setEnabled(false);
    }
    else if (chkBtnThree && chkBtnFour){
        ui->smile->setEnabled(false);
        ui->kob->setEnabled(false);
    }
}

void main2::on_next_clicked(){
    this->hide();
    mymain3 = new main3(this);
    mymain3->show();
}
