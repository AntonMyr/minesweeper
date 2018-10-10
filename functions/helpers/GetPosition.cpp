#include <iostream>
#include "../../Helpers.h"

int getPosition(int xCoord, int yCoord, int width) {
  return ((yCoord * width) + xCoord);
}
