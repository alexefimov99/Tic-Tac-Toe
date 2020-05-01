#include <iostream>
#include "Transportation.h"
using namespace std;

#define ROWS 3 
#define COLUMNS 3

void Logic(char board[ROWS][COLUMNS], char *FName, char *SName)
{
	if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') || (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
		(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
		(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') ||
		(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'))
	{
		Draw(board);
		cout << "WINNER IS " << FName << "!!!";
		exit(0);
	}
	else if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') || (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
			 (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
			 (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') ||
			 (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'))
	{
		Draw(board);
		cout << "WINNER IS " << SName << "!!!";
		exit(0);
	}
	else
	{
		Draw(board);
		for (int i = 0, k = 0; i < ROWS; i++)
			for (int j = 0; j < COLUMNS; j++)
			{
				if (board[i][j] != '-')
					k++;
				if (k == 9)
				{
					cout << "DRAW";
					exit(0);
				}
			}
	}
}