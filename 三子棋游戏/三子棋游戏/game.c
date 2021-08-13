#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//��������
void init_board(char board[ROW][COL], int row, int col)         //��ʼ������
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


void display_board(char board[ROW][COL])        //��ӡ����
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



void playermove(char board[ROW][COL])          //�������
{
	int x = 0, y = 0;
	do
	{
		printf("���������\n");
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
				printf("��λ���Ѿ����ӣ�����������\n");
			}
		}
		else
		{
			printf("�����������������\n");
		}
	} while (1);
}


void computermove(char board[ROW][COL])
{
	int x = 0, y = 0;
	do
	{
		printf("��������\n");
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
	return 1;         //��������
}


char Iswin(char board[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)          //�ж� �� ��������ʤ������
	{

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < COL; i++)           //�ж� �� ��������ʤ������
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') //�ж϶Խ���������ʤ������
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	if (1 == Isfull(board))         //��������
	{
		return 'P';
	} 
	return 'C';         //������Ϸ
}