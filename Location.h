#pragma once
#include "Player.h"

namespace TestGUI {
	public ref class Location {
    public:
        Location() {};
        Location(System::String^ setName, System::String^ setMill1, System::String^ setMill2,
            System::String^ setMill3, System::String^ setMill4, System::String^ setAdjacents);
        bool is_adjacent(System::String^ checkLocation);
        void set_occupier(Player^ setOccupier) { occupier = setOccupier; }
        void set_unoccupied() { occupier = nullptr; }
        System::String^ get_possibleMill1a() { return possibleMill1[0]; }
        System::String^ get_possibleMill1b() { return possibleMill1[1]; }
        System::String^ get_possibleMill2a() { return possibleMill2[0]; }
        System::String^ get_possibleMill2b() { return possibleMill2[1]; }
        System::Collections::Generic::List<System::String^> adjacents;
        Player^ get_occupier()  { return occupier; }
    private:
        System::String^ name;
        System::Collections::Generic::List<System::String^>
            possibleMill1, possibleMill2;
        void set_possibleMills(System::String^ setStr1, System::String^ setStr2,
            System::String^ setStr3, System::String^ setStr4);
        void set_adjacents(System::String^ setAdjacents);
        Player^ occupier;
	};
}