#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

	int row;
	printf("number of star ¿¿:\n");
	scanf("%d", &row);
	int i;
	int j;
	int k;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");

	}

	system("pause");
	return EXIT_SUCCESS;
}
