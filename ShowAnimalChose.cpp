#include "ShowAnimalChose.h"

void ShowAnimalChose::showAllChampions() {

    // JAK BEDZIE CZAS
    /*for(int i = 1; i < 16; i++){
            cout << endl;
            cout << "\t"+ Animal::getAnimalName[i%2 != 0] << "\t\t\t" << Animal::getAnimalName[i%2 == 0] << endl;
            cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
            cout << "- Strength : " << Animal::getStatistics(0, i%2 != 0) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,i%2 == 0)<< endl;
            cout << "- Agility : " << Animal::getStatistics(1, i%2 != 0) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,i%2 == 0)<< endl;
            cout << "- HP : " << Animal::getStatistics(2, i%2 != 0) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,i%2 == 0)<< endl;
            cout << "- Exp : " << Animal::getStatistics(3, i%2 != 0) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,i%2 == 0)<< endl;

    }*/

    cout << endl;
    cout << "\t0. ZENITHAR" << "\t\t\t" << "1. VERKTRUM" << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, 0) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,1)<< endl;
    cout << "- Agility : " << Animal::getStatistics(1, 0) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,1)<< endl;
    cout << "- HP : " << Animal::getStatistics(2, 0) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,1)<< endl;
    cout << "- Exp : " << Animal::getStatistics(3, 0) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,1)<< endl;
    cout << endl;
    cout << "\t2. AKADAH" << "\t\t\t\t" << "3. NESMERUS" << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, 2) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,3)<< endl;
    cout << "- Agility : " << Animal::getStatistics(1, 2) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,3)<< endl;
    cout << "- HP : " << Animal::getStatistics(2, 2) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,3)<< endl;
    cout << "- Exp : " << Animal::getStatistics(3, 2) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,3)<< endl;
    cout << endl;
    cout << "\t4. IDORE" << "\t\t\t\t" << "5. KANUMA" << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, 4) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,5)<< endl;
    cout << "- Agility : " << Animal::getStatistics(1, 4) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,5)<< endl;
    cout << "- HP : " << Animal::getStatistics(2, 4) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,5)<< endl;
    cout << "- Exp : " << Animal::getStatistics(3, 4) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,5)<< endl;
    cout << endl;
    cout << "\t6. DEKTIJA" << "\t\t\t\t" << "7. SIKTURA" << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, 6) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,7)<< endl;
    cout << "- Agility : " << Animal::getStatistics(1, 6) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,7)<< endl;
    cout << "- HP : " << Animal::getStatistics(2, 6) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,7)<< endl;
    cout << "- Exp : " << Animal::getStatistics(3, 6) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,7)<< endl;
    cout << endl;
    cout << "\t8. KALIGNA" << "\t\t\t\t" << "9. ENOGRE" << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, 8) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,9)<< endl;
    cout << "- Agility : " << Animal::getStatistics(1, 8) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,9)<< endl;
    cout << "- HP : " << Animal::getStatistics(2, 8) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,9)<< endl;
    cout << "- Exp : " << Animal::getStatistics(3, 8) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,9)<< endl;
    cout << endl;
    cout << "\t10. DJAKTION" << "\t\t\t" << "11. RAKSHI" << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, 10) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,11)<< endl;
    cout << "- Agility : " << Animal::getStatistics(1, 10) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,11)<< endl;
    cout << "- HP : " << Animal::getStatistics(2, 10) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,11)<< endl;
    cout << "- Exp : " << Animal::getStatistics(3, 10) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,11)<< endl;
    cout << endl;
    cout << "\t12. PIGGER" << "\t\t\t" << "\t13. ONAR" << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << "\t" << "- Umiejetnosc Specjalna :" << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, 12) << "\t\t\t" << "- Strength : " << Animal::getStatistics(0,13)<< endl;
    cout << "- Agility : " << Animal::getStatistics(1, 12) << "\t\t\t" << "- Agility : " << Animal::getStatistics(1,13)<< endl;
    cout << "- HP : " << Animal::getStatistics(2, 12) << "\t\t\t" << "- HP : " << Animal::getStatistics(2,13)<< endl;
    cout << "- Exp : " << Animal::getStatistics(3, 12) << "\t\t\t" << "- Exp : " << Animal::getStatistics(3,13)<< endl;
    cout << endl;
    cout << "\t\t\t14. NYRAS" << endl;
    cout << "\t\t- Umiejetnosc Specjalna : " << "" << endl;
    cout << "\t\t- Strength : " << Animal::getStatistics(0, 14) << endl;
    cout << "\t\t- Agility : " << Animal::getStatistics(1, 14) << endl;
    cout << "\t\t- HP : " << Animal::getStatistics(2, 14)<< endl;
    cout << "\t\t- Exp : " << Animal::getStatistics(3, 14) << endl;
}

void ShowAnimalChose::showChampion(int x) {
    cout << endl;
    cout << "\t"+Animal::getAnimalName[x] << endl;
    cout << "- Umiejetnosc Specjalna : " << "" << endl;
    cout << "- Strength : " << Animal::getStatistics(0, x) << endl;
    cout << "- Agility : " << Animal::getStatistics(1, x) << endl;
    cout << "- HP : " << Animal::getStatistics(2, x) << endl;
    cout << "- Exp : " << Animal::getStatistics(3, x) << endl;
}