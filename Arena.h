//
// Created by jance on 16.06.2022.
//

#ifndef CPP_TURN_BASEDGAME_ARENA_H
#define CPP_TURN_BASEDGAME_ARENA_H
#include "Game.h"

class Arena{
private :
    int tmp;
    int champTab[6];
public:
    void choseAnimal();
    void showArena();
    void checkAnimal(int x);
    void fight();
};


#endif //CPP_TURN_BASEDGAME_ARENA_H
