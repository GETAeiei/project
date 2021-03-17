#include "japan.h"
#include "ui_japan.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Japan::Japan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Japan)
{
    ui->setupUi(this);
}

Japan::~Japan()
{
    delete ui;
}
