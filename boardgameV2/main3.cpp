#include "main3.h"
#include "ui_main3.h"
#include<iostream>
#include "dice.h"


using namespace std;

main3::main3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::main3)
{
    ui->setupUi(this);
}

main3::~main3()
{
    delete ui;
}

int a1=730;
int b1=680;
int a2=730;
int b2=730;
bool player1 =true;

void main3::on_random_clicked(){          //dice&&movement
    Dice random= Dice();
    int roll =random.roll_dice();

        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/dice1.png);");
            //move player1
            if(player1 ==true){
                if(a1==730&&b1==680){
                    ui->walk1->move(608,680);
                    player1 =false;
                }else if(a1==608&&b1==680){
                    ui->walk1->move(508,680);
                    player1 =false;
                }else if(a1==508&&b1==680){
                    ui->walk1->move(408,680);
                    player1 =false;
                }else if(a1==408&&b1==680){
                    ui->walk1->move(308,680);
                    player1 =false;
                }else if(a1==308&&b1==680){
                    ui->walk1->move(208,680);
                    player1 =false;
                }else if(a1==208&&b1==680){
                    ui->walk1->move(85,680);
                    player1 =false;
                }else if(a1==85&&b1==680){
                    ui->walk1->move(100,578);
                    player1 =false;
                }else if(a1==100&&b1==578){
                    ui->walk1->move(100,478);
                    player1 =false;
                }else if(a1==100&&b1==478){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==378){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==278){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==178){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==55){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==208&&b1==70){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==308&&b1==70){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==408&&b1==70){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==508&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==608&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==730&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==178){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==278){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==378){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==478){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==578){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }
            }

            //move player2
            else if(player1 ==false){
                if(a2==730&&b2==730){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==608&&b2==730){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==508&&b2==730){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==408&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==308&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==208&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==85&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==578){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==478){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==378){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==278){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==178){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==55){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==208&&b2==20){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==308&&b2==20){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==408&&b2==20){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==508&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==608&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==730&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==178){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==278){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==378){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==478){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==578){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }
            }
        }

        //rollDice=2
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/dice2.png);");

            //move player1
            if(player1 ==true){
                if(a1==730&&b1==680){
                    a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==608&&b1==680){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==508&&b1==680){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==408&&b1==680){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==308&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==208&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==85&&b1==680){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==578){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==478){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==378){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==278){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==178){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==100&&b1==55){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==208&&b1==70){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==308&&b1==70){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==408&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==508&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==608&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==730&&b1==70){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==178){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==278){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==378){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==478){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }else if(a1==710&&b1==578){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);
                    player1 =false;
                }
            }

            //move player2
            else if(player1 ==false){
                if(a2==730&&b2==730){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==608&&b2==730){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==508&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==408&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==308&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==208&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==85&&b2==730){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==578){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==478){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==378){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==278){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==178){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==50&&b2==55){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==208&&b2==20){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==308&&b2==20){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==408&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==508&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==608&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==730&&b2==20){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==178){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==278){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==378){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==478){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }else if(a2==760&&b2==578){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);
                    player1 =true;
                }
            }
        }

        //rollDice=3
        else if(roll==3){
             ui->roll->setStyleSheet("background-image: url(:/dice3.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=730;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=608;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }
             }
        }



        //rollDice=4
        else if(roll==4){
             ui->roll->setStyleSheet("background-image: url(:/dice4.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=730;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=608;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }
             }
        }

        //rollDice=5
        else if(roll==5){
             ui->roll->setStyleSheet("background-image: url(:/dice5.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=730;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=608;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }
             }
        }

        //rollDice=6
        else if(roll==6){
             ui->roll->setStyleSheet("background-image: url(:/dice6.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=730;
                     b1=70;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a1=608;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);
                     player1 =true;
                 }
             }
        }
    }

