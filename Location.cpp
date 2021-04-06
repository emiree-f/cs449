#include <sstream>
#include "Location.h"

Location::Location() {
    name = "";
    possibleMill1[0] = ""; possibleMill1[1] = "";
    possibleMill2[0] = ""; possibleMill2[1] = "";
    adjacents = {};
}
Location::Location(std::string setName, std::string setMill1, std::string setMill2,
    std::string setMill3, std::string setMill4, std::string setAdjacents) {
    name = setName;
    set_possibleMills(setMill1, setMill2, setMill3, setMill4);
    set_adjacents(setAdjacents);
}
void Location::set_possibleMills(std::string str1, std::string str2, std::string str3, std::string str4) {
    possibleMill1[0] = str1; possibleMill1[1] = str2;
    possibleMill2[0] = str3; possibleMill2[1] = str4;
}
void Location::set_adjacents(std::string setString) {
    std::stringstream ssin(setString);
    std::string currentString;
    for (int i = 0; ssin.good() && i < 4; ++i) {
        ssin >> currentString;
        adjacents.emplace(currentString);
    }
}
bool Location::is_adjacent(std::string checkLocation) {
    return (adjacents.find(checkLocation) != adjacents.end());
};