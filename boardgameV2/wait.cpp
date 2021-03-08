#include "wait.h"
#include "ui_wait.h"
#include "main3.h"
#include "ui_main3.h"
#include <QPixmap>

Wait::Wait(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wait)
{
    ui->setupUi(this);
}

Wait::~Wait()
{
    delete ui;
}
