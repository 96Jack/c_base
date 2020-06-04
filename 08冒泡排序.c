#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i;
	int j;
	int arr[10] = { 7,4,2,3,5,8,9,6,1,10 };
	int len = sizeof(arr) / sizeof(arr[0]) - 1;
	//冒泡排序   从小到大
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j < len - i; j++)
		{
			if (arr[j] >  arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	system("pause");
	return EXIT_SUCCESS;
}
