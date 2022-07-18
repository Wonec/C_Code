#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// 创建数组
	int arr[10] = { 0 };

	// 输入10个数
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	// 找出最大值
	int max = arr[0];
	for (int i = 1; i < 10; i++) 
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	// 找出最小值
	int min = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	// 冒泡排序
	int temp;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// 输出
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	return 0;
}
