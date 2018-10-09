#include <iostream>
#include "Functions.h"

int main() {

  int map[80];

  CreateMap(map);

  for(int i = 0; i < 81; i++) {
    if(i % 9 == 0) {
      std::cout << std::endl;
    }
    std::cout << map[i] << " ";
  }
  return 0;
}
