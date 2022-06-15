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
         * @return int[][]
         */
        int Animal::getStatistics(int atributes, int champion) {
            int statisticsTab [4][15]{
                    {10,12,20,40,20,14,12,30,23,25,21,21,0,0,0},
                    {12,25,25,23,12,52,34,52,23,54,23,12,12,0,0},
                    {100,120,150,200,200,100,85,250,125,125,150,150,120,200,200},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
            };
            return statisticsTab[atributes][champion];
        }

        /**
         * tabilca imion postaci
         */
        std::string Animal::getAnimalName[15] {
            "ZENITHAR","VERKTRUM",
            "AKADAH", "NESMERUS",
            "IDORE" , "KANUMA",
            "DEKTIJA", "SIKTURA",
            "KALIGNA", "ENOGRE",
            "DJAKTION", "RAKSHI",
            "PIGGER", "ONAR",
            "NYRAS"
        };

void Animal::chosenAnimal() {

    cout << "Wybierz szesc postaci : " << endl;
    cout << "( Zeby wybrac postac, wpisz numer postac i potwierdz enterem )" << endl;
    cout << endl;
    cout << "Wybierz pierwsza postac : " << endl;
    cin >> firstChamp;
    ShowAnimalChose::showChampion(firstChamp);
    cout << "Wybierz druga postac : " << endl;
    cin >> secondChamp;

    ShowAnimalChose::showChampion(secondChamp);
    cout << "Wybierz trzecia postac : " << endl;
    cin >> thirdChamp;

    ShowAnimalChose::showChampion(thirdChamp);
    cout << "Wybierz czwarta postac : " << endl;
    cin >> fourthChamp;

    ShowAnimalChose::showChampion(fourthChamp);
    cout << "Wybierz piata postac : " << endl;
    cin >> fifthChamp;

    ShowAnimalChose::showChampion(fifthChamp);
    cout << "Wybierz szosta postac : " << endl;
    cin >> sixthChamp;

    ShowAnimalChose::showChampion(sixthChamp);


}

void Animal::checkAnimal(int x) {

    int champTab[] = {firstChamp,secondChamp,thirdChamp,fourthChamp,fifthChamp,sixthChamp};
    for (int i = 0; i < 6; i++) {
        for(int j = 1 + i; j < 6 - i - 1; j++){
            if (champTab[i] == champTab[j]) {
                cout << "Ta postac zostala juz wybrana " << endl;
                cout << "Wybierz ponownie";
            }
        }
    }
}