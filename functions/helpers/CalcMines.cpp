#include <iostream>
#include "../../Helpers.h"

void calcMines(int map[], int mines[], int width, int height) {

  for (int i = 0; i < 10; i++) {
    int mine = mines[i];

    // Checks if it's to the left
    if(mine % width == 0) {
      // Checks if it's at the very top
      if((mine - width) < 0) {
        positionCase(9, map, width, mine);
      }
      // Checks if it's at the very bot
      else if((mine + width) > ((width*height) - 1)) {
        positionCase(6, map, width, mine);
      }
      else {
        positionCase(2, map, width, mine);
      }
    }

    // Checks if it's to the right
    else if((mine + 1) % width == 0) {
      // Checks if it's at the very top
      if((mine - width < 0)) {
        positionCase(8, map, width, mine);
      }
      // Checks if it's at the very bot
      else if((mine + width) > ((width*height) - 1)) {
        positionCase(7, map, width, mine);
      }
      else {
        positionCase(3, map, width, mine);
      }
    }

    else {
      if((mine - width) < 0) {
        positionCase(4, map, width, mine);
      }
      else if((mine + width) > ((width*height) - 1)) {
        positionCase(5, map, width, mine);
      }
      else {
        positionCase(1, map, width, mine);
      }
    }
  }
}
