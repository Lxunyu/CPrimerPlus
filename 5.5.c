#include <stdio.h>
int main(void)
{
	printf("输入天数");
	int days,money,sum;
	scanf("%d", &days);
	money = 0;
	sum = 0;
	while (money++ <days)
		sum = sum + money;
	printf("sum=%d", sum);
	return 0;
}