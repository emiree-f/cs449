#pragma once
//Board has 24 locations
#include "Location.h"

namespace TestGUI {
	public ref class Board {
	public:
		void initialize_board();
		Player^ get_LocationOccupier(System::String^ checkLocation);
		void set_LocationOccupied(System::String^ placeLocation, Player^ placingPlayer);
		void set_LocationUnoccupied(System::String^ emptyLocation);
		bool is_mill(System::String^ checkLocation);
		bool is_adjacent(System::String^ location1, System::String^ location2);
		bool adjacents_AllOccupied(System::String^ checkLocation);
		bool has_NoValidMoves(Player^ checkPlayer);
	private:
		System::Collections::Generic::Dictionary<System::String^, Location^> grid;
	};
}