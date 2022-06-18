#include "Arena.h"

Oponent opponent;
Animal animal;
Powers powers;

void Arena::choseAnimal() {
    cout << endl;
    cout << "------------------ Wybierz szesc postaci : ------------------" << endl;
    cout << "( Zeby wybrac postac, wpisz numer postac i potwierdz enterem )" << endl;
    cout << endl;


    for(int i = 0; i < 6; i++) {
        cout << endl;
        cout << " - Wybierz " << i + 1 << " postac : " << endl;
        cin >> tmp;
        checkAnimal2();
        champTab[i] = tmp;
        ShowAnimalChose::showChampion(champTab[i]);
    }
}

void Arena::checkAnimal2() {
    isFull = true;
    while (isFull) {
        if(tmp < 0 || tmp > 14 || !cin.good()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl;
            cout << "Numer nie odpowiada zadnej postaci" << endl;
            cout << "Wybierz jeszcze raz : "<< endl;
            cin >> tmp;
        } else {
            if(checkAnimal1(tmp)){
                cout << "Ta postac zostala juz wybrana " << endl;
                cout << "Wybierz ponownie : ";
                cout << endl;
                cin >> tmp;
            } else {
                isFull = false;
            }
        }
    }
}

bool Arena::checkAnimal1(int x) {
    count1 = 0;
    for (int i = 0; i < 6; i++) {
        if (x == champTab[i]) {
            count1++;
        }
    }
    if(count1 > 0){
        return true;
    } else {
        return false;
    }
}
    int isAliveTab[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    double EnemyHPTab[15] = {150, 150, 125, 150, 100, 80, 125, 175, 125, 150, 150, 125, 250, 250, 150};
    double MyHPTab[15] = {150,150,125,150,100,80,125,175,125,150,150,125,250,250,150};
    double EnemyAgilityTab[15] = {25,15,30,15,35,35,20,10,10,10,15,15,10,10,10};
    double MyAgilityTab[15] = {25,15,30,15,35,35,20,10,10,10,15,15,10,10,10};
    double EnemyADTab[15] = {15,20,25,20,30,40,25,15,30,30,25,30,10,10,20};
    double MyADTab[15] = {15,20,25,20,30,40,25,15,30,30,25,30,10,10,20};
    double EnemyExpTab[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double MyExpTab[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void Arena::checkFight() {

    double rand2 = rand() % 100;

    /**
     * funkcjonalność agility i sprawdza czy postać została ogłuszona
     */
    if(EnemyAgilityTab[selectOpponent] >= rand2){
        cout << "Damage blocked !" << endl;
    } else {
        EnemyHPTab[selectOpponent] = EnemyHPTab[selectOpponent] - (MyADTab[selectChamp] + animal.showMyAD());
        if(EnemyHPTab[selectOpponent] <= 0){
            isAliveTab[selectOpponent] = 0;
        }
    }
}

void Arena::fight() {
    count2 = 0;
    for(int i = 0; i < 4; i++) {
        count2++;
        isFighting = true;

        cout << endl;
        cout << "ROUND " << count2 << " :"<< endl;

        opponent.randNumberF1();
        tmp1 = opponent.storedRandoms[0];
        tmp2 = opponent.storedRandoms[1];
        tmp3 = opponent.storedRandoms[2];
        tmp4 = opponent.storedRandoms[3];

        ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2], champTab[3], champTab[4], champTab[5]);
        ShowAnimalChose::showEnemyTeam(tmp1, tmp2, tmp3, tmp4);

        animal.MyAgility = MyAgilityTab[selectChamp];
        animal.AD = MyADTab[selectChamp];
        animal.MyHP = MyHPTab[selectChamp];

        while (isFighting) {
            cout << endl;
            cout << "Twoj ruch : " << endl;
            cout << "Wpisz numer twojej postaci : " << endl;
            cin >> selectChamp;
            cout << "Wybierz ruch ktory chcesz wykonac" << endl;
            cout << "Wpisz '8', jesli chcesz zaatakowac" << endl;
            cout << "Wpisz '9', jesli chcesz uzyc umiejetnosci specjalnej" << endl;
            cin >> yourMove;
            if (yourMove == 8) {
                cout << "Wybierz przeciwnika, ktorego chcesz zaatakowac : " << endl;
                cin >> selectOpponent;
                animal.checkDependence(selectChamp, selectOpponent);
                checkFight();

            } else if (yourMove == 9) {
                cin >> selectPowerChamp;
                powers.checkPowers(selectChamp, selectPowerChamp);
            }

            /*animal.checkDependence(selectChamp, selectOpponent);
            checkFight(selectOpponent);*/

            ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2], champTab[3], champTab[4], champTab[5]);
            ShowAnimalChose::showEnemyTeam(tmp1, tmp2, tmp3, tmp4);

            cout << endl;
            cout << "Przeciwnik wykonal ruch" << endl;

            /**
            * Sprawdza, czy wszyscy przeciwnicy zostali ogłuszeni
            */
            if (isAliveTab[tmp1] == 0 && isAliveTab[tmp2] == 0 && isAliveTab[tmp3] == 0 && isAliveTab[tmp4] == 0) {
                isFighting = false;
            }
        }
    }
}
double Arena::showMyHP(int x) {
    return MyHPTab[x];
}
double Arena::showEnemyHp(int x) {
    return EnemyHPTab[x];
}
double Arena::showMyAgility(int x) {
    return MyAgilityTab[x];
}
double Arena::showEnemyAgility(int x) {
    return EnemyAgilityTab[x];
}
double Arena::showMyAD(int x) {
    return MyADTab[x];
}
double Arena::showEnemyAD(int x) {
    return EnemyADTab[x];
}
int Arena::showMyExp(int x) {
    return MyExpTab[x];
}
int Arena::showEnemyExp(int x) {
    return EnemyExpTab[x];
}
int Arena::showIsAliveTab(int x) {
    return isAliveTab[x];
}



