#ifndef CPP_TURN_BASEDGAME_ANIMAL_H
#define CPP_TURN_BASEDGAME_ANIMAL_H
#include <string>
#include "Game.h"
class Animal {

private:
    int Sila, Zrecznosc, PunktyZycia, PunktyExp;

public:
    Animal(int sila, int zrecznosc, int punktyZycia, int punktyExp);

    Animal();

    int GetStatystyki(int Atrybut, int Champion);

};


/*      a) Zenithar
        b) Verktrum
        c) Akadah
        d) Nesmerus
        e) Idore
        f) Kanuma
        g) Dektija
        h) Siktura/en
        i) Kaligna
        j) Enogre
        k) Djaktion
        l) Rakshi
*/
#endif //CPP_TURN_BASEDGAME_ANIMAL_H
