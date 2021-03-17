#include "dice.h"
#include "main3.h"
#include<cstdlib>
#include<ctime>
#include<iostream>

Dice::Dice(){}
Dice::~Dice(){}

int Dice::roll_dice(){
    srand(time(0));
    dice = rand() % 6 + 1;
    return dice;
}

int Dice::randChance()
{
    srand(time(0));
    rand_chance = rand() % 10 + 1;
    return rand_chance;
}
