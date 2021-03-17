#include "tax.h"
#include "ui_tax.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>
#include "main3.h"


Tax::Tax(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tax)
{

    ui->setupUi(this);







}

Tax::~Tax()
{
    delete ui;
}




