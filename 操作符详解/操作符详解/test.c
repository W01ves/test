#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}


//void print(int a)
//{
//	if (a>9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//
//int main()
//{
//
//	int a = 1234;
//	print(a);
//	return 0;
//
//}




//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int count = 0;//计数
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}



//int main()
//{ 
//	int a;
//	if (a)                  //如果a为真  打印hehe
//	{
//		printf("hehe\n");
//	}
//	if (!a)                  //!-逻辑反操作符    如果a为假  打印haha
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	char c = 'c';
//	char* p = &c;                         // p 指针变量存储'c'的地址   
//	printf("%d\n", sizeof(p));            //   指针变量占4/8个字节
//	printf("%d\n", sizeof(c));        
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}



//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)      //数组传参 传的是首元素的地址 ，用指针来接收，因此ch为4/8个字节
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;        //逻辑与中  如果左边算出来为假   右边就不继续运算
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);             //   1 2 3 4 
//	return 0;
//}                                  

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;        
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);             // 2 3 3 5
//	return 0;                        
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++||++b||d++;                   //逻辑或中  如果左边算出来为真   右边就不继续运算
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);           // 1 3 3 4
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	c=(a > b ?  a :  b);
//	printf("%d", c);
//	return 0;
//}


//void test2(char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}


//struct stu
//{
//	//成员变量
//	char mame[20];
//	int age;
//	char id[20];
//};

//int main()	
//{
//	struct stu s1 = { "张三" , 19, "sx2000001" };
//	printf("%s\n", s1.id);                      //结构体.成员名
//
//	struct stu* p = &s1;
//	printf("%s\n", (*p).id);
//	printf("%s\n", p->id);                   // -> 左边结构体指针，右边成员名      结构体指针->成员名
//	return 0;
//}



//
//int main()
//{
//	char a = 3;
//	//00000011 - a
//	//0000000000000000000000000000000011  整型提升
//	char b = 127;
//	//01111111 - b
//	//0000000000000000000000000001111111   整型提升
//
//	//a b如何相加
//	//0000000000000000000000000000000011
//	//0000000000000000000000000001111111
//	//0000000000000000000000000010000010
//
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010   - 补码
//	//11111111111111111111111110000001   - 反码
//	//10000000000000000000000001111110   -原码
//	printf("%d", c);
//
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}


//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3};
//	short* p = (short*)arr;
//	int sz = *(p+2);
//	printf("%d", sz);
//	return 0;
//}

  
////////两个int（32位）整数的二进制表达中，有多少个位不同//////////
//int main()
//{
//	int a = 10;
//	int b = 16;
//	int m, n, i;
//	int count = 0;
//	for ( i = 1; i < 32; i++)
//	{
//		m = a & 1;
//		n = b & 1;
//		if (m != n)
//		{
//			count++;
//		}
//		a = a >> 1;
//		b = b >> 1;
//	}
//	printf("%d", count);
//
//	return 0;
//}




// 优化
//int main()
//{
//	int m, n, p, count=0;
//	scanf("%d%d", &m, &n);
//	p = m ^ n;
//	while (p)
//	{
//		p = p & (p - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}




///////统计二进制中1的个数////////
//int main()
//{
//	int a = -1;
//	int i, count=0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (a & (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	int odd[16] = { 0 }, even[16] = { 0 };
//	int i,num = 0;
//	scanf("%d", &num);
//	for ( i = 0; i < 16; i++)
//	{
//		odd[i] = num & 1 ;
//		num = num >> 1;
//		even[i] = num & 1;
//		num = num >> 1;
//	}
//	for ( i = 15; i >= 0; i--)
//	{
//		printf("%d", odd[i]);
//		printf("%d", even[i]);
//	}
//	
//	return 0;
//}


//void print(int* arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d ", *arr);
//		arr++;
//		printf("%p ", arr);
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}



//int main()
//{
//	int i = 9;
//	int j = 0;
//	int arr[100];
//	int count = 0;
//	for (i = 0; i < 100; ++i)         //初始化arr
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 100; ++i)
//	{
//		j = i - 1;                     //空过0、1、2
//		while (j > 1)
//		{
//			if (arr[i] % j == 0)
//				arr[i] = 0;
//			j = j - 1;
//		}
//	}
//	for (j = 1; j < 100; ++j)
//	{
//		if (arr[j] != 0)
//		{
//			printf("%d是素数\n", arr[j]);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}


//void table(int n)
//{
//	int i, j;
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ",j,i,i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	table(n);
//	return 0;
//}



//int digitsum(unsigned int n)
//{
//	if(n>9)
//	{
//		return n % 10 + digitsum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int m = digitsum(n);
//	printf("%d", m);
//	return 0;
//}


////n de k cifang ////

//int E(int n, int k)
//{
//	if (k>0)
//	{
//		return n * E(n, k - 1);
//	}
//	//else if (k<0)
//	//{
//	//	return (1.0/n)* E(n, k + 1);
//	//}
//	else
//	{
//		return 1.0;
//	}
//}
//
//int main()
// {
//	int n, k;
//	scanf("%d%d", &n, &k);
//	int value=E(n, k);
//	printf("%d", value);
//	return 0;
//}


//double E(double n, double k)
//{
//	if (k > 0)
//	{
//		return n * E(n, k - 1);
//		
//	}
//	else if (k<0)
//	{
//		double z = (1.0/n)* E(n, k + 1);
//		return z;
//	}
//	else
//	{
//		return 1.0;
//	}
//}
//
//int main()
//{
//	double n=0, k=0;
//	scanf("%lf%lf", &n, &k);
//	double value = E(n, k);
//	printf("%lf", value);
//	return 0;
//}







