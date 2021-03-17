#include "randchance.h"
#include "ui_randchance.h"
#include "dice.h"

Randchance::Randchance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Randchance)
{
    ui->setupUi(this);
    Dice rndchance= Dice();
    random_chance =rndchance.randChance();
    if(random_chance==1){
        //background-image: url(:/resource/img/space501/England.jpg);
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/England.jpg);");
    }
    if(random_chance==2){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/Japan.jpg);");
    }
    if(random_chance == 3){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/Korea.jpg);");
    }
    if(random_chance==4){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/Taiwan.jpg);");
    }
    if(random_chance==5){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/Swis.jpg);");
    }
    if(random_chance==6){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/Myanmar.jpg);");
    }
    if(random_chance==7){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/France.jpg);");
    }
    if(random_chance==8){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/China.jpg);");
    }
    if(random_chance==9){
        ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/USA.jpg);");
    }
    if(random_chance==10){
       ui->chance->setStyleSheet("background-image: url(:/resource/img/space501/Thai.jpg);");
    }
}

Randchance::~Randchance()
{
    delete ui;
}
