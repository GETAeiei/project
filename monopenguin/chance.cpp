#include "chance.h"
#include "ui_chance.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Chance::Chance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chance)
{
    ui->setupUi(this);
}

Chance::~Chance()
{
    delete ui;
}

void Chance::on_pushButton_clicked()
{


}
