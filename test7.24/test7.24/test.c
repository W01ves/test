#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	char arr1[] = "abc";    //数组    //"abc" --'a','b','c''\0'--  ‘\0’字符串的结束标志，不算内容
//	char arr2[] = { 'a','b','c' }                   //"";                       //空字符串
//	char arr2[] = { 'a','b','c',0 };           //‘\0' -0   'a'- 97   'A'-65      ASCII 值
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%d\n", strlen(arr1));     // strlen -计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}




//转义字符-转变原来的意思
//int main()
//{
//	printf("abcn");
//	printf("abc\n");             //  \n- 换行
//	printf("abcn");
//	return 0;
//}



//int main()
//{
//	printf("c:\code\test.c\n");    //   \t 水平制表符
//	printf("c:\\code\\test.c\\n");
//	return 0;
//}



//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", "t");          //????
//	printf( "a");
//	printf("%c\n", '\'');         // \' -用于表示字符常量'
//	printf("%c\n", '\"');
//	printf("%s\n", "\"");
//	printf("%c\n", "\"");
//	return 0;
//}



int main()
{
	printf("c:\test\132\tect.c\n");
	printf("%d\n", strlen("c:\test\32\tect.c"));    //  \32是2个八进制数字
	                                                //   32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符
	                                                //   32 --- >  十进制 26  ---->   作为ASCII码值代表的字符--->

	return 0;
}



