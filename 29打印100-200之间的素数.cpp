#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//质数，又称素数，指在一个大于1的自然数中，除了1和此整数自身外，无法被其他自然数整除的数


//素数又称质数，是指在大于1的自然数中，除了1和它本身以外没有其他因数的自然数

int main()

{
	int s = 0;//素数
	int y = 0;//因数
	int g = 0;//个数

	printf("素数有\n");

	for (s = 100; s <= 200; s++)//100-200循环
	{
		for (y = 2; y < s; y++)//1和本身去除y!=1和y!=s
		{
			if (s % y == 0)//如果除尽，不为素数
			{
				//printf("%d\t", s);
				break;
			}
		}
		if (y == s)//此刻y==s，整个循环完毕，也没有可以除尽的数，为素数
		{
			printf("%d\t", s);
			g++;
		}
	}
	printf("\n");
	printf("素数有%d\n个", g);
	return 0;
}
