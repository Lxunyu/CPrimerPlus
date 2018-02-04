#include<stdio.h>
int main(void)
{
	printf("请输入你的名，姓");
	char name[20];
	scanf("%s",name);
	printf("你的名,姓为%s",name);
	return 0;
}