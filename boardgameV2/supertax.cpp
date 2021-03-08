#include "supertax.h"
#include "ui_supertax.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Supertax::Supertax(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Supertax)
{
    ui->setupUi(this);
}

Supertax::~Supertax()
{
    delete ui;
}
