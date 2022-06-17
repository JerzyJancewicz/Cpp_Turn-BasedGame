#include "ShowAnimalChose.h"

void ShowAnimalChose::showAllChampions() {

    for(int i = 0; i < 15; i ++){
        if(i != 14){
                cout << endl;
                cout << "\t"+ Animal::getAnimalName[i] << "\t\t\t" << Animal::getAnimalName[i + 1] << endl;
                cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
                cout << "- Strength : " << Animal::getStatistics(0, i) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,i + 1)<< endl;
                cout << "- Agility : " << Animal::getStatistics(1, i) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,i + 1)<< endl;
                cout << "- HP : " << Animal::getStatistics(2, i) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,i + 1)<< endl;
                cout << "- Exp : " << Animal::getStatistics(3, i) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,i + 1)<< endl;
                i += 1;
            } else {
                cout << endl;
                cout << "\t\t"+ Animal::getAnimalName[i] << endl;
                cout << "\t\t- Umiejetnosc Specjalna : " << "" << endl;
                cout << "\t\t- Strength : " << Animal::getStatistics(0, i) << "\t\t\t" << endl;
                cout << "\t\t- Agility : " << Animal::getStatistics(1, i) << endl;
                cout << "\t\t- HP : " << Animal::getStatistics(2, i) << endl;
                cout << "\t\t- Exp : " << Animal::getStatistics(3, i) << endl;

        }
    }
}

void ShowAnimalChose::showChampion(int x) {

    cout << endl;
    cout << Animal::getAnimalName[x] << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, x) << endl;
    cout << "- Agility : " << Animal::getStatistics(1, x) << endl;
    cout << "- HP : " << Animal::getStatistics(2, x) << endl;
    cout << "- Exp : " << Animal::getStatistics(3, x) << endl;
}

void ShowAnimalChose::showYourTeam(int x, int y, int z, int n, int m, int l) {

    cout << endl;
    cout << "\t  "+Animal::getAnimalName[x] << " \t " << Animal::getAnimalName[y] << " \t  " << Animal::getAnimalName[z] << " \t " << Animal::getAnimalName[n] << " \t " << Animal::getAnimalName[m] << " \t " << Animal::getAnimalName[l] << endl;
    cout << "Exp :\t\t" << Animal::getStatistics(3, x) << "\t\t" << Animal::getStatistics(3,y) << "\t\t" << Animal::getStatistics(3,z) << "\t\t" << Animal::getStatistics(3,n) << "\t\t" << Animal::getStatistics(3,m) << "\t\t" << Animal::getStatistics(3,l) << endl;
    cout << "Str :\t\t" << Animal::getStatistics(0, x) << "\t\t" << Animal::getStatistics(0,y) << "\t\t" << Animal::getStatistics(0,z) << "\t\t" << Animal::getStatistics(0,n) << "\t\t" << Animal::getStatistics(0,m) << "\t\t" << Animal::getStatistics(0,l) << endl;
    cout << "Ag  :\t\t" << Animal::getStatistics(1, x) << "\t\t" << Animal::getStatistics(1,y) << "\t\t" << Animal::getStatistics(1,z) << "\t\t" << Animal::getStatistics(1,n) << "\t\t" << Animal::getStatistics(1,m) << "\t\t" << Animal::getStatistics(1,l) << endl;
    cout << "HP  :\t\t" << Arena::showCurrentHP(x) << "\t\t" << Arena::showCurrentHP(y) << "\t\t" << Arena::showCurrentHP(z) << "\t\t" << Arena::showCurrentHP(n) << "\t\t" << Arena::showCurrentHP(m) << "\t\t" << Arena::showCurrentHP(l) << endl;
    cout << "T   :\t\t" << ShowAnimalChose::showTypeOfAnimal(x) << "\t\t" << ShowAnimalChose::showTypeOfAnimal(y) << "\t\t" << ShowAnimalChose::showTypeOfAnimal(z) << "\t\t" << ShowAnimalChose::showTypeOfAnimal(n) <<"\t\t" << ShowAnimalChose::showTypeOfAnimal(m) <<"\t\t" << ShowAnimalChose::showTypeOfAnimal(l) << endl;
    cout << "Cnd :\t\t" << ShowAnimalChose::showIfIsAlive(x) << "\t\t" << ShowAnimalChose::showIfIsAlive(y) << "\t\t" << ShowAnimalChose::showIfIsAlive(z) << "\t\t" << ShowAnimalChose::showIfIsAlive(n) <<  "\t\t" << ShowAnimalChose::showIfIsAlive(m) << "\t\t" << ShowAnimalChose::showIfIsAlive(l) << endl;
}

void ShowAnimalChose::showEnemyTeam(int x, int y, int z, int n) {

    cout << endl;
    cout << "ENEMY 1.\t\t  "+Animal::getAnimalName[x] << " \t " << Animal::getAnimalName[y] << " \t  " << Animal::getAnimalName[z] << " \t " << Animal::getAnimalName[n] << " \t " << endl;
    cout << "Exp :\t\t\t\t" << Animal::getStatistics(3, x) << "\t\t" << Animal::getStatistics(3,y) << "\t\t" << Animal::getStatistics(3,z) << "\t\t" << Animal::getStatistics(3,n) << "\t\t" << endl;
    cout << "Str :\t\t\t\t" << Animal::getStatistics(0, x) << "\t\t" << Animal::getStatistics(0,y) << "\t\t" << Animal::getStatistics(0,z) << "\t\t" << Animal::getStatistics(0,n) << "\t\t" << endl;
    cout << "Ag  :\t\t\t\t" << Animal::getStatistics(1, x) << "\t\t" << Animal::getStatistics(1,y) << "\t\t" << Animal::getStatistics(1,z) << "\t\t" << Animal::getStatistics(1,n) << "\t\t" << endl;
    cout << "HP  :\t\t\t\t" << Arena::showCurrentHP(x) << "\t\t" << Arena::showCurrentHP(y) << "\t\t" << Arena::showCurrentHP(z) << "\t\t" << Arena::showCurrentHP(n) << "\t\t" << endl;
    cout << "T   :\t\t\t\t" << ShowAnimalChose::showTypeOfAnimal(x) << "\t\t" << ShowAnimalChose::showTypeOfAnimal(y) << "\t\t" << ShowAnimalChose::showTypeOfAnimal(z) << "\t\t" << ShowAnimalChose::showTypeOfAnimal(n) << endl;
    cout << "Cnd :\t\t\t\t" << ShowAnimalChose::showIfIsAlive(x) << "\t\t" << ShowAnimalChose::showIfIsAlive(y) << "\t\t" << ShowAnimalChose::showIfIsAlive(z) << "\t\t" << ShowAnimalChose::showIfIsAlive(n) << endl;
}

std::string ShowAnimalChose::showTypeOfAnimal(int x) {

    switch ((int)Animal::getStatistics(4,x)) {
        case 1:
            return Animal::getAnimalTypeName[0];
        case 2:
            return Animal::getAnimalTypeName[1];
        case 3:
            return Animal::getAnimalTypeName[2];
        case 4:
            return Animal::getAnimalTypeName[3];
        case 5:
            return Animal::getAnimalTypeName[4];
        case 6:
            return Animal::getAnimalTypeName[5];
        default:
            break;
    }
    return 0;
}

std::string ShowAnimalChose::showIfIsAlive(int x) {
    if(Arena::showIsAliveTab(x) == 0){
        return "[Dead]";
    } else {
        return "[Alive]";
    }
}