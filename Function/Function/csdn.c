#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int F(int arr[], int x, int sz)            //������ �����arr[]��һ��ָ��   ����д int* arr
//{
//	int P = 0;
//	int L = 0;
//	int R = sz;
//	while (L <= R)
//	{
//		int mid = (L + R) / 2;
//		if (x > arr[mid])
//		{
//			L = mid + 1;
//		}
//		else if (x < arr[mid])
//		{
//			R = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (L > R)
//		return -1;
//}
//
//int main()
//{
//	int a = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;         // ���鴫��ֻ�������һ��Ԫ�صĵ�ַ
//	scanf("%d", &a);                          //����1-9������
//	int m = F(arr, a, sz);
//	if (m == -1)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d", m);
//	}
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 1000; i++)
//	{
//		if (i % 100 % 10 == 9)                //��λ9
//		{
//			count++;
//		}
//		if (i % 100 / 10 == 9)                //ʮλ9
//		{
//			count++;
//		}
//		if (i / 100 == 9)                //��λ9
//		{
//			count++;
//		}
//
//	}
//	printf("%d", count);
//
//
//	return 0;
//}








//void Swap2(int *px, int *py)       
//{
//	int tmp = 0;
//	tmp = *px;                       
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}








//void Swap1(int x, int y)            
//{
//	int tmp = 0;                   
//	tmp = x;                        
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap1(a, b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}













//
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}




