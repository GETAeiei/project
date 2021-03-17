#ifndef BUYBUY_H
#define BUYBUY_H

#include<iostream>
#include<vector>
using namespace std;
class player1
{
    public:
        int cost;
        int house[3]; //ในarrayเป็นราคาบ้าน
        int asset;
        int loc;
        int current_loc;
        int money;
        vector<int> owner;
        bool buy;
        bool own;
        void buy_house();
        void house_asset();
        void other_player_own();//ตกตำแหน่งบ้านของฝ่ายตรงข้าม
};
class player2
{
    private:
        int cost;
        int house[3]; //ในarrayเป็นราคาบ้าน
        int asset;
        vector<int> loc;
        int current_loc;
        int money;
        vector<int> owner;
        bool buy;
        bool own;
    public:
        void buy_house();
        void house_asset();
        void other_player_own();//ตกตำแหน่งบ้านของฝ่ายตรงข้าม
};


#endif // BUYBUY_H
