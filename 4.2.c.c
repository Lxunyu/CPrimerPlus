#include <stdio.h>
int main(void)
{
	printf("ÇëÊäÈëÄãµÄÃû×Ö\n");
	char name[13];
	scanf("%s", name);
	printf("%c%-20s%c",'"',name,'"');
	return 0;
}