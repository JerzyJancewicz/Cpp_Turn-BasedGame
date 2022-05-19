#include "Game.h"

/**
 * konstruktor dla Game
 */
Game::Game(){
    isPlaying = true;
    Move = 0;
}

/**
 * destruktor dla Game
 */
Game::~Game(){
}

/**
 * Funckja pozwala na wybór różnych opcji przez gracza.
 */
void Game::MainMenu() {

    cin >> Move;

    switch (Move) {
        case 0 :
            Play();
            break;
        case 1 :
            isPlaying = false;
            break;
        case 2:
            printHelp();
            break;
        case 3:
            Oponent op;
            op.getRandomAnimal();
            break;
        default:
            break;
    }
}

/**
 * Funkcja wypisuje, za pomocą jakich klawiszy, urzytkownik posługuje się grą.
 */
void Game::printHelp() {
    cout << "- Wpisz '0, zeby rozpoczac gre." << endl;
    cout << "- Wpisz '1', zeby wyjsc z gry." << endl;
    cout << "- Wpisz '2', zeby wyswietlic pomoc." << endl << endl;
    cout << "---------- Sterowanie ----------" << endl;
    cout << "- Wpisz '3', zeby wybrac Zwierze" << endl;
}


/**
 * Funkcja, która gromadzi inne fukcje. Funkcja ta jest odpowiedzialna za rozgrywke.
 */
void Game::Play() {
    cout << "Wybierz postac : " << endl;

    ShowAnimalChose animalChose;
    animalChose.show();
}



/**
 * Getter dla bool CzygGramy.
 * @return bool
 */
bool Game::getIsPlaying() const {
    return isPlaying;
}
