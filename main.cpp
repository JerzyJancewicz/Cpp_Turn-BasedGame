#include <iostream>
#include "Game.h"

int main(){

    cout << "Witaj w GRZE TUROWEJ !!!!!" << endl;
    cout << "Zeby wyjsc z gry wpisz '1' i potwierdz przyciskiem enter. " << endl;
    cout << "Jesli masz jakies pytanie wpisz '3' i potwierdz przyciskiem enter."<< endl;

    Game game;

    while(game.getIsPlaying()) {
        game.MainMenu();
    }

    return 0;
}
