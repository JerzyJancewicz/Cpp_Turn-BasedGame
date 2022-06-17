#ifndef CPP_TURN_BASEDGAME_GAME_H
#define CPP_TURN_BASEDGAME_GAME_H

#include <iostream>
#include "Animal.h"
#include "Oponent.h"
#include "ShowAnimalChose.h"
#include "Arena.h"
#include <string>
#include <cmath>
#include <vector>
using namespace std;


class Game{

private:
    bool isPlaying;
    int Move;
public:
    int getMove() const;

    Game();
    bool getIsPlaying() const;
    void MainMenu();
    void printHelp();
    void Play();
    void checkInput();
};
#endif //CPP_TURN_BASEDGAME_GAME_H
