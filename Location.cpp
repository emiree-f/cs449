#include "Location.h"

TestGUI::Location::Location(System::String^ setName, System::String^ setMill1, 
	System::String^ setMill2, System::String^ setMill3, System::String^ setMill4, 
	System::String^ setAdjacents)
{
	name = setName;
	set_possibleMills(setMill1, setMill2, setMill3, setMill4);
	set_adjacents(setAdjacents);
}

bool TestGUI::Location::is_adjacent(System::String^ checkLocation)
{
	return (adjacents.Contains(checkLocation));
}

void TestGUI::Location::set_possibleMills(System::String^ setStr1, System::String^ setStr2,
	System::String^ setStr3, System::String^ setStr4)
{
	possibleMill1.Add(setStr1); possibleMill1.Add(setStr2);
	possibleMill2.Add(setStr3); possibleMill2.Add(setStr4);
}

void TestGUI::Location::set_adjacents(System::String^ setAdjacents)
{
	System::IO::StringReader^ readString = gcnew System::IO::StringReader(setAdjacents);
	while (readString->Peek() > 0) {
		adjacents.Add(readString->ReadLine());
	}
}
