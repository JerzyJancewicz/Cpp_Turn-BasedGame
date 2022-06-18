#include "Oponent.h"
Arena arena;

    /**
     * Funkcja inicjuje 4 niepowtarzające się losowe liczby i wyświetla 4 postacie
     */
    void Oponent::randNumberF1() {
        count = 0;
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
        } while (count < generateNumber);
    }
