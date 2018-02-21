#include <stdio.h>
int main(void)
{
	double Dap = 100.00, Dei = 100.00;
	int i;
	for (i = 0;Dei<=Dap; i++)
	{
		Dap = Dap + 100*0.1;
		Dei = Dei + Dei*0.05;
	}
	printf("%d年后，Dei%lf超过Dap%lf", i, Dei, Dap);
	return 0;
}