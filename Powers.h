//
// Created by jance on 18.06.2022.
//

#ifndef CPP_TURN_BASEDGAME_POWERS_H
#define CPP_TURN_BASEDGAME_POWERS_H
#include "Game.h"

class Powers {
private :
    int allChampionsTab[15]{0,1,2,3,4,5,
                            6,7,8,9,10,
                            11,12,13,14};
public :
    void powersForMe(int x);
    void powersForOthers(int x, int y);
    void checkPowers(int x, int y);
};


#endif //CPP_TURN_BASEDGAME_POWERS_H
