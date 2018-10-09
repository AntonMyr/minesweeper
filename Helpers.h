#ifndef HELPERS_H
#define HELPERS_H

void setMines(int mines[], int amount);

void initMap(int map[], int mines[]);

void calcMines(int map[], int mines[], int width, int height);

void positionCase(int option, int map[], int width, int mine);
int checkAndAdd(int positionVal);

#endif // !HELPERS_H
