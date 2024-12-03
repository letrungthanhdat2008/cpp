// TicTacToemoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printBoard(char board[3][3]) {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n";
}
bool checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}



int main()
{
    char board[3][3] = {{ ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' }};
    int row, col;
    char player = 'X';
    bool gameOver = false;

    while (!gameOver) {
        printBoard(board);
        cout << "Player " << player << ", enter row and column (0-2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "\nInvalid move. try again";
            continue;
        }
        board[row][col] = player;
        if (checkWin(board, player)) {
            printBoard(board);
            cout << "\nPlayer" << player << "wins!\n";
            gameOver = true;
        }
        else if (checkDraw(board)) {
            printBoard(board);
            cout << "It 's a draw!\n";
            gameOver = true;
        }
        player = (player == 'X') ? 'O' : 'X';
    }
    return 0;
}

