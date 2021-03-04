#include "main3.h"
#include "ui_main3.h"
#include<iostream>
#include "dice.h"
#include<QPixmap>
#include "buyornot.h"
//Add
#include"space.h"
#include"myanmar.h"
#include "vietnam.h"
#include "chance.h"
#include "taiwan.h"
#include "wait.h"
#include "bhutan.h"
#include "tax.h"
#include "japan.h"
#include "korea.h"
#include "bonus.h"
#include "china.h"
#include "brazil.h"
#include "france.h"
#include "usa.h"
#include "swis.h"
#include "supertax.h"
#include "england.h"
//________
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

int a1=730;
int b1=680;
int a2=730;
int b2=730;
bool player1 =true;
int locate=0;
void main3::on_random_clicked(){          //dice&&movement

    Dice random= Dice();
    int roll =random.roll_dice();
    //int roll=1;

    //int spaceValue=0;
    //space spaceSet =space();
    //spaceSet.property(spaceValue);


        //rollDice=1---------------------------------------------------------------------
        if(roll==1){
            ui->roll->setStyleSheet("background-image: url(:/630610757/2020.2/261102 ComPro/project/dice1.png);");

            if(player1 ==true){

                if(a1==730&&b1==680){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space=1 Thailand
                    locate=1;
                    myques = new buyORnot(this);
                    myques->show();

                    myspace = new space(this);
                    myspace->show();
                    //spaceSet.property(locate);

                    player1 =false;

                }else if(a1==608&&b1==680){
                    a1=508;b1=680;
                    ui->walk1->move(a1,b1);   //space=2 Myanmar
                    locate=2;
                    myques = new buyORnot(this);
                    myques->show();

                    myanmar = new Myanmar(this);
                    myanmar->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==508&&b1==680){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space=3 Vietnam
                    locate=3;
                    myques = new buyORnot(this);
                    myques->show();

                    vietnam = new Vietnam(this);
                    vietnam->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==408&&b1==680){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space=4 chance
                    locate=4;

                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==308&&b1==680){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space=5 Taiwan
                    locate=5;
                    myques = new buyORnot(this);
                    myques->show();

                    taiwan = new Taiwan(this);
                    taiwan->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==208&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);    //space=6 Airport
                    locate=6;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==85&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space=7 bhutan
                    locate=7;
                    myques = new buyORnot(this);
                    myques->show();

                    bhutan = new Bhutan(this);
                    bhutan->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==100&&b1==578){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space=8 tax
                    locate=8;

                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==100&&b1==478){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space=9 chance
                    locate=9;

                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==100&&b1==378){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space=10 japan
                    locate=10;
                    myques = new buyORnot(this);
                    myques->show();

                    japan = new Japan(this);
                    japan->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==100&&b1==278){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space=11 korea
                    locate=11;
                    myques = new buyORnot(this);
                    myques->show();

                    korea = new Korea(this);
                    korea->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==100&&b1==178){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);   //space=12 bonus
                    locate=12;

                    bonus = new Bonus(this);
                    bonus->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==100&&b1==55){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space=13 tax
                    locate=13;

                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==208&&b1==70){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space=14 china
                    locate=14;
                    myques = new buyORnot(this);
                    myques->show();

                    china = new China(this);
                    china->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==308&&b1==70){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space=15 brazil
                    locate=15;
                    myques = new buyORnot(this);
                    myques->show();

                    brazil = new Brazil(this);
                    brazil->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==408&&b1==70){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space=16 chance
                    locate=16;

                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==508&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space=17 france
                    locate=17;
                    myques = new buyORnot(this);
                    myques->show();

                    france = new France(this);
                    france->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==608&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);   //space=18 wait
                    locate=18;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==730&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);   //space=19 usa
                    locate=19;
                    myques = new buyORnot(this);
                    myques->show();

                    usa = new USA(this);
                    usa->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==710&&b1==178){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);   //space=20 swis
                    locate=20;
                    myques = new buyORnot(this);
                    myques->show();

                    swis = new Swis(this);
                    swis->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==710&&b1==278){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);   //space=21 supertax
                    locate=21;
                    supertax = new Supertax(this);
                    supertax->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==710&&b1==378){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);   //space=22 england
                    locate=22;
                    myques = new buyORnot(this);
                    myques->show();

                    england = new England(this);
                    england->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==710&&b1==478){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);   //space=23 chance
                    locate=23;
                    myques = new buyORnot(this);
                    myques->show();

                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;

                }else if(a1==710&&b1==578){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);   //space=24 start
                    locate=24;

                    //maybe dont have to show
                    //spaceSet.property(locate);
                    player1 =false;
                }
            }

            //move player2
            else if(player1 ==false){
                if(a2==730&&b2==730){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=1
                    locate=1;
                    myques = new buyORnot(this);
                    myques->show();

                    myspace = new space(this);
                    myspace->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==608&&b2==730){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=2
                    locate=2;
                    myques = new buyORnot(this);
                    myques->show();

                    myanmar = new Myanmar(this);
                    myanmar->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==508&&b2==730){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=3
                    locate=3;
                    myques = new buyORnot(this);
                    myques->show();

                    vietnam = new Vietnam(this);
                    vietnam->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==408&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=4
                    locate=4;
                    chance = new Chance(this);
                    chance->show();
                //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==308&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=5
                    locate=5;
                    myques = new buyORnot(this);
                    myques->show();

                    taiwan = new Taiwan(this);
                    taiwan->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==208&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=6
                    locate=6;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==85&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space=7
                    locate=7;
                    myques = new buyORnot(this);
                    myques->show();

                    bhutan = new Bhutan(this);
                    bhutan->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==50&&b2==578){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);   //space=8
                    locate=8;
                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==50&&b2==478){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);   //space=9
                    locate=9;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==50&&b2==378){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space=10
                    locate=10;
                    japan =new Japan(this);
                    japan->show();
                    myques = new buyORnot(this);
                    myques->show();

                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==50&&b2==278){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);    //space=11
                    locate=11;
                    myques = new buyORnot(this);
                    myques->show();

                    korea = new Korea(this);
                    korea->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==50&&b2==178){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space=12
                    locate=13;
                    bonus = new Bonus(this);
                    bonus->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==50&&b2==55){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=13
                    locate=13;
                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==208&&b2==20){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=14
                    locate=14;
                    myques = new buyORnot(this);
                    myques->show();

                    china = new China(this);
                    china->show();
                    //spaceSet.property(locate);
                    player1 =true;

                }else if(a2==308&&b2==20){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=15
                    locate=15;
                    myques = new buyORnot(this);
                    myques->show();

                    brazil = new Brazil(this);
                    brazil->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==408&&b2==20){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=16
                    locate=16;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==508&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=17
                    locate=17;
                    myques = new buyORnot(this);
                    myques->show();

                    france = new France(this);
                    france->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==608&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=18
                    locate=10;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==730&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space=19
                    locate=19;
                    myques = new buyORnot(this);
                    myques->show();

                    swis = new Swis(this);
                    swis->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==178){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space=20
                    locate=20;
                    myques = new buyORnot(this);
                    myques->show();

                    swis = new Swis(this);
                    swis->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==278){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space=21
                    locate=21;
                    supertax = new Supertax(this);
                    supertax->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==378){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space=22
                    locate=22;
                    myques = new buyORnot(this);
                    myques->show();

                    england = new England(this);
                    england->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==478){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space=23
                    locate=23;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==578){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=24
                    locate=24;

                    //spaceSet.property(locate);
                    player1 =true;
                }
            }
        }

        //rollDice=2---------------------------------------------------------------------
        else if(roll==2){
            ui->roll->setStyleSheet("background-image: url(:/630610757/2020.2/261102 ComPro/project/dice2.png);");

            //move player1
            if(player1 ==true){
                if(a1==730&&b1==680){
                    a1=508;
                    b1=680;
                    ui->walk1->move(a1,b1);     //space=2
                    locate=2;
                    myques = new buyORnot(this);
                    myques->show();

                    myanmar = new Myanmar(this);
                    myanmar->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==608&&b1==680){
                    a1=408;
                    b1=680;
                    ui->walk1->move(a1,b1);     //space=3
                    locate=3;
                    myques = new buyORnot(this);
                    myques->show();

                    vietnam = new Vietnam(this);
                    vietnam->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==508&&b1==680){
                    a1=308;
                    b1=680;
                    ui->walk1->move(a1,b1);     //space=4
                    locate=4;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==408&&b1==680){
                    a1=208;
                    b1=680;
                    ui->walk1->move(a1,b1);     //space=5
                    locate=5;
                    myques = new buyORnot(this);
                    myques->show();

                    taiwan = new Taiwan(this);
                    taiwan->show();
                   // spaceSet.property(locate);
                    player1 =false;
                }else if(a1==308&&b1==680){
                    a1=85;
                    b1=680;
                    ui->walk1->move(a1,b1);     //space=6
                    locate=6;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==208&&b1==680){
                    a1=100;
                    b1=578;
                    ui->walk1->move(a1,b1);     //space=7
                    locate=7;
                    myques = new buyORnot(this);
                    myques->show();

                    bhutan = new Bhutan(this);
                    bhutan->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==85&&b1==680){
                    a1=100;
                    b1=478;
                    ui->walk1->move(a1,b1);     //space=8
                    locate=8;
                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==100&&b1==578){
                    a1=100;
                    b1=378;
                    ui->walk1->move(a1,b1);     //space=9
                    locate=9;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==100&&b1==478){
                    a1=100;
                    b1=278;
                    ui->walk1->move(a1,b1);     //space=10
                    locate=10;
                    myques = new buyORnot(this);
                    myques->show();

                    japan = new Japan(this);
                    japan->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==100&&b1==378){
                    a1=100;
                    b1=178;
                    ui->walk1->move(a1,b1);     //space=11
                    locate=11;
                    myques = new buyORnot(this);
                    myques->show();

                    korea = new Korea(this);
                    korea->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==100&&b1==278){
                    a1=100;
                    b1=55;
                    ui->walk1->move(a1,b1);     //space=12
                    locate=12;
                    bonus = new Bonus(this);
                    bonus->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==100&&b1==178){
                    a1=208;
                    b1=70;
                    ui->walk1->move(a1,b1);     //space=13
                    locate=13;
                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==100&&b1==55){
                    a1=308;
                    b1=70;
                    ui->walk1->move(a1,b1);     //space=14
                    locate=14;
                    myques = new buyORnot(this);
                    myques->show();

                    china = new China(this);
                    china->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==208&&b1==70){
                    a1=408;
                    b1=70;
                    ui->walk1->move(a1,b1);     //space=15
                    locate=15;
                    myques = new buyORnot(this);
                    myques->show();

                    brazil = new Brazil(this);
                    brazil->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==308&&b1==70){
                    a1=508;
                    b1=70;
                    ui->walk1->move(a1,b1);     //space=16
                    locate=16;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==408&&b1==70){
                    a1=608;
                    b1=70;
                    ui->walk1->move(a1,b1);     //space=17
                    locate=17;
                    myques = new buyORnot(this);
                    myques->show();

                    france = new France(this);
                    france->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==508&&b1==70){
                    a1=730;
                    b1=70;
                    ui->walk1->move(a1,b1);     //space=18
                    locate=18;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==608&&b1==70){
                    a1=710;
                    b1=178;
                    ui->walk1->move(a1,b1);     //space=19
                    locate=19;
                    myques = new buyORnot(this);
                    myques->show();

                    swis = new Swis(this);
                    swis->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==730&&b1==70){
                    a1=710;
                    b1=278;
                    ui->walk1->move(a1,b1);     //space=20
                    locate=20;
                    myques = new buyORnot(this);
                    myques->show();

                    swis = new Swis(this);
                    swis->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==710&&b1==178){
                    a1=710;
                    b1=378;
                    ui->walk1->move(a1,b1);     //space=21
                    locate=21;
                    supertax = new Supertax(this);
                    supertax->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==710&&b1==278){
                    a1=710;
                    b1=478;
                    ui->walk1->move(a1,b1);     //space=22
                    locate=22;
                    myques = new buyORnot(this);
                    myques->show();

                    england = new England(this);
                    england->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==710&&b1==378){
                    a1=710;
                    b1=578;
                    ui->walk1->move(a1,b1);     //space=23
                    locate=23;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==710&&b1==478){
                    a1=730;
                    b1=680;
                    ui->walk1->move(a1,b1);     //space=24
                    locate=24;

                    //spaceSet.property(locate);
                    player1 =false;
                }else if(a1==710&&b1==578){
                    a1=608;
                    b1=680;
                    ui->walk1->move(a1,b1);     //space=1
                    locate=1;
                    myques = new buyORnot(this);
                    myques->show();

                    myspace = new space(this);
                    myspace->show();
                    //spaceSet.property(locate);
                    player1 =false;
                }
            }

            //move player2
            else if(player1 ==false){
                if(a2==730&&b2==730){
                    a2=508;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=2
                    locate=2;
                    myques = new buyORnot(this);
                    myques->show();

                    myanmar = new Myanmar(this);
                    myanmar->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==608&&b2==730){
                    a2=408;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=3
                    locate=3;
                    myques = new buyORnot(this);
                    myques->show();

                    vietnam = new Vietnam(this);
                    vietnam->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==508&&b2==730){
                    a2=308;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=4
                    locate=4;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==408&&b2==730){
                    a2=208;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=5
                    locate=5;
                    myques = new buyORnot(this);
                    myques->show();

                    taiwan = new Taiwan(this);
                    taiwan->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==308&&b2==730){
                    a2=85;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=6
                    locate=6;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==208&&b2==730){
                    a2=50;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space=7
                    locate=7;
                    myques = new buyORnot(this);
                    myques->show();

                    bhutan = new Bhutan(this);
                    bhutan->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==85&&b2==730){
                    a2=50;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space=8
                    locate=8;
                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==50&&b2==578){
                    a2=50;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space=9
                    locate=9;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==50&&b2==478){
                    a2=50;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space=10
                    locate=10;
                    myques = new buyORnot(this);
                    myques->show();

                    japan = new Japan(this);
                    japan->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==50&&b2==378){
                    a2=50;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space=11
                    locate=11;
                    myques = new buyORnot(this);
                    myques->show();

                    korea = new Korea(this);
                    korea->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==50&&b2==278){
                    a2=50;
                    b2=55;
                    ui->walk2->move(a2,b2);     //space=12
                    locate=12;
                    bonus = new Bonus(this);
                    bonus->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==50&&b2==178){
                    a2=208;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=13
                    locate=13;
                    tax = new Tax(this);
                    tax->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==50&&b2==55){
                    a2=308;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=14
                    locate=14;
                    myques = new buyORnot(this);
                    myques->show();

                    china = new China(this);
                    china->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==208&&b2==20){
                    a2=408;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=15
                    locate=15;
                    myques = new buyORnot(this);
                    myques->show();

                    brazil = new Brazil(this);
                    brazil->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==308&&b2==20){
                    a2=508;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=16
                    locate=16;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==408&&b2==20){
                    a2=608;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=17
                    locate=17;
                    myques = new buyORnot(this);
                    myques->show();

                    france = new France(this);
                    france->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==508&&b2==20){
                    a2=730;
                    b2=20;
                    ui->walk2->move(a2,b2);     //space=18
                    locate=18;
                    wait = new Wait(this);
                    wait->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==608&&b2==20){
                    a2=760;
                    b2=178;
                    ui->walk2->move(a2,b2);     //space=19
                    locate=19;
                    myques = new buyORnot(this);
                    myques->show();

                    swis = new Swis(this);
                    swis->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==730&&b2==20){
                    a2=760;
                    b2=278;
                    ui->walk2->move(a2,b2);     //space=20
                    locate=20;
                    myques = new buyORnot(this);
                    myques->show();

                    swis = new Swis(this);
                    swis->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==178){
                    a2=760;
                    b2=378;
                    ui->walk2->move(a2,b2);     //space=21
                    locate=21;
                    supertax = new Supertax(this);
                    supertax->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==278){
                    a2=760;
                    b2=478;
                    ui->walk2->move(a2,b2);     //space=22
                    locate=22;
                    england = new England(this);
                    england->show();
                    myques = new buyORnot(this);
                    myques->show();

                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==378){
                    a2=760;
                    b2=578;
                    ui->walk2->move(a2,b2);     //space=23
                    locate=23;
                    chance = new Chance(this);
                    chance->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==478){
                    a2=730;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=24
                    locate=24;

                    //spaceSet.property(locate);
                    player1 =true;
                }else if(a2==760&&b2==578){
                    a2=608;
                    b2=730;
                    ui->walk2->move(a2,b2);     //space=1
                    locate=1;
                    myques = new buyORnot(this);
                    myques->show();

                    myspace = new space(this);
                    myspace->show();
                    //spaceSet.property(locate);
                    player1 =true;
                }
            }
        }

        //rollDice=3---------------------------------------------------------------------
        else if(roll==3){
             ui->roll->setStyleSheet("background-image: url(:/630610757/2020.2/261102 ComPro/project/dice3.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=3                       //add myquesShow
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=11
                     locate=11;
                     korea = new Korea(this);
                     korea->show();
                     myques = new buyORnot(this);
                     myques->show();

                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=16
                     locate=16;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=17
                     locate=17;
                     myques = new buyORnot(this);
                     myques->show();

                     france = new France(this);
                     france->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=730;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=3
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=11
                     locate=11;
                     myques = new buyORnot(this);
                     myques->show();

                     korea = new Korea(this);
                     korea->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=16
                     locate=16;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=608;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=17
                     locate=17;
                     france = new France(this);
                     france->show();
                     myques = new buyORnot(this);
                     myques->show();

                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }
             }
        }



        //rollDice=4---------------------------------------------------------------------
        else if(roll==4){
             ui->roll->setStyleSheet("background-image: url(:/630610757/2020.2/261102 ComPro/project/dice4.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=11
                     locate=11;
                     myques = new buyORnot(this);
                     myques->show();

                     korea = new Korea(this);
                     korea->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=16
                     locate=16;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=17
                     locate=17;
                     myques = new buyORnot(this);
                     myques->show();

                     france = new France(this);
                     france->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=730;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=3
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                    //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=11
                     locate=11;
                     myques = new buyORnot(this);
                     myques->show();

                     korea = new Korea(this);
                     korea->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=16
                     locate=16;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=608;
                     b2=20;
                     ui->walk2->move(a2,b2);        //sspace=17
                     locate=17;
                     myques = new buyORnot(this);
                     myques->show();

                     france = new France(this);
                     france->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=3
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }
             }
        }

        //rollDice=5
        else if(roll==5){
             ui->roll->setStyleSheet("background-image: url(:/630610757/2020.2/261102 ComPro/project/dice5.png);");
             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=11
                     locate=11;
                     myques = new buyORnot(this);
                     myques->show();

                     korea = new Korea(this);
                     korea->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=16
                     locate=16;

                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=17
                     locate=17;
                     myques = new buyORnot(this);
                     myques->show();

                     france = new France(this);
                     france->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=730;
                     ui->walk1->move(a1,b1);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=3
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=11
                     locate=11;
                     myques = new buyORnot(this);
                     myques->show();

                     korea = new Korea(this);
                     korea->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=16
                     locate=16;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=608;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=17
                     locate=17;
                     myques = new buyORnot(this);
                     myques->show();

                     france = new France(this);
                     france->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=3
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }
             }
        }

        //rollDice=6
        else if(roll==6){
             ui->roll->setStyleSheet("background-image: url(:/630610757/2020.2/261102 ComPro/project/dice6.png);");

             //move player1
             if(player1 ==true){
                 if(a1==730&&b1==680){
                     a1=85;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==680){
                     a1=100;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==680){
                     a1=100;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==680){
                     a1=100;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==680){
                     a1=100;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==680){
                     a1=100;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=11
                     locate=11;
                     myques = new buyORnot(this);
                     myques->show();

                     korea = new Korea(this);
                     korea->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==85&&b1==680){
                     a1=100;
                     b1=55;
                     ui->walk1->move(a1,b1);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==578){
                     a1=208;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==478){
                     a1=308;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==378){
                     a1=408;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==278){
                     a1=508;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=16
                     locate=16;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==178){
                     a1=608;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=17
                     locate=17;
                     myques = new buyORnot(this);
                     myques->show();

                     france = new France(this);
                     france->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==100&&b1==55){
                     a1=730;
                     b1=70;
                     ui->walk1->move(a1,b1);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==208&&b1==70){
                     a1=710;
                     b1=178;
                     ui->walk1->move(a1,b1);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==308&&b1==70){
                     a1=710;
                     b1=278;
                     ui->walk1->move(a1,b1);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==408&&b1==70){
                     a1=710;
                     b1=378;
                     ui->walk1->move(a1,b1);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==508&&b1==70){
                     a1=710;
                     b1=478;
                     ui->walk1->move(a1,b1);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==608&&b1==70){
                     a1=710;
                     b1=578;
                     ui->walk1->move(a1,b1);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==730&&b1==70){
                     a1=730;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==178){
                     a1=608;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==278){
                     a1=508;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==378){
                     a1=408;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=3
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==478){
                     a1=308;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }else if(a1==710&&b1==578){
                     a1=208;
                     b1=680;
                     ui->walk1->move(a1,b1);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                     //spaceSet.property(locate);
                     player1 =false;
                 }
             }


             //move player2
             else if(player1 ==false){
                 if(a2==730&&b2==730){
                     a2=85;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=6
                     locate=6;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==730){
                     a2=50;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=7
                     locate=7;
                     myques = new buyORnot(this);
                     myques->show();

                     bhutan = new Bhutan(this);
                     bhutan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==730){
                     a2=50;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=8
                     locate=8;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==730){
                     a2=50;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=9
                     locate=9;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==730){
                     a2=50;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=10
                     locate=10;
                     myques = new buyORnot(this);
                     myques->show();

                     japan = new Japan(this);
                     japan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==730){
                     a2=50;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=11
                     locate=11;
                     myques = new buyORnot(this);
                     myques->show();

                     korea = new Korea(this);
                     korea->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==85&&b2==730){
                     a2=50;
                     b2=55;
                     ui->walk2->move(a2,b2);        //space=12
                     locate=12;
                     bonus = new Bonus(this);
                     bonus->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==578){
                     a2=208;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=13
                     locate=13;
                     tax = new Tax(this);
                     tax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==478){
                     a2=308;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=14
                     locate=14;
                     myques = new buyORnot(this);
                     myques->show();

                     china = new China(this);
                     china->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==378){
                     a2=408;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=15
                     locate=15;
                     myques = new buyORnot(this);
                     myques->show();

                     brazil = new Brazil(this);
                     brazil->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==278){
                     a2=508;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=16
                     locate=16;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==178){
                     a1=608;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=17
                     locate=17;
                     myques = new buyORnot(this);
                     myques->show();

                     france = new France(this);
                     france->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==50&&b2==55){
                     a2=730;
                     b2=20;
                     ui->walk2->move(a2,b2);        //space=18
                     locate=18;
                     wait = new Wait(this);
                     wait->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==208&&b2==20){
                     a2=760;
                     b2=178;
                     ui->walk2->move(a2,b2);        //space=19
                     locate=19;
                     myques = new buyORnot(this);
                     myques->show();

                     usa = new USA(this);
                     usa->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==308&&b2==20){
                     a2=760;
                     b2=278;
                     ui->walk2->move(a2,b2);        //space=20
                     locate=20;
                     myques = new buyORnot(this);
                     myques->show();

                     swis = new Swis(this);
                     swis->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==408&&b2==20){
                     a2=760;
                     b2=378;
                     ui->walk2->move(a2,b2);        //space=21
                     locate=21;
                     supertax = new Supertax(this);
                     supertax->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==508&&b2==20){
                     a2=760;
                     b2=478;
                     ui->walk2->move(a2,b2);        //space=22
                     locate=22;
                     myques = new buyORnot(this);
                     myques->show();

                     england = new England(this);
                     england->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==608&&b2==20){
                     a2=760;
                     b2=578;
                     ui->walk2->move(a2,b2);        //space=23
                     locate=23;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==730&&b2==20){
                     a2=730;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=24
                     locate=24;

                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==178){
                     a2=608;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=1
                     locate=1;
                     myques = new buyORnot(this);
                     myques->show();

                     myspace = new space(this);
                     myspace->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==278){
                     a2=508;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=2
                     locate=2;
                     myques = new buyORnot(this);
                     myques->show();

                     myanmar = new Myanmar(this);
                     myanmar->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==378){
                     a2=408;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=3
                     locate=3;
                     myques = new buyORnot(this);
                     myques->show();

                     vietnam = new Vietnam(this);
                     vietnam->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==478){
                     a2=308;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=4
                     locate=4;
                     chance = new Chance(this);
                     chance->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }else if(a2==760&&b2==578){
                     a2=208;
                     b2=730;
                     ui->walk2->move(a2,b2);        //space=5
                     locate=5;
                     myques = new buyORnot(this);
                     myques->show();

                     taiwan = new Taiwan(this);
                     taiwan->show();
                     //spaceSet.property(locate);
                     player1 =true;
                 }
             }
        }
    }

