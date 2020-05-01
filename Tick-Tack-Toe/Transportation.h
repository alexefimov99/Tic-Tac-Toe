#ifndef TRANS
#define TRANS
#define ROWS 3 
#define COLUMNS 3

void Draw(char board[ROWS][COLUMNS]);
void Player(char board[ROWS][COLUMNS], int count, int row, int column, char *FName, char *SName);
void AIPlayer(char board[ROWS][COLUMNS], char *SName);
void Logic(char board[ROWS][COLUMNS], char *FName, char *SName);

#endif