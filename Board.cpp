#include <iostream> //remove when GUI added
#include "Board.h"

void Board::initialize_board() {
	std::ifstream inFile;
	std::string name, adjacents;

    inFile.open("adjacent_locations.txt");
    while (!inFile.eof()) {
        getline(inFile, name, '\t');
        getline(inFile, adjacents, '\n');
        grid.insert(make_pair(name, Location(name, adjacents)));
        validLocations.append(name);
    }
    inFile.close();
}
bool Board::validate_location(std::string validateLocation) {
	return (validLocations.find(validateLocation) != std::string::npos);
}
void Board::place_piece(Player* placingPlayer) {
	std::string placeLocationChoice; //will receive from user click (GUI)
	std::cout << "\nEnter piece place location: "; std::cin >> placeLocationChoice;
	if ((validate_location(placeLocationChoice)) 
		&& (grid[placeLocationChoice].get_occupier() == NULL)) {
		placingPlayer->decrement_unplayed();
		placingPlayer->increment_onboard();
		grid[placeLocationChoice].set_occupier(placingPlayer);
	}
}
void Board::move_piece(Player* movingPlayer) {
	std::string moveFromLocationChoice; //will receive from user click (GUI)
	std::cout << "\nEnter piece move from location: "; std::cin >> moveFromLocationChoice;
	if (validate_location(moveFromLocationChoice) 
		&& (grid[moveFromLocationChoice].get_occupier() == *&movingPlayer)) {
		std::string moveToLocationChoice; //will receive from user click (GUI)
		std::cout << "\nEnter piece move to location: "; std::cin >> moveToLocationChoice;
		if (validate_location(moveToLocationChoice)
			&& (grid[moveToLocationChoice].get_occupier() == NULL)
			&& grid[moveToLocationChoice].is_adjacent(moveFromLocationChoice)) {
			grid[moveFromLocationChoice].set_occupier(NULL);
			grid[moveToLocationChoice].set_occupier(movingPlayer);
		}
	}
}
void Board::fly_piece(Player* flyingPlayer) {
	std::string flyFromLocationChoice; //will receive from user click (GUI)
	std::cout << "\nEnter piece fly from location: "; std::cin >> flyFromLocationChoice;
	if (validate_location(flyFromLocationChoice) 
		&& (grid[flyFromLocationChoice].get_occupier() == *&flyingPlayer)) {
		std::string flyToLocationChoice; //will receive from user click (GUI)
		std::cout << "\nEnter piece fly to location: "; std::cin >> flyToLocationChoice;
		if (validate_location(flyToLocationChoice) 
			&& (grid[flyToLocationChoice].get_occupier() == NULL)) {
			grid[flyFromLocationChoice].set_occupier(NULL);
			grid[flyToLocationChoice].set_occupier(flyingPlayer);
		}
	}
}