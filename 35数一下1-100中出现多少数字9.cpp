/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int i = 1;//循环数字
	int c = 0;//计算次数

	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			c++;
		}
		if (i / 10 == 9)//注意是9出现多少次，而不是出现多少个带有9的数字，如果是计算多少个带有9的数字则else if
		{
			c++;
		}
	}
	printf("%d\n", c);
	return 0;
}*/