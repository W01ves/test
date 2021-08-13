#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "abc";                      // 分配了4个元素 a b c \0
//	char arr2[3] = { 'a','b','c' };           // 分配了3个元素 a b c
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3 };                 //不完全初始化
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };              //完全初始化
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
//	printf("%d\n", sizeof(arr1));          //sizeof 计算arr所占空间的大小    1个字符占一个字节
//	printf("%d\n", sizeof(arr6));
//	printf("%d\n", strlen(arr6));          //strlen 计算字符串长度  \0不算字符串内容，不计入长度
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







/////////////二维数组///////////////

//初始化

//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};          //一行放满之后再放到下一行
//	int arr1[3][4] = { {1,2},{3,4,5} };   
//	int arr2[][4] = { {2,3},{4,5} };     //二维数组的初始化时，列的下标是不能省略的
//	return 0;
//}


//二维数组的使用

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


////二维数组的存储
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


////冒泡排序/////
//void bubble_sort(int n,int arr[])
//{
//	int tmp = 0;
//	int i = 0,j=0;
//	for (j = 0; j < n; j++)               //n个元素，需要排序n-1次
//	{  
//		for (i = 0; i <n-1; i++)             //两两交换
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
//	int n = sizeof(arr) / sizeof(arr[0]);     //  n个元素
//	bubble_sort(n,arr);
//	for ( i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////优化1////
//void bubble_sort(int n, int arr[])
//{
//	int tmp = 0;
//	int i = 0, j = 0;
//	for (j = 0; j < n; j++)               //n个元素，需要排序n-1次
//	{
//		int flag = 1;                    //假设数组已经完成排序
//		for (i = 0; i < n - 1; i++)             //两两交换
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
//	int n = sizeof(arr) / sizeof(arr[0]);     //  n个元素
//	bubble_sort(n, arr);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//////优化二/////

//void bubble_sort(int n, int arr[])
//{
//	int tmp = 0;
//	int i = 0, j = 0;
//	while (n != 0)
//	{
//		int pos = 0;
//
//		for (int j = 0; j < n; j++)            //n之后的可不用在进行排序
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				pos = j;                        //记录每一次内循环最后一次交换的位置，之后的可不用在进行排序
//			}
//		}
//		n = pos;                                //n之后的可不用在进行排序
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 54,12,69,635,6,-258,23,185,86,31,1,-5 };
//	int n = sizeof(arr) / sizeof(arr[0])-1;      //最大下标
//	bubble_sort(n, arr);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//优化三 双向冒泡排序///

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
//		for (int i = left; i < right; i++)      //找到当前排序元素里最大的那个，放在右侧
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
//		for (int j = right; j > left; j--)          //找到当前排序元素里最小的那个，放在左侧
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
//	printf("%p\n", arr);                 //数组名是首元素地址（第一个元素的地址），除以下两种情况
//	printf("%p\n", arr+1);				 //地址加了4
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);                //取出的是整个数组的地址 
//	printf("%p\n", &arr+1);              //地址加了20 （5*4）
//	  // 1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组。
//  	  //2. &数组名，取出的是数组的地址。&数组名，数组名表示整个数组。
//
//
//	int* str = arr;
//	printf("%p\n", str);
//	str++;                                   //arr++错误写法
//	printf("%p\n", str);
//
//	return 0;
//}



//int my_strlen(char* str)           //本质上 这里的定义的str是一个指针变量，其存储的是传过来的首元素地址              或者写 char str[]
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;                   //指针存放的是地址 ，地址+1即为第二个元素的地址（数组中各元素的地址是连续的，且此处一个元素即一个字符只占一个字节（内存中一个字节一个地址）  ）
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);                  // arr数组  数组传参 ，传过去的是第一个元素的地址
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



