#include "Game.h"

TestGUI::Game::Game()
{
	black.set_Name("Black");
	white.set_Name("White");
	currentBoard.initialize_board();
}

inline void TestGUI::Game::set_Occupied(System::String^ placeLocation, Player^ placingPlayer) {
	currentBoard.set_LocationOccupied(placeLocation, placingPlayer);
}

void TestGUI::Game::set_Unoccupied(System::String^ emptyLocation)
{
	currentBoard.set_LocationUnoccupied(emptyLocation);
}

void TestGUI::Game::set_startingPlayer(System::String^ starter)
{
	startingPlayer = (starter == black.get_Name()) ? %black : %white;
}

TestGUI::Player^ TestGUI::Game::get_Occupier(System::String^ checkLocation)
{
	return currentBoard.get_LocationOccupier(checkLocation);
}

TestGUI::Player^ TestGUI::Game::get_Opponent(Player^ currentPlayer)
{
	return (currentPlayer == % black) ? % white : % black;
}

bool TestGUI::Game::check_IsMill(System::String^ checkLocation)
{
	return currentBoard.is_mill(checkLocation);
}

bool TestGUI::Game::check_IsAdjacent(System::String^ location1, System::String^ location2)
{
	return currentBoard.is_adjacent(location1, location2);
}

bool TestGUI::Game::check_AdjacentsAllOccupied(System::String^ checkLocation)
{
	return currentBoard.adjacents_AllOccupied(checkLocation);
}
