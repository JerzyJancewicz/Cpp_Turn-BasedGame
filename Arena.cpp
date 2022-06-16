//
// Created by jance on 16.06.2022.
//

#include "Arena.h"


Oponent oponent;

void Arena::choseAnimal() {
    cout << endl;
    cout << "Wybierz szesc postaci : " << endl;
    cout << "( Zeby wybrac postac, wpisz numer postac i potwierdz enterem )" << endl;
    cout << endl;

    for(int i = 0; i < 6; i++) {
        cout << endl;
        cout << "Wybierz " << i + 1 << " postac : " << endl;
        cin >> champTab[i];
        tmp = i;
        checkAnimal(tmp);
        ShowAnimalChose::showChampion(champTab[i]);
    }
}

void Arena::checkAnimal(int x) {

    for (int i = 0; i < 6; i++){
        if ((champTab[x] == champTab[i]) && (x != i)) {
            cout << "Ta postac zostala juz wybrana " << endl;
            cout << "Wybierz ponownie";
            cin >> champTab[x];

        }
    }
}

void Arena::showArena() {
    cout << endl;
    cout << "ROUND 1 :" << endl;

    ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2],champTab[3], champTab[4], champTab[5]);
    ShowAnimalChose::showEnemyTeam(oponent.getRandomAnimal(1),oponent.getRandomAnimal(2),oponent.getRandomAnimal(3),oponent.getRandomAnimal(4));

}

void Arena::fight() {
    cout << endl;
    cout << "Twoj ruch : ";
    cout << "Zeby wykonac ruch musisz wpisac numer twojej postaci, pozniej wpisac akcje ktora ta postac ma zrobic, apozniej przeciwnika";
}