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
                    int statisticsTab1[5][15]{
                            {15,20,25,20,30,40,25,15,30,30,25,30,10,10,20},
                            {25,15,30,15,35,35,20,10,10,10,15,15,10,10,10},
                            {150,150,125,150,100,80,125,175,125,150,150,125,250,250,150},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {1,4,2,1,3,2,1,3,5,5,4,4,6,6,2}
                    };
                    return statisticsTab1[attributes][champion];
                }
/*

enum TypeOfAnimal {WATER,EARTH,WIND,FIRE,ICE,STEEL};

struct Animals{
    //std::string name;
    int id;
    int strength;
    int agility;
    int HP;
    int Exp;
    TypeOfAnimal typeOfAnimal;
};
struct Animalss{
    int id;
    Animals animals;
};
Animals ZENITHAR {0, 15, 25, 150, 0, WATER};
Animals VERKTRUM {1, 20, 15, 150, 0, FIRE};
Animals AKADAH {2, 25, 30, 125, 0, EARTH};
Animals NESMERUS {3, 20, 15, 150, 0, WATER};
Animals IDORE {4, 30, 35, 100, 0, WIND};
Animals KANUMA {5, 40, 35, 80, 0, EARTH};
Animals DEKTIJA {6, 25, 20, 125, 0, WATER};
Animals SIKTURA {7, 15, 10, 175, 0, EARTH};
Animals KALIGNA {8, 30, 10, 125, 0, ICE};
Animals ENOGRE {9, 30, 10, 150, 0, ICE};
Animals DJAKTION {10, 25, 15, 150, 0, FIRE};
Animals RAKSHI {11, 30, 15, 125, 0, FIRE};
Animals PIGGER {12, 10, 10, 250, 0, STEEL};
Animals ONAR {13, 10, 10, 250, 0, STEEL};
Animals NYRAS {14, 20, 10, 150, 0, EARTH};

*/

//Animalss animalss {1,ZENITHAR};


        /*Animals animalTab[15] = {
                {0,15,25,150,0,WATER},
                {1,20,15,150,0,FIRE},
                2,25,30,125,0,EARTH,
                3,20,15,150,0,WATER,
                4,30,35,100,0,WIND,
                5,10,10,100,0,EARTH,
                6,25,20,125,0,WATER,
                7,15,10,175,0,EARTH,
                8,30,10,125,0,ICE,
                9,30,10,150,0,ICE,
                10,25,15,150,0,FIRE,
                11,30,15,125,0,FIRE,
                12,10,10,250,0,STEEL,
                13,10,10,250,0,STEEL,
                14,20,10,150,0,EARTH
        };*/

        std::string Animal::getAnimalTypeName[6]{
                "Water","Earth","Wind","Fire","Ice","Steel"
        };

        /**
         * tabilca imion postaci
         */
        std::string Animal::getAnimalName[15] {
            "0. ZENITHAR ","1. VERKTRUM ",
            "2. AKADAH   ", "3. NESMERUS ",
            "4. IDORE    ", "5. KANUMA   ",
            "6. DEKTIJA  ", "7. SIKTURA  ",
            "8. KALIGNA  ", "9. ENOGRE   ",
            "10. DJAKTION", "11. RAKSHI  ",
            "12. PIGGER  ", "13. ONAR    ",
            "14. NYRAS   "
        };


        /**
         * Funkcja sprawdza zależności pomiędzy typami postaci i modifikuje AD (attack damage)
         * tak, jak zostało narzucone w zadaniu.
         * @param A - index postaci atakującej
         * @param D - index postaci broniącej się
         */
void Animal::checkDependence(int A, int D) {

    switch (getStatistics(4,A)) {
        case 1:
            switch (getStatistics(4,D)) {
                case 1:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 2:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 5:
                    //no dependency
                    break;
                case 6:
                    //no dependency
                    break;
                default:
                    break;
            }
            break;
        case 2:
            switch (getStatistics(4,D)) {
                case 1:
                    //no dependency
                    break;
                case 2:
                    //no dependency
                    break;
                case 3:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 4:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 5:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 6:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                default:
                    break;
            }
            break;
        case 3:
            switch (getStatistics(4,D)) {
                case 1:
                    //no dependency
                    break;
                case 2:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    //no dependency
                    break;
                case 5:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 6:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                default:
                    break;
            }
            break;
        case 4:
            switch (getStatistics(4,D)) {
                case 1:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 2:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    //no dependency
                    break;
                case 5:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 6:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                default:
                    break;
            }
            break;
        case 5:
            switch ((getStatistics(4,D))) {
                case 1:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 2:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 5:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 6:
                    //no dependency
                    break;
                default:
                    break;
            }
            break;
        case 6:
            switch (getStatistics(4,D)) {
                case 1:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 2:
                    //no dependency
                    break;
                case 3:
                    AD = Animal::getStatistics(0,A) + Animal::getStatistics(0,A) * 0.2;
                    break;
                case 4:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                case 5:
                    //no dependency
                    break;
                case 6:
                    AD = Animal::getStatistics(0,A) - Animal::getStatistics(0,A) * 0.2;
                    break;
                default:
                    break;
            }
            break;
    }
}