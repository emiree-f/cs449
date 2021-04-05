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
	void place_piece(Player* placingPlayer);
	void move_piece(Player* movingPlayer);
	void fly_piece(Player* flyingPlayer);
private:
	std::map<std::string, Location> grid;
	std::string validLocations;
};
