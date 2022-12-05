#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int m;

	for (m = 1; m <= 100; m++)//m从一开始循环
	{
		if (1 == m %2)//如果每次循环的值余1则执行if循环内语句
		{
			printf("%d\n", m);//输出m的值(满足循环条件的值)
		}
	}
	return 0;
}
