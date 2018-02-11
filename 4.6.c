#include <stdio.h>
int main(void)
{
	char format[100];
	printf("请输入名\n");
	char M[10];
	scanf("%s", M);
	printf("请输入姓\n");
	char X[10];
	scanf("%s", X);
	
	int lenM, lenX;
	lenM = strlen(M);
	lenX = strlen(X);
	
	printf("%s %s\n", M, X);
	sprintf(format,"%%%dd,%%%dd\n",lenM,lenX);
	printf(format, lenM, lenX);
	
	printf("%s %s\n", M, X);
	sprintf(format,"%%-%dd,%%-%dd\n",lenM,lenX);
	printf(format, lenM, lenX);
	return 0;
}