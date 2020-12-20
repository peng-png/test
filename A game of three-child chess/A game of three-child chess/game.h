#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//声明
void InitBoard(char board[ROW][COL], int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//告诉我们四种游戏状态
//玩家赢'*'
//玩家赢'#'
//玩家赢'Q'
//玩家赢'C'

char IsWin(char board[ROW][COL], int row, int col);