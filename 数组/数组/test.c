#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "abc";                      // ������4��Ԫ�� a b c \0
//	char arr2[3] = { 'a','b','c' };           // ������3��Ԫ�� a b c
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3 };                 //����ȫ��ʼ��
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };              //��ȫ��ʼ��
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//	return 0;
//}

//
//int main()
//{
//	char arr6[] = "abcdef";
//	int arr1[10] = { 1,2,3 };
//	printf("%d\n", sizeof(arr1));          //sizeof ����arr��ռ�ռ�Ĵ�С    1���ַ�ռһ���ֽ�
//	printf("%d\n", sizeof(arr6));
//	printf("%d\n", strlen(arr6));          //strlen �����ַ�������  \0�����ַ������ݣ������볤��
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);        
//	}
//	return 0;
//}







/////////////��ά����///////////////

//��ʼ��

//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};          //һ�з���֮���ٷŵ���һ��
//	int arr1[3][4] = { {1,2},{3,4,5} };   
//	int arr2[][4] = { {2,3},{4,5} };     //��ά����ĳ�ʼ��ʱ���е��±��ǲ���ʡ�Ե�
//	return 0;
//}


//��ά�����ʹ��

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int i = 0, j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for  (j = 0; j < 4; j++)
//		{
//		printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��ά����Ĵ洢
//
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int i = 0, j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for  (j = 0; j < 4; j++)
//		{
//		printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////ð������/////
//void bubble_sort(int n,int arr[])
//{
//	int tmp = 0;
//	int i = 0,j=0;
//	for (j = 0; j < n; j++)               //n��Ԫ�أ���Ҫ����n-1��
//	{  
//		for (i = 0; i <n-1; i++)             //��������
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 54,12,69,635,6,-258,23,185,86,31,1,-5};
//	int n = sizeof(arr) / sizeof(arr[0]);     //  n��Ԫ��
//	bubble_sort(n,arr);
//	for ( i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////�Ż�1////
//void bubble_sort(int n, int arr[])
//{
//	int tmp = 0;
//	int i = 0, j = 0;
//	for (j = 0; j < n; j++)               //n��Ԫ�أ���Ҫ����n-1��
//	{
//		int flag = 1;                    //���������Ѿ��������
//		for (i = 0; i < n - 1; i++)             //��������
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag==1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 54,12,69,635,6,-258,23,185,86,31,1,-5 };
//	int n = sizeof(arr) / sizeof(arr[0]);     //  n��Ԫ��
//	bubble_sort(n, arr);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//////�Ż���/////

//void bubble_sort(int n, int arr[])
//{
//	int tmp = 0;
//	int i = 0, j = 0;
//	while (n != 0)
//	{
//		int pos = 0;
//
//		for (int j = 0; j < n; j++)            //n֮��Ŀɲ����ڽ�������
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				pos = j;                        //��¼ÿһ����ѭ�����һ�ν�����λ�ã�֮��Ŀɲ����ڽ�������
//			}
//		}
//		n = pos;                                //n֮��Ŀɲ����ڽ�������
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 54,12,69,635,6,-258,23,185,86,31,1,-5 };
//	int n = sizeof(arr) / sizeof(arr[0])-1;      //����±�
//	bubble_sort(n, arr);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//�Ż��� ˫��ð������///

//int main()
//{
//	int a[] = { 3,2,5,8,4,7,6,9 };
//	int i = 0;
//	int left = 0;
//	int n = sizeof(a) / sizeof(a[0]) - 1;
//	int right = n;
//	int temp;
//
//	while (left < right)
//	{
//		for (int i = left; i < right; i++)      //�ҵ���ǰ����Ԫ���������Ǹ��������Ҳ�
//		{         
//			if (a[i] > a[i + 1]) 
//			{
//				temp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = temp;
//			}
//		}
//		right--;
//
//		for (int j = right; j > left; j--)          //�ҵ���ǰ����Ԫ������С���Ǹ����������
//		{         
//			if (a[j] < a[j - 1]) 
//			{
//				temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//			}n 
//		}
//		left++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);                 //����������Ԫ�ص�ַ����һ��Ԫ�صĵ�ַ�����������������
//	printf("%p\n", arr+1);				 //��ַ����4
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);                //ȡ��������������ĵ�ַ 
//	printf("%p\n", &arr+1);              //��ַ����20 ��5*4��
//	  // 1. sizeof(������)��������������Ĵ�С��sizeof�ڲ�������һ������������������ʾ�������顣
//  	  //2. &��������ȡ����������ĵ�ַ��&����������������ʾ�������顣
//
//
//	int* str = arr;
//	printf("%p\n", str);
//	str++;                                   //arr++����д��
//	printf("%p\n", str);
//
//	return 0;
//}



//int my_strlen(char* str)           //������ ����Ķ����str��һ��ָ���������洢���Ǵ���������Ԫ�ص�ַ              ����д char str[]
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;                   //ָ���ŵ��ǵ�ַ ����ַ+1��Ϊ�ڶ���Ԫ�صĵ�ַ�������и�Ԫ�صĵ�ַ�������ģ��Ҵ˴�һ��Ԫ�ؼ�һ���ַ�ֻռһ���ֽڣ��ڴ���һ���ֽ�һ����ַ��  ��
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);                  // arr����  ���鴫�� ������ȥ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}


//void init(int arr[] , int n)
//{
//	int i = 0;
//	for ( i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//
//void reverse(int arr[],int n)
//{
//	int temp,i;
//	for ( i = 0; i < n/2; i++)
//	{
//		temp = arr[n-1-i];
//		arr[n -1- i] = arr[i];
//		arr[i] = temp;
//	}
//	
//}
//
//int main()
//{
//	int i;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	reverse(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}



//void swap(int arr1[], int arr2[], int n)
//{
//	int temp,i;
//	for ( i = 0; i < n; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	swap(arr1,arr2,sz);
//	for (i = 0; i < sz; i++)
//		{
//			printf("%d\n", arr1[i]);
//		}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}



