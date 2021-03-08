#include "usa.h"
#include "ui_usa.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

USA::USA(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::USA)
{
    ui->setupUi(this);
}

USA::~USA()
{
    delete ui;
}
