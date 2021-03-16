#ifndef MAIN3_H
#define MAIN3_H

#include "buyornot.h"
//Add
#include "space.h"
#include "myanmar.h"
#include "vietnam.h"
#include "chance.h"
#include "taiwan.h"
#include "wait.h"
#include "bhutan.h"
#include "tax.h"
#include "japan.h"
#include "korea.h"
#include "bonus.h"
#include "china.h"
#include "brazil.h"
#include "france.h"
#include "usa.h"
#include "swis.h"
#include "supertax.h"
#include "england.h"
#include <QDialog>
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


private slots:
    void on_random_clicked();


private:
    Ui::main3 *ui;
    space *myspace;
    Myanmar *myanmar;
    Vietnam *vietnam;
    Chance *chance;
    Taiwan *taiwan;
    Wait *wait;
    Bhutan *bhutan;
    Tax *tax;
    Japan *japan;
    Korea *korea;
    Bonus *bonus;
    China *china;
    Brazil *brazil;
    France *france;
    USA *usa;
    Swis *swis;
    Supertax *supertax;
    England *england;

    buyORnot *myques;

    Winwin *win1;

    winwin2 *win2;
};

#endif // MAIN3_H
