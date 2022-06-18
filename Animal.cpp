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

        /**
         * Wypełnienie tablicy stringow typami postaci
         */
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
            "8. KALIGNA  ", " 9. ENOGRE   ",
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
        int MyAD;
        int EnemyAD;
        int whoseTurnTab[2] = {MyAD,EnemyAD};
void Animal::checkDependence(int A, int D) {
    Arena arena;
    int x;
    if(arena.showTurnCount() % 2 == 0) {
        x = whoseTurnTab[0];
    } else {
        x = whoseTurnTab[1];
    }
        switch (getStatistics(4, A)) {
            case 1:
                switch (getStatistics(4, D)) {
                    case 1:
                        whoseTurnTab[x] = (int)(-Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 2:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 3:
                        //no dependency
                        break;
                    case 4:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
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
                switch (getStatistics(4, D)) {
                    case 1:
                        //no dependency
                        break;
                    case 2:
                        //no dependency
                        break;
                    case 3:
                        whoseTurnTab[x] = (int)(-Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 4:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 5:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 6:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    default:
                        break;
                }
                break;
            case 3:
                switch (getStatistics(4, D)) {
                    case 1:
                        //no dependency
                        break;
                    case 2:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 3:
                        //no dependency
                        break;
                    case 4:
                        //no dependency
                        break;
                    case 5:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 6:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    default:
                        break;
                }
                break;
            case 4:
                switch (getStatistics(4, D)) {
                    case 1:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 2:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 3:
                        //no dependency
                        break;
                    case 4:
                        //no dependency
                        break;
                    case 5:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 6:
                        whoseTurnTab[x] = (int)(+ Animal::getStatistics(0, A) * 0.2);
                        break;
                    default:
                        break;
                }
                break;
            case 5:
                switch ((getStatistics(4, D))) {
                    case 1:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 2:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 3:
                        //no dependency
                        break;
                    case 4:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 5:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 6:
                        //no dependency
                        break;
                    default:
                        break;
                }
                break;
            case 6:
                switch (getStatistics(4, D)) {
                    case 1:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 2:
                        //no dependency
                        break;
                    case 3:
                        whoseTurnTab[x] = (int)(Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 4:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    case 5:
                        //no dependency
                        break;
                    case 6:
                        whoseTurnTab[x] = (int)(- Animal::getStatistics(0, A) * 0.2);
                        break;
                    default:
                        break;
                }
                break;
    }
    MyAD = whoseTurnTab[0];
    EnemyAD = whoseTurnTab[1];
}

int Animal::showMyAD() {
    return MyAD;
}
int Animal::showEnemyAD() {
    return EnemyAD;
}