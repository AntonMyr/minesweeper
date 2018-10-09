#include <iostream>
#include <string>
#include "Functions.h"

int main() {

  int map[81];

  CreateMap(map);

  for(int i = 0; i < 81; i++) {
    if((i+1) % 9 == 0) {
      std::cout << "\n";
    }
    std::cout << map[i] << " ";
  }
  return 0;
}
