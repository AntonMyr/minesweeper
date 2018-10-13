#include <iostream>
#include <string>
#include "../Functions.h"
#include "../Helpers.h"

void PresentMap(int map[], bool takenSquares[], int width, int height) {
  const char BOX_CHAR = '-';
  char box;
  std::string clear = "\033[2J\033[1;1H";

  std::cout << clear;
  for(int i = 0; i < width; i++) {
    if(i == 0)
      std::cout << "\t" << i << "\t";
    else
      std::cout << i << "\t";
  }

  std::cout << "\n\n\n";

  for(int i = 0; i < (width*height); i++) {
    box = getChar(BOX_CHAR, takenSquares[i], map[i]);

    if((i + 1) % width == 0 && i != 0)
      std::cout << box << "\n\n\n";
    else if(i % width == 0)
      std::cout << ((i)/9) << "\t" << box << "\t";
    else
      std::cout << box << "\t";


  }
  // printMap(map, takenSquares, width, height);
}
