#include  <stdio.h>
int main(void)
{
	int n = 3, i, j;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4-i; j++)
			printf("Smile!");
		    printf("\n");
	}
	return 0;
}
