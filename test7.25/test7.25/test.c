#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
int main()
{
	int coding = 0;
	printf("你会xxx吗\n(1/0) >:");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("牛逼啊");
	}
	else
	{
		printf("要饭去吧");
	}


	return 0;
}

*/



/*
int main()
{
	printf("加入比特\n");
	int line = 0;
	while (line <= 20000)
	{
		line++;
		printf("我要继续努力敲代码:%d\n",line);
	}
	if (line > 20000)
		printf("赢取白富美\n");
	return 0;
}
*/



/*
int ADD(int x, int y)     //加法函数
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
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};   //定义一个存放是个整型数字的数组
	printf("%d\n", arr[4]);                //下标访问元素
	return 0;
}


/*
int main()
{
	int a = 1;
	int b=a << 1;    //二进制序列向左移动一位  
	printf("%d", b);
	return 0;
}
*/



/*
int main()
{
	int a =3 ;
	int b = 5; 
	int c = a & b;    //按位与
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
	int MAX=(a > b ? a : b);                //求最大值
	printf("MAX = %d\n", MAX);
	return 0;
}
*/








/*
int main()
{
	int a = 0;
	int b = ~a;
	// ~-按二进制位取反
	//00000000000000000000000000000000      第一位代表的是正负号
	//11111111111111111111111111111111
	//原码、反码、补码
	//负数在内存中储存事，储存的是二进制的补码
	//11111111111111111111111111111111   补码
	//11111111111111111111111111111110   反码
	//10000000000000000000000000000001   原码

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