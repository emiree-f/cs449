#pragma once
//Board has 24 locations
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <utility>
#include "Location.h"

class Board {
public:
	void initialize_board();
	bool validate_location(std::string validateLocation);
	std::string place_piece(Player* placingPlayer);
	std::string move_piece(Player* movingPlayer);
	std::string fly_piece(Player* flyingPlayer);
	void remove_piece(Player* removedPlayer);
	bool is_mill(std::string checkLocation);
private:
	std::map<std::string, Location> grid;
	std::string validLocations;
};
