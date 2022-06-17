//
// Created by jance on 16.06.2022.
//

#ifndef CPP_TURN_BASEDGAME_ARENA_H
#define CPP_TURN_BASEDGAME_ARENA_H
#include "Game.h"

class Arena{
private :
    int tmp;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int selectChamp;
    int yourMove;
    int selectOpponent;
    bool isFighting;



public:
    int champTab[6];
    static bool isAlive;
    void choseAnimal();
    void showArena();
    void checkAnimal(int x);
    void fight();
    void checkFight(int x);
    static double showCurrentHP(int x);
    static int showIsAliveTab(int x);
};


#endif //CPP_TURN_BASEDGAME_ARENA_H
