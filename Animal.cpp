#include "Animal.h"


Animal::Animal(int sila, int zrecznosc, int punktyZycia, int punktyExp) :
    Sila(sila), Zrecznosc(zrecznosc),PunktyZycia(punktyZycia),PunktyExp(punktyExp) {}

        /**
         * Tworzy tablice dwuwymarową, przechowującą statystki
         * tabStatystyki[][] < przechowuje poszczególną statystyke do danej postaci
         *              ^
         *   Przechowuje rodzaje statystyk
         *   [0] - sila
         *   [1] - zrecznosc
         *   [2] - punktyZycia
         *   [3] - punktyExp
         * @return int[][]
         */
        int Animal::GetStatystyki(int Atrybut, int Champion) {
            int tabStatystyki [4][15]{
                    {10,12,20,40,20,14,12,30,23,25,21,21,0,0,0},
                    {12,25,25,23,12,52,34,52,23,54,23,12,12,0,0},
                    {100,120,150,200,200,100,85,250,125,125,150,150,120,200,200},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
            };
            return tabStatystyki[Atrybut][Champion];
        }

Animal::Animal() {

}


