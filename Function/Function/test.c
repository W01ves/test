#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
int main()
{
	char str1[] = "bit";
	char str2[40]; "##########";       
	char str3[40];
	strcpy(str2, str1);                    //拷贝后bit后面的\n也会拷贝过去。\n为字符串结束标志
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}
*/





/*
// memset- memory set 内存设置      void * memset ( void * ptr, int value, size_t num );
int main()
{                                            
	char arr[] = "hello world";               
	memset(arr, 42, 5);                     // value 可以直接填写字符的ascii码值
	memset(arr, '*', 5);                    //也可以填字符，字符存储的是ascii码值，满足int
	printf("%s\n", arr);

	return 0;

}
*/



//形参和实参
/*

void Swap1(int x, int y)            //主函数a，b的值进入函数，但函数内x，y交换后，与主函数中的a，b没有关系，因此该函数不能交换a、b的值
{                   
	int tmp = 0;                    //当实参传给形参的时候，形参其实是实参的一份临时拷贝
	tmp = x;                        // 对形参的修改是不会改变实参的
	x = y; 
	y = tmp;
}
void Swap2(int *px, int *py)          //px为指针变量，即将a的地址放入px，（px本身也占一定内存单元，也有地址）
{
	int tmp = 0; 
	tmp = *px;                        //*解引用      *px=1，即num1的值
	*px = *py;               
	*py = tmp;
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	//调用函数   传值调用
	Swap1(num1, num2);
	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
	//调用函数    传址调用              //需要在函数内部直接操作函数外部的变量时，需要用传址调用
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
	return 0;
}
*/




///////////////////////练习////////////////////
//判断是否为素数
/*
int Su(int x)
{
	int i = 2;
	for ( i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
		{
			return 0;
			break;
		}
	}
	if (i > sqrt(x))              //程序到这只有两种情况 1.break了，ii <= sqrt(x）
		return 1;                           //                     2.for循环结束，并未被break中止，此时i= sqrt(x）+1
}


int main()
{
	int a = 0;
	scanf("%d", &a);       //输入任意数
	if (Su(a) == 1)
	{
		printf("是素数");
	}
	else
	{
		printf("不是素数");
	}
	
	           
	return 0;
}
*/




//实现有序数组的二分查找
/*
int arr[] = { 1,2,3,4,5,6,7,8,9 };        //全局变量
int F(int x)
{
	
	int P = 0;
	int L = 0;
	int R = sizeof(arr) / sizeof(arr[0]) - 1; 
	
	while (L<=R)
	{
		int mid = (L + R) / 2;
		if (x > arr[mid])
		{
			L = mid+1;
		}
		else if (x < arr[mid])
		{
			R = mid-1;
		}
		else
		{
			return mid;
		}
	}
	if (L>R)
		return -1;
}


int main()
{
	
	int a = 0;

	scanf("%d",&a);          //输入1-9的数字
	int m = F(a);                              //数组传参只传数组第一个元素的地址
	if (m==-1)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了，下标为：%d", m);        //
	}
	return 0;
}
*/

//方法二

 /*
int F(int arr[],int x, int sz)            //本质上 这里的arr是一个指针 
{
	int P = 0;
	int L = 0;
	int R = sz;
	while (L <= R)
	{
		int mid = (L + R) / 2;
		if (x > arr[mid])
		{
			L = mid + 1;
		}
		else if (x < arr[mid])
		{
			R = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (L > R)
		return -1;
}

int main()
{
	int a = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 }; 
	int sz= sizeof(arr) / sizeof(arr[0]) - 1;         // 数组传参只传数组第一个元素的地址
	scanf("%d", &a);                          //输入1-9的数字
	int m = F(arr,a,sz);                       
	if (m == -1)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了，下标为：%d", m);        
	}
	return 0;
}
*/





/*
//每调用一次这个函数，就会将num的值增加1
void function(int *p)
{
	(*p)++;             //不能写*p++，++的优先级比*高，因此要写为(*p)++ 或者++*p
	//++*p;
}
 
int main()
{
	int num = 0;
	int i = 0;
	while (i < 3)
	{
		i++;
		function(&num);
	}
	printf("%d", num);
	return 0;
}
*/


/*
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//结果是啥？
	//注：printf函数的返回值是打印在屏幕上字符的个数
	return 0;
}
*/



//////函数递归/////


//int main()
//{	
//	printf("hehe");
//	main();
//	return 0;
//}



#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}



//int my_strlen(char* str)          //本质上 这里的定义的str是一个指针变量，其存储的是一个地址   或者写 char str[]
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;                  //指针存放的是地址 ，地址+1即为第二个元素的地址    （数组中各元素的地址是连续的  ）
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);   // arr数组  数组传参 ，传过去的是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}


//递归

//int my_strlen(char* str)          //本质上 这里的定义的str是一个指针   或者写 char str[]
//{
//	if   (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//	return str;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);   // arr数组  数组传参 ，传过去的是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}





///////////pdf练习题////////////
// 接受一个整型值（无符号），按照顺序打印它的每一位

//void print( int x)
//{
//	
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "abcdef" ;
//	int len = my_strlen(arr);
//	printf("len = %d ", len);
//	return 0;
//}


//int FAC(int n)
//{
//	int i = 0;
//	int m = 1;
//	if (n > 0)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			m = m * i;
//		}
//		return m;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int x = 30;
//	printf("%d", FAC(x));
//	return 0;
//}




///////////汉诺塔问题/////////////
//void Hanoi(int n, char A ,char B, char C)
//{
//	if (n>0)
//	{
//		Hanoi(n - 1, A, C, B);
//		printf("%c ---> %c\n",A,C );
//		Hanoi(n - 1, B, A, C);
//	}
//	
//}
//
//int main()
//{
//	
//	int n = 4;
//	Hanoi(n,'A','B','C');
//	return 0;
//}



///////////青蛙跳台阶问题/////////// 其实就是斐波那契数

//递归法
//int Fibonacci(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n==2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 30;
//	int sum = Fibonacci(n);
//	printf("%d\n", sum);
//	return 0;
//}


//迭代法
//int Fibonacci(int n)
//{
//	int m = 2,i =0;
//	int k = 1;
//	if (n == 1)
//		return 1;
//	else if (n==2)
//		return 2;
//	else
//	{
//		for ( i = 3; i <= n ; i++)
//		{
//			m = m + k;
//			k = m - k;
//		}
//		return m;
//	}
//	
//}
//
//int main()
//{
//	int n = 50;
//	int sum = Fibonacci(n);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//    int a;
//	double b ;
//	a = 300;
//	b = (5.0 / 9.0)*(a-32);
//	printf("%f", b );
//	return 0;
//}



