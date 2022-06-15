#include "Oponent.h"

    /**
     * Funkcja inicjuje 4 niepowtarzające się losowe liczby i wyświetla 4 postacie
     */
    void Oponent::getRandomAnimal() {
        // nie dziala jak powinno
        int randNumber1 = rand() % 16;
        int randNumber2 = rand() % 16;
        int randNumber3 = rand() % 16;
        int randNumber4 = rand() % 16;

        if (randNumber1 == randNumber2 || randNumber1 == randNumber3 || randNumber1 == randNumber4) {
            while (randNumber1 != randNumber2 && randNumber1 != randNumber3 && randNumber1 != randNumber4) {
                randNumber1 = rand() % 16;
            }
        } else if (randNumber2 == randNumber3 || randNumber2 == randNumber4) {
            while (randNumber2 != randNumber3 && randNumber2 != randNumber4) {
                randNumber2 = rand() % 16;
            }
        } else if (randNumber3 == randNumber4) {
            while (randNumber3 != randNumber4) {
                randNumber3 = rand() % 16;
            }
        }

        ShowAnimalChose::showChampion(randNumber1);
        cout << endl;
        ShowAnimalChose::showChampion(randNumber2);
        cout << endl;
        ShowAnimalChose::showChampion(randNumber3);
        cout << endl;
        ShowAnimalChose::showChampion(randNumber4);
        cout << endl;
    }


