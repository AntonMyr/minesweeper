#include <iostream>
#include "../../Helpers.h"

/**
 * SHOULD:
 *
 *  Switch out 0's to -1's based on
 *  positions in mines array
 *
 * @params:
 *  int map[], the map array
 *  int mines[], the mine array containing mine positions
 */
void initMap(int map[], int mines[], int minesAmount) {
  for (int i = 0; i < minesAmount; i++) {
    map[mines[i]] = -1;
  }
}
