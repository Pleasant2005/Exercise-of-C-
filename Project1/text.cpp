#include <stdio.h>
int main(void) 
{
	int i, a[8];
	printf("��������8�ſγ̵ĳɼ���\n");
	for (i = 0;i < 8;i++)
		scanf_s("%d", &a[i]);
	for (i = 0;i < 8;i++)
		printf("%d\n", a[i]);
}