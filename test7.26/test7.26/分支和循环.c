#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}
*/


/*
                                   //输出1-100之间的技奇数
int main()
{
	int i = 0;
	for (i = 0; i < 101; i++)
	{
		if (i%2!=0)
			printf("%d ", i);
	}
	return 0;
}
*/




/*
//switch代码演示
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期3");
		break;
	case 4:
		printf("星期4");
		break;
	case 5:
		printf("星期5");
		break;
	case 6:
		printf("星期6");
		break;
	case 7:
		printf("星期7");
		break;
	default:
		break;
	}

	return 0;
}
*/




/*
//while循环
int main()
{
	int i = 0;
	while (i<10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d\n",i);
		
	}
	return 0;
}
*/

/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)    //EOF - end of file - 值是-1
		putchar(ch);
	return 0;
}
*/



//密码输入
/*
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);  // password 是数组名，不需要加&符号。 scanf只能读取空格和/n前面的数据
	//getchar();              //此处会读取输入密码后按的回车换行'/n'        getchar一次只能读取一个字符
	while (ch = getchar() != '\n')
	{
		;
	}
	printf("请确认（Y/N）");
	ret = getchar();
	if (ret=='Y')
	{
		printf("确认成功");
	}  
	else
	{
		printf("确认失败");
	}

	return 0;
}
*/



/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
		
	}
	return 0;
}
*/






//for循环

/*
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
*/


/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;                    //进入i=4的死循环

	}
	return 0;
}
*/


/*
int main()
{
	for (;;)
	{
		printf("hehe");
	}
	return 0;

}
*/


/*
int main()
{

	int i = 0;
	printf("%d\n", i++);
	printf("%d\n", i);
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	int k = 0; 
	for (i = 0, k = 0; k = 0; i++, k++)     //  判断语句为k=0， 表达式结果为0，即为假 ，不进入循环；若k=1（表达式结果为非0，则死循环）
		k++;

	return 0;
}
*/






//do-while 
/*
int main()
{
	int i = 0;
	do
	{
		i++;
		printf("%d\n", i);
	} while (i<10);
	return 0;
}
*/




///////////////////练习题//////////////////////

//n的阶乘
/*
int main()
{
	int i, n, m;
	scanf("%d", &n);
	for ( i = 1,m=1; i <= n; i++)
	{
		m = m * i;
	}
	printf("%d", m);
	return 0;
}
*/


/////阶乘累加//////
/*
int F(int x)                    //阶乘函数
{
	int i, m;
	for (i = 1, m = 1; i <= x; i++)
	{
		m = m * i;
	}
	return m;
}

int main()
{
	int i,n,f;
	scanf("%d", &n);
	for ( i = 1,f=0; i <= n; i++)
	{
		f = f + F(i);
	}
	printf("%d\n", f);
	return 0;
}
*/

/*
int main()
{
	int i, j, n, f, m;
	scanf("%d", &n);
	for (i = 1, f = 0; i <= n; i++)
	{
		for (j = 1, m = 1; j <= i; j++)
		{
			m = m * j;
		}
		f = f + m;
	}
	printf("%d\n", f);
	return 0;
}
*/


/*
//优化 
int main()
{
	int i, j, n, f, m;
	scanf("%d", &n);
	for (i = 1, f = 0,m = 1; i <= n; i++)
	{
		m = m * i;
		f = f + m;
	}
	printf("%d\n", f);
	return 0;
}
*/



//////查找有序数组中的数字////////
/*
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
	int i = 0, k = 0;
	//scanf("%d", &k);
	for (i = 0; i <10; i++)
	{
		if (arr[i] == k)
		{
			printf("%d\n", i);
			break;
		}
	}
	if (i>=10)	
	{
		printf("zhaobudao");
	}
	return 0;

}
*/


/*
int binary_search(int x, int v[])
{
	int i,z;
	for ( i = 0; i < 11; i++)
	{
		if (v[i] == x)
		{
			z = i;
			break;
		}
	}
	return z;
}


int main()
{
	int a,f;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf("%d", &a);
	f = binary_search(a, arr);
	printf("%d", f);
	return 0;
}

*/




//折半法
/*
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int L = 0;
	int R = sz - 1;
	while (L<=R)
	{
		if (arr[(L + R) / 2] < k)
		{
			L = (L + R) / 2 + 1;
		}
		else if (arr[(L + R) / 2] > k)
		{
			R = (L + R) / 2 - 1;
		}
		else
		{
			printf("找到了，下标为：%d", (L + R) / 2);
			break;
		}
	}
	if (L>R)
	{
		printf("没找到");
	}
	return 0;
}
*/




//利用数组下标，演示多个字符从两端移动，向中间汇聚
/*
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{ 
	char arr1[] = "welcome to bit!!!!!!";     //字符数组    char arr[]="abc"   -->   [a b c \n]
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;   //字符串后面自动补充\n
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);                //延迟1s
		system("cls");              //清空屏幕
	}

	return 0;
}
*/



/*
#include <string.h>
int main()	
{
	int i, n = 1;
	char arr1[] = "a123456";
	char password[] = { 0 };
	int sz = strlen(arr1) - 1;
	printf("请输入密码：\n");
	while (n<=3)
	{
		
		scanf("%s", password);
		
		if (strcmp(password , "123456")==0)         //等号不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("密码正确!");
			break;
		}
		else
		{
			if(n<=2)
				printf("密码错误，请重新输入：\n");

		}
		n++;
	}
	if (n==4)
	{
		printf("一小时之后再试!\n");
	}

	return 0;

}
*/

//从大到小输出
/*
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a>b)
	{
		if (c>a)
		{
			printf("%d,%d,%d", c, a, b);
		}
		else
		{
			if (c>b)
			{
				printf("%d,%d,%d", a, c, b);
			}
			else
			{
				printf("%d,%d,%d", a, b, c);
			}
		}
	}
	else
	{
		if (c > b)
		{
			printf("%d,%d,%d", c, b, a);
		}
		else
		{
			if (c > a)
			{
				printf("%d,%d,%d", b, c, a);
			}
			else
			{
				printf("%d,%d,%d", b, a, c);
			}
		}
		
	}
	
	return 0;
}
*/




//冒泡法
/*
int main()
{
	int i,j=0,l, tem;
	int arr[] = { 5,6,8,2,3,1,4,7,9,58,69 ,12};
	int sz = sizeof(arr) / sizeof(arr[0]) ;
	while (j < sz-1)                                       //最多需要冒泡循环sz-1次
	{

		for (i = 0; i < sz-1; i++)                       //一次冒泡，
		{
			if (arr[i] > arr[i + 1])
			{
				tem = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tem;
			}
		}
		j++;
	}
	for (l = 0; l < sz; l++)
	{
		printf("%d ", arr[l]);
	}
	return 0;

}
*/




/*
//辗转相除法   求最大公约数
int main()
{
	int m=0,n=0,r=0;
	scanf("%d%d",&m,&n);
	while (r = m%n)               //m%n为0 时为假，停止循环
	{	
		//r = m % n;
		m = n;
		n = r;
	}
	printf("%d", n);

	return 0;
}
*/







//打印100-200之间的素数
/*
int main()
{
	int i = 0, j = 0,m=0;
	for ( i = 100; i <=200; i++)
	{
		for ( j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break;
			}
			else if (i%j != 0 && j == i - 1)
			{
				m = i;
				printf("%d ", m);
		
			}
			else if (i%j!=0)
			{
				continue;
			}
			
		}
		
	}

	return 0;
}
*/

#include <math.h>

////优化////
/*
#include <math.h>
int main()
{
	int i = 0, j = 0, m = 0;
	for (i = 101; i <= 200; i+=2)             //偶数不是素数
	{
		for (j = 2; j <= sqrt(i); j++)       //sqrt 开平方
		{
			if (i%j == 0) 
			{
				break;
			}	
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}

	}

	return 0;
}

*/



// 1-100得所有整数中出现多少个数字9
/*
int main()
{	
	int i = 0;
	int count = 0;
	for ( i = 1; i < 100; i++)
	{
		if (i % 10 == 9)                //个位9
		{
			count++;
		}
		if (i / 10 == 9)                //十位9
		{
			count++;
		}
		
	}
	printf("%d", count);


	return 0;
}
*/


// 1-1000得所有整数中出现多少个数字9
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 1000; i++)
	{
		if (i % 100 %10 == 9)                //个位9
		{
			count++;
		}
		if (i % 100 / 10== 9)                //十位9
		{
			count++;
		}
		if (i  /100== 9)                //百位9
		{
			count++;
		}

	}
	printf("%d", count);


	return 0;
}
*/



// 1-1/2+1/3-1/4+....-1/100
/*
int main()
{
	int i = 0;
	double m = 0;
	for ( i = 1; i < 101; i++)
	{
		double z = pow(-1, i - 1);
		m = m + 1 / (i*z);

	}
	printf("%f", m);
	return 0;
}
*/


//乘法口诀表


/*
int main()
{
	int i = 0, j = 0, m;
	for ( i = 1; i < 10; i++)
	{
		
		for ( j = 1; j <= i; j++)
		{
			m = j * i;
			printf("%d*%d=%-2d ", j, i, m);
			
		}
		printf("\n");
	}

	return 0;
}
*/







//猜数字游戏
#include <windows.h>
#include <stdlib.h>
#include <time.h>
/*
void menu()
{
	printf("**************************\n");
	printf("***** 1.play  0.exit *****\n");
	printf("**************************\n");
}
void game()
{
	int num;
	printf("三秒后开始游戏\n");
	//printf("3\n");
	//Sleep(1000);
	//printf("2\n");
	//Sleep(1000);
	//printf("1\n");
	//Sleep(1000);
	int ret = rand()%100+1;                    //rand()函数返回一个在零到RAND_MAX（32767） 之间的伪随机整数)
	                                            //怎么使随机数在0-100             任何数%100  得成0-99的数
	
	printf("请输入你猜的数字\n");
	
	while (1)
	{
		scanf("%d", &num);
		printf("我猜是：%d\n", num);
		if (num > ret)
		{
			printf("大了,请继续\n");
		}
		else if (num < ret)
		{
			printf("小了，请继续\n");
		}
		else
		{
			printf("猜中了\n");
			break;
		}
	}

}

int main()
{
	int input;
	srand(time(NULL));             //引入时间戳，当前时间减去计算机的起始时间（1970.1.1.0：0：0）=（xxx）秒
	do                            //srand()设置rand()随机序列种子。对于给定的种子seed, rand()会反复产生特定的随机序列。
	{                 
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请正确输入：（0/1）\n");
			break;
		}
	} while (input);


	return 0;
}
*/
 







