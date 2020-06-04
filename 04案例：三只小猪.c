#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("a重 ：%d\n", a);
		}
		else
		{
			printf("c重 : %d\n", c);
		}
	}
	else
	{
		if (b > c)
		{
			printf("b重 ：%d\n", b);
		}
		else
		{
			printf("c重 : %d\n", c);

		}
	}
	system("pause");
	return EXIT_SUCCESS;
}