#include <stdio.h>
int main(void)
{
	printf("输入身高\n");
	double cm,feet,inches,tinches;
	scanf("%lf", &cm);
	while (cm > 0)
	{
		tinches = cm*0.3937;
		feet = (int)(tinches/ 12);
		inches = tinches - 12 * feet;
		printf("%.1f cm = %.0f feet,%.1f inches\n", cm, feet, inches);
		printf("再次输入身高\n");
		scanf("%lf", &cm);
	}
}