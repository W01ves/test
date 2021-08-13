#include <stdio.h>   // 包含一个叫stdio.h的文件  std-标准  i-input o-output   
int main() //主函数-程序的入口-所有代码从main函数开始执行 - 有且仅有一个
{                               // mian前面的int表示main函数调用之后返回一个整型值（int是整型的意思）
	printf("hello world\n");     //完成任务 (print function 打印函数,它是库函数)
	return 0;            //返回 0
}


//void main()  // 过时写法




int main()
{
	char dd = 'A'; //char-字符类型
	printf("%c\n", dd);   // %c-打印字符格式的数据
	return 0;
}








int num = 20;  //全局变量-定义在代码块（{}）之外的变量
int main()
{
	//short int  短整型
	int age = 'a';    // 局部变量 
	float weight = 95;
	printf("%d\n,%d\n",age,num);   //%d打印整型十进制数据
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
	scanf_s("%d%d", &num1, &num2); //scanf输入数据  &-取地址符号
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}







