#ifndef CPP_TURN_BASEDGAME_OPONENT_H
#define CPP_TURN_BASEDGAME_OPONENT_H
#include "Game.h"
#include <iostream>

class Oponent {

public :
    void randNumberF1();
    bool endLoop;
    int storedRandoms[4];
private:
    int count;
    const int generateNumber = 4;
    int randNumber;
};


#endif //CPP_TURN_BASEDGAME_OPONENT_H
