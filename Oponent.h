#ifndef CPP_TURN_BASEDGAME_OPONENT_H
#define CPP_TURN_BASEDGAME_OPONENT_H
#include "Game.h"
#include <iostream>

class Oponent {

public :
    int getRandomAnimal(int x);
    int randNumberF1(int x);
    bool endLoop = true;
private:
    int count;
    int randNumber1;
    int randNumber2;
    int randNumber3;
    int randNumber4;
    int randNumberF2(int x);
    int randNumberF3(int x);
    int randNumberF4(int x);
};


#endif //CPP_TURN_BASEDGAME_OPONENT_H
