#include <stdio.h>
#define BASIC 10
#define TIME 1.5
#define TAX_ONE 0.15
#define TAX_TWO 0.2
#define TAX_THREE 0.25
int main(void)
{
	double sum = 0.0, s, j = 0.0;
	printf("输入一周工作小时");
	int time;
	scanf("%d", &time);
	if (time <= 40)
		sum = time*BASIC;
	else
		sum = 40 * BASIC + (time - 40)*TIME*BASIC;
	if (sum <= 300)
	{
		s = sum*TAX_ONE;
		j = sum - s;
	}
	else if (sum <= 450)
	{
		s = 300 * TAX_ONE + (sum - 300)*TAX_TWO;
		j = sum - s;
	}
	else
	{
		s = 300 * TAX_ONE + 150 * TAX_TWO + (sum - 450)*TAX_THREE;
		j = sum - s;
	}
	printf("税金%lf\n", s);
	printf("工资总额%lf\n", sum);
	printf("净收入%lf", j);
	return 0;
}
