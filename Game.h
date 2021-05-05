#pragma once
//Game has 1 board, 2 players
#include "Board.h"
#include "Player.h"

namespace TestGUI {
	public ref class Game {
	public:
		Game();
		void switch_isGameOver() { gameOver = !gameOver; }
		void switch_currentTurn() { currentTurnBlack = !currentTurnBlack; }
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
		bool get_isGameOver() { return gameOver; }
		bool get_currentTurn() { return currentTurnBlack; }
	private:
		bool gameOver = false;
		bool currentTurnBlack;//true is Black, false is White
		System::String^ nextEvent;
		Player black;
		Player white;
		Player^ startingPlayer;
		Board currentBoard;
	};
}