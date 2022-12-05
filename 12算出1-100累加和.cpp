#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int i;
	int sum=0;
	for (i = 1; i <= 100; i++)//i从一开始循环
	{
		sum = sum + i;//每次循环的值与sum相加
	}
	printf("%d\n", sum);//输出两数的和
	return 0;
}
