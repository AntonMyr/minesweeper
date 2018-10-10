
functions = CheckForEnd.o CreateMap.o PresentMap.o UpdatePosition.o

functionsPath = ./functions/

allFunctions = $(functionsPath)CheckForEnd.cpp $(functionsPath)CreateMap.cpp $(functionsPath)PresentMap.cpp $(functionsPath)UpdatePosition.cpp


helpers = SetMines.o InitMap.o CalcMines.o PositionCase.o CheckAndAdd.o IsMine.o IsTaken.o GetPosition.o UpdateStatus.o InitTakenSquares.o

helpersPath = ./functions/helpers/

allHelpers = $(helpersPath)SetMines.cpp $(helpersPath)InitMap.cpp $(helpersPath)CalcMines.cpp $(helpersPath)PositionCase.cpp $(helpersPath)CheckAndAdd.cpp $(helpersPath)IsMine.cpp $(helpersPath)IsTaken.cpp $(helpersPath)GetPosition.cpp $(helpersPath)UpdateStatus.cpp $(helpersPath)InitTakenSquares.cpp

output: main.o Functions.o Helpers.o
	g++ main.o $(functions) $(helpers) -o output

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

# Main Functions
Functions.o: $(allFunctions) Functions.h
	g++ -c -std=c++11 $(allFunctions)

# Helpers
Helpers.o: $(allHelpers) Helpers.h
	g++ -c -std=c++11 $(allHelpers)

# Clean command
clean:
	rm *.o output
