#include <stdio.h>
int main(void)
{
	printf("�����������ٶȣ��ļ���С\n");
	float Mb, MB,time;
	scanf("%f,%f", &Mb, &MB);
	time = MB/Mb*8;
	printf("At %.2f megabits per secend,a file of %.2f megabytes downloads in %.2f secend", Mb, MB, time);
	return 0;
}