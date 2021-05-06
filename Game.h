#pragma once
//Game has 1 board, 2 players
#include "Board.h"
#include "Player.h"

namespace TestGUI {
	public ref class Game {
	public:
		Game();
		void set_nextEvent(System::String^ newNextEvent) { nextEvent = newNextEvent; }
		void set_Occupied(System::String^ placeLocation, Player^ placingPlayer);
		void set_Unoccupied(System::String^ emptyLocation);
		void set_startingPlayer(System::String^ starter);
		Player^ get_Occupier(System::String^ checkLocation);
		System::String^ get_nextEvent() { return nextEvent; }
		Player^ get_startingPlayer() { return startingPlayer; };
		Player^ get_Opponent(Player^ currentPlayer);
		bool check_IsMill(System::String^ checkLocation);
		bool check_IsAdjacent(System::String^ location1, System::String^ location2);
		bool check_AdjacentsAllOccupied(System::String^ checkLocation);
	private:
		System::String^ nextEvent;
		Player black;
		Player white;
		Player^ startingPlayer;
		Board currentBoard;
	};
}