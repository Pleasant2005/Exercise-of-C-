#include <stdio.h>
int main(void)
{
	int i, j, k;
	for (i = 1;k <= 4;i++)
	{
		for (k = 1;k <= 4;k++)
		{
			printf("");
		}
		for (j = 1;j <= 2 * i- 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 1;k <= 4;i++)
	{
		for (k = 1;k <= 4;k++)
		{
			printf("");
		}
		for (j = 1;j <= 7-2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}