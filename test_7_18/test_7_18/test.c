#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main1()
{
	printf("Hello World!");
	return 0;

}

int main2()
{
	// �ַ�����
	char ch = 'a';

	// ����
	int age = 20;

	// ������
	short num = 10;

	// long
	// long long

	// �����ȸ�����
	float weight = 55.5;

	// ˫���ȸ�����
	double d = 0.0;

	return 0;
}

int main3()
{
	printf("hehe\n");
	printf("hello world!\n");

	// ��ӡһ������
	printf("%d\n", 100);

	// sizeof - �ؼ��� - ������ - �������ͻ������ռ�ռ��С
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}

int main4()
{
	// ����һ������
	// ���� ���� = ��ֵ;
	// ���� ����;

	int age = 20;
	double weight = 70.5;

	age = age + 1;
	weight = weight - 20;
	printf("%d\n", age);
	printf("%lf\n", weight);

	return 0;
}

// ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;

int main5()
{
	// �ֲ�����
	// ���ֲ�������ȫ�ֱ������Ƴ�ͻʱ,�ֲ�����
	int a = 10;
	printf("%d\n", a);

	return 0;
}

int main6()
{
	// scanf�����뺯��
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}