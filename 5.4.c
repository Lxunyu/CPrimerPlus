#include <stdio.h>
int main(void)
{
	printf("输入身高\n");
	int cm,feet,inches,tinches;
	scanf("%d,%d,%d,%d", &cm,&feet,&inches,&tinches);
	while (cm > 0)
	{
		tinches = cm*0.3937;
		feet = tinches/ 12;
		inches = tinches % 12;
		printf("%d cm = %d feet,%d inches\n", cm, feet, inches);
		printf("再次输入身高\n");
		scanf("%d", &cm);
	}
}