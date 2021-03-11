#include "chance.h"
#include "ui_chance.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>
#include "dice.h"


Chance::Chance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chance)
{
    ui->setupUi(this);
    ui->rnd->setHidden(true);
}

Chance::~Chance()
{
    delete ui;
}

void Chance::on_pushButton_clicked()
{

    ui->pushButton->setHidden(true);

    Dice rndchance= Dice();
    random_chance =rndchance.randChance();
    if(random_chance==1){
        //background-image: url(:/resource/img/space501/England.jpg);
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/chance/backtostart.png);");
    }
    if(random_chance==2){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/chance/500+.png);");
    }
    if(random_chance == 3){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/chance/100+.png);");
    }
    if(random_chance==4){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/chance/1000+.png);");
    }
    if(random_chance==5){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/chance/+300.png);");
    }
    if(random_chance==6){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/space501/Myanmar.jpg);");
    }
    if(random_chance==7){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/space501/France.jpg);");
    }
    if(random_chance==8){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/space501/China.jpg);");
    }
    if(random_chance==9){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/space501/USA.jpg);");
    }
    if(random_chance==10){
        ui->rnd->showNormal();
        ui->rnd->setStyleSheet("background-image: url(:/resource/img/space501/Thai.jpg);");
    }

}
