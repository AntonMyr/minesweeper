#include <iostream>
#include "../../Helpers.h"

void initTakenSquares(bool takenSquares[], int width, int height) {
  const int GAME_SIZE = (width * height);
  for(int i = 0; i < GAME_SIZE; i++) {
    takenSquares[i] = false;
  }
}
