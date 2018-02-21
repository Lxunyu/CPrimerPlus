#include <stdio.h>
#define n 8
int main(void)
{
	int a[n],i;
	a[0] = 2;
	for (i = 1; i < n; i++)
	{
		a[i] = a[i-1] * 2;
	}
	i = 0;
	do
	{
		printf("%d\n", a[i]);
		i++;
	}
	while (i < n);
return 0;
}