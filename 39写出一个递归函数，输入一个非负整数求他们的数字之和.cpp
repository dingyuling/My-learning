/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int j_s(int x)
{
	if (x > 9)//跟输入一个整数，将它排列类似
	{
		return x % 10 + j_s(x/10);//结果相加
	}
	else
	{
		return x % 10;
	}
}

int main(void)
{
	int cz = 0;
	scanf("%d", &cz);

	int sum = j_s(cz);//输出和

	printf("%d\n", sum);
	return 0;
}*/