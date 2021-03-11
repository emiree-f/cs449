#include <iostream>
#include <limits>
#include "Board.h"
using namespace std;
int main() {
    int menuInput;
    Board mBoard; //create Millboard Object
    mBoard.buildBoard();
    mBoard.formatBoard();
    cout << "------------------------------------------------" << endl;
    cout << "*********** NINE MEN'S MORRIS GAME ***********" << endl;
    cout << "------------------------------------------------" << endl;
    mBoard.showBoard();
    while (true) {
        char player;
        if (mBoard.isPlayerTurn()) {
            player = 'A';
        } else {
            player = 'B';
        }
        string mode = mBoard.isGameMode() ? "continue" : "play (Player A will get first move)";
        cout << "Enter (1) to " << mode << " | (2) to restart | (3) to forfeit |  (0) to quit" << endl;
        cout << "Enter Choice (#) : ";
        while (!(cin >> menuInput)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, Please Try again:";
        }
        if (menuInput == 0) {
            break;
        } else if (menuInput == 1) {
            mBoard.setGameMode(true);
            cout << "\n************* Player " << player << " playing **************" << endl;
            mBoard.playGame();
            continue;
        } else if (menuInput == 2) {
            mBoard.setGameMode(false);
            main();
        } else if (menuInput == 3) {
            if (mBoard.isGameMode()) {
                if (mBoard.isPlayerTurn()) {
                    cout << "player A granted Win to player B:" << endl;
                } else {
                    cout << "player B granted Win to player A:" << endl;
                }
                cout << "_________________________________________" << endl;
            }
            mBoard.setGameMode(false);
        } else {
            cout << menuInput << " is invalid option" << endl;
        }
    }
    return 0;
}