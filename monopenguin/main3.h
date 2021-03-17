#ifndef MAIN3_H
#define MAIN3_H
#include <QTime>
#include <QDialog>

//Add
#include "space01.h"
#include "space02.h"
#include "space03.h"
#include "space04.h"
#include "space05.h"
#include "space06.h"
#include "space07.h"
#include "space08.h"
#include "space09.h"
#include "space10.h"
#include "space11.h"
#include "space12.h"
#include "space13.h"
#include "space14.h"
#include "space15.h"
#include "space16.h"
#include "space17.h"
#include "space18.h"
#include "space19.h"
#include "space20.h"
#include "space21.h"
#include "space22.h"
#include "space23.h"

#include "winwin.h"
#include "winwin2.h"

namespace Ui {
class main3;
}

class main3 : public QDialog
{
    Q_OBJECT

public:
    explicit main3(QWidget *parent = nullptr);
    ~main3();
    bool player1;
    bool play1_buy=false;

    int a1=730;
    int b1=680;
    int a2=730;
    int b2=730;
    //bool player1 =true;
    int locate=0;
    int mon_play1 = 1500;
    int mon_play2 = 1500;
    QTimer *timer;


private slots:
    void on_random_clicked();
    //QTime _Timer = QTime::currentTime().addMSecs(2000);

private:
    Ui::main3 *ui;
    space01 *Space01;
    space02 *Space02;
    space03 *Space03;
    space04 *Space04;
    space05 *Space05;
    space06 *Space06;
    space07 *Space07;
    space08 *Space08;
    space09 *Space09;
    space10 *Space10;
    space11 *Space11;
    space12 *Space12;
    space13 *Space13;
    space14 *Space14;
    space15 *Space15;
    space16 *Space16;
    space17 *Space17;
    space18 *Space18;
    space19 *Space19;
    space20 *Space20;
    space21 *Space21;
    space22 *Space22;
    space23 *Space23;

    Winwin *win1;
    winwin2 *win2;
};

#endif // MAIN3_H
