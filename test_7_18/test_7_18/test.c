#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main1()
{
	printf("Hello World!");
	return 0;

}

int main2()
{
	// 字符类型
	char ch = 'a';

	// 整型
	int age = 20;

	// 短整型
	short num = 10;

	// long
	// long long

	// 单精度浮点型
	float weight = 55.5;

	// 双精度浮点型
	double d = 0.0;

	return 0;
}

int main3()
{
	printf("hehe\n");
	printf("hello world!\n");

	// 打印一个整数
	printf("%d\n", 100);

	// sizeof - 关键字 - 操作符 - 计算类型或变量所占空间大小
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
	// 创建一个变量
	// 类型 名称 = 数值;
	// 类型 名称;

	int age = 20;
	double weight = 70.5;

	age = age + 1;
	weight = weight - 20;
	printf("%d\n", age);
	printf("%lf\n", weight);

	return 0;
}

// 全局变量 - {}外部定义的
//int a = 100;

int main5()
{
	// 局部变量
	// 当局部变量和全局变量名称冲突时,局部优先
	int a = 10;
	printf("%d\n", a);

	return 0;
}

int main6()
{
	// scanf是输入函数
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}