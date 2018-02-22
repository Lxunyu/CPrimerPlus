#include <stdio.h>
int main(void)
{
	char ch;
	int i=0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			i++;
		}
		else if (ch == '!')
		{
			putchar('!');
			i++;
		}
		putchar(ch);
	}
	printf("替换次数%d", i);
	return 0;
}