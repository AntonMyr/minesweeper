#include <iostream>
#include "../Functions.h"
#include "../Helpers.h"

void CreateMap(int map[], int width, int height) {

  const int MINES_AMOUNT = 10;
  // loop through map with i = height*width?

  int mines[MINES_AMOUNT];
  setMines(mines, MINES_AMOUNT);

  initMap(map, mines);

  // calcMines(map, mines, width, height);



}
