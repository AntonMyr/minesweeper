#include <iostream>
#include "../../Helpers.h"

void positionCase(int option, int map[], int width, int mine) {
  switch (option) {
  case 1:
    map[mine - width - 1] = checkAndAdd(map[mine - width - 1]);
    map[mine - width] = checkAndAdd(map[mine - width]);
    map[mine - width + 1] = checkAndAdd(map[mine - width + 1]);
    map[mine-1] = checkAndAdd(map[mine-1]);
    map[mine+1] = checkAndAdd(map[mine+1]);
    map[mine + width] = checkAndAdd(map[mine + width]);
    map[mine + width - 1] = checkAndAdd(map[mine + width - 1]);
    map[mine + width + 1] = checkAndAdd(map[mine + width + 1]);
    break;
    
    // Every element to the right
  case 2:
    map[mine - width] = checkAndAdd(map[mine - width]);
    map[mine - width + 1] = checkAndAdd(map[mine - width + 1]);
    map[mine+1] = checkAndAdd(map[mine+1]);
    map[mine + width] = checkAndAdd(map[mine + width]);
    map[mine + width + 1] = checkAndAdd(map[mine + width + 1]);
    break;

    // Every element to the left
  case 3:
    map[mine - width - 1] = checkAndAdd(map[mine - width - 1]);
    map[mine - width] = checkAndAdd(map[mine - width]);
    map[mine-1] = checkAndAdd(map[mine-1]);
    map[mine + width] = checkAndAdd(map[mine + width]);
    map[mine + width - 1] = checkAndAdd(map[mine + width - 1]);
    break;

    // Every element mid-bottom
  case 4:
    map[mine-1] = checkAndAdd(map[mine-1]);
    map[mine+1] = checkAndAdd(map[mine+1]);
    map[mine + width] = checkAndAdd(map[mine + width]);
    map[mine + width - 1] = checkAndAdd(map[mine + width - 1]);
    map[mine + width + 1] = checkAndAdd(map[mine + width + 1]);
    break;

    // Every element mid-top
  case 5:
    map[mine - width - 1] = checkAndAdd(map[mine - width - 1]);
    map[mine - width] = checkAndAdd(map[mine - width]);
    map[mine - width + 1] = checkAndAdd(map[mine - width + 1]);
    map[mine-1] = checkAndAdd(map[mine-1]);
    map[mine+1] = checkAndAdd(map[mine+1]);
    break;

    // Every element top-right corner
  case 6:
    map[mine - width] = checkAndAdd(map[mine - width]);
    map[mine - width + 1] = checkAndAdd(map[mine - width + 1]);
    map[mine+1] = checkAndAdd(map[mine+1]);
    break;

    // Every element top-left corner
  case 7:
    map[mine - width - 1] = checkAndAdd(map[mine - width - 1]);
    map[mine - width] = checkAndAdd(map[mine - width]);
    map[mine-1] = checkAndAdd(map[mine-1]);
    break;

    // Every element bottom-left corner
  case 8:
    map[mine-1] = checkAndAdd(map[mine-1]);
    map[mine + width] = checkAndAdd(map[mine + width]);
    map[mine + width - 1] = checkAndAdd(map[mine + width - 1]);
    break;

    // Every element bottom-right corner
  case 9:
    map[mine+1] = checkAndAdd(map[mine+1]);
    map[mine + width] = checkAndAdd(map[mine + width]);
    map[mine + width + 1] = checkAndAdd(map[mine + width + 1]);
    break;
  }
}
