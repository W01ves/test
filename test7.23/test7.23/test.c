#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//枚举关键- enum
enum SEX
{
	male,
	female,
	secret
};
//male female secret -枚举常量

int main()
{
	enum Sex s = female;
	printf("%d\n", s);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}








//#define定义标识符常量

//#define MAX 10    
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}



/*

////const -常属性   const修饰的常变量

int main()
{
	////const -常属性   const修饰的常变量
	
	
	const int n = 10;  //n是变量，但具有常属性，但本质上还是变量
	int arr[10] = { 0 };
	


	//const int num = 4;
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	return 0;
}

*/




//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}