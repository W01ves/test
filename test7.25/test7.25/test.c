#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
int main()
{
	int coding = 0;
	printf("���xxx��\n(1/0) >:");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("ţ�ư�");
	}
	else
	{
		printf("Ҫ��ȥ��");
	}


	return 0;
}

*/



/*
int main()
{
	printf("�������\n");
	int line = 0;
	while (line <= 20000)
	{
		line++;
		printf("��Ҫ����Ŭ���ô���:%d\n",line);
	}
	if (line > 20000)
		printf("Ӯȡ�׸���\n");
	return 0;
}
*/



/*
int ADD(int x, int y)     //�ӷ�����
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	sum=ADD(a, b);
	printf("%d\n", sum);

	return 0;
}
*/



/*
int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};   //����һ������Ǹ��������ֵ�����
	printf("%d\n", arr[4]);                //�±����Ԫ��
	return 0;
}


/*
int main()
{
	int a = 1;
	int b=a << 1;    //���������������ƶ�һλ  
	printf("%d", b);
	return 0;
}
*/



/*
int main()
{
	int a =3 ;
	int b = 5; 
	int c = a & b;    //��λ��
	printf("%d", c);
	return 0;
}
*/



/*
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", arr[4]);
	return 0;
}
*/



/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = MAX(a, b);
	printf("MAX = %d\n", c);
	return 0;
}
int MAX(int x, int y)
{
	int z = 0;
	if (x > y)
		return x;
	else
		return y;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);   
	int MAX=(a > b ? a : b);                //�����ֵ
	printf("MAX = %d\n", MAX);
	return 0;
}
*/








/*
int main()
{
	int a = 0;
	int b = ~a;
	// ~-��������λȡ��
	//00000000000000000000000000000000      ��һλ�������������
	//11111111111111111111111111111111
	//ԭ�롢���롢����
	//�������ڴ��д����£�������Ƕ����ƵĲ���
	//11111111111111111111111111111111   ����
	//11111111111111111111111111111110   ����
	//10000000000000000000000000000001   ԭ��

	printf("%d\n", b);
	
	return 0;

}
*/


/*
int main()
{
	int a = (int)3.14;

	return 0;

}
*/



int main()
{


	return 0;
}