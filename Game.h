#pragma once
//Game has 1 board, 2 players
#include "Board.h"
#include "Player.h"

class Game {
public:
	Game(bool firstTurn);
	void play_nextTurn();
	void switch_isGameOver() { gameOver = !gameOver; }
	void switch_currentTurn() { currentTurnBlack = !currentTurnBlack; }
	bool get_isGameOver() const { return gameOver; }
	bool get_currentTurn() const { return currentTurnBlack; }
private:
	bool gameOver = false;
	bool currentTurnBlack;//true is Black, false is White
	Player black;
	Player white;
	Board currentBoard;
};