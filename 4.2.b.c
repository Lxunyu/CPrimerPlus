#include <stdio.h>
int main(void)
{
	printf("ÇëÊäÈëÄãµÄÃû×Ö\n");
	char name[20];
	scanf("%s", name);
	printf("%c%20s%c", '"', name,'"');
}