#ifndef BANK_H
#define BANK_H

#include<iostream>
#include<string>
using namespace std;

class bank
{
    int moneyP1=1500;
    int moneyP2=1500;

    int costThai;
    int costMyanmar;
    int costVietnam;
    int costTaiwan;
    int costBhutan;
    int costTax =300;  //space=8,13
    int costJapan;
    int costKorea;
    int costChina;
    int costBrazil;
    int costFrance;
    int costUSA;
    int costSwitz;
    int costSuperTax =1000;
    int costEngland;

    bool ownerP1=false;
    bool ownerP2=true;

public:
    bank();
    virtual ~bank();

    //int bankP1(int wherespace);
    //int bankP2(int wherespace);
    int bankCalP1(int y);
    int bankCalP2(int y);


};


/*
int bankP1(int wherespace);{
    if(buy1==true){
        moneyP1+=int costThai;
}
*/


#endif // BANK_H
