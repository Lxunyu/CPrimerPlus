#include <stdio.h>
int main(void)
{
	char ch;
	int i=0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case'.':
				ch = '!';
				i++;
				break;
			case'!':
				putchar('!');
				i++;
				break;
			default:
				;
		}
		putchar(ch);
	}
	printf("转换次数%d", i);
	return 0;
}