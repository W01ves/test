#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	double w = 2.3*pow(10, -11) * 60;        //  m^3/(min*A)
	double k = 2.5;                          //S/m
	double U = 20;                           //V
	double v = 0.24/1000;                    // m/min
	double delta = w * k * U / v;
	printf("%f", delta);
	return 0;
}