#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;//数
	int n = 0;//n的值
	scanf("%d", &n);//取n输入
	int c = 1;//从1开始*
	for (i = 1; i <= n; i++)//i从一开始
	{
		c *= i;//c=c*i
		printf("%d\t", c);//输出c
	}
	return 0;
}
