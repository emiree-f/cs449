#include <iostream> //remove when GUI added
#include "Game.h"

Game::Game(bool firstTurn) {
	currentTurnBlack = firstTurn;
	currentBoard.initialize_board();
}
void Game::play_nextTurn() {
	Player* currentPlayer = (currentTurnBlack) ? &black : &white;
	Player* opposingPlayer = (currentTurnBlack) ? &white : &black;
	std::string updatedLocation;
	if (currentPlayer->get_unplayed() != 0) {
		std::cout << std::endl << ((currentTurnBlack) ? "Black" : "White") << " player place piece"; //remove when GUI added
		updatedLocation = currentBoard.place_piece(currentPlayer);
	}
	else if (currentPlayer->get_unplayed() == 0 && currentPlayer->get_onboard() >= 3) {
		std::cout << std::endl << ((currentTurnBlack) ? "Black" : "White") << " player move piece"; //remove when GUI added
		updatedLocation = currentBoard.move_piece(currentPlayer);
	}
	else if (currentPlayer->get_unplayed() == 0 && currentPlayer->get_onboard() == 3) {
		std::cout << std::endl << ((currentTurnBlack) ? "Black" : "White") << " player fly piece"; //remove when GUI added
		updatedLocation = currentBoard.fly_piece(currentPlayer);
	}
	if (currentBoard.is_mill(updatedLocation)) {
		std::cout << std::endl << ((currentTurnBlack) ? "Black" : "White") << " player remove "
			<< ((!currentTurnBlack) ? "Black" : "White")<< " piece"; //remove when GUI added
		currentBoard.remove_piece(opposingPlayer);
	}
	if (opposingPlayer->get_unplayed() == 0 && opposingPlayer->get_onboard() == 2) { //game over
		switch_isGameOver();
		std::cout << ((currentTurnBlack) ? "Black" : "White") << " wins, game over" << std::endl; //remove when GUI added
	}
	else {
		switch_currentTurn();
	}
};