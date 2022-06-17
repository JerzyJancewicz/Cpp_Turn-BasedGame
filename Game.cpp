#include "Game.h"

Game::Game(){
    isPlaying = true;
    Move = 0;
}

/**
 * Funckja pozwala na wybór różnych opcji przez gracza.
 */
void Game::MainMenu() {

    cin >> Move;

    switch (Move) {
        case 1 :
            Play();
            break;
        case 2 :
            isPlaying = false;
            break;
        case 3:
            printHelp();
            break;
        case 4:

            break;
        default:
            break;
    }
}

/**
 * Funkcja wypisuje, za pomocą jakich klawiszy, urzytkownik posługuje się grą.
 */
void Game::printHelp() {
    cout << "- Wpisz '1, zeby rozpoczac gre." << endl;
    cout << "- Wpisz '2', zeby wyjsc z gry." << endl;
    cout << "- Wpisz '3', zeby wyswietlic pomoc." << endl << endl;
    cout << "---------- Sterowanie ----------" << endl;
    cout << "- Wpisz '4', zeby wybrac Zwierze" << endl;
    cout << "Zeby wybrac postac, wpisz numer postaci i potwierdz enterem" << endl;
}

/**
 * Funkcja, która gromadzi inne fukcje. Funkcja ta jest odpowiedzialna za rozgrywke.
 */
void Game::Play() {

    Arena arena;


    ShowAnimalChose::showAllChampions();
    arena.choseAnimal();
    arena.fight();

}

bool Game::getIsPlaying() const {
    return isPlaying;
}
