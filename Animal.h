#ifndef CPP_TURN_BASEDGAME_ANIMAL_H
#define CPP_TURN_BASEDGAME_ANIMAL_H
#include "Game.h"
class Animal {

private:
    int strength, agility, HP, Exp;
    int firstChamp = 16;
    int secondChamp = 17;
    int thirdChamp = 18;
    int fourthChamp = 19;
    int fifthChamp = 20;
    int sixthChamp = 21;

public:

    int *champTab{};
    static std::string getAnimalName[15];
    static int getStatistics(int attributes, int champion);
    void chosenAnimal();
    void checkAnimal(int x);

};
#endif //CPP_TURN_BASEDGAME_ANIMAL_H
