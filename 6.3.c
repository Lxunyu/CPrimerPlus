#include <stdio.h>
int main(void)
#define ROWS 6
{
	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%c", 'A' + ROWS - 1 - j);
		printf("\n");
	}
	return 0;
}