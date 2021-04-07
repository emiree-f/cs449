#include <iostream> //remove when GUI added
#include "Board.h"

void Board::initialize_board() {
	std::ifstream inFile;
	std::string name, mill1, mill2, mill3, mill4, adjacents;

    inFile.open("possible_mills_adjacent_locations.txt");
    while (!inFile.eof()) {
        getline(inFile, name, '\t');
		getline(inFile, mill1, '\t');
		getline(inFile, mill2, '\t');
		getline(inFile, mill3, '\t');
		getline(inFile, mill4, '\t');
        getline(inFile, adjacents, '\n');
        grid.insert(make_pair(name, Location(name, mill1, mill2, mill3, mill4, adjacents)));
        validLocations.append(name);
    }
    inFile.close();
}
bool Board::validate_location(std::string validateLocation) {
	return (validLocations.find(validateLocation) != std::string::npos);
}
std::string Board::place_piece(Player* placingPlayer) {
	std::string placeLocationChoice; //will receive from user click (GUI)
	std::cout << "\nEnter piece place location: "; std::cin >> placeLocationChoice;
	if ((validate_location(placeLocationChoice)) 
		&& (grid[placeLocationChoice].get_occupier() == NULL)) {
		placingPlayer->decrement_unplayed();
		placingPlayer->increment_onboard();
		grid[placeLocationChoice].set_occupier(placingPlayer);
	}
	return placeLocationChoice;
}
std::string Board::move_piece(Player* movingPlayer) {
	std::string moveFromLocationChoice; //will receive from user click (GUI)
	std::string moveToLocationChoice;
	std::cout << "\nEnter piece move from location: "; std::cin >> moveFromLocationChoice;
	if (validate_location(moveFromLocationChoice) 
		&& (grid[moveFromLocationChoice].get_occupier() == *&movingPlayer)) {
		std::cout << "\nEnter piece move to location: "; std::cin >> moveToLocationChoice; //will receive from user click (GUI)
		if (validate_location(moveToLocationChoice)
			&& (grid[moveToLocationChoice].get_occupier() == NULL)
			&& grid[moveToLocationChoice].is_adjacent(moveFromLocationChoice)) {
			grid[moveFromLocationChoice].set_occupier(NULL);
			grid[moveToLocationChoice].set_occupier(movingPlayer);
		}
	}
	return moveToLocationChoice;
}
std::string Board::fly_piece(Player* flyingPlayer) {
	std::string flyFromLocationChoice; //will receive from user click (GUI)
	std::string flyToLocationChoice;
	std::cout << "\nEnter piece fly from location: "; std::cin >> flyFromLocationChoice;
	if (validate_location(flyFromLocationChoice) 
		&& (grid[flyFromLocationChoice].get_occupier() == *&flyingPlayer)) {
		std::cout << "\nEnter piece fly to location: "; std::cin >> flyToLocationChoice; //will receive from user click (GUI)
		if (validate_location(flyToLocationChoice) 
			&& (grid[flyToLocationChoice].get_occupier() == NULL)) {
			grid[flyFromLocationChoice].set_occupier(NULL);
			grid[flyToLocationChoice].set_occupier(flyingPlayer);
		}
	}
	return flyToLocationChoice;
}
void Board::remove_piece(Player* removedPlayer) {
	std::string removeFromLocationChoice; //will receive from user click (GUI)
	std::cout << "\nEnter piece remove from location: "; std::cin >> removeFromLocationChoice;
	if (validate_location(removeFromLocationChoice)
		&& (grid[removeFromLocationChoice].get_occupier() == *&removedPlayer)
		&& (!is_mill(removeFromLocationChoice))) {
		removedPlayer->decrement_onboard();
		grid[removeFromLocationChoice].set_occupier(NULL);
	}
}
bool Board::is_mill(std::string checkLocation) {
	Player* occupier = grid[checkLocation].get_occupier();
	bool mill1 = false, mill2 = false;
	mill1 = ((occupier == grid[grid[checkLocation].get_possibleMill1a()].get_occupier())
		&& (occupier == grid[grid[checkLocation].get_possibleMill1b()].get_occupier()));
	mill2 = ((occupier == grid[grid[checkLocation].get_possibleMill2a()].get_occupier())
		&& (occupier == grid[grid[checkLocation].get_possibleMill2b()].get_occupier()));
	return (mill1 || mill2);
}