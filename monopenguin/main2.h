#ifndef MAIN2_H
#define MAIN2_H

#include <QDialog>
#include "main3.h"

#include<iostream>
#include<string>
using namespace std;

namespace Ui {
class main2;
}

class main2 : public QDialog
{
    Q_OBJECT

public:
    explicit main2(QWidget *parent = nullptr);
    ~main2();
    int nameP1;
    int nameP2;

private slots:
    void on_next_clicked();
    void on_smile_clicked();
    void on_kob_clicked();
    void on_bingbing_clicked();
    void on_ploy_clicked();

private:
    Ui::main2 *ui;
    main3 *mymain3;
    void checkButton();
    bool chkBtnOne,chkBtnTwo,chkBtnThree,chkBtnFour;
};

#endif // MAIN2_H
