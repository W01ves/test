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
	strcpy(str2, str1);                    //������bit�����\nҲ�´����ȥ��\nΪ�ַ���������־
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}
*/





/*
// memset- memory set �ڴ�����      void * memset ( void * ptr, int value, size_t num );
int main()
{                                            
	char arr[] = "hello world";               
	memset(arr, 42, 5);                     // value ����ֱ����д�ַ���ascii��ֵ
	memset(arr, '*', 5);                    //Ҳ�������ַ����ַ��洢����ascii��ֵ������int
	printf("%s\n", arr);

	return 0;

}
*/



//�βκ�ʵ��
/*

void Swap1(int x, int y)            //������a��b��ֵ���뺯������������x��y���������������е�a��bû�й�ϵ����˸ú������ܽ���a��b��ֵ
{                   
	int tmp = 0;                    //��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
	tmp = x;                        // ���βε��޸��ǲ���ı�ʵ�ε�
	x = y; 
	y = tmp;
}
void Swap2(int *px, int *py)          //pxΪָ�����������a�ĵ�ַ����px����px����Ҳռһ���ڴ浥Ԫ��Ҳ�е�ַ��
{
	int tmp = 0; 
	tmp = *px;                        //*������      *px=1����num1��ֵ
	*px = *py;               
	*py = tmp;
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	//���ú���   ��ֵ����
	Swap1(num1, num2);
	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
	//���ú���    ��ַ����              //��Ҫ�ں����ڲ�ֱ�Ӳ��������ⲿ�ı���ʱ����Ҫ�ô�ַ����
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
	return 0;
}
*/




///////////////////////��ϰ////////////////////
//�ж��Ƿ�Ϊ����
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
	if (i > sqrt(x))              //������ֻ��������� 1.break�ˣ�ii <= sqrt(x��
		return 1;                           //                     2.forѭ����������δ��break��ֹ����ʱi= sqrt(x��+1
}


int main()
{
	int a = 0;
	scanf("%d", &a);       //����������
	if (Su(a) == 1)
	{
		printf("������");
	}
	else
	{
		printf("��������");
	}
	
	           
	return 0;
}
*/




//ʵ����������Ķ��ֲ���
/*
int arr[] = { 1,2,3,4,5,6,7,8,9 };        //ȫ�ֱ���
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

	scanf("%d",&a);          //����1-9������
	int m = F(a);                              //���鴫��ֻ�������һ��Ԫ�صĵ�ַ
	if (m==-1)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ��%d", m);        //
	}
	return 0;
}
*/

//������

 /*
int F(int arr[],int x, int sz)            //������ �����arr��һ��ָ�� 
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
	int sz= sizeof(arr) / sizeof(arr[0]) - 1;         // ���鴫��ֻ�������һ��Ԫ�صĵ�ַ
	scanf("%d", &a);                          //����1-9������
	int m = F(arr,a,sz);                       
	if (m == -1)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ��%d", m);        
	}
	return 0;
}
*/





/*
//ÿ����һ������������ͻὫnum��ֵ����1
void function(int *p)
{
	(*p)++;             //����д*p++��++�����ȼ���*�ߣ����ҪдΪ(*p)++ ����++*p
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
	//�����ɶ��
	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
	return 0;
}
*/



//////�����ݹ�/////


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



//int my_strlen(char* str)          //������ ����Ķ����str��һ��ָ���������洢����һ����ַ   ����д char str[]
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;                  //ָ���ŵ��ǵ�ַ ����ַ+1��Ϊ�ڶ���Ԫ�صĵ�ַ    �������и�Ԫ�صĵ�ַ��������  ��
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);   // arr����  ���鴫�� ������ȥ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}


//�ݹ�

//int my_strlen(char* str)          //������ ����Ķ����str��һ��ָ��   ����д char str[]
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
//	int len = my_strlen(arr);   // arr����  ���鴫�� ������ȥ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}





///////////pdf��ϰ��////////////
// ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ

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


//���ַ�������
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




///////////��ŵ������/////////////
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



///////////������̨������/////////// ��ʵ����쳲�������

//�ݹ鷨
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


//������
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



