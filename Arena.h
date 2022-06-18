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
    bool isSelected;
    int countSelected;

// Enemy turn
    int enemyRandNumber1;
    int enemyRandNumber2;
    int turnCount;
    int randAnimal;
    int randOpponent;
    int randSelectPowerChamp;
    int randMove;
//randMove = rand() % 2;
public:

    int roundCounter;
    bool isFighting = true;
    int champTab[6] {16,17,18,19,20,21};
    int enemyChampTab[4] {16,17,18,19};
    std::string blocked;


    void choseAnimal();
    void fight();
    void opponentMove();

    //void checkDifficulty();
    bool checkAnimal1(int x);
    bool checkSelectEnemyChamp(int x);
    bool checkSelectYourChamp(int x);
    void checkAnimal2();
    void checkFight();
    void checkBotFight();
    void checkArenaInputOpponent(int x);
    void checkArenaYourInput(int x);
    void checkArenaInputMove();
    void checkUpgrade();

    static double showMyHP(int x);
    static double showEnemyHp(int x);
    static double showMyAgility(int x);
    static double showEnemyAgility(int x);
    static double showMyAD(int x);
    static double showEnemyAD(int x);
    static int showMyExp(int x);
    static int showEnemyExp(int x);
    static int showIsAliveTab(int x);
    /*int showEnemyChampTab(int x);
    int showChampTab(int x);*/
    int showTurnCount();
    /*int showRandAnimal();
    int showRandOpponent();*/
};


#endif //CPP_TURN_BASEDGAME_ARENA_H
