#ifndef CPP_TURN_BASEDGAME_ANIMAL_H
#define CPP_TURN_BASEDGAME_ANIMAL_H
#include "Game.h"
#include <vector>
class Animal {

private:
    int strength, agility, HP, Exp;
public:

    double statisticsTab1[5][15];
    static std::string getAnimalName[15];
    static std::string getAnimalTypeName[6];
    static double getStatistics(int attributes, int champion);
    int changeStatistics(int attributes, int champion);
    void checkDependence(int A, int D);
};
#endif //CPP_TURN_BASEDGAME_ANIMAL_H
