#include<stdio.h>
#define s 60
int main(void)
{
	printf("输入分钟数（<=0 )");
	int sec,hour,min;
	scanf("%d", &sec);
	while (sec > 0)
	{
		hour = sec / s;
		min = sec % s;
		printf("%d是%d小时%d分钟\n", sec, hour, min);
		printf("继续输入分钟数(<=0 )\n");
		scanf("%d", &sec);
	}
	return 0;
}