//
// Created by jance on 18.06.2022.
//

#include "Powers.h"

/**
   Spis Mocy Specjalnych : (tylko do konca rundy)
   0. ZENITHAR - Zwieksza o 25 punktow zycie wybranego zwierzaka.
   1. VERKTRUM - Zmniejsza AD dla wybranego przeciwnika.
   2. AKADAH - Zwieksza swoja zrecznosc o 20.
   3. NESMERUS - Zwieksza zrecznosc o 15 punktow dla wybranej postaci.
   4. IDORE - Zwieksza swoje obrazenia o 15.
   5. KANUMA - Leczy sie o 25 punktow zdrowia, tylko jezeli ma mniej niz 66 punktow zdrowia.
   6. DEKTIJA - Zwieksza swoja zrecznosc o 20 punktow.
   7. SIKTURA - Zwieksza obrazenia o 15 dla wybranej postaci.
   8. KALIGNA - Zwieksza swoje zdrowie o 20% swojego aktualnego zdrowia. Max 300 puntkow.
   9. ENOGRE - Zwieksza zrecznosc o 15 punktow.
   10. DJAKTION - Zwieksza ilosc obrazen o 15 punktow.
   11. RAKSHI - Zwieksza swoje obrazenia o 5 punktow i zrecznosc o 10 punktow.
   12. PIGGER - Oddaje swoich 50 punktow zdrowia innemu zwierzakowi.
   13. ONAR - Oddaje swoich 10 punktow zrecznosci wybranemu zwierzakowi.
   14. NYRAS - Leczy 25 punktow zdrowia wybranemu zwierzakowi.
 */

void Powers::powersForMe(int x) {

    Animal animal;
    Arena arena;
    switch (x) {
        case 2 :
            animal.agility = Arena::showMyAgility(x) + 20;
            break;
        case 4 :
            animal.AD = animal.getStatistics(0,x) + 15;
            break;
        case 5 :
            if(animal.HP >= animal.getStatistics(2,x) - 25){
                cout << "Postac ma za duzo zdrowia" << endl;
                break;
            } else {
                animal.HP = animal.getStatistics(2, x) + 25;
                break;
            }
        case 6 :
            animal.agility = animal.getStatistics(1,x) + 20;
            break;
        case 8 :
            if(animal.HP > 300){
                cout << "Postac ma za duzo zdrowia" << endl;
                break;
            } else {
                animal.HP = animal.HP + (animal.HP * 0.2);
                break;
            }
        case 9 :
            animal.agility = animal.getStatistics(1,x) + 15;
            break;
        case 10 :
            animal.AD = animal.getStatistics(0,x) + 15;
            break;
        case 11 :
            animal.AD = animal.getStatistics(0,x) + 5;
            animal.agility = animal.getStatistics(1,x) + 10;
            break;
        default:
            break;
    }
}

void Powers::powersForOthers(int x, int y) {
    /*Animal animal;
    Arena arena;
    switch (x) {
        case 0 :
            arena.MyHPTab[y] = arena.MyHPTab[y] + 25;
            break;
        case 1 :
            arena.EnemyADTab[y] = arena.EnemyADTab[y] - 10;
            break;
        case 3 :
            arena.MyAgilityTab[y] = arena.MyAgilityTab[y] + 15;
            break;
        case 7 :
            arena.MyADTab[y] = arena.MyADTab[y] + 15;
            break;
        case 12 :
            arena.MyHPTab[x] = arena.MyHPTab[x] - 50;
            arena.MyHPTab[y] = arena.MyHPTab[y] + 50;
            break;
        case 13 :
            arena.MyAgilityTab[x] = arena.MyAgilityTab[x] - 10;
            arena.MyAgilityTab[y] = arena.MyAgilityTab[y] + 10;
            break;
        case 14 :
            arena.MyAgilityTab[y] = arena.MyAgilityTab[y] + 25;
            break;
        default:
            break;
    }*/
}

void Powers::checkPowers(int x, int y) {

    if(Animal::getStatistics(0,x) >= 25){
        powersForMe(allChampionsTab[x]);
    } else {
        powersForOthers(allChampionsTab[x], allChampionsTab[y]);
    }
}