#include "main3.h"
#include "ui_main3.h"
#include<iostream>
#include<QPixmap>
#include <QTimer>
#include <QTimer>
#include <QTime>

//Add
#include "dice.h"

#include "space01.h"
#include "space02.h"
#include "space03.h"
#include "space04.h"
#include "space05.h"
#include "space06.h"
#include "space07.h"
#include "space08.h"
#include "space09.h"
#include "space10.h"
#include "space11.h"
#include "space12.h"
#include "space13.h"
#include "space14.h"
#include "space15.h"
#include "space16.h"
#include "space17.h"
#include "space18.h"
#include "space19.h"
#include "space20.h"
#include "space21.h"
#include "space22.h"
#include "space23.h"

#include "winwin.h"
#include "winwin2.h"


#include"ui_space.h"

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



void main3::on_random_clicked(){          //dice&&movement

    Dice random= Dice();
    int roll =random.roll_dice();
    //int roll=1;

    srand(time(0));
    int moneyRDPosit=(rand()%9+1)*100;  //positive
    int moneyRDNega=(rand()%9+1)*(-100);  //negative
    QTime _Timer = QTime::currentTime().addMSecs(1000);

    //NEW                 24  1    2   3         4     5    6  7   8           9    10 11 12    13   14  15       16        1718  19  20   21   22  23

    int space_cal[24] = {500,100,300,-100,moneyRDPosit,-200,0,300,-500,moneyRDNega,100,300,0, -400, -100,+500,moneyRDPosit,100,0,-100,200,-100,500,moneyRDNega};





        //rollDice=1---------------------------------------------------------------------
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/resource/img/dice/Dice-1.png);");

            if(player1 ==true){
                if(a1==730&&b1==680){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space1 +100
                    locate=1;                   
                    Space01 =new space01(this);
                    Space01->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==608&&b1==680){
                    a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space2 +300
                    locate=2;
                    Space02 =new space02(this);
                    Space02->show();
                    mon_play1+=space_cal[2];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==508&&b1==680){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space3 -100
                    locate=3;
                    Space03 =new space03(this);
                    Space03->show();
                    mon_play1+=space_cal[3];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==408&&b1==680){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space4 positive random
                    locate=4;
                    Space04 =new space04(this);
                    Space04->show();
                    mon_play1+=space_cal[4];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==308&&b1==680){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space5 -200
                    locate=5;
                    Space05 =new space05(this);
                    Space05->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==208&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);    //space6 movement to space10
                    locate=6;
                    while(QTime::currentTime() < _Timer){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);
                    }
                    Space06 =new space06(this);
                    Space06->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==85&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space7 +300
                    locate=7;
                    Space07 =new space07(this);
                    Space07->show();
                    mon_play1+=space_cal[7];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==100&&b1==578){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space8 -500
                    locate=8;
                    Space08 =new space08(this);
                    Space08->show();
                    mon_play1+=space_cal[8];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==100&&b1==478){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space9 negative random
                    locate=9;
                    Space09 =new space09(this);
                    Space09->show();
                    mon_play1+=space_cal[9];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==100&&b1==378){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space10 +100
                    locate=10;
                    Space10 =new space10(this);
                    Space10->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==100&&b1==278){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space11 +300
                    locate=11;
                    Space11 =new space11(this);
                    Space11->show();
                    mon_play1+=space_cal[11];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==100&&b1==178){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);   //space12 movement to space5
                    locate=12;
                    while(QTime::currentTime() < _Timer){
                        a1=208;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space12 =new space12(this);
                    Space12->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==100&&b1==55){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space13 -400
                    locate=13;
                    Space13 =new space13(this);
                    Space13->show();
                    mon_play1+=space_cal[13];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==208&&b1==70){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space14 -100
                    locate=14;
                    Space14 =new space14(this);
                    Space14->show();
                    mon_play1+=space_cal[14];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==308&&b1==70){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space15 +500
                    locate=15;
                    Space15 =new space15(this);
                    Space15->show();
                    mon_play1+=space_cal[15];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==408&&b1==70){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space16 random positive
                    locate=16;
                    Space16 =new space16(this);
                    Space16->show();
                    mon_play1+=space_cal[16];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==508&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space17 +100
                    locate=17;
                    Space17 =new space17(this);
                    Space17->show();
                    mon_play1+=space_cal[17];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==608&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space18 movement to space1
                    locate=18;
                    while(QTime::currentTime() < _Timer){
                        a1=730;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space18 =new space18(this);
                    Space18->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==730&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space19 -1000
                    locate=19;
                    Space19 =new space19(this);
                    Space19->show();
                    mon_play1+=space_cal[19];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==710&&b1==178){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space20 +200
                    locate=20;
                    Space20 =new space20(this);
                    Space20->show();
                    mon_play1+=space_cal[20];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==710&&b1==278){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space21 -300
                    locate=21;
                    Space21 =new space21(this);
                    Space21->show();
                    mon_play1+=space_cal[21];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==710&&b1==378){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space22 +500
                    locate=22;
                    Space22 =new space22(this);
                    Space22->show();
                    mon_play1+=space_cal[22];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==710&&b1==478){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space23 negative random
                    locate=23;
                    Space23 =new space23(this);
                    Space23->show();
                    mon_play1+=space_cal[23];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==710&&b1==578){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space24 +500(start)
                    locate=24;
                    //maybe dont have to show
                    mon_play1+=space_cal[0];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }
            }

            //move player2
            else if(player1 ==false){
                if(a2==730&&b2==730){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space1 +100
                    locate=1;
                    Space01 =new space01(this);
                    Space01->show();
                    mon_play2+=space_cal[1];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==608&&b2==730){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space2 +300
                    locate=2;
                    Space02 =new space02(this);
                    Space02->show();
                    mon_play2+=space_cal[2];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==508&&b2==730){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space3 -100
                    locate=3;
                    Space03 =new space03(this);
                    Space03->show();
                    mon_play2+=space_cal[3];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==408&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space4 positive random
                    locate=4;
                    Space04 =new space04(this);
                    Space04->show();
                    mon_play2+=space_cal[4];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==308&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space5 -200
                    locate=5;
                    Space05 =new space05(this);
                    Space05->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==208&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space6 movement to space10
                    locate=6;
                    while(QTime::currentTime() < _Timer){
                        a2=50;
                        b2=278;
                        ui->walk2->move(a2,b2);
                    }
                    Space06 =new space06(this);
                    Space06->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==85&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space7 +300
                    locate=7;
                    Space07 =new space07(this);
                    Space07->show();
                    mon_play2+=space_cal[7];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==50&&b2==578){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);   //space8 -500
                    locate=8;
                    Space08 =new space08(this);
                    Space08->show();
                    mon_play2+=space_cal[8];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==50&&b2==478){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);   //space9 negative random
                    locate=9;
                    Space09 =new space09(this);
                    Space09->show();
                    mon_play2+=space_cal[9];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==50&&b2==378){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space10 +100
                    locate=10;
                    Space10 =new space10(this);
                    Space10->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==50&&b2==278){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);    //space11 +300
                    locate=11;
                    Space11 =new space11(this);
                    Space11->show();
                    mon_play2+=space_cal[11];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==50&&b2==178){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space12 movement to space5
                    locate=12;
                    while(QTime::currentTime() < _Timer){
                        a2=208;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space12 =new space12(this);
                    Space12->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==50&&b2==55){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space13 -400
                    locate=13;
                    Space13 =new space13(this);
                    Space13->show();
                    mon_play2+=space_cal[13];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==208&&b2==20){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space14 -100
                    locate=14;
                    Space14 =new space14(this);
                    Space14->show();
                    mon_play2+=space_cal[14];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                }else if(a2==308&&b2==20){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space15 +500
                    locate=15;
                    Space15 =new space15(this);
                    Space15->show();
                    mon_play2+=space_cal[15];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==408&&b2==20){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space16 random positive
                    locate=16;
                    Space16 =new space16(this);
                    Space16->show();
                    mon_play2+=space_cal[16];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==508&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space17 +100
                    locate=17; 
                    Space17 =new space17(this);
                    Space17->show();
                    mon_play2+=space_cal[17];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==608&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space18 movement to space1
                    locate=10;
                    while(QTime::currentTime() < _Timer){
                        a2=730;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space18 =new space18(this);
                    Space18->show();
                    mon_play2+=space_cal[1];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==730&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space19 -1000
                    locate=19;
                    Space19 =new space19(this);
                    Space19->show();
                    mon_play2+=space_cal[19];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==178){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space20 +200
                    locate=20;
                    Space20 =new space20(this);
                    Space20->show();
                    mon_play2+=space_cal[20];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==278){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space21 -300
                    locate=21;
                    Space21 =new space21(this);
                    Space21->show();
                    mon_play2+=space_cal[21];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==378){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space22 +500
                    locate=22;
                    Space22 =new space22(this);
                    Space22->show();
                    mon_play2+=space_cal[22];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==478){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space23 negative random
                    locate=23;
                    Space23 =new space23(this);
                    Space23->show();
                    mon_play2+=space_cal[23];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==578){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space24 +500(start)
                    locate=24;
                    mon_play2+=space_cal[0];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }
            }
        }

        //rollDice=2---------------------------------------------------------------------
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/resource/img/dice/Dice-2.png);");

            //move player1
            if(player1 ==true){
                if(a1==730&&b1==680){
                    a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space2 +300
                    locate=2;
                    Space02 =new space02(this);
                    Space02->show();
                    mon_play1+=space_cal[2];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==608&&b1==680){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space3 -100
                    locate=3;
                    Space03 =new space03(this);
                    Space03->show();
                    mon_play1+=space_cal[3];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==508&&b1==680){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space4 positive random
                    locate=4;
                    Space04 =new space04(this);
                    Space04->show();
                    mon_play1+=space_cal[4];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==408&&b1==680){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space5 -200
                    locate=5;
                    Space05 =new space05(this);
                    Space05->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==308&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);    //space6 movement to space10
                    locate=6;
                    while(QTime::currentTime() < _Timer){
                        a1=100;
                        b1=278;
                        ui->walk1->move(a1,b1);
                    }
                    Space06 =new space06(this);
                    Space06->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==208&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space7 +300
                    locate=7;
                    Space07 =new space07(this);
                    Space07->show();
                    mon_play1+=space_cal[7];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==85&&b1==680){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space8 -500
                    locate=8;
                    Space08 =new space08(this);
                    Space08->show();
                    mon_play1+=space_cal[8];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==100&&b1==578){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space9 negative random
                    locate=9;
                    Space09 =new space09(this);
                    Space09->show();
                    mon_play1+=space_cal[9];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==100&&b1==478){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space10 +100
                    locate=10;
                    Space10 =new space10(this);
                    Space10->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==100&&b1==378){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space11 +300
                    locate=11;
                    Space11 =new space11(this);
                    Space11->show();
                    mon_play1+=space_cal[11];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==100&&b1==278){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);   //space12 movement to space5
                    locate=12;
                    while(QTime::currentTime() < _Timer){
                        a1=208;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space12 =new space12(this);
                    Space12->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==100&&b1==178){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space13 -400
                    locate=13;
                    Space13 =new space13(this);
                    Space13->show();
                    mon_play1+=space_cal[13];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==100&&b1==55){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space14 -100
                    locate=14;
                    Space14 =new space14(this);
                    Space14->show();
                    mon_play1+=space_cal[14];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==208&&b1==70){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space15 +500
                    locate=15;
                    Space15 =new space15(this);
                    Space15->show();
                    mon_play1+=space_cal[15];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==308&&b1==70){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space16 random positive
                    locate=16;
                    Space16 =new space16(this);
                    Space16->show();
                    mon_play1+=space_cal[16];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==408&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space17 +100
                    locate=17;
                    Space17 =new space17(this);
                    Space17->show();
                    mon_play1+=space_cal[17];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==508&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space18 movement to space1
                    locate=18;

                    while(QTime::currentTime() < _Timer){
                        a1=730;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space18 =new space18(this);
                    Space18->show();
                    mon_play1+=space_cal[1];

                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==608&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space19 -1000
                    locate=19;
                    Space19 =new space19(this);
                    Space19->show();
                    mon_play1+=space_cal[19];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==730&&b1==70){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space20 +200
                    locate=20;
                    Space20 =new space20(this);
                    Space20->show();
                    mon_play1+=space_cal[20];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==710&&b1==178){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space21 -300
                    locate=21;
                    Space21 =new space21(this);
                    Space21->show();
                    mon_play1+=space_cal[21];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                }else if(a1==710&&b1==278){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space22 +500
                    locate=22;
                    Space22 =new space22(this);
                    Space22->show();
                    mon_play1+=space_cal[22];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==710&&b1==378){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space23 negative random
                    locate=23;
                    Space23 =new space23(this);
                    Space23->show();
                    mon_play1+=space_cal[23];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==710&&b1==478){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space24 +500(start)
                    locate=24;
                    //maybe dont have to show

                    mon_play1+=space_cal[0];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }else if(a1==710&&b1==578){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space1 +100
                    locate=1;
                    Space01 =new space01(this);
                    Space01->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                }
            }

            //move player2
            else if(player1 ==false){
                if(a2==730&&b2==730){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space2 +300
                    locate=2;
                    Space02 =new space02(this);
                    Space02->show();
                    mon_play2+=space_cal[2];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==608&&b2==730){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space3 -100
                    locate=3;
                    Space03 =new space03(this);
                    Space03->show();
                    mon_play2+=space_cal[3];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==508&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space4 positive random
                    locate=4;
                    Space04 =new space04(this);
                    Space04->show();
                    mon_play2+=space_cal[4];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==408&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space5 -200
                    locate=5;
                    Space05 =new space05(this);
                    Space05->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==308&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space6 movement to space10
                    locate=6;
                    while(QTime::currentTime() < _Timer){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);
                    }
                    Space06 =new space06(this);
                    Space06->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==208&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space7 +300
                    locate=7;
                    Space07 =new space07(this);
                    Space07->show();
                    mon_play2+=space_cal[7];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==85&&b2==730){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);   //space8 -500
                    locate=8;
                    Space08 =new space08(this);
                    Space08->show();
                    mon_play2+=space_cal[8];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==50&&b2==578){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);   //space9 negative random
                    locate=9;
                    Space09 =new space09(this);
                    Space09->show();
                    mon_play2+=space_cal[9];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==50&&b2==478){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space10 +100
                    locate=10;
                    Space10 =new space10(this);
                    Space10->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==50&&b2==378){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);    //space11 +300
                    locate=11;
                    Space11 =new space11(this);
                    Space11->show();
                    mon_play2+=space_cal[11];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==50&&b2==278){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space12 movement to space5
                    locate=13;
                    while(QTime::currentTime() < _Timer){
                        a2=208;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space12 =new space12(this);
                    Space12->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==50&&b2==178){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space13 -400
                    locate=13;
                    Space13 =new space13(this);
                    Space13->show();
                    mon_play2+=space_cal[13];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==50&&b2==55){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space14 -100
                    locate=14;
                    Space14 =new space14(this);
                    Space14->show();
                    mon_play2+=space_cal[14];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==208&&b2==20){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space15 +500
                    locate=15;
                    Space15 =new space15(this);
                    Space15->show();

                    mon_play2+=space_cal[15];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==308&&b2==20){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space16 random positive
                    locate=16;
                    Space16 =new space16(this);
                    Space16->show();

                    mon_play2+=space_cal[16];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==408&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space17 +100
                    locate=17;
                    Space17 =new space17(this);
                    Space17->show();

                    mon_play2+=space_cal[17];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==508&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space18 movement to space1
                    locate=10;

                    while(QTime::currentTime() < _Timer){
                        a2=730;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space18 =new space18(this);
                    Space18->show(); 
                    mon_play2+=space_cal[1];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==608&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space19 -1000
                    locate=19;
                    
                    Space19 =new space19(this);
                    Space19->show();

                    mon_play2+=space_cal[19];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==730&&b2==20){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space20 +200
                    locate=20;
                    Space20 =new space20(this);
                    Space20->show();
                    mon_play2+=space_cal[20];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==178){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space21 -300
                    locate=21;
                    Space21 =new space21(this);
                    Space21->show();

                    mon_play2+=space_cal[21];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==278){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space22 +500
                    locate=22;
                    Space22 =new space22(this);
                    Space22->show();
                    mon_play2+=space_cal[22];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==378){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space23 negative random
                    locate=23;
                    Space23 =new space23(this);
                    Space23->show();
                    mon_play2+=space_cal[23];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==478){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space24 +500(start)
                    locate=24;
                    mon_play2+=space_cal[0];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }else if(a2==760&&b2==578){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space1 +100
                    locate=1;
                    Space01 =new space01(this);
                    Space01->show();
                    mon_play2+=space_cal[1];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                }
            }
        }

        //rollDice=3---------------------------------------------------------------------
        else if(roll==3){
             ui->roll->setStyleSheet("background-image: url(:/resource/img/dice/Dice-3.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space3 -100
                    locate=3;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[3];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==680){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space4 positive random
                    locate=4;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[4];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space5 -200
                    locate=5;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);    //space6 movement to space10
                    locate=6;

                    while(QTime::currentTime() < _Timer){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);
                    }
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[10];

                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space7 +300
                    locate=7;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[7];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space8 -500
                    locate=8;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[8];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space9 negative random
                    locate=9;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[9];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;

                 }else if(a1==100&&b1==578){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space10 +100
                    locate=10;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==478){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space11 +300
                    locate=11;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[11];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==378){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);   //space12 movement to space5
                    locate=12;

                    while(QTime::currentTime() < _Timer){
                        a1=208;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[5];

                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==278){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space13 -400
                    locate=13;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[13];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==178){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space14 -100
                    locate=14;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[14];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==55){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space15 +500
                    locate=15;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[15];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==70){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space16 random positive
                    locate=16;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[16];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space17 +100
                    locate=17;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[17];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space18 movement to space1
                    locate=18;

                    while(QTime::currentTime() < _Timer){
                        a1=730;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[1];

                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space19 -1000
                    locate=19;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[19];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==70){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space20 +200
                    locate=20;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[20];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space21 -300
                    locate=21;
                    Space01 =new space01(this);
                    Space01->show();


                    mon_play1+=space_cal[21];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==178){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space22 +500
                    locate=22;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[22];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==278){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space23 negative random
                    locate=23;
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[23];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space24 +500(start)
                    locate=24;
                    //maybe dont have to show

                    mon_play1+=space_cal[0];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space1 +100
                    locate=1;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space2 +300
                    locate=2;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play1+=space_cal[2];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space3 -100
                    locate=3;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[3];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space4 positive random
                    locate=4;
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[4];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space5 -200
                    locate=5;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space6 movement to space10
                    locate=6;

                    while(QTime::currentTime() < _Timer){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);
                    }
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[10];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space7 +300
                    locate=7;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[7];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==730){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);   //space8 -500
                    locate=8;
                    Space08 =new space08(this);
                    Space08->show();
                    mon_play2+=space_cal[8];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;

                 }else if(a2==85&&b2==730){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);   //space9 negative random
                    locate=9;
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[9];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==578){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space10 +100
                    locate=10;
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==478){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);    //space11 +300
                    locate=11;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[11];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==378){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space12 movement to space5
                    locate=13;

                    while(QTime::currentTime() < _Timer){
                        a2=208;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[5];


                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==278){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space13 -400
                    locate=13;
                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[13];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==178){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space14 -100
                    locate=14;

                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[14];
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==55){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space15 +500
                    locate=15;

                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[15];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==20){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space16 random positive
                    locate=16;
                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[16];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space17 +100
                    locate=17;

                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[17];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space18 movement to space1
                    locate=10;

                    while(QTime::currentTime() < _Timer){
                        a2=730;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[1];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space19 -1000
                    locate=19;

                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[19];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==20){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space20 +200
                    locate=20;

                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[20];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==730&&b2==20){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space21 -300
                    locate=21;
                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[21];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==178){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space22 +500
                    locate=22;

                    Space01 =new space01(this);
                    Space01->show();

                    mon_play2+=space_cal[22];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==278){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space23 negative random
                    locate=23;
                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[23];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==378){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space24 +500(start)
                    locate=24;

                    mon_play2+=space_cal[0];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==478){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space1 +100
                    locate=1;

                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[1];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==578){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space2 +300
                    locate=2;

                    Space01 =new space01(this);
                    Space01->show();


                    mon_play2+=space_cal[2];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }
             }
        }

        //rollDice=4---------------------------------------------------------------------
        else if(roll==4){
             ui->roll->setStyleSheet("background-image: url(:/resource/img/dice/Dice-4.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space4 positive random
                    locate=4;
                    Space04 = new space04(this);
                    Space04->show();
                    mon_play1+=space_cal[4];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==680){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space5 -200
                    locate=5;
                    Space05 =new space05(this);
                    Space05->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);    //space6 movement to space10
                    locate=6;
                    while(QTime::currentTime() < _Timer){
                        a1=100;
                        b1=278;
                        ui->walk1->move(a1,b1);
                    }
                    Space06 = new space06(this);
                    Space06->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space7 +300
                    locate=7;
                    Space07 = new space07(this);
                    Space07->show();
                    mon_play1+=space_cal[7];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==680){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space8 -500
                    locate=8;
                    Space08 = new space08(this);
                    Space08->show();
                    mon_play1+=space_cal[8];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==680){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space9 negative random
                    locate=9;
                    Space09 = new space09(this);
                    Space09->show();
                    mon_play1+=space_cal[9];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==85&&b1==680){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space10 +100
                    locate=10;
                    Space10 = new space10(this);
                    Space10->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==578){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space11 +300
                    locate=11;
                    Space11 = new space11(this);
                    Space11->show();
                    mon_play1+=space_cal[11];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==478){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);   //space12 movement to space5
                    locate=12;
                    while(QTime::currentTime() < _Timer){
                        a1=208;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space12 = new space12(this);
                    Space12->show();
                    mon_play1+=space_cal[12];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==378){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space13 -400
                    locate=13;
                    Space13 = new space13(this);
                    Space13->show();
                    mon_play1+=space_cal[13];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==278){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space14 -100
                    locate=14;
                    Space14 = new space14(this);
                    Space14->show();
                    mon_play1+=space_cal[14];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==178){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space15 +500
                    locate=15;
                    Space15 = new space15(this);
                    Space15->show();
                    mon_play1+=space_cal[15];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==55){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space16 random positive
                    locate=16;
                    Space16 = new space16(this);
                    Space16->show();
                    mon_play1+=space_cal[16];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space17 +100
                    locate=17;
                    Space17 = new space17(this);
                    Space17->show();
                    mon_play1+=space_cal[17];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space18 movement to space1
                    locate=18;
                    while(QTime::currentTime() < _Timer){
                        a1=730;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space18 = new space18(this);
                    Space18->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space19 -1000
                    locate=19;
                    Space19 = new space19(this);
                    Space19->show();
                    mon_play1+=space_cal[19];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==70){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space20 +200
                    locate=20;
                    Space20 = new space20(this);
                    Space20->show();
                    mon_play1+=space_cal[20];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==70){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space21 -300
                    locate=21;
                    Space21 = new space21(this);
                    Space21->show();
                    mon_play1+=space_cal[21];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==730&&b1==70){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space22 +500
                    locate=22;
                    Space22 = new space22(this);
                    Space22->show();
                    mon_play1+=space_cal[22];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==178){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space23 negative random
                    locate=23;
                    Space23 = new space23(this);
                    Space23->show();
                    mon_play1+=space_cal[23];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==278){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space24 +500(start)
                    locate=24;
                    //maybe dont have to show
                    mon_play1+=space_cal[0];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==378){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space1 +100
                    locate=1;
                    Space01 = new space01(this);
                    Space01->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==478){
                    a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space2 +300
                    locate=2;
                    Space02 = new space02(this);
                    Space02->show();
                    mon_play1+=space_cal[2];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space3 -100
                    locate=3;
                    Space03 = new space03(this);
                    Space03->show();
                    mon_play1+=space_cal[3];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }
             }
             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space4 positive random
                    locate=4;
                    Space04 = new space04(this);
                    Space04->show();
                    mon_play2+=space_cal[4];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space5 -200
                    locate=5;
                    Space05 = new space05(this);
                    Space05->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space6 movement to space10
                    locate=6;

                    while(QTime::currentTime() < _Timer){
                        a2=50;
                        b2=278;
                        ui->walk2->move(a2,b2);
                    }
                    Space06 = new space06(this);
                    Space06->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space7 +300
                    locate=7;
                    Space07 = new space07(this);
                    Space07->show();
                    mon_play2+=space_cal[7];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==730){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);   //space8 -500
                    locate=8;
                    Space08 = new space08(this);
                    Space08->show();
                    mon_play2+=space_cal[8];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==730){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);   //space9 negative random
                    locate=9;
                    Space09 = new space09(this);
                    Space09->show();
                    mon_play2+=space_cal[9];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==85&&b2==730){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space10 +100
                    locate=10;
                    Space10 = new space10(this);
                    Space10->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==578){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);    //space11 +300
                    locate=11;
                    Space11 = new space11(this);
                    Space11->show();
                    mon_play2+=space_cal[11];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==478){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space12 movement to space5
                    locate=13;
                
                    while(QTime::currentTime() < _Timer){
                        a2=208;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space12 = new space12(this);
                    Space12->show();
                    mon_play2+=space_cal[5];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==378){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space13 -400
                    locate=13;
                    Space13 = new space13(this);
                    Space13->show();
                    mon_play2+=space_cal[13];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==278){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space14 -100
                    locate=14;
                    Space14 = new space14(this);
                    Space14->show();
                    mon_play2+=space_cal[14];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==178){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space15 +500
                    locate=15;
                    Space15 = new space15(this);
                    Space15->show();
                    mon_play2+=space_cal[15];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==55){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space16 random positive
                    locate=16;
                    Space16 = new space16(this);
                    Space16->show();
                    mon_play2+=space_cal[16];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space17 +100
                    locate=17;
                    Space17 = new space17(this);
                    Space17->show();
                    mon_play2+=space_cal[17];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space18 movement to space1
                    locate=10;
                    while(QTime::currentTime() < _Timer){
                        a2=730;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space18 = new space18(this);
                    Space18->show();
                    mon_play2+=space_cal[1];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space19 -1000
                    locate=19;

                    Space19 = new space19(this);
                    Space19->show();

                    mon_play2+=space_cal[19];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==20){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space20 +200
                    locate=20;
                    Space20 = new space20(this);
                    Space20->show();
                    mon_play2+=space_cal[20];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==20){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space21 -300
                    locate=21;

                    Space21 = new space21(this);
                    Space21->show();

                    mon_play2+=space_cal[21];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==730&&b2==20){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space22 +500
                    locate=22;
                    Space22 = new space22(this);
                    Space22->show();
                    mon_play2+=space_cal[22];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==178){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space23 negative random
                    locate=23;
                    Space23 = new space23(this);
                    Space23->show();
                    mon_play2+=space_cal[23];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==278){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space24 +500(start)
                    locate=24;
                    mon_play2+=space_cal[0];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==378){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space1 +100
                    locate=1;
                    Space01 = new space01(this);
                    Space01->show();
                    mon_play2+=space_cal[1];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==478){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space2 +300
                    locate=2;
                    Space02 = new space02(this);
                    Space02->show();
                    mon_play2+=space_cal[2];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==578){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space3 -100
                    locate=3;
                    Space03 = new space03(this);
                    Space03->show();
                    mon_play2+=space_cal[3];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }
             }
        }

        //rollDice=5---------------------------------------------------------------------
        else if(roll==5){
             ui->roll->setStyleSheet("background-image: url(:/resource/img/dice/Dice-5.png);");
             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space5 -200
                    locate=5;
                    Space05 = new space05(this);
                    Space05->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);    //space6 movement to space10
                    locate=6;
                    while(QTime::currentTime() < _Timer){
                        a1=100;
                        b1=278;
                        ui->walk1->move(a1,b1);
                    }
                    Space06 = new space06(this);
                    Space06->show();
                    mon_play1+=space_cal[10];

                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space7 +300
                    locate=7;
                    Space07 = new space07(this);
                    Space07->show();
                    mon_play1+=space_cal[7];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==680){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space8 -500
                    locate=8;
                    Space08 = new space08(this);
                    Space08->show();
                    mon_play1+=space_cal[8];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==680){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space9 negative random
                    locate=9;
                    Space09 = new space09(this);
                    Space09->show();
                    mon_play1+=space_cal[9];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==680){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space10 +100
                    locate=10;
                    Space10 = new space10(this);
                    Space10->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==85&&b1==680){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space11 +300
                    locate=11;
                    Space11 = new space11(this);
                    Space11->show();
                    mon_play1+=space_cal[11];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==578){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);   //space12 movement to space5
                    locate=12;
                    while(QTime::currentTime() < _Timer){
                        a1=208;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space12 = new space12(this);
                    Space12->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==478){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space13 -400
                    locate=13;
                    Space13 = new space13(this);
                    Space13->show();
                    mon_play1+=space_cal[13];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==378){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space14 -100
                    locate=14;
                    Space14 = new space14(this);
                    Space14->show();
                    mon_play1+=space_cal[14];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==278){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space15 +500
                    locate=15;
                    Space15 = new space15(this);
                    Space15->show();
                    mon_play1+=space_cal[15];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==178){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space16 random positive
                    locate=16;
                    Space16 = new space16(this);
                    Space16->show();
                    mon_play1+=space_cal[16];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==55){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space17 +100
                    locate=17;
                    Space17 = new space17(this);
                    Space17->show();
                    mon_play1+=space_cal[17];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space18 movement to space1
                    locate=18;
                    while(QTime::currentTime() < _Timer){
                        a1=730;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space18 = new space18(this);
                    Space18->show();
                    mon_play1+=space_cal[1];

                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space19 -1000
                    locate=19;
                    Space19 = new space19(this);
                    Space19->show();
                    mon_play1+=space_cal[19];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==70){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space20 +200
                    locate=20;
                    Space20 = new space20(this);
                    Space20->show();
                    mon_play1+=space_cal[20];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==70){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space21 -300
                    locate=21;
                    Space21 = new space21(this);
                    Space21->show();
                    mon_play1+=space_cal[21];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==70){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space22 +500
                    locate=22;
                    Space22 = new space22(this);
                    Space22->show();
                    mon_play1+=space_cal[22];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==730&&b1==70){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space23 negative random
                    locate=23;
                    Space23 = new space23(this);
                    Space23->show();
                    mon_play1+=space_cal[23];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==178){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space24 +500(start)
                    locate=24;
                    //maybe dont have to show
                    mon_play1+=space_cal[0];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==278){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space1 +100
                    locate=1;
                    Space01 = new space01(this);
                    Space01->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==378){
                    a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space2 +300
                    locate=2;
                    Space02 = new space02(this);
                    Space02->show();
                    mon_play1+=space_cal[2];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==478){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space3 -100
                    locate=3;
                    Space03 = new space03(this);
                    Space03->show();
                    mon_play1+=space_cal[3];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==578){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space4 positive random
                    locate=4;
                    Space04 = new space04(this);
                    Space04->show();
                    mon_play1+=space_cal[4];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space5 -200
                    locate=5;
                    Space05 = new space05(this);
                    Space05->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space6 movement to space10
                    locate=6;

                    while(QTime::currentTime() < _Timer){
                        a2=50;
                        b2=278;
                        ui->walk2->move(a2,b2);
                    }
                    Space06 = new space06(this);
                    Space06->show();
                    mon_play2+=space_cal[10];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space7 +300
                    locate=7;
                    Space07 = new space07(this);
                    Space07->show();
                    mon_play2+=space_cal[7];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==730){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);   //space8 -500
                    locate=8;
                    Space08 = new space08(this);
                    Space08->show();
                    mon_play2+=space_cal[8];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==730){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);   //space9 negative random
                    locate=9;
                    Space09 = new space09(this);
                    Space09->show();
                    mon_play2+=space_cal[9];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==730){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space10 +100
                    locate=10;
                    Space10 = new space10(this);
                    Space10->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==85&&b2==730){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);    //space11 +300
                    locate=11;
                    Space11 = new space11(this);
                    Space11->show();
                    mon_play2+=space_cal[11];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==578){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space12 movement to space5
                    locate=13;


                    while(QTime::currentTime() < _Timer){
                        a2=208;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space12 = new space12(this);
                    Space12->show();
                    mon_play2+=space_cal[5];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==478){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space13 -400
                    locate=13;
                    Space13 = new space13(this);
                    Space13->show();
                    mon_play2+=space_cal[13];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==378){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space14 -100
                    locate=14;
                    Space14 = new space14(this);
                    Space14->show();
                    mon_play2+=space_cal[14];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==278){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space15 +500
                    locate=15;
                    Space15 = new space15(this);
                    Space15->show();
                    mon_play2+=space_cal[15];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==178){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space16 random positive
                    locate=16;
                    Space16 = new space16(this);
                    Space16->show();
                    mon_play2+=space_cal[16];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==55){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space17 +100
                    locate=17;
                    Space17 = new space17(this);
                    Space17->show();
                    mon_play2+=space_cal[17];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space18 movement to space1
                    locate=10;

                    while(QTime::currentTime() < _Timer){
                        a2=730;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space18 = new space18(this);
                    Space16->show();
                    mon_play2+=space_cal[1];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space19 -1000
                    locate=19;
                    Space19 = new space19(this);
                    Space19->show();
                    mon_play2+=space_cal[19];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==20){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space20 +200
                    locate=20;
                    Space20 = new space20(this);
                    Space20->show();
                    mon_play2+=space_cal[20];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==20){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space21 -300
                    locate=21;
                    Space21 = new space21(this);
                    Space21->show();
                    mon_play2+=space_cal[21];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==20){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space22 +500
                    locate=22;
                    Space22 = new space22(this);
                    Space22->show();
                    mon_play2+=space_cal[22];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==730&&b2==20){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space23 negative random
                    locate=23;
                    Space23 = new space23(this);
                    Space23->show();
                    mon_play2+=space_cal[23];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==178){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space24 +500(start)
                    locate=24;

                    mon_play2+=space_cal[0];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==278){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space1 +100
                    locate=1;
                    Space01 = new space01(this);
                    Space01->show();
                    mon_play2+=space_cal[1];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==378){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space2 +300
                    locate=2;
                    Space02 = new space02(this);
                    Space02->show();
                    mon_play2+=space_cal[2];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==478){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space3 -100
                    locate=3;
                    Space03 = new space03(this);
                    Space03->show();
                    mon_play2+=space_cal[3];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==578){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space4 positive random
                    locate=4;
                    Space04 = new space04(this);
                    Space04->show();
                    mon_play2+=space_cal[4];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }
             }
        }

        //rollDice=6---------------------------------------------------------------------
        else if(roll==6){
             ui->roll->setStyleSheet("background-image: url(:/resource/img/dice/Dice-6.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);    //space6 movement to space10
                    locate=6;

                    while(QTime::currentTime() < _Timer){
                        a1=100;
                        b1=278;
                        ui->walk1->move(a1,b1);
                    }
                    Space06 = new space06(this);
                    Space06->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space7 +300
                    locate=7;
                    Space07 = new space07(this);
                    Space07->show();
                    mon_play1+=space_cal[7];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==680){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space8 -500
                    locate=8;
                    Space08 = new space08(this);
                    Space08->show();
                    mon_play1+=space_cal[8];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==680){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space9 negative random
                    locate=9;
                    Space09 = new space09(this);
                    Space09->show();
                    mon_play1+=space_cal[9];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==680){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space10 +100
                    locate=10;
                    Space10 = new space10(this);
                    Space10->show();
                    mon_play1+=space_cal[10];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==680){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space11 +300
                    locate=11;
                    Space11 = new space11(this);
                    Space11->show();
                    mon_play1+=space_cal[11];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==85&&b1==680){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);   //space12 movement to space5
                    locate=12;
                    while(QTime::currentTime() < _Timer){
                        a1=208;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space12 = new space12(this);
                    Space12->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==578){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space13 -400
                    locate=13;
                    Space13 = new space13(this);
                    Space13->show();
                    mon_play1+=space_cal[13];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==478){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space14 -100
                    locate=14;
                    Space14 = new space14(this);
                    Space14->show();
                    mon_play1+=space_cal[14];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==378){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space15 +500
                    locate=15;
                    Space15 = new space15(this);
                    Space15->show();
                    mon_play1+=space_cal[15];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                        win1 = new Winwin(this);
                        win1->show();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==278){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space16 random positive
                    locate=16;
                    Space16 = new space16(this);
                    Space16->show();
                    mon_play1+=space_cal[16];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==178){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space17 +100
                    locate=17;
                    Space17 = new space17(this);
                    Space17->show();
                    mon_play1+=space_cal[17];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==100&&b1==55){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space18 movement to space1
                    locate=18;
                    while(QTime::currentTime() < _Timer){
                        a1=730;
                        b1=680;
                        ui->walk1->move(a1,b1);
                    }
                    Space18 = new space18(this);
                    Space18->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==208&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space19 -1000
                    locate=19;
                    Space19 = new space19(this);
                    Space19->show();
                    mon_play1+=space_cal[19];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==308&&b1==70){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space20 +200
                    locate=20;
                    Space20 = new space20(this);
                    Space20->show();
                    mon_play1+=space_cal[20];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==408&&b1==70){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space21 -300
                    locate=21;
                    Space21 = new space21(this);
                    Space21->show();
                    mon_play1+=space_cal[21];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==508&&b1==70){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space22 +500
                    locate=22;
                    Space22 = new space22(this);
                    Space22->show();
                    mon_play1+=space_cal[22];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==608&&b1==70){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space23 negative random
                    locate=23;
                    Space23 = new space23(this);
                    Space23->show();
                    mon_play1+=space_cal[23];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==730&&b1==70){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space24 +500(start)
                    locate=24;
                    mon_play1+=space_cal[0];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==178){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space1 +100
                    locate=1;
                    Space01 = new space01(this);
                    Space01->show();
                    mon_play1+=space_cal[1];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==278){
                    a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space2 +300
                    locate=2;
                    Space02 = new space02(this);
                    Space02->show();
                    mon_play1+=space_cal[2];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==378){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space3 -100
                    locate=3;
                    Space03 = new space03(this);
                    Space03->show();
                    mon_play1+=space_cal[3];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==478){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space4 positive random
                    locate=4;
                    Space04 = new space04(this);
                    Space04->show();
                    mon_play1+=space_cal[4];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }else if(a1==710&&b1==578){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space5 -200
                    locate=5;
                    Space05 = new space05(this);
                    Space05->show();
                    mon_play1+=space_cal[5];
                    ui->costP1->setText(QString::number(mon_play1));
                    if(mon_play1>=3000){
                       win1 = new Winwin(this);
                       win1->show();
                       this->hide();
                    }else if(mon_play1<0){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }
                    player1 =false;
                 }
             }

             //move player2
             else if(player1 ==false) {
                 if(a2==730&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space6 movement to space10
                    locate=6;

                    while(QTime::currentTime() < _Timer){
                        a2=50;
                        b2=278;
                        ui->walk2->move(a2,b2);
                    }
                    Space06 = new space06(this);
                    Space06->show();
                    mon_play2+=space_cal[10];

                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space7 +300
                    locate=7;
                    Space07 = new space07(this);
                    Space07->show();
                    mon_play2+=space_cal[7];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==730){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);   //space8 -500
                    locate=8;
                    Space08 = new space08(this);
                    Space08->show();
                    mon_play2+=space_cal[8];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==730){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);   //space9 negative random
                    locate=9;
                    Space09 = new space09(this);
                    Space09->show();
                    mon_play2+=space_cal[9];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==730){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space10 +100
                    locate=10;
                    Space10 = new space10(this);
                    Space10->show();
                    mon_play2+=space_cal[10];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==730){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);    //space11 +300
                    locate=11;
                    Space11 = new space11(this);
                    Space11->show();
                    mon_play2+=space_cal[11];
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==85&&b2==730){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space12 movement to space5
                    locate=13;
                    while(QTime::currentTime() < _Timer){
                        a2=208;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space12 = new space12(this);
                    Space12->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==578){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space13 -400
                    locate=13;
                    Space13 = new space13(this);
                    Space13->show();
                    mon_play2+=space_cal[13];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==478){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space14 -100
                    locate=14;
                    Space14 = new space14(this);
                    Space14->show();
                    mon_play2+=space_cal[14];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==378){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space15 +500
                    locate=15;
                    Space15 = new space15(this);
                    Space15->show();
                    mon_play2+=space_cal[15];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==278){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space16 random positive
                    locate=16;
                    Space16 = new space16(this);
                    Space16->show();
                    mon_play2+=space_cal[16];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==178){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space17 +100
                    locate=17;
                    Space17 = new space17(this);
                    Space17->show();
                    mon_play2+=space_cal[17];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==50&&b2==55){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space18 movement to space1
                    locate=10;
                    while(QTime::currentTime() < _Timer){
                        a2=730;
                        b2=730;
                        ui->walk2->move(a2,b2);
                    }
                    Space18 = new space18(this);
                    Space18->show();
                    mon_play2+=space_cal[1];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==208&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space19 -1000
                    locate=19;
                    Space19 = new space19(this);
                    Space19->show();
                    mon_play2+=space_cal[19];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==308&&b2==20){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space20 +200
                    locate=20;
                    Space20 = new space20(this);
                    Space20->show();
                    mon_play2+=space_cal[20];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==408&&b2==20){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space21 -300
                    locate=21;
                    Space21 = new space21(this);
                    Space21->show();
                    mon_play2+=space_cal[21];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==508&&b2==20){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space22 +500
                    locate=22;
                    Space22 = new space22(this);
                    Space22->show();
                    mon_play2+=space_cal[22];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==608&&b2==20){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space23 negative random
                    locate=23;
                    Space23 = new space23(this);
                    Space23->show();
                    mon_play2+=space_cal[23];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==730&&b2==20){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space24 +500(start)
                    locate=24;
                    mon_play2+=space_cal[0];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==178){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space1 +100
                    locate=1;
                    Space01 = new space01(this);
                    Space01->show();
                    mon_play2+=space_cal[1];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==278){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space2 +300
                    locate=2;
                    Space02 = new space02(this);
                    Space02->show();
                    mon_play2+=space_cal[2];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==378){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space3 -100
                    locate=3;
                    Space03 = new space03(this);
                    Space03->show();
                    mon_play2+=space_cal[3];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==478){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space4 positive random
                    locate=4;
                    Space04 = new space04(this);
                    Space04->show();
                    mon_play2+=space_cal[4];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }else if(a2==760&&b2==578){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space5 -200
                    locate=5;
                    Space05 = new space05(this);
                    Space05->show();
                    mon_play2+=space_cal[5];
                    ui->costP2->setText(QString::number(mon_play2));
                    if(mon_play2>=3000){
                        win2 = new winwin2(this);
                        win2->show();
                        this->hide();
                    }else if(mon_play2<0){
                        win1 = new Winwin(this);
                        win1->show();
                        this->hide();
                    }
                    player1 =true;
                 }
             }
        }
}


