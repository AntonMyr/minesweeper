#include <iostream>
#include "../../Helpers.h"

/**
 * SHOULD:
 *  Fill out map array with 0's.
 *
 *  Then switch out 0's to -1's based on
 *  positions in mines array
 *
 * @params:
 *  int map[], the map array
 *  int mines[], the mine array containing mine positions
 */
void initMap(int map[], int mines[]) {
  for (int i = 0; i < 81; i++){
    map[i] = 0;
  }
  for (int i = 0; i < 10; i++) {
    map[mines[i]] = -1;
  }
}
