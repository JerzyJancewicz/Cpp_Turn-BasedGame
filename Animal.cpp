#include "Animal.h"

        /**
         * Tworzy tablice dwuwymarową, przechowującą statystki
         * tabStatystyki[][] < przechowuje poszczególną statystyke do danej postaci
         *              ^
         *   Przechowuje rodzaje statystyk
         *   [0] - sila
         *   [1] - zrecznosc
         *   [2] - punktyZycia
         *   [3] - punktyExp
         *   [4] - typy postaci
         *   1 - woda, 2 - ziemia, 3 - powietrze, 4 - ogien, 5 - lód, 6 - stal
         * @return int[][]
         */
        int Animal::getStatistics(int attributes, int champion) {
            int statisticsTab [5][15]{
                    {10,12,20,40,20,14,12,30,23,25,21,21,0,0,0},
                    {12,25,25,23,12,52,34,52,23,54,23,12,12,0,0},
                    {100,120,150,200,200,100,85,250,125,125,150,150,120,200,200},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,4,2,1,3,2,1,3,5,5,4,4,6,6,2}
            };
            return statisticsTab[attributes][champion];
        }

        std::string Animal::getAnimalTypeName[6]{
                "Water","Fire",
                "Earth","Wind",
                "Ice","Steel"

        };

        /**
         * tabilca imion postaci
         */
        std::string Animal::getAnimalName[15] {
            "0. ZENITHAR(W) ","1. VERKTRUM(F) ",
            "2. AKADAH(E)   ", "3. NESMERUS(W) ",
            "4. IDORE(WI)    ", "5. KANUMA(E)   ",
            "6. DEKTIJA(W)  ", "7. SIKTURA(WI)  ",
            "8. KALIGNA(I)  ", "9. ENOGRE(I)   ",
            "10. DJAKTION(F)", "11. RAKSHI(F)  ",
            "12. PIGGER(S)  ", "13. ONAR(S)    ",
            "14. NYRAS(E)   "
        };
