#include <stdio.h>
int main(void)
{
	double tall, feet=2.54,n;
	printf("请输入你的身高");
		scanf("%Lf", &n);
		tall = feet*n;
		printf("你的身高为%Lf", tall);
		return 0;
}