#include "Game.h"

Game::Game(){
    isPlaying = true;
    Move = 0;
}

/**
 * Funckja pozwala na wybór różnych opcji przez gracza. Sprawdza poprawny input.
 */
void Game::MainMenu() {

    cin >> Move;
    printHelp(Move);
    checkInput();
    switch (Move) {
        case 1 :
            Play();
            break;
        case 2 :
            isPlaying = false;
            break;
        case 3:
            printHelp(104);
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
void Game::printHelp(int x) {
    if(x == 99) {
        cout << "- Wpisz '1, zeby rozpoczac gre." << endl;
        cout << "- Wpisz '2', zeby wyjsc z gry." << endl;
        cout << "- Wpisz '3', zeby wyswietlic pomoc." << endl << endl;
        cout << "---------- Sterowanie ----------" << endl;
        cout << "- Wpisz '4', zeby wybrac Zwierze" << endl;
        cout << "Zeby wybrac postac, wpisz numer postaci i potwierdz enterem" << endl;
    }
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

void Game::checkInput() {
    if(!cin.good()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Niepoprawna wartosc, wpisywana wartosc musi byc liczba calkowita." << endl;
    }
    if(Move != 1 && Move != 2 &&Move != 3){
        cout << "---------------------- Wpisz jeszcze raz : ----------------------" << endl;
    }
}

bool Game::getIsPlaying() const {
    return isPlaying;
}