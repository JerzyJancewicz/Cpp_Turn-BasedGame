
#include "Arena.h"


Oponent opponent;
Animal animal;

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

    tmp1 = opponent.getRandomAnimal(1);
    tmp2 = opponent.getRandomAnimal(2);
    tmp3 = opponent.getRandomAnimal(3);
    tmp4 = opponent.getRandomAnimal(4);
    ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2],champTab[3], champTab[4], champTab[5]);
    ShowAnimalChose::showEnemyTeam(tmp1,tmp2,tmp3,tmp4);
    cout << tmp1 << tmp2 << tmp3 << tmp4;

}

double HPTab[15] = {150,150,125,150,100,80,125,175,125,150,150,125,250,250,150};
int isAliveTab[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

void Arena::checkFight(int x) {
    double rand2 = rand() % 100;
    cout << rand2;
    animal.agility = Animal::getStatistics(1,x);

    if(isAliveTab[tmp1] == 0 && isAliveTab[tmp2] == 0 && isAliveTab[tmp3] == 0 && isAliveTab[tmp4] == 0){
        isFighting = false;
    }

    if(animal.agility >= rand2){
        cout << "Damage blocked !" << endl;
    } else {
        HPTab[selectOpponent] = HPTab[selectOpponent] - animal.AD;
        if(HPTab[selectOpponent] <= 0){
            isAliveTab[selectOpponent] = 0;
        }
    }
}

void Arena::fight() {

    while (!isFighting) {
        cout << endl;
        cout << "Twoj ruch : " << endl;
        cout << "Wpisz numer twojej postaci : " << endl;
        cin >> selectChamp;
        //cin >> yourMove;
        cout << "Wybierz przeciwnika na ktorego chcesz zagrac akcje : " << endl;
        cin >> selectOpponent;

        animal.checkDependence(selectChamp, selectOpponent);
        ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2], champTab[3], champTab[4], champTab[5]);
        ShowAnimalChose::showEnemyTeam(tmp1, tmp2, tmp3, tmp4);

        checkFight(selectOpponent);
        cout << endl;
        cout << "Przeciwnik wykonal ruch";

    }
}
double Arena::showCurrentHP(int x) {
    return HPTab[x];
}

int Arena::showIsAliveTab(int x) {
    return isAliveTab[x];
}

