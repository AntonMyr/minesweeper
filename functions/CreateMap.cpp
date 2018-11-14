#include <iostream>
#include "../Helpers.h"

void CreateMap(int map[], int width, int height) {

  const int MINES_AMOUNT = 10;

  int mines[MINES_AMOUNT];
  setMines(mines, MINES_AMOUNT);

  initMap(map, mines, MINES_AMOUNT);

  calcMines(map, mines, width, height);

}
