#include <stdio.h>   // ����һ����stdio.h���ļ�  std-��׼  i-input o-output   
int main() //������-��������-���д����main������ʼִ�� - ���ҽ���һ��
{                               // mianǰ���int��ʾmain��������֮�󷵻�һ������ֵ��int�����͵���˼��
	printf("hello world\n");     //������� (print function ��ӡ����,���ǿ⺯��)
	return 0;            //���� 0
}


//void main()  // ��ʱд��




int main()
{
	char dd = 'A'; //char-�ַ�����
	printf("%c\n", dd);   // %c-��ӡ�ַ���ʽ������
	return 0;
}








int num = 20;  //ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
int main()
{
	//short int  ������
	int age = 'a';    // �ֲ����� 
	float weight = 95;
	printf("%d\n,%d\n",age,num);   //%d��ӡ����ʮ��������
	return 0;
}








int main()
{
	double f= 20.110001;
	printf("%lf\n", f);   //%f
	return 0;
}








int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	return 0;
}








int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2); //scanf��������  &-ȡ��ַ����
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}







