#include <stdio.h>
int main(void)
{
	printf("输入一个浮点数");
	float number;
	scanf("%f", &number);
	printf("小数，The input is %f\n", number);
	printf("指数，The input is %e", number);
	return 0;
}