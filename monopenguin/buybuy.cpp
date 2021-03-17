#include "buybuy.h"

#include<iostream>
#include<vector>
using namespace std;


//----------------------------------------------player 1--------------------------------------------------
void player1::buy_house()
{
    money = money-cost;//ซื้อบ้าน
    buy = 1;
}
void player1::house_asset()
{
    for(int i = 0;i<3;i++)
    {
        if(buy == 1)
        {
            asset = asset+house[i]; //ทรัพย์สินปัจจุบันเท่ากับทรัพย์สินเก่า+ราคาบ้านที่ลำดับ i
            owner.push_back(house[i]);//player1 เป็นเจ้าของบ้านลำดับที่ i (level)
            loc.push_back(current_loc);//เพิ่มตำแหน่งที่ซื้อ = ตำแหน่งปัจจุบัน
            own = 1;
        }
        else buy=0;
    }
}
void player1::other_player_own()
{
    if(current_loc==player2.loc)
    {
        money = money-player2.house[i]; //ถ้าตำแหน่งปัจจุบันของplayer1 ไปตกตรงตำแหน่งบ้านของ player2 ให้ลดเงินตามราคาบ้าน ณ ปัจจุบันของplayer 2
    }
}

//--------------------------------------player 2 ---------------------------------------------------
void player2::buy_house()
{
    money = money-cost;//ซื้อบ้าน
    buy = 1;
}
void player2::house_asset()
{
    for(int i = 0;i<3;i++)
    {
        if(buy == 1)
        {
            asset = asset+house[i]; //ทรัพย์สินปัจจุบันเท่ากับทรัพย์สินเก่า+ราคาบ้านที่ลำดับ i
            owner.push_back(house[i]);//player2 เป็นเจ้าของบ้านลำดับที่ i (level)
            loc.push_back(current_loc);//เพิ่มตำแหน่งที่ซื้อ = ตำแหน่งปัจจุบัน
            own = 1;
        }
        else buy=0;
    }
}

void player2::other_player_own()
{
    if(current_loc==player1.loc)
    {
        money = money-player1.house[i]; //ถ้าตำแหน่งปัจจุบันของplayer2 ไปตกตรงตำแหน่งบ้านของ player1 ให้ลดเงินตามราคาบ้าน ณ ปัจจุบันของplayer 1
    }
}
