#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ö�ٹؼ�- enum
enum SEX
{
	male,
	female,
	secret
};
//male female secret -ö�ٳ���

int main()
{
	enum Sex s = female;
	printf("%d\n", s);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}








//#define�����ʶ������

//#define MAX 10    
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}



/*

////const -������   const���εĳ�����

int main()
{
	////const -������   const���εĳ�����
	
	
	const int n = 10;  //n�Ǳ����������г����ԣ��������ϻ��Ǳ���
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