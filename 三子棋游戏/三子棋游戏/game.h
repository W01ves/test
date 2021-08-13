#define ROW 3
#define COL 3
#define Condition 3       //胜利所需 n 连个数

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数申明
void init_board(char board[ROW][COL], int row, int col);    

void display_board(char board[ROW][COL]);

void playermove(char board[ROW][COL]);

void computermove(char board[ROW][COL]);

char Iswin(char board[ROW][COL]);