#ifndef CPP_TURN_BASEDGAME_OPONENT_H
#define CPP_TURN_BASEDGAME_OPONENT_H
#include "Game.h"
#include <iostream>

class Oponent {

public :
    int getRandomAnimal(int x);

private:
    int count;
    int visited[15];
    int storedRandoms[4];
    int randNumber1;
    int randNumber2;
    int randNumber3;
    int randNumber4;
};


#endif //CPP_TURN_BASEDGAME_OPONENT_H
