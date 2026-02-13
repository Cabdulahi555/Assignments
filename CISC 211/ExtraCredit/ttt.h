
/* ------------------------------------------------
 Name: Cabdulahi Hussein
 File: ttt.h
 Compiler: g++
 --------------------------------------------------- */



#include <iostream>
using namespace std;

// Constant for board size
const int MAX = 3;

// TicTacToe class declaration
class TicTacToe
{
private: // hidden data members
    char Board[MAX][MAX]; // stores 'X', 'O', or ' '

public: // accessible to client

    // Constructor
    TicTacToe();

    // Destructor
    ~TicTacToe();

    // Purpose: Resets the board to empty spaces
    void resetBoard();

    // Purpose: Displays the current game board
    void displayBoard();

    // Purpose: Checks if a player has won
    // Parameter: char symbol ('X' or 'O')
    bool hasWinner(char symbol);

    // Purpose: Checks whether the board is completely filled
    bool isDraw();

    // Purpose: Lets the player make a move
    void playerMove();

    // Purpose: Lets the computer make a move
    void CompMove();

    // Purpose: Checks if a specific cell is empty
    // Parameters: row and column index
    bool cellEmpty(int row, int col);

    bool preventWin(int&row, int&col);
};

