#include <stdio.h>
int main(void)
{
	printf("请输入字母");
	char a;
	scanf("%c", &a);
	int i, j;
	for (i = 0; i < a-'A'+1; i++)
	{
		for (j = 0; j < a-'A' - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
			printf("%c", 'A' + j);
		for (j = i - 1; j >= 0; j--)
			printf("%c",'A' + j);
		printf("\n");
	}
		return 0;
}