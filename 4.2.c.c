#include <stdio.h>
int main(void)
{
	printf("�������������\n");
	char name[13];
	scanf("%s", name);
	printf("%c%-20s%c",'"',name,'"');
	return 0;
}