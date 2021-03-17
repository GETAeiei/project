#include "bonus.h"
#include "ui_bonus.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Bonus::Bonus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bonus)
{
    ui->setupUi(this);
}

Bonus::~Bonus()
{
    delete ui;
}
