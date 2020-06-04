#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

	int fits[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &fits[i]);
	}
	//小猪成体重
	//int max = 0;
	//for (int i = 0; i < 10; i++)
	//{
	//	if (max < fits[i])
	//	{
	//		max = fits[i];
	//	}
	//}

	int max = fits[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < fits[i])
		{
			max = fits[i];
		}
	}
	printf("最重的小猪体重为：%d\n", max);

	system("pause");
	return EXIT_SUCCESS;
}