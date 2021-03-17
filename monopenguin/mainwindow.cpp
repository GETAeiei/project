#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main3.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this->hide();
    mymain3 = new main3(this);
    mymain3->show();
}

void MainWindow::on_quit_clicked()
{
    this->hide();
}

