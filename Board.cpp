#include "Board.h"

void TestGUI::Board::initialize_board()
{
	System::String^ filename = "possible_mills_adjacent_locations.txt";
	System::IO::StreamReader^ inFile = System::IO::File::OpenText(filename);
	System::String^ line;
	cli::array<System::String^>^ fields;
	System::String^ name;
	System::String^ mill1;
	System::String^ mill2;
	System::String^ mill3;
	System::String^ mill4;
	System::String^ adjacents;
	validLocations = "";

	while (inFile->Peek() > 0) {
		line = inFile->ReadLine();
		fields = line->Split('\t');
		name = fields[0];  mill1 = fields[1]; mill2 = fields[2]; mill3 = fields[3]; mill4 = fields[4];
		adjacents = fields[5];
		for (int i = 6; i < fields->Length; i++) {
			adjacents += ("\n" + fields[i]);
		}
		grid.Add(name, gcnew Location(name, mill1, mill2, mill3, mill4, adjacents));
		validLocations = (validLocations + name);
	}
	inFile->Close();

}

bool TestGUI::Board::validate_location(System::String^ validateLocation)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ TestGUI::Board::place_piece(Player^ placingPlayer)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ TestGUI::Board::move_piece(Player^ movingPlayer)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::String^ TestGUI::Board::fly_piece(Player^ flyingPlayer)
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

TestGUI::Player^ TestGUI::Board::get_LocationOccupier(System::String^ checkLocation) {
	return grid[checkLocation]->get_occupier();
}

inline void TestGUI::Board::set_LocationOccupied(System::String^ placeLocation, Player^ placingPlayer) {
	grid[placeLocation]->set_occupier(placingPlayer);
}

void TestGUI::Board::set_LocationUnoccupied(System::String^ emptyLocation)
{
	grid[emptyLocation]->set_unoccupied();
}

void TestGUI::Board::remove_piece(Player^ removedPlayer)
{
	throw gcnew System::NotImplementedException();
}

bool TestGUI::Board::is_mill(System::String^ checkLocation)
{
	Player^ occupier = grid[checkLocation]->get_occupier();
	if (occupier == nullptr) return false;
	bool mill1 = false; bool mill2 = false;
	mill1 = ((occupier == grid[grid[checkLocation]->get_possibleMill1a()]->get_occupier())
		&& (occupier == grid[grid[checkLocation]->get_possibleMill1b()]->get_occupier()));
	mill2 = ((occupier == grid[grid[checkLocation]->get_possibleMill2a()]->get_occupier())
		&& (occupier == grid[grid[checkLocation]->get_possibleMill2b()]->get_occupier()));
	return (mill1 || mill2);
}

bool TestGUI::Board::is_adjacent(System::String^ location1, System::String^ location2)
{
	return grid[location1]->is_adjacent(location2);
}

bool TestGUI::Board::adjacents_AllOccupied(System::String^ checkLocation)
{
	bool check = false;

	for (int i = 0; i < grid[checkLocation]->adjacents.Count; i++) {
		if (grid[grid[checkLocation]->adjacents[i]]->get_occupier() == nullptr) {
			return false;
		}
		else { check = true; }
	}

	return check;
}
