#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = { 0 };//10个数组元素从零开始
	int i = 0;//循环次数
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);//i次循环后，数组元素的值
	}
	int sum = 0;//定义一个和
	for (i = 0; i < 10; i++)
	{
		sum = sum + arr[i];//循环中前一次的和与i次数组元素的值相加
	}
	printf("sum=%d\n", sum);//求出数组元素的值
	return 0;
}

//求10个数的和
