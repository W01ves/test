#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
int main()
{
	char a = 'A';              //a存的是字符
	printf("%c\n",a);
	int b = 'A';               //b存的是字符代表的ASCII码
	printf("%d\n", b);
	return 0;
}



int main()
{
	//char a = "abc";    //  错误编程，字符串abc占4个字节，而a只占一个字节，会产生截断，应用数组存储。或者用指针
	char arr[] = "abc";
	printf("%s\n", arr);

	char*a = "abc";
	printf("%s", a);

	return 0;
}