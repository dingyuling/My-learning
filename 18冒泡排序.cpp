#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;//比较次数
	int j = 0;//每轮比较的次数
	int a[5] = { 95,8,64,78,-6 };//数	

	int b = 0;//定义一个用于存放的空值
	for (i = 1; i < 5; i++)//从第一次开始，如果i=0，则多比较一轮，但j<5-i不成立，而且j会+1则少比较一轮
	{
		for (j = 0; j < 5-i; j++)//每轮比较多少次运算
		{
			if (a[j] > a[j+1])//j为第一个数，j+1为j与他后面一位数相比较
			{
				b = a[j];
				a[j] = a[j+1];
				a[j+1] = b;//位置换算
			}
		}
	}
	for (i = 0; i < 5; i++)//五个数输出五次
	{
		printf("%d ", a[i]);//输出i
	}

	return 0;
}
