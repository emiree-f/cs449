#include <iostream>
#include "Game.h"

int main() {
	std::string firstTurn;
	std::cout << "\nEnter first turn, black or white: ";
	std::cin >> firstTurn;
	bool turn1st = (firstTurn == "black") ? true : false;
	Game newGame(turn1st);
	while (!newGame.get_isGameOver()) { newGame.play_nextTurn(); }
	return 0;
}