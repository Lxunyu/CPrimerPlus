#include <stdio.h>
int main(void)
{
	int age,secend=31560000;
	printf("please enter your age");
	scanf("%d", &age);
	printf("对应的秒数为%d", age * secend);
	return 0;
}