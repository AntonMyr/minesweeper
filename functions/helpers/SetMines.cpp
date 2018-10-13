#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../../Helpers.h"

void setMines(int mines[], int amount) {

  const unsigned int MINES_MIN = 0, MINES_MAX = 80;

  srand(time(NULL));
  for(int i = 0; i < amount; i++) {
    int j = 0;
    int minePosition;
    do {
      minePosition = rand()%(MINES_MAX-MINES_MIN + 1) + MINES_MIN; 
      j++;
        } while(mines[j] != minePosition && j < i);
    mines[i] = minePosition;
  }
}
