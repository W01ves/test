#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}
*/


/*
                                   //���1-100֮��ļ�����
int main()
{
	int i = 0;
	for (i = 0; i < 101; i++)
	{
		if (i%2!=0)
			printf("%d ", i);
	}
	return 0;
}
*/




/*
//switch������ʾ
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("����3");
		break;
	case 4:
		printf("����4");
		break;
	case 5:
		printf("����5");
		break;
	case 6:
		printf("����6");
		break;
	case 7:
		printf("����7");
		break;
	default:
		break;
	}

	return 0;
}
*/




/*
//whileѭ��
int main()
{
	int i = 0;
	while (i<10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d\n",i);
		
	}
	return 0;
}
*/

/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)    //EOF - end of file - ֵ��-1
		putchar(ch);
	return 0;
}
*/



//��������
/*
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);  // password ��������������Ҫ��&���š� scanfֻ�ܶ�ȡ�ո��/nǰ�������
	//getchar();              //�˴����ȡ��������󰴵Ļس�����'/n'        getcharһ��ֻ�ܶ�ȡһ���ַ�
	while (ch = getchar() != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��");
	ret = getchar();
	if (ret=='Y')
	{
		printf("ȷ�ϳɹ�");
	}  
	else
	{
		printf("ȷ��ʧ��");
	}

	return 0;
}
*/



/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
		
	}
	return 0;
}
*/






//forѭ��

/*
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	return 0;
}
*/


/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;                    //����i=4����ѭ��

	}
	return 0;
}
*/


/*
int main()
{
	for (;;)
	{
		printf("hehe");
	}
	return 0;

}
*/


/*
int main()
{

	int i = 0;
	printf("%d\n", i++);
	printf("%d\n", i);
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	int k = 0; 
	for (i = 0, k = 0; k = 0; i++, k++)     //  �ж����Ϊk=0�� ���ʽ���Ϊ0����Ϊ�� ��������ѭ������k=1�����ʽ���Ϊ��0������ѭ����
		k++;

	return 0;
}
*/






//do-while 
/*
int main()
{
	int i = 0;
	do
	{
		i++;
		printf("%d\n", i);
	} while (i<10);
	return 0;
}
*/




///////////////////��ϰ��//////////////////////

//n�Ľ׳�
/*
int main()
{
	int i, n, m;
	scanf("%d", &n);
	for ( i = 1,m=1; i <= n; i++)
	{
		m = m * i;
	}
	printf("%d", m);
	return 0;
}
*/


/////�׳��ۼ�//////
/*
int F(int x)                    //�׳˺���
{
	int i, m;
	for (i = 1, m = 1; i <= x; i++)
	{
		m = m * i;
	}
	return m;
}

int main()
{
	int i,n,f;
	scanf("%d", &n);
	for ( i = 1,f=0; i <= n; i++)
	{
		f = f + F(i);
	}
	printf("%d\n", f);
	return 0;
}
*/

/*
int main()
{
	int i, j, n, f, m;
	scanf("%d", &n);
	for (i = 1, f = 0; i <= n; i++)
	{
		for (j = 1, m = 1; j <= i; j++)
		{
			m = m * j;
		}
		f = f + m;
	}
	printf("%d\n", f);
	return 0;
}
*/


/*
//�Ż� 
int main()
{
	int i, j, n, f, m;
	scanf("%d", &n);
	for (i = 1, f = 0,m = 1; i <= n; i++)
	{
		m = m * i;
		f = f + m;
	}
	printf("%d\n", f);
	return 0;
}
*/



//////�������������е�����////////
/*
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
	int i = 0, k = 0;
	//scanf("%d", &k);
	for (i = 0; i <10; i++)
	{
		if (arr[i] == k)
		{
			printf("%d\n", i);
			break;
		}
	}
	if (i>=10)	
	{
		printf("zhaobudao");
	}
	return 0;

}
*/


/*
int binary_search(int x, int v[])
{
	int i,z;
	for ( i = 0; i < 11; i++)
	{
		if (v[i] == x)
		{
			z = i;
			break;
		}
	}
	return z;
}


int main()
{
	int a,f;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf("%d", &a);
	f = binary_search(a, arr);
	printf("%d", f);
	return 0;
}

*/




//�۰뷨
/*
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int L = 0;
	int R = sz - 1;
	while (L<=R)
	{
		if (arr[(L + R) / 2] < k)
		{
			L = (L + R) / 2 + 1;
		}
		else if (arr[(L + R) / 2] > k)
		{
			R = (L + R) / 2 - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ��%d", (L + R) / 2);
			break;
		}
	}
	if (L>R)
	{
		printf("û�ҵ�");
	}
	return 0;
}
*/




//���������±꣬��ʾ����ַ��������ƶ������м���
/*
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{ 
	char arr1[] = "welcome to bit!!!!!!";     //�ַ�����    char arr[]="abc"   -->   [a b c \n]
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;   //�ַ��������Զ�����\n
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);                //�ӳ�1s
		system("cls");              //�����Ļ
	}

	return 0;
}
*/



/*
#include <string.h>
int main()	
{
	int i, n = 1;
	char arr1[] = "a123456";
	char password[] = { 0 };
	int sz = strlen(arr1) - 1;
	printf("���������룺\n");
	while (n<=3)
	{
		
		scanf("%s", password);
		
		if (strcmp(password , "123456")==0)         //�ȺŲ��������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("������ȷ!");
			break;
		}
		else
		{
			if(n<=2)
				printf("����������������룺\n");

		}
		n++;
	}
	if (n==4)
	{
		printf("һСʱ֮������!\n");
	}

	return 0;

}
*/

//�Ӵ�С���
/*
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a>b)
	{
		if (c>a)
		{
			printf("%d,%d,%d", c, a, b);
		}
		else
		{
			if (c>b)
			{
				printf("%d,%d,%d", a, c, b);
			}
			else
			{
				printf("%d,%d,%d", a, b, c);
			}
		}
	}
	else
	{
		if (c > b)
		{
			printf("%d,%d,%d", c, b, a);
		}
		else
		{
			if (c > a)
			{
				printf("%d,%d,%d", b, c, a);
			}
			else
			{
				printf("%d,%d,%d", b, a, c);
			}
		}
		
	}
	
	return 0;
}
*/




//ð�ݷ�
/*
int main()
{
	int i,j=0,l, tem;
	int arr[] = { 5,6,8,2,3,1,4,7,9,58,69 ,12};
	int sz = sizeof(arr) / sizeof(arr[0]) ;
	while (j < sz-1)                                       //�����Ҫð��ѭ��sz-1��
	{

		for (i = 0; i < sz-1; i++)                       //һ��ð�ݣ�
		{
			if (arr[i] > arr[i + 1])
			{
				tem = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tem;
			}
		}
		j++;
	}
	for (l = 0; l < sz; l++)
	{
		printf("%d ", arr[l]);
	}
	return 0;

}
*/




/*
//շת�����   �����Լ��
int main()
{
	int m=0,n=0,r=0;
	scanf("%d%d",&m,&n);
	while (r = m%n)               //m%nΪ0 ʱΪ�٣�ֹͣѭ��
	{	
		//r = m % n;
		m = n;
		n = r;
	}
	printf("%d", n);

	return 0;
}
*/







//��ӡ100-200֮�������
/*
int main()
{
	int i = 0, j = 0,m=0;
	for ( i = 100; i <=200; i++)
	{
		for ( j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break;
			}
			else if (i%j != 0 && j == i - 1)
			{
				m = i;
				printf("%d ", m);
		
			}
			else if (i%j!=0)
			{
				continue;
			}
			
		}
		
	}

	return 0;
}
*/

#include <math.h>

////�Ż�////
/*
#include <math.h>
int main()
{
	int i = 0, j = 0, m = 0;
	for (i = 101; i <= 200; i+=2)             //ż����������
	{
		for (j = 2; j <= sqrt(i); j++)       //sqrt ��ƽ��
		{
			if (i%j == 0) 
			{
				break;
			}	
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}

	}

	return 0;
}

*/



// 1-100�����������г��ֶ��ٸ�����9
/*
int main()
{	
	int i = 0;
	int count = 0;
	for ( i = 1; i < 100; i++)
	{
		if (i % 10 == 9)                //��λ9
		{
			count++;
		}
		if (i / 10 == 9)                //ʮλ9
		{
			count++;
		}
		
	}
	printf("%d", count);


	return 0;
}
*/


// 1-1000�����������г��ֶ��ٸ�����9
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 1000; i++)
	{
		if (i % 100 %10 == 9)                //��λ9
		{
			count++;
		}
		if (i % 100 / 10== 9)                //ʮλ9
		{
			count++;
		}
		if (i  /100== 9)                //��λ9
		{
			count++;
		}

	}
	printf("%d", count);


	return 0;
}
*/



// 1-1/2+1/3-1/4+....-1/100
/*
int main()
{
	int i = 0;
	double m = 0;
	for ( i = 1; i < 101; i++)
	{
		double z = pow(-1, i - 1);
		m = m + 1 / (i*z);

	}
	printf("%f", m);
	return 0;
}
*/


//�˷��ھ���


/*
int main()
{
	int i = 0, j = 0, m;
	for ( i = 1; i < 10; i++)
	{
		
		for ( j = 1; j <= i; j++)
		{
			m = j * i;
			printf("%d*%d=%-2d ", j, i, m);
			
		}
		printf("\n");
	}

	return 0;
}
*/







//��������Ϸ
#include <windows.h>
#include <stdlib.h>
#include <time.h>
/*
void menu()
{
	printf("**************************\n");
	printf("***** 1.play  0.exit *****\n");
	printf("**************************\n");
}
void game()
{
	int num;
	printf("�����ʼ��Ϸ\n");
	//printf("3\n");
	//Sleep(1000);
	//printf("2\n");
	//Sleep(1000);
	//printf("1\n");
	//Sleep(1000);
	int ret = rand()%100+1;                    //rand()��������һ�����㵽RAND_MAX��32767�� ֮���α�������)
	                                            //��ôʹ�������0-100             �κ���%100  �ó�0-99����
	
	printf("��������µ�����\n");
	
	while (1)
	{
		scanf("%d", &num);
		printf("�Ҳ��ǣ�%d\n", num);
		if (num > ret)
		{
			printf("����,�����\n");
		}
		else if (num < ret)
		{
			printf("С�ˣ������\n");
		}
		else
		{
			printf("������\n");
			break;
		}
	}

}

int main()
{
	int input;
	srand(time(NULL));             //����ʱ�������ǰʱ���ȥ���������ʼʱ�䣨1970.1.1.0��0��0��=��xxx����
	do                            //srand()����rand()����������ӡ����ڸ���������seed, rand()�ᷴ�������ض���������С�
	{                 
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("����ȷ���룺��0/1��\n");
			break;
		}
	} while (input);


	return 0;
}
*/
 







