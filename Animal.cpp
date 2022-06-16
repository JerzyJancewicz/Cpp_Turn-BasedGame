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
        double Animal::getStatistics(int attributes, int champion) {
            double statisticsTab1 [5][15]{
                    {10,12,20,40,20,14,12,30,23,25,21,21,0,0,0},
                    {12,25,25,23,12,52,34,52,23,54,23,12,12,0,0},
                    {100,120,150,200,200,100,85,250,125,125,150,150,120,200,200},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,4,2,1,3,2,1,3,5,5,4,4,6,6,2}
            };
            return statisticsTab1[attributes][champion];
        }

        int Animal::changeStatistics(int attributes, int champion) {
            std::vector<std::vector<int>> vector1{
                    {10,12,20,40,20,14,12,30,23,25,21,21,0,0,0},
                    {12,25,25,23,12,52,34,52,23,54,23,12,12,0,0},
                    {100,120,150,200,200,100,85,250,125,125,150,150,120,200,200},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,4,2,1,3,2,1,3,5,5,4,4,6,6,2}
            };
            return vector1[attributes][champion];
        }

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

/*void Animal::checkDependence(int A, int D) {

    switch ((int)getStatistics(4,A)) {
        case 1:
            switch ((int)getStatistics(4,D)) {
                case 1:
                    arena.setAttack((statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2)));
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 2:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
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
            switch ((int)getStatistics(4,D)) {
                case 1:
                    //no dependency
                    break;
                case 2:
                    //no dependency
                    break;
                case 3:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 4:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 5:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 6:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                default:
                    break;
            }
            break;
        case 3:
            switch ((int)getStatistics(4,D)) {
                case 1:
                    //no dependency
                    break;
                case 2:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    //no dependency
                    break;
                case 5:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 6:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                default:
                    break;
            }
            break;
        case 4:
            switch ((int)getStatistics(4,D)) {
                case 1:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 2:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    //no dependency
                    break;
                case 5:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 6:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                default:
                    break;
            }
            break;
        case 5:
            switch ((int)getStatistics(4,D)) {
                case 1:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 2:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 3:
                    //no dependency
                    break;
                case 4:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 5:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 6:
                    //no dependency
                    break;
                default:
                    break;
            }
            break;
        case 6:
            switch ((int)getStatistics(4,D)) {
                case 1:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 2:
                    //no dependency
                    break;
                case 3:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) + ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 4:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                case 5:
                    //no dependency
                    break;
                case 6:
                    (statisticsTab1[0][A]) = (statisticsTab1[0][A]) - ((statisticsTab1[0][A]) * (0.2));
                    break;
                default:
                    break;
            }
            break;
    }
}*/
