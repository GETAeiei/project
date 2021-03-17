#ifndef DICE_H
#define DICE_H

class Dice {
public:
    Dice();
    virtual ~Dice();

    int dice;
    int roll_dice();
    int rand_chance;
    int randChance();
    int a1;
    int b1;
    int a2;
    int b2;
    bool player1;

};

#endif
