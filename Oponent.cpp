#include "Oponent.h"
Arena arena;
    /**
     * Funkcja inicjuje 4 niepowtarzające się losowe liczby i wyświetla 4 postacie
     */


    int Oponent::randNumberF1(int x) {
        int storedRandoms[4] = {randNumber1, randNumber2, randNumber3, randNumber4};
        while(endLoop) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 15; j++) {
                    if (storedRandoms[i] == arena.champTab[j] || storedRandoms[i] == storedRandoms[j]) {
                        randNumber1 = rand() % 16;
                        randNumber2 = rand() % 16;
                        randNumber3 = rand() % 16;
                        randNumber4 = rand() % 16;
                    } else {
                        endLoop = false;
                        break;
                    }
                }
            }
        }
        return storedRandoms[x];
    }



    int Oponent::getRandomAnimal(int x) {

        /*// nie dziala jak powinno


        while ( randNumber1 != randNumber2 || randNumber2 != randNumber1 ||
                randNumber2 != randNumber3 || randNumber3 != randNumber2 ||
                randNumber3 != randNumber4 || randNumber4 != randNumber3)
        {
            randNumber1 = rand() % 16;
            randNumber2 = rand() % 16;
            randNumber3 = rand() % 16;
            randNumber4 = rand() % 16;
        }*/

        while (!endLoop) {
            if (randNumber1 == randNumber2 || randNumber2 == randNumber1 ||
                randNumber2 == randNumber3 || randNumber3 == randNumber2 || randNumber3 == randNumber1 ||
                randNumber3 == randNumber4 || randNumber4 == randNumber3 || randNumber4 == randNumber1 ||
                randNumber4 == randNumber1) {
                    randNumber1 = rand() % 16;
                    randNumber2 = rand() % 16;
                    randNumber3 = rand() % 16;
                    randNumber4 = rand() % 16;
                    for (int i = 0; i < 15; i++) {
                        if (randNumber1 == arena.champTab[i] || randNumber2 == arena.champTab[i] ||
                            randNumber3 == arena.champTab[i] || randNumber4 == arena.champTab[i]) {
                            randNumber1 = rand() % 16;
                            randNumber2 = rand() % 16;
                            randNumber3 = rand() % 16;
                            randNumber4 = rand() % 16;
                        } else {
                            endLoop = false;
                            break;
                        }
                    }
            }
            endLoop = false;
            break;
        }

        /*count = 0;
        while(count != 4){
            randNumber1 = rand() % 15;
            if(visited[count] == 0){
                visited[count] == 1;
                count++;
                storedRandoms[count++] = randNumber1;
            }
            count++;
        }*/


        /*if (randNumber1 == randNumber2 || randNumber1 == randNumber3 || randNumber1 == randNumber4) {
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
        }*/
        if(x == 1){
            return randNumber1;
        } else if(x == 2){
            return randNumber2;
        } else if(x == 3){
            return randNumber3;
        } else {
            return randNumber4;
        }
    }