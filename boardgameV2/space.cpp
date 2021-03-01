#include "space.h"
#include "ui_space.h"

Space::Space(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Space)
{
    ui->setupUi(this);
}

Space::~Space()
{
    delete ui;
}

int Space::property(int num_space)
{
    if(num_space==1) ui->property->setStyleSheet("background-image: url(:/thai.png);");
    else if(num_space==2) ui->property->setStyleSheet("background-image: url(:/Myanmar.png);");
    else if(num_space==3) ui->property->setStyleSheet("background-image: url(:/Vietnam.png);");
    else if(num_space==4) ui->property->setStyleSheet("background-image: url(:/thai.png);");
    else if(num_space==5) ui->property->setStyleSheet("background-image: url(:/Taiwan.png);");
    else if(num_space==6) {
        spacial = new Special();
        spacial->show();
    }
    else if(num_space==7) ui->property->setStyleSheet("background-image: url(:/Bhutan.png);");
    else if(num_space==8) {
        spacial = new Special();
        spacial->show();
    }
    else if(num_space==9) ui->property->setStyleSheet("background-image: url(:/Chance.png);");
    else if(num_space==10) ui->property->setStyleSheet("background-image: url(:/Japan.png);");
    else if(num_space==11) ui->property->setStyleSheet("background-image: url(:/Korea.png);");
    else if(num_space==12){
        spacial = new Special();
        spacial->show();
    }
    else if(num_space==13) {
        spacial = new Special();
        spacial->show();
    }
    else if(num_space==14) ui->property->setStyleSheet("background-image: url(:/China.png);");
    else if(num_space==15) ui->property->setStyleSheet("background-image: url(:/Brazil.png);");
    else if(num_space==16) {
        spacial = new Special();
        spacial->show();
    }
    else if(num_space==17) ui->property->setStyleSheet("background-image: url(:/France.png);");
    else if(num_space==18) {
        spacial = new Special();
        spacial->show();
    }
    else if(num_space==19) ui->property->setStyleSheet("background-image: url(:/USA.png);");
    else if(num_space==20) ui->property->setStyleSheet("background-image: url(:/Swis.png);");
    else if(num_space==21) {
        spacial = new Special();
        spacial->show();
    }
    else if(num_space==22) ui->property->setStyleSheet("background-image: url(:/England.png);");
    else if(num_space==23) {
        spacial = new Special();
        spacial->show();
    }
    else {
        spacial = new Special();
        spacial->show();
    }
    return num_space;
}
