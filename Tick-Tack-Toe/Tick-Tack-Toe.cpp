#include <iostream>
#include <string>
#include <ctime>
#include "Transportation.h"
using namespace std;

#define ROWS 3 
#define COLUMNS 3

int main()
{
	int ScoreF = 0, ScoreS = 0, row = 0, column = 0, count = 0;
	char board[ROWS][COLUMNS] = { {'-','-','-'},{'-','-','-'},{'-','-','-'} };
	char FName[20], SName[20];
	cout << "Enter name the first player: ";
	cin >> FName;
	cout << "Enter name the second player: ";
	cin >> SName;
	bool ch;
	cout << "0 - Player vs Player\n1 - Player vs AI\nEnter change: ";
	cin >> ch;
	do
	{
		Player(board, count, row, column, FName, SName);
		Logic(board, FName, SName);
		count++;
		if (ch == 1)
			Player(board, count, row, column, FName, SName);
		else
			AIPlayer(board, count, row, column, SName);
		Logic(board, FName, SName);
		count++;
	} while (row != 123 || column != 123);
}