#include<stdio.h>
int main(void)
{
	printf("输入天数");
	int days,n,sum,S;
	scanf("%d",&days);
	n = 0;
	sum = 0;
	S = 0;
	while (n++ < days)
	{
		sum = n*n;
		S = S + sum;
	}
	printf("%d", S);
	return 0;

}