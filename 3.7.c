#include <stdio.h>
int main(void)
{
	double tall, feet;
	printf("请输入你的身高");
		scanf("%lf", feet);
		tall = feet*2.54;
		printf("你的身高为%lf", tall);
		return 0;
}