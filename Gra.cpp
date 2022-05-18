#include "Gra.h"

/**
 * konstruktor dla Gra
 */
Gra::Gra(){
    CzygGramy = true;
    ruch = 0;
}

/**
 * destruktor dla Gra
 */
Gra::~Gra(){
}

/**
 * Funckja pozwala na wybór różnych opcji przez gracza.
 */
void Gra::MenuGlowne() {

    cin >> ruch;

    switch (ruch) {
        case 1 :
            CzygGramy = false;
            break;
        case 2:
            Pomoc();
            break;
        case 3:

        default:
            break;
    }
}

/**
 * Funkcja wypisuje za pomocą jakich klawiszy posługuje się grą
 */
void Gra::Pomoc() {
    cout << "- Wpisz '1', zeby wyjsc z gry." << endl;
    cout << "- Wpisz '2', zeby wyswietlic pomoc." << endl << endl;
    cout << "---------- Sterowanie ----------" << endl;
    cout << "- Wpisz '3', zeby wybrac Zwierze" << endl;
}

/**
 * Getter dla bool CzygGramy.
 * @return bool
 */
bool Gra::getCzygGramy() const {
    return CzygGramy;
}
