#include <stdio.h>
int main(void)
{
	printf("输入一个数字");
	int a,n,i;
	scanf("%d", &a);
	for (i = 0; i <=10; i++)
	{
		n = a + i;
		printf("%d\n", n);
	}
	return 0;
}