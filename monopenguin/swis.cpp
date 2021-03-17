#include "swis.h"
#include "ui_swis.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Swis::Swis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Swis)
{
    ui->setupUi(this);
}

Swis::~Swis()
{
    delete ui;
}
