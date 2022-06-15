#ifndef CPP_TURN_BASEDGAME_GAME_H
#define CPP_TURN_BASEDGAME_GAME_H

#include <iostream>
#include "Animal.h"
#include "Oponent.h"
#include "ShowAnimalChose.h"
#include <string>
#include <cmath>

//srand(time(NULL));

using namespace std;

class Game{

private:
    bool isPlaying;
    int Move;
public:

    Game();
    bool getIsPlaying() const;
    void MainMenu();
    void printHelp();
    void Play();
};
#endif //CPP_TURN_BASEDGAME_GAME_H
