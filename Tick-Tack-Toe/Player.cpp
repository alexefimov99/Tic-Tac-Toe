#include <iostream>
#include <Windows.h>
#include <ctime>
#include "Transportation.h"
using namespace std;

#define ROWS 3 
#define COLUMNS 3

void Player(char board[ROWS][COLUMNS], int count, int row, int column, char *FName, char *SName)
{
	tryagain:
	Draw(board);
	if (count % 2 == 0)
		cout << "Move " << FName << "\nEnter row: ";
	else
		cout << "Move " << SName << "\nEnter row: ";
	cin >> row;
	cout << "Enter column: ";
	cin >> column;
	if (row == 123 || column == 123)
		exit(0);
	if (board[row - 1][column - 1] == 'O' || board[row - 1][column - 1] == 'X')
	{
		cout << "You can't move here! Try again...";
		Sleep(1000);
		goto tryagain;
	}
	if (count % 2 == 0)
		board[row - 1][column - 1] = 'X';
	else
		board[row - 1][column - 1] = 'O';
}

void AIPlayer(char board[ROWS][COLUMNS], char *SName)
{
	srand(time(0));
	if (board[0][0] == 'X' && (board[1][0] == 'X' || board[0][1] == 'X' || board[1][1] == 'X') && (board[2][0] != 'O' || board[0][2] != 'O' || board[2][2] != 'O'))
		if (board[1][0] == 'X')
			board[2][0] = 'O';
		else if (board[0][1] == 'X')
			board[0][2] = 'O';
		else
			board[2][2] = 'O';

	else if (board[0][2] == 'X' && (board[1][2] == 'X' || board[0][1] == 'X' || board[1][1] == 'X') && (board[2][2] != 'O' || board[0][0] != 'O' || board[2][1] != 'O'))
		if (board[1][2] == 'X')
			board[2][2] = 'O';
		else if (board[0][1] == 'X')
			board[0][0] = 'O';
		else
			board[2][1] = 'O';

	else if (board[2][2] == 'X' && (board[1][2] == 'X' || board[2][1] == 'X' || board[1][1] == 'X') && (board[2][0] != 'O' || board[0][2] != 'O' || board[0][0] != 'O'))
		if (board[1][2] == 'X')
			board[0][2] = 'O';
		else if (board[2][1] == 'X')
			board[2][0] = 'O';
		else
			board[0][0] = 'O';

	else if (board[2][0] == 'X' && (board[1][0] == 'X' || board[2][1] == 'X' || board[1][1] == 'X') && (board[0][0] != 'O' || board[2][2] != 'O' || board[0][2] != 'O'))
		if (board[1][0] == 'X')
			board[0][0] = 'O';
		else if (board[2][1] == 'X')
			board[2][2] = 'O';
		else
			board[0][2] = 'O';

	else if (board[0][0] == 'X' && (board[2][0] == 'X' || board[0][2] == 'X' || board[2][2] == 'X') && (board[1][0] != 'O' || board[0][1] != 'O' || board[1][1] != 'O'))
		if (board[2][0] == 'X')
			board[1][0] = 'O';
		else if (board[0][2] == 'X')
			board[0][1] = 'O';
		else
			board[1][1] = 'O';

	else if (board[2][2] == 'X' && (board[2][0] == 'X' || board[0][2] == 'X') && (board[1][2] != 'O' || board[2][1] != 'O'))
		if (board[2][0] == 'X')
			board[2][1] = 'O';
		else
			board[1][2] = 'O';

	else if (board[0][2] == 'X' && board[2][0] == 'X' && board[1][1] != 'O')
		board[1][1] = 'O';

	else if (board[0][1] == 'X' && board[2][1] == 'X' && board[1][1] != 'O')
		board[1][1] = 'O';

	else if (board[1][0] == 'X' && board[1][2] == 'X' && board[1][1] != 'O')
		board[1][1] = 'O';

	else
		for (int i = 0;; i++)
		{
			int row = rand() % 3, col = rand() % 3;
			if (board[row][col] != 'O' && board[row][col] != 'X')
			{
				board[row][col] = 'O';
				break;
			}
		}
}