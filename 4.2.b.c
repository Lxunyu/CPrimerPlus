#include <stdio.h>
int main(void)
{
	printf("�������������\n");
	char name[20];
	scanf("%s", name);
	printf("%c%20s%c", '"', name,'"');
}