#ifndef MILLBOARD_MILLBOARD_H
#define MILLBOARD_MILLBOARD_H

#include <iostream>
#include <cstring>
#include <limits>
#include <cstdlib>

using namespace std;

class Board {

private:
    string mBoard[7][7] = {};
    int PlayBits[2] = {9, 9};
    int MoveBits[2] = {9, 9};

    bool placeMode = false;
    bool gameMode = false;
    bool playerTurn = false; 
public:
    const string getBoard(int row, int column) const {
        return mBoard[row][column];
    }

    const int *getMovingBIts() const {
        return MoveBits;
    }
    const int* getPlayersBIts() const {
        return PlayBits;
    }
    void setPlacingMode(bool placeMode) {
        Board::placeMode = placeMode;
    }
    bool isPlacingMode() const {
        return placeMode;
    }
    bool isGameMode() const {
        return gameMode;
    }
    void setGameMode(bool gameMode) {
        Board::gameMode = gameMode;
    }

    bool isPlayerTurn() const {
        return playerTurn;
    }

    void setPlayerTurn(bool playerTurn) {
        Board::playerTurn = playerTurn;
    }

  
    void showBoard();

    bool validate(int row, int col);

    void placeGame(int row, int col);

    void playType(int row, int col);

    void playGame();

    void buildBoard();

    void formatBoard();

    void placingPhase();

    void movingPhase();

    void playTurn();
};


#endif 
