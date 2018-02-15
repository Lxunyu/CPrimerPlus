#include <stdio.h>
int main(void)
{
	printf("输入天数\n");
	int day, week,days;
	scanf("%d,%d\n", &day, &week);
	while (day > 0)
	{
		week = day / 7;
		days = day % 7;
		printf("%d days are %d week, %days\n", day, week, days);
		printf("再输入一个数\n");
		scanf("%d,%d", &day, &week);
	}
	return 0;
}