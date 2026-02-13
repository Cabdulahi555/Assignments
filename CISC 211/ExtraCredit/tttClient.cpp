/*Name: Cabdulahi Hussein
File: tttClient.cpp
Purpose: ttt game client file to run the game
*/
#include <iostream>
#include "ttt.h"
using namespace std;

int main()
{
    TicTacToe game;
    bool gameover = false;

    // Display initial board once (before loop)
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    game.displayBoard();

    //game loop
    while (!gameover)
    {
        // Player's turn
        game.playerMove();
        game.displayBoard();
        
        // Check if player won
        if (game.hasWinner('X'))
        {
            cout << "Player X wins!" << endl;
            gameover = true;  // End game
            break;
        }
        
        // Check for draw
        if (game.isDraw())
        {
            cout << "It's a draw!" << endl;
            gameover = true;  // End game
            break;
        }
        
        // Computer's turn
        cout << "Computer's turn..." << endl;
        game.CompMove();
        game.displayBoard();
        
        // Check if computer won
        if (game.hasWinner('O'))
        {
            cout << "Computer O wins!" << endl;
            gameover = true;  // End game
            break;
        }
        
        // Check for draw again
        if (game.isDraw())
        {
            cout << "It's a draw!" << endl;
            gameover = true;  // End game
            break;
        }
    }
    
    cout << "Game Over!" << endl;
    return 0;
}