#include "Arena.h"

Oponent opponent;
Animal animal;

/**
 * Funkcja pozwala na wybranie 6 unikalnych postaci, czasami wywala blad, ale po resecie powinno byc ok :)
 */
void Arena::choseAnimal() {
    cout << endl;
    cout << "------------------ Wybierz szesc postaci : ------------------" << endl;
    cout << "( Zeby wybrac postac, wpisz numer postac i potwierdz enterem )" << endl;
    cout << endl;

    for(int i = 0; i < 6; i++) {
        cout << endl;
        cout << " - Wybierz " << i + 1 << " postac : " << endl;
        cin >> tmp;
        Game::printHelp(tmp);
        checkAnimal2();
        champTab[i] = tmp;
        ShowAnimalChose::showChampion(champTab[i]);
    }
}

/**
 * uzywa funkcji checkAnimal1
 * sprawdza zgodnosc inputu, np jesli jest charem, to trzeba wpisac jeszcze raz
 */
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

/**
 *
 * @param x sprawdza, czy dana postac znajduje sie w tabeli, jesli tak zwraca true
 * @return bool
 */
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

    int isMeAliveTab[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int isAliveTab[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    double EnemyHPTab[15] = {150, 150, 125, 150, 100, 80, 125, 175, 125, 150, 150, 125, 250, 250, 150};
    double MyHPTab[15] = {150,150,125,150,100,80,125,175,125,150,150,125,250,250,150};
    double EnemyAgilityTab[15] = {25,15,30,15,35,35,20,10,10,10,15,15,10,10,10};
    double MyAgilityTab[15] = {25,15,30,15,35,35,20,10,10,10,15,15,10,10,10};
    double EnemyADTab[15] = {15,20,25,20,30,40,25,15,30,30,25,30,10,10,20};
    double MyADTab[15] = {15,20,25,20,30,40,25,15,30,30,25,30,10,10,20};
    double EnemyExpTab[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double MyExpTab[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


    /**
     * funkcja sluzaca do zadawania obrazen i do ich blokowania, jesli agility bedzie na odpowiedznim poziomie
     */
void Arena::checkFight() {

    double rand2 = rand() % 100;

         if (EnemyAgilityTab[selectOpponent] >= rand2) {
             blocked = "Przeciwnik zablokowal atak !";
         } else {
             EnemyHPTab[selectOpponent] = EnemyHPTab[selectOpponent] - (MyADTab[selectChamp] + animal.showMyAD());
         }
        if (EnemyHPTab[selectOpponent] <= 0) {
            isAliveTab[selectOpponent] = 0;
            MyExpTab[selectChamp] = MyExpTab[selectChamp] + 50;
        }
}

/**
 * Funkcja odpowiadajaca za cala rozgrywke
 * - Gra sklada sie z 3 rund
 * - przyjmuje 4 randomowe liczby i przypisuje je w tablicyenemyChampTab
 * - korzysta z wiekszosci funkcji w klasie
 * - Sprawdza czy wygralismy i czy przegralismy rozgrywke
 */
void Arena::fight() {
    Game game;
    roundCounter = 0;

    while(roundCounter != 3) {
        roundCounter++;
        turnCount = 0;
        isFighting = true;

        cout << endl;
        cout << "ROUND " << roundCounter << " :"<< endl;

        opponent.randNumberF1();
        tmp1 = opponent.storedRandoms[0];
        tmp2 = opponent.storedRandoms[1];
        tmp3 = opponent.storedRandoms[2];
        tmp4 = opponent.storedRandoms[3];

        enemyChampTab[0] = tmp1;
        enemyChampTab[1] = tmp2;
        enemyChampTab[2] = tmp3;
        enemyChampTab[3] = tmp4;

        ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2], champTab[3], champTab[4], champTab[5]);
        ShowAnimalChose::showEnemyTeam(tmp1, tmp2, tmp3, tmp4);

        animal.MyAgility = MyAgilityTab[selectChamp];
        animal.AD = MyADTab[selectChamp];
        animal.MyHP = MyHPTab[selectChamp];


        while (isFighting) {

            checkUpgrade();

            turnCount = 0;
            randAnimal = rand() % 4;
            randOpponent = rand() % 6;
            randSelectPowerChamp = rand() % 4;
            randMove = 1;

            cout << endl;
            cout << "Twoj ruch : " << endl;
            cout << "Wpisz numer twojej postaci : " << endl;
            cin >> selectChamp;

            checkArenaYourInput(selectChamp);
            Game::printHelp(selectChamp);

            cout << "Wybierz ruch ktory chcesz wykonac" << endl;
            cout << "Wpisz '8', jesli chcesz zaatakowac" << endl;
            cin >> yourMove;

            checkArenaInputMove();
            Game::printHelp(yourMove);

            if (yourMove == 8) {
                cout << "Wybierz przeciwnika, ktorego chcesz zaatakowac : " << endl;
                cin >> selectOpponent;

                checkArenaInputOpponent(selectOpponent);
                Game::printHelp(selectOpponent);
                animal.checkDependence(selectChamp, selectOpponent);
                checkFight();
                turnCount++;

            } /*else if (yourMove == 9) {
                cin >> selectPowerChamp;

                checkArenaInputOpponent(selectOpponent);
                Game::printHelp(selectPowerChamp);
                powers.checkPowers(selectChamp, selectPowerChamp);
                turnCount++;
                // Nie działa :(
            }*/

            /////////////// Ruch Bota
            opponentMove();
            turnCount++;
            ///////////////
            ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2], champTab[3], champTab[4], champTab[5]);
            ShowAnimalChose::showEnemyTeam(tmp1, tmp2, tmp3, tmp4);

            cout << endl;
            cout << blocked << endl;

            /**
            * Sprawdza, czy wszyscy przeciwnicy zostali ogłuszeni
            */
            if (isAliveTab[tmp1] == 0 && isAliveTab[tmp2] == 0 && isAliveTab[tmp3] == 0 && isAliveTab[tmp4] == 0) {
                ShowAnimalChose::showYourTeam(champTab[0], champTab[1], champTab[2], champTab[3], champTab[4],
                                              champTab[5]);
                cout << endl;
                cout << "---------------------------------------- You Win ----------------------------------------";
                cout << endl;
                isFighting = false;
                game.setIsPlaying(false);
            }

            if (isMeAliveTab[champTab[0]] == 0 && isMeAliveTab[champTab[1]] == 0 && isMeAliveTab[champTab[2]] == 0 &&
                isMeAliveTab[champTab[3]] == 0 && isMeAliveTab[champTab[4]] == 0 && isMeAliveTab[champTab[5]] == 0) {
                cout << endl;
                cout << "---------------------------------------- You Lost ----------------------------------------" << endl;
                cout << endl;
                game.setIsPlaying(false);
            }
        }
        if (isMeAliveTab[champTab[0]] == 0 && isMeAliveTab[champTab[1]] == 0 && isMeAliveTab[champTab[2]] == 0 &&
            isMeAliveTab[champTab[3]] == 0 && isMeAliveTab[champTab[4]] == 0 && isMeAliveTab[champTab[5]] == 0) {
            cout << endl;
            cout << "---------------------------------------- You Lost ----------------------------------------" << endl;
            cout << endl;
            game.setIsPlaying(false);
        }
    }
}

/**
 * Funkcja sprawdza, czy mozemy dokonac upgrade naszej postaci dla bota i dla gracza
 *
 */
void Arena::checkUpgrade() {
    if(MyExpTab[selectChamp] == 100){
        cout << endl;
        cout << "Twoja postac dostala awans" << endl;
        cout << "Mozesz teraz wybrac 2 atrybuty do wzmocnienia" << endl;
        cout << "Wpisz : 1 - [HP + 50] , 2 - [AD + 15] , 3 - [Zrecznosc + 10]" << endl;
        cout << "Wybierz pierwszy atrybut ktory powinien zostac zwiekszony :" << endl;
        int y;
        int z;
        cin >> y;
        Game::printHelp(y);
        cout << "Wybierz drugi atrybut ktory powinien zostac zwiekszony :" << endl;
        cin >> z;
        Game::printHelp(z);

        if(y == 1 || z == 1){
            MyHPTab[selectChamp] = MyHPTab[selectChamp] + 50;
        }
        if(y == 2 || z == 2){
            MyADTab[selectChamp] = MyADTab[selectChamp] + 15;
        }
        if(y == 3 || z == 3){
            MyAgilityTab[selectChamp] = MyAgilityTab[selectChamp] + 10;
        }
        MyExpTab[selectChamp] = 0;
    }
    if(EnemyExpTab[randAnimal] == 100){
         enemyRandNumber1 = rand() % 3 + 1;
         enemyRandNumber2 = rand() % 3 + 1;

        if(enemyRandNumber1 == 1 || enemyRandNumber2 == 1){
            EnemyHPTab[randAnimal] = EnemyHPTab[randAnimal] + 50;
            cout << endl;
            cout << "Przeciwnik zwiekszyl zdrowie dla " <<animal.getAnimalName[randAnimal] << " o 50 pkt.";
        }
        if(enemyRandNumber1 == 2 || enemyRandNumber2 == 2){
            EnemyADTab[randAnimal] = EnemyADTab[randAnimal] + 15;
            cout << endl;
            cout << "Przeciwnik zwiekszyl obrazenia dla " <<animal.getAnimalName[randAnimal] << " o 15 pkt.";
        }
        if(enemyRandNumber1 == 3 || enemyRandNumber2 == 3){
            EnemyAgilityTab[randAnimal] = EnemyAgilityTab[randAnimal] + 10;
            cout << endl;
            cout << "Przeciwnik zwiekszyl zrecznosc dla " <<animal.getAnimalName[randAnimal] << " o 10 pkt.";
        }
        EnemyExpTab[randAnimal] = 0;
    }
}

/**
 * funkcja pobiera randomowo wygenerowane liczby i zgodnie z ifami wykonuje ruch
 */
void Arena::opponentMove() {

    if(randMove == 1){
        animal.checkDependence(enemyChampTab[randAnimal], champTab[randOpponent]);
        cout << endl;
        cout << "Przeciwnik wykonal ruch" << endl;
        cout << "Przeciwnik zaatakowal cie" << endl;
        checkBotFight();
    } else {
//        powers.checkPowers(enemyChampTab[randAnimal], enemyChampTab[randSelectPowerChamp]);
//        cout << "Przeciwnik wykonal ruch" << endl;
//        cout << "Przeciwnik uzyl mocy specjalnej" << endl;
    }
}

/**
 * Sprawdza zadawane obrazenia przez bota i czy zostaly zablokowane
 */
void Arena::checkBotFight() {
    int rand3 = rand() % 100;
    if (MyAgilityTab[randOpponent] >= rand3) {
        blocked = "Zablokowales atak !";
    } else {
        MyHPTab[randOpponent] = MyHPTab[randOpponent] - (EnemyADTab[randAnimal] + animal.showEnemyAD());
    }
    if (MyHPTab[randOpponent] <= 0) {
        isMeAliveTab[randOpponent] = 0;
        EnemyExpTab[randAnimal] = EnemyExpTab[randAnimal] + 50;
    }
}

/**
 * sprawdza poprawnosc wpisywanych inputow (cin opponent)
 * @param x
 */
void Arena::checkArenaInputOpponent(int x) {
    isSelected = true;
    while (isSelected) {
        if(selectOpponent < 0 || selectOpponent > 14 ||!cin.good()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl;
            cout << "Niepoprawny znak" << endl;
            cout << "Wybierz jeszcze raz : "<< endl;
            cin >> selectOpponent;
        } else {
            if(!checkSelectEnemyChamp(selectOpponent)){
                cout << endl;
                cout << "Przeciwnik nie wybral tej postaci " << endl;
                cout << "Wybierz jeszcze raz : " << endl;
                cin >> selectOpponent;
            } else {
                isSelected = false;
            }
        }
    }
}

/**
 * sprawdza poprawnosc wpisywanych inputow (cin selectChamp)
 * @param x
 */
void Arena::checkArenaYourInput(int x) {
    isSelected = true;
    while (isSelected) {
        if(selectChamp < 0 || selectChamp > 14 ||!cin.good()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl;
            cout << "Niepoprawny znak" << endl;
            cout << "Wybierz jeszcze raz : "<< endl;
            cin >> selectChamp;
        } else {
            if(!checkSelectYourChamp(selectChamp)){
                cout << endl;
                cout << "Nie wybrales tej postaci " << endl;
                cout << "Wybierz jeszcze raz : " << endl;
                cin >> selectChamp;
            } else {
                isSelected = false;
            }
        }
    }
}
/**
 * sprawdza poprawnosc wpisywanych inputow (cin yourMove)
 */
void Arena::checkArenaInputMove() {
    isSelected = true;
    while(isSelected){
        if(!cin.good()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << endl;
            cout << "Niepoprawny znak" << endl;
            cout << "Wpisz jeszcze raz : "<< endl;
            cin >> yourMove;
        } else if(yourMove != 8 && yourMove != 9) {
                cout << endl;
                cout << "Niedopuszcalny ruch" << endl;
                cout << "Wybierz swoj ruch ponownie :" << endl;
                cin >> yourMove;
            } else {
                isSelected = false;
            }
    }
}

/**
 * sprawdza czy wybrany przeciwnik przy ataku zostal wylosowany w rundzie
 * @param x
 * @return bool
 */
bool Arena::checkSelectEnemyChamp(int x) {
    countSelected = 0;
    for(int i = 0; i < 4; i++) {
        if (x == enemyChampTab[i]){
            countSelected++;
        }
    }
    if(countSelected > 0){
        return true;
    } else {
        return false;
    }
}

/**
 * sprawdza czy wybrana postac przy ataku zostala wybrana w rozgrywce
 * @param x
 * @return bool
 */
bool Arena::checkSelectYourChamp(int x) {
    countSelected = 0;
    for(int i = 0; i < 6; i++) {
        if (x == champTab[i]){
            countSelected++;
        }
    }
    if(countSelected > 0){
        return true;
    } else {
        return false;
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
int Arena::showTurnCount() {
    return turnCount;
}