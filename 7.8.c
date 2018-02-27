#include <stdio.h>
void ONE(double);
int main(void)
{
#define TIME 1.5
#define TAX_ONE 0.15
#define TAX_TWO 0.2
#define TAX_THREE 0.25;
	int a;
	double basic = 0.0;
	printf("Enter the number corrrsponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr					2) $9.33/hr	\n");
	printf("3) $10.00/hr					4) $11.2/hr					5) quit\n");
	scanf("%d", &a);
	while (a <5)
	{
		switch (a)
		{
		case 1:
			basic = 8.75;
			break;
		case 2:
			basic = 9.33;
			break;
		case 3:
			basic = 10.00;
			break;
		case 4:
			basic = 11.20;
			break;
		case 5:
			printf("quit\n");
			break;
		}
		ONE(basic);
		scanf("%d", &a);
	}
	return 0;
}
void ONE(double BASIC)
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
}