#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../../Helpers.h"

void setMines(int mines[], int amount) {

  const unsigned int MINES_MIN = 0, MINES_MAX = 80;

  srand(time(NULL));
  for(int i = 0; i < amount; i++) {
    unsigned int minePosition = rand()%(MINES_MAX-MINES_MIN + 1) + MINES_MIN;
    mines[i] = minePosition;
  }
}
