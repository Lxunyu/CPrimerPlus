#include <stdio.h>
int main(void)
{
	printf("请输入你的名字\n");
	char name[20];
	scanf("%s", name);
	printf("你的名字为%c%s%c\n",'"', name,'"');
	return 0;

}