#include <stdio.h>
int main(void)
{
	printf("请输入你的名字\n");
	char name[13];
	scanf("%s", name);
	printf("   ");
	printf("%-10s", name);
	return 0;
}