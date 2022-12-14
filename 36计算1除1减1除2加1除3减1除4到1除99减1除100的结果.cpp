#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int i = 1.0;
	double sum = 0.0;//浮点型加小数点

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)//这个数除2之后没有余数
		{
			sum = sum - 1.0 / i;//浮点型加小数点
		}
		else//反之
		{
			sum = sum + 1.0 / i;//浮点型加小数点
		}
	}
	printf("%lf\n", sum);//输出
	return 0;
}

/*
int main(void)
{
	int i = 1;
	double sum = 0.0;
	int c = 1;

	for (i = 1; i <= 100; i++)
	{
		sum += c * 1.0 / i;
		c = -c;//利用正负数加减抵消
	}
	printf("%lf\n", sum);
	return 0;
}*/
