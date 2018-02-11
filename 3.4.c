#include <stdio.h>
int main(void)
{
	printf("请输入一个浮点数");
	float number;
	scanf("%f", &number);
	printf("小数形式%f\n", number);
	printf("指数形式%e\n", number);
	printf("十六进制形式%a\n", number);
	return 0;
}