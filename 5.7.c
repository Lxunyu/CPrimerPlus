#include <stdio.h>
double C(double m );
int main(void)
{
	printf("输入一个double数");
	double n;
	scanf("%Lf", &n);
	printf("总和%Lf", C(n));
	return 0;
}
double C(double n)
{
	double sum = n*n*n;
	return sum;
}