#include <stdio.h>
int main(void)
{
	printf("�������������\n");
	char name[13];
	scanf("%s", name);
	printf("   ");
	printf("%-10s", name);
	return 0;
}