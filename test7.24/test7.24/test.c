#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	char arr1[] = "abc";    //����    //"abc" --'a','b','c''\0'--  ��\0���ַ����Ľ�����־����������
//	char arr2[] = { 'a','b','c' }                   //"";                       //���ַ���
//	char arr2[] = { 'a','b','c',0 };           //��\0' -0   'a'- 97   'A'-65      ASCII ֵ
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%d\n", strlen(arr1));     // strlen -�����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}




//ת���ַ�-ת��ԭ������˼
//int main()
//{
//	printf("abcn");
//	printf("abc\n");             //  \n- ����
//	printf("abcn");
//	return 0;
//}



//int main()
//{
//	printf("c:\code\test.c\n");    //   \t ˮƽ�Ʊ��
//	printf("c:\\code\\test.c\\n");
//	return 0;
//}



//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", "t");          //????
//	printf( "a");
//	printf("%c\n", '\'');         // \' -���ڱ�ʾ�ַ�����'
//	printf("%c\n", '\"');
//	printf("%s\n", "\"");
//	printf("%c\n", "\"");
//	return 0;
//}



int main()
{
	printf("c:\test\132\tect.c\n");
	printf("%d\n", strlen("c:\test\32\tect.c"));    //  \32��2���˽�������
	                                                //   32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	                                                //   32 --- >  ʮ���� 26  ---->   ��ΪASCII��ֵ������ַ�--->

	return 0;
}



