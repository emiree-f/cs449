#pragma once
#include <string>
#include <set>
#include "Player.h"

class Location {
public:
    Location();
    Location(std::string setName, std::string setMill1, std::string setMill2, 
        std::string setMill3, std::string setMill4, std::string setAdjacents);
    bool is_adjacent(std::string checkLocation);
    void set_occupier(Player* setOccupier) { occupier = setOccupier; }
    std::string get_possibleMill1_a() const { return possibleMill1[0]; }
    std::string get_possibleMill1_b() const { return possibleMill1[1]; }
    std::string get_possibleMill2_a() const { return possibleMill2[0]; }
    std::string get_possibleMill2_b() const { return possibleMill2[1]; }
    Player* get_occupier() const { return occupier; }
private:
    std::string name;
    std::set<std::string> adjacents;
    std::string possibleMill1[2], possibleMill2[2];
    void set_possibleMills(std::string setStr1, std::string setStr2,
        std::string setStr3, std::string setStr4);
    void set_adjacents(std::string setString);
    Player* occupier = NULL;
};