#include <iostream>
#include "Game.h"
#include <ctime>

int main(){

    srand(time(NULL));

    cout << endl;
    cout << "------------------ Witaj w GRZE TUROWEJ !!!!! ------------------" << endl;
    cout << "- Zeby rozpoczac gre, wpisz '1' i potwierdz przyciskiem enter. " << endl;
    cout << "- Zeby zobaczyc opcje, wpisz '99' i potwierdz przyciskiem enter."<< endl;

    Game game;

    while(game.getIsPlaying()) {
        game.MainMenu();
    }

    return 0;
}
