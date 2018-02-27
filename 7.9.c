#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
	int n,limit,i,j;
	_Bool x;
	printf("输入数");
	scanf("%d", &limit);
	while (limit > 0)
	{
		for (n = 2; n <= limit; n++)
		{
			j = sqrt(n);
			x =true;
			for (i = 2; i <=j ; i++)
			{
				if (n%i == 0)
				{
					x = false;
					break;
				}
			}
			if (x)
				printf("%d\n", n);
		}
		scanf("%d", &limit);
	}
	return 0;
}