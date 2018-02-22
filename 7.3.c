#include <stdio.h>
int main(void)
{
	int n,i=0,j=0;
	double sum=0.0,sum1=0.0;
	scanf("%d", &n);
	while (n != 0)
	{
		if (n % 2 == 0)
		{
			i++;
			sum = sum + n;
		}
		else
		{
			j++;
			sum1 = sum1 + n;
		}
		scanf("%d", &n);
	}

	if (i == 0)
		printf("偶数个数%d",i);
	else
		printf("偶数个数%d，偶数平均值%lf",i,sum/i);

	printf("\n");

	if (j == 0)
		printf("奇数个数%d",j);
	else
		printf("奇数个数%d，奇数平均值%lf",j,sum1/j);

	//if (i == 0&&j!=0)
	//	printf("偶数个数%d\n奇数个数%d，奇数平均值%lf", i, j,sum1/j);
	//else if (j == 0&&i!=0)
	//	printf("偶数个数%d，偶数平均值%lf\n奇数个数%d", i,sum/i,j);
	//else if(j==0&&i==0)
	//	printf("偶数个数%d\n奇数个数%d", i,j);
	//else
	//	printf("偶数个数%d，偶数平均值%lf\n奇数个数%d，奇数平均值%lf", i, sum / i, j, sum1 / j);
	return 0;
}