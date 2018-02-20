#include <stdio.h>
#define ROWS 6
int main(void)
{
	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 'A'+ROWS-1; j>='A'+ROWS-i-1; j--)
			printf("%c", j);
		printf("\n");
	}
	return 0;
}