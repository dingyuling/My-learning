#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int i=0;//乘数
	int j=0;//被乘数
	int m=0;//乘积

	for (i = 1; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)//j需=i，不然会多出一遍结果
		{
			m = i * j;
			printf(" %d * %d = %d\t", i, j, m);//输出值
		}
		printf("\n");
	}
	return 0;
}
