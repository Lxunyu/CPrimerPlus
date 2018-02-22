#include <stdio.h>
int main(void)
{
	int i=0,j=0,other=0;
	char ch;
	while ((ch=getchar()) != '#')
	{
		if ('\n' == ch)
		{
			i++;
		}
		else if (' '==ch)
		{
			j++;
		}
		else
		{
			other++;
		}
	}
	printf("空格%d,转行%d,其他%d", j, i, other);
	return 0;
}