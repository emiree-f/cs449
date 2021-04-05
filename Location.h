#pragma once
#include <string>
#include <set>
#include "Player.h"

class Location {
public:
    Location();
    Location(std::string setName, std::string setAdjacents);
    bool is_adjacent(std::string checkLocation);
    void set_occupier(Player* setOccupier) { occupier = setOccupier; }
    Player* get_occupier() const { return occupier; }
private:
    std::string name;
    std::set<std::string> adjacents;
    void set_adjacents(std::string setString);
    Player* occupier = NULL;
};