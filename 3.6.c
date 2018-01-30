#include <stdio.h>
int main(void)
{
	double k=950, m = 3e-23,M,n;
	printf("请输入水的夸脱数");
	scanf("%f", &n);
	M = n*m*k;
	printf("水分子的数量为%d", &M);
		return 0;
}