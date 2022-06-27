#ifndef CPP_TURN_BASEDGAME_ANIMAL_H
#define CPP_TURN_BASEDGAME_ANIMAL_H
#include "Game.h"
#include <vector>
class Animal {

public:

    double AD;
    double HP;
    double Exp;
    double agility;
    double MyHP;
    double MyAgility;
    int MyExp;
    double EnemyHP;
    double EnemyExp;
    static std::string getAnimalName[15];
    static std::string getAnimalTypeName[6];
    static int getStatistics(int attributes, int champion);
    void checkDependence(int A, int D);
    int showMyAD();
    int showEnemyAD();
};
#endif //CPP_TURN_BASEDGAME_ANIMAL_H
