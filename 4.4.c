#include <stdio.h>
int main(void)
{
	printf("请输入你的身高,名字\n");
	float tall;
	char name[20];
	scanf("%f,%s", &tall, name);
	//scanf(",%s", name);
	printf("%s,you are %f feet tall", name, tall);
	return 0;
}