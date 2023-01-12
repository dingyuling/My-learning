#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int sum = 0, i = 1, j = 2, a = 3;

	sum = (i += j, j--, ++a, i += j, a -= i);//从左到右依次计算，取最后一个表达式的结果
	printf("%d\n", sum);
	return 0;
}
