/*
Task 03

Simple TIC-TAC-TOE CONSOLE BASED GAME Using C++ Programming

Name- Soham Papat

*/

#include <iostream>

using namespace std;

void printBoard(char board[3][3])
{
    cout << "  0 | 1 | 2" << endl;
    cout << " -----------" << endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << i << " ";
        for (int j = 0; j < 3; ++j)
        {
            cout << board[i][j];
            if (j < 2)
                cout << " | ";
        }
        cout << endl;
        if (i < 2)
            cout << " -----------" << endl;
    }
}

bool checkWin(char board[3][3], char player)
{

    for (int i = 0; i < 3; ++i)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }

    return false;
}

bool checkTie(char board[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main()
{
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (true)
    {

        printBoard(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin(board, currentPlayer))
        {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins! Congratulations!" << endl;
            break;
        }

        if (checkTie(board))
        {
            printBoard(board);
            cout << "It's a tie!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}