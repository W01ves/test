#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
	register int a = 10; //�����a����ɼĴ�������  
	

	return 0;
}
*/



/*
int main()
{
	typedef unsigned int u_int;    //�����ض���
	unsigned int num1 = 20;
	u_int num2 = 20;
	return 0;
}
*/


/*
void test()
{
	static int a = 1;      //static - static���ξֲ������ı��˱������������ڣ��þ�̬�ֲ�����������������Ȼ���ڣ�������������������ڲŽ���
	
	a++;
	printf("a = %d\n", a);
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}
*/



/*
//test.c
int main()
{
	extern int g_val;
	printf("%d\n", g_val);
	return 0;
}


int main()
{
	printf("%d\n", g_val);
	return 0;
}
*/



/*
//#define MAX 1000            //define�����ʶ������
#define MAX(x, y) (x>y?x:y)   //define�����

int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}
*/

/*
int main()
{
	int a = 10; 
	int* p = &a;               //ȡ��ַ    ��һ�ֱ�����������ŵ�ַ��-ָ�����   pΪһ������ָ�����
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%p\n", &p);
	*p = 20;                   //* - �����ò�����
	printf("%d\n", a);
	printf("%d\n", sizeof(p));  
	return 0;
}


int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'q';
	printf("%c\n", ch);
	return 0;
}
*/





/*
#include <string.h>

struct Str
{
	char name[20];
	int age;
	char sex[10];
	char id[10];

};
int main()
{
	struct Str s = { "����",20,"��","SX2000000" };
	printf("%s\n%d\n%s\n%s\n", s.name, s.age, s.sex, s.id);
	struct Str* p = &s;
	printf("%s\n", (*p).sex);
	printf("%s\n", p -> sex);
	s.age = 25;
	strcpy(s.name, "����");     //�ַ�������
	printf("%s\n", s.name);
	return 0;
}
*/
