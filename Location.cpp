#include <sstream>
#include "Location.h"

Location::Location() {
    name = "";
    adjacents = {};
}
Location::Location(std::string setName, std::string setAdjacents) {
    name = setName;
    set_adjacents(setAdjacents);
};
void Location::set_adjacents(std::string setString) {
    std::stringstream ssin(setString);
    std::string currentString;
    for (int i = 0; ssin.good() && i < 4; ++i) {
        ssin >> currentString;
        adjacents.emplace(currentString);
    }
};
bool Location::is_adjacent(std::string checkLocation) {
    return (adjacents.find(checkLocation) != adjacents.end());
};