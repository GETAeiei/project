#include "bank.h"
#include<iostream>
#include<vector>


using namespace std;

bool buyP;
//vector<int> player1(13);
//vector<int>player2(13);

bank::bank(){}
bank::~bank(){}

int moneyP1=1000;
int moneyP2=1000;

int costChance=0;           //fuction chance random!!!!

int start=0;
int startAgain=500;

int costThaiL1=200;
int costThaiL2=500;
int costThaiL3=1000;
bool Thai=true;     //can buy
bool ThaiP1L1=true;
bool ThaiP1L2=true;
bool ThaiP1L3=true;
bool ThaiP2L1=true;
bool ThaiP2L2=true;
bool ThaiP2L3=true;

int costMyanmarL1=400;
int costMyanmarL2=800;
int costMyanmarL3=1200;
bool Myanmar=true;  //can buy
bool MyanmarP1L1=true;
bool MyanmarP1L2=true;
bool MyanmarP1L3=true;
bool MyanmarP2L1=true;
bool MyanmarP2L2=true;
bool MyanmarP2L3=true;

int costVietnamL1=300;
int costVietnamL2=1000;
int costVietnamL3=1600;
bool Vietnam =true; //can buy
bool VietnamP1L1=true;
bool VietnamP1L2=true;
bool VietnamP1L3=true;
bool VietnamP2L1=true;
bool VietnamP2L2=true;
bool VietnamP2L3=true;


int costTaiwanL1=800;
int costTaiwanL2=1500;
int costTaiwanL3=2200;
bool Taiwan =true;  //can buy
bool TaiwanP1L1=true;
bool TaiwanP1L2=true;
bool TaiwanP1L3=true;
bool TaiwanP2L1=true;
bool TaiwanP2L2=true;
bool TaiwanP2L3=true;

int costBhutanL1=300;
int costBhutanL2=900;
int costBhutanL3=1500;
bool Bhutan =true;      //can buy
bool BhutanP1L1=true;
bool BhutanP1L2=true;
bool BhutanP1L3=true;
bool BhutanP2L1=true;
bool BhutanP2L2=true;
bool BhutanP2L3=true;

int costTax =300;  //space=8,13

int costJapanL1=1000;
int costJapanL2=2100;
int costJapanL3=3300;
bool Japan;     //can buy
bool JapanP1L1=true;
bool JapanP1L2=true;
bool JapanP1L3=true;
bool JapanP2L1=true;
bool JapanP2L2=true;
bool JapanP2L3=true;

int costKoreaL1=500;
int costKoreaL2=1500;
int costKoreaL3=2500;
bool Korea;     //can buy
bool KoreaP1L1=true;
bool KoreaP1L2=true;
bool KoreaP1L3=true;
bool KoreaP2L1=true;
bool KoreaP2L2=true;
bool KoreaP2L3=true;

int costChinaL1=1000;
int costChinaL2=1500;
int costChinaL3=1800;
bool China=true;    //can buy
bool ChinaP1L1=true;
bool ChinaP1L2=true;
bool ChinaP1L3=true;
bool ChinaP2L1=true;
bool ChinaP2L2=true;
bool ChinaP2L3=true;

int costBrazilL1=1500;
int costBrazilL2=2000;
int costBrazilL3=3500;
bool Brazil=true;       //can buy
bool BrazilP1L1=true;
bool BrazilP1L2=true;
bool BrazilP1L3=true;
bool BrazilP2L1=true;
bool BrazilP2L2=true;
bool BrazilP2L3=true;

int costFranceL1=1800;
int costFranceL2=3300;
int costFranceL3=4000;
bool France=true;       //can buy
bool FranceP1L1=true;
bool FranceP1L2=true;
bool FranceP1L3=true;
bool FranceP2L1=true;
bool FranceP2L2=true;
bool FranceP2L3=true;

int costUSAL1=2000;
int costUSAL2=3500;
int costUSAL3=5000;
bool USA=true;      //can buy
bool USAP1L1=true;
bool USAP1L2=true;
bool USAP1L3=true;
bool USAP2L1=true;
bool USAP2L2=true;
bool USAP2L3=true;

int costSwitzL1=2500;
int costSwitzL2=4000;
int costSwitzL3=6000;
bool Switz=true;
bool SwitzP1L1=true;
bool SwitzP1L2=true;
bool SwitzP1L3=true;
bool SwitzP2L1=true;
bool SwitzP2L2=true;
bool SwitzP2L3=true;

int costSuperTax =1000;

int costEnglandL1=3000;
int costEnglandL2=5500;
int costEnglandL3=7000;
bool England=true;
bool EnglandP1L1=true;
bool EnglandP1L2=true;
bool EnglandP1L3=true;
bool EnglandP2L1=true;
bool EnglandP2L2=true;
bool EnglandP2L3=true;


bool ownerP1=false;
bool ownerP2=false;
int position;
int bankCalP1(int position){   //Player1
    if(position==1){           //position=space1
        if(Thai==true){
            if(ThaiP1L1==true){
                moneyP1-=costThaiL1;
                ThaiP1L1=false;
                ThaiP2L1=false;
                ThaiP2L2=false;
                ThaiP2L3=false;
           }else if(ThaiP1L1==false&&ThaiP1L2==true){
                moneyP1-=costThaiL2;
                ThaiP1L2=false;
           }else if(ThaiP1L1==false&&ThaiP1L2==false&&ThaiP1L3==true){
                moneyP1-=costThaiL3;
                ThaiP1L3=false;
                Thai =false;
           }
        }
    }else if(position==2){
        if(Myanmar==true){
            if(MyanmarP1L1==true){
                moneyP1-=costMyanmarL1;
                MyanmarP1L1=false;
                MyanmarP2L1=false;
                MyanmarP2L2=false;
                MyanmarP2L3=false;
            }else if(MyanmarP1L1==false&&MyanmarP1L2==true){
                moneyP1-=costMyanmarL2;
                MyanmarP1L2=false;
            }else if(MyanmarP1L1==false&&MyanmarP1L2==false&&MyanmarP1L3==true){
                moneyP1-=costMyanmarL3;
                MyanmarP1L3=false;
            }
        }
    }else if(position==3){
        if(Vietnam==true){
            if(VietnamP1L1==true){
                moneyP1-=costVietnamL1;
                VietnamP1L1=false;
                VietnamP2L1=false;
                VietnamP2L2=false;
                VietnamP2L3=false;
            }else if(VietnamP1L1==false&&VietnamP1L2==true){
                moneyP1-=costVietnamL2;
                VietnamP1L2=false;
            }else if(VietnamP1L1==false&&VietnamP1L2==false&&VietnamP1L3==true){
                moneyP1-=costVietnamL3;
                VietnamP1L3=false;
            }
        }
    }else if(position==4){
        moneyP1+=costChance;
    }else if(position==5){
        if(Taiwan==true){
            if(TaiwanP1L1==true){
                moneyP1-=costTaiwanL1;
                TaiwanP1L1=false;
                TaiwanP2L1=false;
                TaiwanP2L2=false;
                TaiwanP2L3=false;
            }else if(TaiwanP1L1==false&&TaiwanP1L2==true){
                moneyP1-=costTaiwanL2;
                TaiwanP1L2=false;
            }else if(TaiwanP1L1==false&&TaiwanP1L2==false&&TaiwanP1L3==true){
                moneyP1-=costTaiwanL3;
                TaiwanP1L3=false;
            }
        }
    }else if(position==6){
        moneyP1+=0;
    }else if(position==7){
        if(Bhutan==true){
            if(BhutanP1L1==true){
                moneyP1-=costBhutanL1;
                BhutanP1L1=false;
                BhutanP2L1=false;
                BhutanP2L2=false;
                BhutanP2L3=false;
            }else if(BhutanP1L1==false&&BhutanP1L2==true){
                moneyP1-=costBhutanL2;
                BhutanP1L2=false;
            }else if(BhutanP1L1==false&&BhutanP1L2==false&&BhutanP1L3==true){
                moneyP1-=costBhutanL3;
                BhutanP1L3=false;
            }
        }
    }else if(position==8){
        moneyP1-=costTax;
    }else if(position==9){      //chance
        moneyP1+=costChance;
    }else if(position==10){     //japan
        if(Japan==true){
            if(JapanP1L1==true){
                moneyP1-=costJapanL1;
                JapanP1L1=false;
                JapanP2L1=false;
                JapanP2L2=false;
                JapanP2L3=false;
            }else if(JapanP1L1==false&&JapanP1L2==true){
                moneyP1-=costJapanL2;
                JapanP1L2=false;
            }else if(JapanP1L1==false&&JapanP1L2==false&&JapanP1L3==true){
                moneyP1-=costJapanL3;
                JapanP1L3=false;
            }
        }
    }else if(position==11){     //korea
        if(Korea==true){
            if(KoreaP1L1==true){
                moneyP1-=costKoreaL1;
                KoreaP1L1=false;
                KoreaP2L1=false;
                KoreaP2L2=false;
                KoreaP2L3=false;
            }else if(KoreaP1L1==false&&KoreaP1L2==true){
                moneyP1-=costKoreaL2;
                KoreaP1L2=false;
            }else if(KoreaP1L1==false&&KoreaP1L2==false&&KoreaP1L3==true){
                moneyP1-=costKoreaL3;
                KoreaP1L3=false;
            }
        }
    }else if(position==12){             //bonus random
        moneyP1+=costChance;
    }else if(position==13){
        moneyP1-=costTax;
    }else if(position==14){             //china
        if(China==true){
            if(ChinaP1L1==true){
                moneyP1-=costChinaL1;
                ChinaP1L1=false;
                ChinaP2L1=false;
                ChinaP2L2=false;
                ChinaP2L3=false;
            }else if(ChinaP1L1==false&&ChinaP1L2==true){
                moneyP1-=costChinaL2;
                ChinaP1L2=false;
            }else if(ChinaP1L1==false&&ChinaP1L2==false&&ChinaP1L3==true){
                moneyP1-=costChinaL3;
                ChinaP1L3=false;
            }
        }
    }else if(position==15){             //brazil
        if(Brazil==true){
            if(BhutanP1L1==true){
                moneyP1-=costBrazilL1;
                BrazilP1L1=false;
                BrazilP2L1=false;
                BrazilP2L2=false;
                BrazilP2L3=false;
            }else if(BrazilP1L1==false&&BrazilP1L2==true){
                moneyP1-=costBrazilL2;
                BrazilP1L2=false;
            }else if(BrazilP1L1==false&&BrazilP1L2==false&&BrazilP1L3==true){
                moneyP1-=costBrazilL3;
                BrazilP1L3=false;
            }
        }
    }else if(position==16){             //chance
        moneyP1+=costChance;
    }else if(position==17){             //france
        if(France==true){
            if(FranceP1L1==true){
                moneyP1-=costFranceL1;
                FranceP1L1=false;
                FranceP2L1=false;
                FranceP2L2=false;
                FranceP2L3=false;
            }else if(FranceP1L1==false&&FranceP1L2==true){
                moneyP1-=costFranceL2;
                FranceP1L2=false;
            }else if(BhutanP1L1==false&&FranceP1L2==false&&FranceP1L3==true){
                moneyP1-=costFranceL3;
                FranceP1L3=false;
            }
        }
    }else if(position==18){             //just waiting
        moneyP1+=0;
    }else if(position==19){             //USA
        if(USA==true){
            if(USAP1L1==true){
                moneyP1-=costUSAL1;
                USAP1L1=false;
                USAP2L1=false;
                USAP2L2=false;
                USAP2L3=false;
            }else if(USAP1L1==false&&USAP1L2==true){
                moneyP1-=costUSAL2;
                USAP1L2=false;
            }else if(USAP1L1==false&&USAP1L2==false&&USAP1L3==true){
                moneyP1-=costUSAL3;
                USAP1L3=false;
            }
        }
    }else if(position==20){             //switz
        if(Switz==true){
            if(SwitzP1L1==true){
                moneyP1-=costSwitzL1;
                SwitzP1L1=false;
                SwitzP2L1=false;
                SwitzP2L2=false;
                SwitzP2L3=false;
            }else if(SwitzP1L1==false&&SwitzP1L2==true){
                moneyP1-=costSwitzL2;
                SwitzP1L2=false;
            }else if(SwitzP1L1==false&&SwitzP1L2==false&&SwitzP1L3==true){
                moneyP1-=costSwitzL3;
                SwitzP1L3=false;
            }
        }
    }else if(position==21){             //super tax
        moneyP1-=costSuperTax;
    }else if(position==22){             //england
        if(England==true){
            if(EnglandP1L1==true){
                moneyP1-=costEnglandL1;
                EnglandP1L1=false;
                EnglandP2L1=false;
                EnglandP2L2=false;
                EnglandP2L3=false;
            }else if(EnglandP1L1==false&&EnglandP1L2==true){
                moneyP1-=costEnglandL2;
                EnglandP1L2=false;
            }else if(EnglandP1L1==false&&EnglandP1L2==false&&EnglandP1L3==true){
                moneyP1-=costEnglandL3;
                EnglandP1L3=false;
            }
        }
    }else if(position==23){             //chance
        moneyP1+=costChance;
    }else if(position==24){             //start
        moneyP1+=startAgain;
    }

   return moneyP1;
}


int bankCalP2(int position){   //Player2
    if(position==1){           //position=space1
        if(Thai==true){
            if(ThaiP2L1==true){
                moneyP2-=costThaiL1;
                ThaiP2L1=false;
                ThaiP1L1=false;
                ThaiP1L2=false;
                ThaiP1L3=false;
           }else if(ThaiP2L1==false&&ThaiP2L2==true){
                moneyP2-=costThaiL2;
                ThaiP2L2=false;
           }else if(ThaiP2L1==false&&ThaiP2L2==false&&ThaiP2L3==true){
                moneyP2-=costThaiL3;
                ThaiP2L3=false;
                Thai =false;
           }
        }
    }else if(position==2){
        if(Myanmar==true){
            if(MyanmarP2L1==true){
                moneyP2-=costMyanmarL1;
                MyanmarP2L1=false;
                MyanmarP1L1=false;
                MyanmarP1L2=false;
                MyanmarP1L3=false;
            }else if(MyanmarP2L1==false&&MyanmarP2L2==true){
                moneyP2-=costMyanmarL2;
                MyanmarP2L2=false;
            }else if(MyanmarP2L1==false&&MyanmarP2L2==false&&MyanmarP2L3==true){
                moneyP1-=costMyanmarL3;
                MyanmarP2L3=false;
            }
        }
    }else if(position==3){
        if(Vietnam==true){
            if(VietnamP2L1==true){
                moneyP2-=costVietnamL1;
                VietnamP2L1=false;
                VietnamP1L1=false;
                VietnamP1L2=false;
                VietnamP1L3=false;
            }else if(VietnamP2L1==false&&VietnamP2L2==true){
                moneyP2-=costVietnamL2;
                VietnamP2L2=false;
            }else if(VietnamP2L1==false&&VietnamP2L2==false&&VietnamP2L3==true){
                moneyP2-=costVietnamL3;
                VietnamP2L3=false;
            }
        }
    }else if(position==4){
        moneyP2+=costChance;
    }else if(position==5){
        if(Taiwan==true){
            if(TaiwanP2L1==true){
                moneyP2-=costTaiwanL1;
                TaiwanP2L1=false;
                TaiwanP1L1=false;
                TaiwanP1L2=false;
                TaiwanP1L3=false;
            }else if(TaiwanP2L1==false&&TaiwanP2L2==true){
                moneyP2-=costTaiwanL2;
                TaiwanP2L2=false;
            }else if(TaiwanP2L1==false&&TaiwanP2L2==false&&TaiwanP2L3==true){
                moneyP2-=costTaiwanL3;
                TaiwanP2L3=false;
            }
        }
    }else if(position==6){
        moneyP2+=0;
    }else if(position==7){
        if(Bhutan==true){
            if(BhutanP2L1==true){
                moneyP2-=costBhutanL1;
                BhutanP2L1=false;
                BhutanP1L1=false;
                BhutanP1L2=false;
                BhutanP1L3=false;
            }else if(BhutanP2L1==false&&BhutanP2L2==true){
                moneyP2-=costBhutanL2;
                BhutanP2L2=false;
            }else if(BhutanP2L1==false&&BhutanP2L2==false&&BhutanP2L3==true){
                moneyP2-=costBhutanL3;
                BhutanP2L3=false;
            }
        }
    }else if(position==8){
        moneyP2-=costTax;
    }else if(position==9){      //chance
        moneyP2+=costChance;
    }else if(position==10){     //japan
        if(Japan==true){
            if(JapanP2L1==true){
                moneyP2-=costJapanL1;
                JapanP2L1=false;
                JapanP1L1=false;
                JapanP1L2=false;
                JapanP1L3=false;
            }else if(JapanP2L1==false&&JapanP2L2==true){
                moneyP2-=costJapanL2;
                JapanP2L2=false;
            }else if(JapanP2L1==false&&JapanP2L2==false&&JapanP2L3==true){
                moneyP2-=costJapanL3;
                JapanP2L3=false;
            }
        }
    }else if(position==11){     //korea
        if(Korea==true){
            if(KoreaP2L1==true){
                moneyP1-=costKoreaL1;
                KoreaP2L1=false;
                KoreaP1L1=false;
                KoreaP1L2=false;
                KoreaP1L3=false;
            }else if(KoreaP2L1==false&&KoreaP2L2==true){
                moneyP2-=costKoreaL2;
                KoreaP2L2=false;
            }else if(KoreaP2L1==false&&KoreaP2L2==false&&KoreaP2L3==true){
                moneyP2-=costKoreaL3;
                KoreaP2L3=false;
            }
        }
    }else if(position==12){             //bonus random
        moneyP2+=costChance;
    }else if(position==13){
        moneyP2-=costTax;
    }else if(position==14){             //china
        if(China==true){
            if(ChinaP2L1==true){
                moneyP2-=costChinaL1;
                ChinaP2L1=false;
                ChinaP1L1=false;
                ChinaP1L2=false;
                ChinaP1L3=false;
            }else if(ChinaP2L1==false&&ChinaP2L2==true){
                moneyP2-=costChinaL2;
                ChinaP2L2=false;
            }else if(ChinaP2L1==false&&ChinaP2L2==false&&ChinaP2L3==true){
                moneyP2-=costChinaL3;
                ChinaP2L3=false;
            }
        }
    }else if(position==15){             //brazil
        if(Brazil==true){
            if(BhutanP2L1==true){
                moneyP2-=costBrazilL1;
                BrazilP2L1=false;
                BrazilP1L1=false;
                BrazilP1L2=false;
                BrazilP1L3=false;
            }else if(BrazilP2L1==false&&BrazilP2L2==true){
                moneyP2-=costBrazilL2;
                BrazilP2L2=false;
            }else if(BrazilP2L1==false&&BrazilP2L2==false&&BrazilP2L3==true){
                moneyP2-=costBrazilL3;
                BrazilP2L3=false;
            }
        }
    }else if(position==16){             //chance
        moneyP2+=costChance;
    }else if(position==17){             //france
        if(France==true){
            if(FranceP2L1==true){
                moneyP2-=costFranceL2;
                FranceP2L1=false;
                FranceP1L1=false;
                FranceP1L2=false;
                FranceP1L3=false;
            }else if(FranceP2L1==false&&FranceP2L2==true){
                moneyP2-=costFranceL2;
                FranceP2L2=false;
            }else if(FranceP2L1==false&&FranceP2L2==false&&FranceP2L3==true){
                moneyP2-=costFranceL3;
                FranceP2L3=false;
            }
        }
    }else if(position==18){             //just waiting
        moneyP2+=0;
    }else if(position==19){             //USA
        if(USA==true){
            if(USAP2L1==true){
                moneyP2-=costUSAL1;
                USAP2L1=false;
                USAP1L1=false;
                USAP1L2=false;
                USAP1L3=false;
            }else if(USAP2L1==false&&USAP2L2==true){
                moneyP2-=costUSAL2;
                USAP2L2=false;
            }else if(USAP2L1==false&&USAP2L2==false&&USAP2L3==true){
                moneyP2-=costUSAL3;
                USAP2L3=false;
            }
        }
    }else if(position==20){             //switz
        if(Switz==true){
            if(SwitzP2L1==true){
                moneyP2-=costSwitzL1;
                SwitzP2L1=false;
                SwitzP1L1=false;
                SwitzP1L2=false;
                SwitzP1L3=false;
            }else if(SwitzP2L1==false&&SwitzP2L2==true){
                moneyP2-=costSwitzL2;
                SwitzP2L2=false;
            }else if(SwitzP2L1==false&&SwitzP2L2==false&&SwitzP2L3==true){
                moneyP2-=costSwitzL3;
                SwitzP2L3=false;
            }
        }
    }else if(position==21){             //super tax
        moneyP2-=costSuperTax;
    }else if(position==22){             //england
        if(England==true){
            if(EnglandP2L1==true){
                moneyP2-=costEnglandL1;
                EnglandP2L1=false;
                EnglandP1L1=false;
                EnglandP1L2=false;
                EnglandP1L3=false;
            }else if(EnglandP2L1==false&&EnglandP2L2==true){
                moneyP2-=costEnglandL2;
                EnglandP2L2=false;
            }else if(EnglandP2L1==false&&EnglandP2L2==false&&EnglandP2L3==true){
                moneyP2-=costEnglandL3;
                EnglandP2L3=false;
            }
        }
    }else if(position==23){             //chance
        moneyP2+=costChance;
    }else if(position==24){             //start
        moneyP2+=startAgain;
    }

   return moneyP2;
}
