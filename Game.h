#ifndef CPP_TURN_BASEDGAME_GAME_H
#define CPP_TURN_BASEDGAME_GAME_H

#include <iostream>
#include "Animal.h"
#include "Oponent.h"
#include "ShowAnimalChose.h"
#include "Arena.h"
#include "Powers.h"
#include <string>
#include <cmath>
#include <vector>
#include <limits>
using namespace std;


class Game{

private:
    bool isPlaying;
    int Move;
public:
    Game();

    bool getIsPlaying() const;
    void MainMenu();
    static void printHelp(int x);
    void Play();
    void checkInput();
};
#endif //CPP_TURN_BASEDGAME_GAME_H
