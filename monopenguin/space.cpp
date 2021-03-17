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



