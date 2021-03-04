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
bool KOreaP2L3=true;

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
    }else if(position==10){     //japan                     //not edit
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
    }else if(position==11){     //korea
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
    }else if(position==12){             //bonus random
        moneyP1+=costChance;
    }else if(position==13){
        moneyP1-=costTax;
    }else if(position==14){             //china
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
    }else if(position==15){             //brazil
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
    }else if(position==16){             //chance
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
    }else if(position==17){             //france
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
    }else if(position==18){             //just waiting
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
    }else if(position==19){             //USA
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
    }else if(position==20){             //switz
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
    }else if(position==21){             //super tax
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
    }else if(position==22){             //england
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
    }else if(position==23){             //chance
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
    }else if(position==24){             //start
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
    }

   return moneyP1;
}
