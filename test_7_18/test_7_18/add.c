#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// ��������
	int arr[10] = { 0 };

	// ����10����
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	// �ҳ����ֵ
	int max = arr[0];
	for (int i = 1; i < 10; i++) 
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	// �ҳ���Сֵ
	int min = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	// ð������
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

	// ���
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
