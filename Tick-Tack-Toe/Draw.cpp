#include <iostream>
using namespace std;

#define ROWS 3 
#define COLUMNS 3

void Draw(char board[ROWS][COLUMNS])
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << " " << board[i][j];
		cout << endl;
	}
}