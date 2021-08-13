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
	init_board(board, ROW, COL);             //��ʼ������
	display_board(board);                    //��ӡ����
	//����
	do
	{
		playermove(board);             //�������
		ret = Iswin(board);
		if (ret != 'C')
		{
			break;
		}
		computermove(board);           //��������
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
		printf("ƽ��\n");
	}

}


void test()
{
	srand(time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);

}

int main()
{
	test();
	return 0;
}