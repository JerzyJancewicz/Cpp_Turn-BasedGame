//
// Created by jance on 19.05.2022.
//

#ifndef CPP_TURN_BASEDGAME_SHOWANIMALCHOSE_H
#define CPP_TURN_BASEDGAME_SHOWANIMALCHOSE_H
#include "Game.h"


class ShowAnimalChose{
public:
   static void showAllChampions();
   static void showChampion(int x);
   static void showYourTeam(int x, int y, int z,int n, int m, int l);
   static void showEnemyTeam(int x, int y, int z, int n);
   static std::string showTypeOfAnimal(int x);
};

#endif //CPP_TURN_BASEDGAME_SHOWANIMALCHOSE_H
