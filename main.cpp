#include <iostream>
#include "Gra.h"

int main(){

    cout << "Witaj w GRZE TUROWEJ !!!!!" << endl;
    cout << "Zeby wyjsc z gry wpisz '1' i potwierdz przyciskiem enter. " << endl;
    cout << "Jesli masz jakies pytanie wpisz '2' i potwierdz przyciskiem enter."<< endl;

    Gra gra;
    while(gra.getCzygGramy()) {
        gra.MenuGlowne();
    }

    return 0;
}
