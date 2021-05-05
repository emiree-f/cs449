#pragma once
//Board has 24 locations
#include "Location.h"

namespace TestGUI {
	public ref class Board {
	public:
		void initialize_board();
		bool validate_location(System::String^ validateLocation);
		System::String^ place_piece(Player^ placingPlayer);
		System::String^ move_piece(Player^ movingPlayer);
		System::String^ fly_piece(Player^ flyingPlayer);
		Player^ get_LocationOccupier(System::String^ checkLocation);
		void set_LocationOccupied(System::String^ placeLocation, Player^ placingPlayer);
		void set_LocationUnoccupied(System::String^ emptyLocation);
		void remove_piece(Player^ removedPlayer);
		bool is_mill(System::String^ checkLocation);
		bool is_adjacent(System::String^ location1, System::String^ location2);
		bool adjacents_AllOccupied(System::String^ checkLocation);
	private:
		System::Collections::Generic::Dictionary<System::String^, Location^> grid;
		System::String^ validLocations;
	};
}