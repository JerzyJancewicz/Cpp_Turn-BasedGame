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
    int selectChamp;
    int yourMove;
    int selectOpponent;
    int selectPowerChamp;
    int count1;
    bool isFull;

public:

    int count2;
    int turnCount;
    bool isFighting = true;
    int champTab[6] {16,17,18,19,20,21};
    static bool isAlive;
    void choseAnimal();
    bool checkAnimal1(int x);
    void checkAnimal2();
    void fight();
    void checkFight();
    static double showMyHP(int x);
    static double showEnemyHp(int x);
    static double showMyAgility(int x);
    static double showEnemyAgility(int x);
    static double showMyAD(int x);
    static double showEnemyAD(int x);
    static int showMyExp(int x);
    static int showEnemyExp(int x);
    static int showIsAliveTab(int x);
};


#endif //CPP_TURN_BASEDGAME_ARENA_H
