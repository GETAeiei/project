#include "korea.h"
#include "ui_korea.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Korea::Korea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Korea)
{
    ui->setupUi(this);
}

Korea::~Korea()
{
    delete ui;
}
