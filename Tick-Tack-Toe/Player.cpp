#include <iostream>
#include <Windows.h>
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

void AIPlayer(char board[ROWS][COLUMNS], int count, int row, int column, char *SName)
{

}