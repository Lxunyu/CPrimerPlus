#include <stdio.h>
int main(void )
{
	char ch, ch_before=0;
	int i=0;;
	while ((ch=getchar()) != '#')
	{
		if (ch_before == 'e'&&ch=='i')
			i++;
		ch_before = ch;
	}
	printf("出现次数 %d",i);
	return 0;
}