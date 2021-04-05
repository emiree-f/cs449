#include "Game.h"

Game::Game(bool firstTurn) {
	currentTurnBlack = firstTurn;
	currentBoard.initialize_board();
}
void Game::play_nextTurn() {
	Player* currentPlayer = (currentTurnBlack) ? &black : &white;
	if (currentPlayer->get_unplayed() != 0) {
		currentBoard.place_piece(currentPlayer);
	}
	else if (currentPlayer->get_unplayed() == 0 && currentPlayer->get_onboard() >= 3) {
		currentBoard.move_piece(currentPlayer);
	}
	else if (currentPlayer->get_unplayed() == 0 && currentPlayer->get_onboard() == 3) {
		currentBoard.fly_piece(currentPlayer);
	}
	//check for mill
	//switch to next player's turn
};