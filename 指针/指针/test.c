#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//char* pa = &a;
//	*pa = 0;
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	char *pc = &n;
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}


//int main()
//{
//	int i;
//	int arr[10] = { 0 };
//	int* p = arr;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//
//int main()
//{
//	int i, arr[10] = { 0 };
//	int* p = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int *p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}


//
//int my_strlen(int* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//struct stu
//{
//	char arr[10];
//	char* pc;
//	char* w;
//};
//
//
//int main()
//{
//	char arr[10] = { "asd" };
//	char k = 'a';
//	char *m = &k;
//	struct stu S = { "abc",arr, m };
//	printf("%s %s %c", S.arr, S.pc, *S.w);
//
//	return 0;
//}


//typedef struct stu
//{
//	char name[20];
//	char id[10];
//	char sex[10];
//}Stu;
//
//
//void print(Stu* p)
//{
//	printf("%s\n", p->name);
//}
//
//
//int main()
//{
//	Stu s = { "ÕÅÈý","SX2000000","ÄÐ" };
//	print(&s);
//	return 0;
//
//}


int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i, j;

	for (i = 0; i < numsSize; i++)
	{
		for (j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				returnSize[0] = i;
				returnSize[1] = j;
				goto a;
			}
		}
	}
a:
	return returnSize;

}


int main()
{
	int i;
	int nums[] = { 1,3,5,9 };
	int target = 10;
	int numsSize = sizeof(nums) / sizeof(nums[1]);       //4
	int returnSize[2] = { 0 };
	twoSum(nums, numsSize, target, returnSize);
	for (i = 0; i < 2; i++)
	{
		printf("%d\n", returnSize[i]);
	}
	return 0;

}

