

#include "Board.h"
/*
  build board
 */
void Board::buildBoard() {
    for (auto & i : mBoard) {
        for (int j = 0; j < 7; j++) {
            i[j] = "(O)";
        }
    }
}

/*
 format Nine men's Morris structure
 */
void Board::formatBoard() {
    string mode = " | ";
    mBoard[0][1] = mBoard[0][2] = mBoard[0][4] = mBoard[0][5] = "---";
    mBoard[1][2] = mBoard[1][4] = mBoard[5][2] = mBoard[5][4] = "---";
    mBoard[1][0] = mBoard[1][6] = mode;
    mBoard[3][3] = "   ";
    mBoard[2][0] = mBoard[2][1] = mBoard[2][5] = mBoard[2][6] = mode;
    mBoard[4][0] = mBoard[4][1] = mBoard[4][5] = mBoard[4][6] = mode;
    mBoard[5][0] = mBoard[5][6] = mode;
    mBoard[6][1] = mBoard[6][2] = mBoard[6][4] = mBoard[6][5] = "---";
}
/*
  display game piece placing mode
 */
void Board::placingPhase() {
    cout << "Placing Phase \n" << "\tPlayer A : " << PlayBits[0] << endl;
    cout << "\tPlayer B : " << PlayBits[1] << endl;
}
/*
 * display game transitioning mode
 */
void Board::movingPhase() {
    cout << "Moving Phase \n" << "\tPlayer A : " << MoveBits[0] << endl;
    cout << "\tPlayer B : " << MoveBits[1] << endl;
}
/*
  display current player's action
 */
void Board::playTurn() {
    if (playerTurn) {
        cout << "Player B Turn (playing B ~ Black)" << endl;
    } else {
        cout << "Player A Turn (playing W ~ White)" << endl;
    }
    playerTurn = !(playerTurn);
}

/*
 display Nine men's morris board state
 */
void Board::showBoard() {
    placeMode = !(PlayBits[0] <= 0 && PlayBits[1] <= 0);
    cout << "   ";
    for (int j = 0; j < 7; j++) { 
        cout << "  " << j << " ";
    }
    cout << endl;
    for (int i = 0; i < 7; i++) {
        cout << "  " << i;  
        for (int j = 0; j < 7; j++) {
            cout << " " << mBoard[i][j]; 
        }
        cout << endl;
    }
    cout << "**********************************************" << endl;
    playTurn(); 
    if (placeMode) { 
        placingPhase();
    } else {
        movingPhase();
    }
    cout << "**********************************************" << endl;
}

/*
 validate placing and moving pieces 
 */

bool Board::validate(int row, int col) {
    return mBoard[row][col] == "(W)" || mBoard[row][col] == "(B)" || mBoard[row][col] == "---"
           || mBoard[row][col] == " | " || mBoard[row][col] == "   " || mBoard[row][col] == " | " ? false :
           (row >= 0 && row <= 6) && (col >= 0 && col <= 6);
}
/*
 get player position
 */
void Board::placeGame(int row, int col) {
    cout << "\tPlayed  (row " << row << ", col " << col << ")" << endl;
    cout << "*****************  RESULT  ******************" << endl;
    if (playerTurn) {
        mBoard[row][col] = "(W)";
        PlayBits[0] = PlayBits[0] - 1;
    } else {
        mBoard[row][col] = "(B)";
        PlayBits[1] = PlayBits[1] - 1;
    }
    showBoard();
}
/*
 Detemine Move type and validate board
 */
void Board::playType(int row, int col){
    if(placeMode){
        if (validate(row, col)) {
            placeGame(row, col);
        }else {
            cout << "invalid (row " << row << " col " << col << ") place, try again " << endl;
        }
    }
    if(!placeMode){
        //moving mode
        cout << "moving phase" << endl;
    }
}

/*
  get board position
 */
void Board ::playGame() {
    int row = 0, col = 0;
    cout << " Enter row(0...6):";
    while (!(cin >> row)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid row input.  Try again:";
    }
    cout << " Enter col(0...6): ";
    while (!(cin >> col)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid column input.  Try again:";
    }
    playType(row,col);
}
