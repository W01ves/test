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
//	int count = 0;//����
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//����
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//			count++;
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}



//int main()
//{ 
//	int a;
//	if (a)                  //���aΪ��  ��ӡhehe
//	{
//		printf("hehe\n");
//	}
//	if (!a)                  //!-�߼���������    ���aΪ��  ��ӡhaha
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	char c = 'c';
//	char* p = &c;                         // p ָ������洢'c'�ĵ�ַ   
//	printf("%d\n", sizeof(p));            //   ָ�����ռ4/8���ֽ�
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
//	printf("%d\n", sizeof(ch));//(4)      //���鴫�� ��������Ԫ�صĵ�ַ ����ָ�������գ����chΪ4/8���ֽ�
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
//	i = a++ && ++b && d++;        //�߼�����  �����������Ϊ��   �ұ߾Ͳ���������
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
//	i = a++||++b||d++;                   //�߼�����  �����������Ϊ��   �ұ߾Ͳ���������
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
//	test2("hello bit.");//ʵ�ã�����Ϊ�������ò�������
//	return 0;
//}


//struct stu
//{
//	//��Ա����
//	char mame[20];
//	int age;
//	char id[20];
//};

//int main()	
//{
//	struct stu s1 = { "����" , 19, "sx2000001" };
//	printf("%s\n", s1.id);                      //�ṹ��.��Ա��
//
//	struct stu* p = &s1;
//	printf("%s\n", (*p).id);
//	printf("%s\n", p->id);                   // -> ��߽ṹ��ָ�룬�ұ߳�Ա��      �ṹ��ָ��->��Ա��
//	return 0;
//}



//
//int main()
//{
//	char a = 3;
//	//00000011 - a
//	//0000000000000000000000000000000011  ��������
//	char b = 127;
//	//01111111 - b
//	//0000000000000000000000000001111111   ��������
//
//	//a b������
//	//0000000000000000000000000000000011
//	//0000000000000000000000000001111111
//	//0000000000000000000000000010000010
//
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010   - ����
//	//11111111111111111111111110000001   - ����
//	//10000000000000000000000001111110   -ԭ��
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
//	printf("%d\n", answer);//������٣�
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

  
////////����int��32λ�������Ķ����Ʊ���У��ж��ٸ�λ��ͬ//////////
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




// �Ż�
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




///////ͳ�ƶ�������1�ĸ���////////
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
//	for (i = 0; i < 100; ++i)         //��ʼ��arr
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 100; ++i)
//	{
//		j = i - 1;                     //�չ�0��1��2
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
//			printf("%d������\n", arr[j]);
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







