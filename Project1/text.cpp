#include <stdio.h>
int main(void) 
{
	int i, a[8];
	printf("请输入你8门课程的成绩：\n");
	for (i = 0;i < 8;i++)
		scanf_s("%d", &a[i]);
	for (i = 0;i < 8;i++)
		printf("%d\n", a[i]);
}