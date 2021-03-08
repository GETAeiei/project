#include "myanmar.h"
#include "ui_myanmar.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Myanmar::Myanmar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Myanmar)
{
    ui->setupUi(this);
}

Myanmar::~Myanmar()
{
    delete ui;
}
