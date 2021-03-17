#include "vietnam.h"
#include "ui_vietnam.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Vietnam::Vietnam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vietnam)
{
    ui->setupUi(this);
}

Vietnam::~Vietnam()
{
    delete ui;
}
