#include "france.h"
#include "ui_france.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

France::France(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::France)
{
    ui->setupUi(this);
}

France::~France()
{
    delete ui;
}
