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
    int champTab[6];
    int selectChamp;
    int yourMove;
    int selectOpponent;


public:

    void choseAnimal();
    void showArena();
    void checkAnimal(int x);
    void fight();
};


#endif //CPP_TURN_BASEDGAME_ARENA_H
