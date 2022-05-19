#include "Oponent.h"

    /**
     * Funkcja inicjuje 4 niepowtarzające się losowe liczby i Tworzy 4 losowe obiekty Animal
     * dla przeciwnika.
     */
    void Oponent::getRandomAnimal() {

        int randNumber1 = rand() % 16;
        int randNumber2 = rand() % 16;
        int randNumber3 = rand() % 16;
        int randNumber4 = rand() % 16;

        if (randNumber1 == randNumber2 || randNumber1 == randNumber3 || randNumber1 == randNumber4) {
            while (randNumber1 != randNumber2 || randNumber1 != randNumber3 || randNumber1 != randNumber4) {
                randNumber1 = rand() % 16;
            }
        } else if (randNumber2 == randNumber3 || randNumber2 == randNumber4) {
            while (randNumber2 != randNumber3 || randNumber2 != randNumber4) {
                randNumber2 = rand() % 16;
            }
        } else if (randNumber3 == randNumber4) {
            while (randNumber3 != randNumber4) {
                randNumber3 = rand() % 16;
            }
        }
        Animal animal1(
                animal1.GetStatystyki(0, randNumber1),
                animal1.GetStatystyki(1, randNumber1),
                animal1.GetStatystyki(2, randNumber1),
                animal1.GetStatystyki(3, randNumber1));
        Animal animal2(
                animal2.GetStatystyki(0, randNumber2),
                animal2.GetStatystyki(1, randNumber2),
                animal2.GetStatystyki(2, randNumber2),
                animal2.GetStatystyki(3, randNumber2));
        Animal animal3(
                animal3.GetStatystyki(0, randNumber3),
                animal3.GetStatystyki(1, randNumber3),
                animal3.GetStatystyki(2, randNumber3),
                animal3.GetStatystyki(3, randNumber3));
        Animal animal4(
                animal4.GetStatystyki(0, randNumber4),
                animal4.GetStatystyki(1, randNumber4),
                animal4.GetStatystyki(2, randNumber4),
                animal4.GetStatystyki(3, randNumber4));


        cout << "Animal 1 : " << endl;
        cout << "Strength : " << animal1.GetStatystyki(0, randNumber1) << endl;
        cout << "Zrecznosc : " << animal1.GetStatystyki(1, randNumber1) << endl;
        cout << "Punkty Zycia : " << animal1.GetStatystyki(2, randNumber1) << endl;
        cout << "XP : " << animal1.GetStatystyki(3, randNumber1) << endl;

    }


