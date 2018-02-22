#include <stdio.h>
int main(void)
{
	char ch;
	int i = 0;
	scanf("%c", &ch);
	while (ch != '#'&&ch!='\n')
	{
		printf("%c-%d", ch, ch);
		i++;
		if (i % 8 == 0)
			printf("\n");
		scanf("%c", &ch);
	}
	return 0;
}