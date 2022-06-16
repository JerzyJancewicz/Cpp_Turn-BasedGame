#ifndef CPP_TURN_BASEDGAME_ANIMAL_H
#define CPP_TURN_BASEDGAME_ANIMAL_H
#include "Game.h"
#include <vector>
class Animal {

private:
    int strength, agility, HP, Exp;
public:

    static std::string getAnimalName[15];
    static std::string getAnimalTypeName[6];
    static int getStatistics(int attributes, int champion);
};
#endif //CPP_TURN_BASEDGAME_ANIMAL_H
