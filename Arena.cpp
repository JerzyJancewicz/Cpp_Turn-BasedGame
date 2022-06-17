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
    /*count = 0;
    do {
        randNumber = rand() % 16;
        endLoop = true;
        for(int i = 0; i < count; i++){
            if(storedRandoms[i] == randNumber) {
                endLoop = false;
                break;
            }
        }
        if(endLoop){
            storedRandoms[count++] = randNumber;
        }
    } while (count < generateNumber);*/
    /*size = 0;
    do {
        isFull = true;
        for (int i = 0; i < 6; i++) {
            if(champTab[i] == tmp){
                isFull = false;
                cout << "Ta postac zostala juz wybrana " << endl;
                cout << "Wybierz ponownie";
                cin >> champTab[x];
            } else {
                size ++;
            }
        }
    } while (size < 6);*/

    for (int i = 0; i < 6; i++){
        if ((champTab[x] == champTab[i]) && (x != i)) {
            cout << "Ta postac zostala juz wybrana " << endl;
            cout << "Wybierz ponownie";
            cin >> champTab[x];

        }
    }
}

double EnemyHPTab[15] = {150,150,125,150,100,80,125,175,125,150,150,125,250,250,150};
double MyHPTab[15] = {150,150,125,150,100,80,125,175,125,150,150,125,250,250,150};
int isAliveTab[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

void Arena::checkFight(int x) {
    double rand2 = rand() % 100;
    cout << rand2;
    animal.agility = Animal::getStatistics(1,x);

    /**
     * funkcjonalność agility i sprawdza czy postać została ogłuszona
     */
    if(animal.agility >= rand2){
        cout << "Damage blocked !" << endl;
    } else {
        EnemyHPTab[selectOpponent] = EnemyHPTab[selectOpponent] - animal.AD;
        if(EnemyHPTab[selectOpponent] <= 0){
            isAliveTab[selectOpponent] = 0;
        }
    }
}

void Arena::fight() {
    cout << endl;
    cout << "ROUND 1 :" << endl;

    opponent.randNumberF1();
    tmp1 = opponent.storedRandoms[0];
    tmp2 = opponent.storedRandoms[1];
    tmp3 = opponent.storedRandoms[2];
    tmp4 = opponent.storedRandoms[3];
    ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2],champTab[3], champTab[4], champTab[5]);
    ShowAnimalChose::showEnemyTeam(tmp1,tmp2,tmp3,tmp4);
    cout << tmp1 << tmp2 << tmp3 << tmp4;

    while (isFighting) {
        cout << endl;
        cout << "Twoj ruch : " << endl;
        cout << "Wpisz numer twojej postaci : " << endl;
        cin >> selectChamp;
        //cin >> yourMove;
        cout << "Wybierz przeciwnika na ktorego chcesz zagrac akcje : " << endl;
        cin >> selectOpponent;

        animal.AD = Animal::getStatistics(0,selectChamp);
        animal.checkDependence(selectChamp, selectOpponent);
        checkFight(selectOpponent);

        ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2], champTab[3], champTab[4], champTab[5]);
        ShowAnimalChose::showEnemyTeam(tmp1, tmp2, tmp3, tmp4);

        cout << endl;
        cout << "Przeciwnik wykonal ruch" << endl;

        /**
        * Sprawdza, czy wszyscy przeciwnicy zostali ogłuszeni
        */
        if(isAliveTab[tmp1] == 0 && isAliveTab[tmp2] == 0 && isAliveTab[tmp3] == 0 && isAliveTab[tmp4] == 0){
            isFighting = false;
        }
    }
}
double Arena::showMyHP(int x) {
    return MyHPTab[x];
}
double Arena::showEnemyHp(int x) {
    return EnemyHPTab[x];
}

int Arena::showIsAliveTab(int x) {
    return isAliveTab[x];
}


