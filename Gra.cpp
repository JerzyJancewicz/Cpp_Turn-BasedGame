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
            cout << "pomoc" << endl;
            break;
        default:
            break;
    }
}

/**
 * Getter dla bool CzygGramy.
 * @return bool
 */
bool Gra::getCzygGramy() const {
    return CzygGramy;
}
