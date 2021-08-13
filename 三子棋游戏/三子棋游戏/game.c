#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//函数定义
void init_board(char board[ROW][COL], int row, int col)         //初始化棋盘
{ 
	int i, j;
	for ( j = 0; j < col; j++)
	{
		for ( i = 0; i < row; i++)
		{
			board[i][j] = ' ';
		}
	}

}


void display_board(char board[ROW][COL])        //打印棋盘
{
	int i ,j ;
	for (j = 0; j < ROW; j++)
	{

		for (i = 0; i < COL; i++)
		{
			printf(" %c ", board[j][i]);
			if (i <COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (j< ROW - 1)
		{

			for (i = 0; i < COL; i++)
			{
				printf("---");
				if (i < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	
}



void playermove(char board[ROW][COL])          //玩家下棋
{
	int x = 0, y = 0;
	do
	{
		printf("玩家请下棋\n");
		scanf("%d%d", &x, &y);
		if (x <= ROW && y <= COL && x>=1 && y>=1)
		{
			if(board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				display_board(board);
				break;
			}
			else
			{
				printf("该位置已经有子，请重新输入\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (1);
}


void computermove(char board[ROW][COL])
{
	int x = 0, y = 0;
	do
	{
		printf("电脑下棋\n");
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'o';
			display_board(board);
			break;
		}
	} while (1);
}


int Isfull(char board[ROW][COL])
{
	int i, j;
	for (j = 0; j < COL; j++)
	{
		for (i = 0; i < ROW; i++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
			
		}
	}
	return 1;         //棋盘满了
}


char Iswin(char board[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)          //判断 行 有无满足胜利条件
	{

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < COL; i++)           //判断 列 有无满足胜利条件
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') //判断对角有无满足胜利条件
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	if (1 == Isfull(board))         //棋盘满了
	{
		return 'P';
	} 
	return 'C';         //继续游戏
}