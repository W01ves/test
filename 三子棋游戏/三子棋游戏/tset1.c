#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("********************************\n");
	printf("*******1.play     0.exit********\n");
	printf("********************************\n");
}


void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);             //初始化棋盘
	display_board(board);                    //打印棋盘
	//下棋
	do
	{
		playermove(board);             //玩家下棋
		ret = Iswin(board);
		if (ret != 'C')
		{
			break;
		}
		computermove(board);           //电脑下棋
		ret = Iswin(board);
		if (ret != 'C')
		{
			break;
		}
	} while (1);
	if (ret == '*')
	{
		printf("you win!\n");
	}
	if (ret == 'o')
	{
		printf("you lose!\n");
	}
	if (ret == 'P')
	{
		printf("平局\n");
	}

}


void test()
{
	srand(time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);

}

int main()
{
	test();
	return 0;
}