#ifndef HELPERS_H
#define HELPERS_H

void setMines(int mines[], int amount);

void initMap(int map[], int mines[]);

void calcMines(int map[], int mines[], int width, int height);

void positionCase(int option, int map[], int width, int mine);

int checkAndAdd(int positionVal);

void initTakenSquares(bool takenSquares[], int width, int height);

bool isMine(int position, int map[]);

bool isTaken(int position, bool takenSquares[]);

int getPosition(int xCoord, int yCoord, int width);

void updateStatus(int position, bool takenSquares[]);

#endif // !HELPERS_H
