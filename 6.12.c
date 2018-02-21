#include <stdio.h>
double f(int n);
double g(int n);
int main(void)
{
	printf("%lf\n", g(100));
	printf("%lf\n", g(1000));
	printf("%lf\n", g(10000));
	printf("%lf\n", f(100));
	printf("%lf\n", f(1000));
	printf("%lf\n", f(10000));

	return 0;
}
double f(int limit)
{
	double sum = 0.0,term,i;
	for (i = 1; i <= limit; i++)
	{
		term = 1 / i;
		sum = sum + term;
	}
	return sum;
}
double g(int limit)
{
	int fh = -1;
	double sum = 0.0,x,j;
	for (j = 1; j <= limit; j++)
	{
		fh *= -1;
		x = 1 / j*fh;
		sum = sum + x;
	}
	return sum;
}
