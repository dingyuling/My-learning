/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()

{
	int i;//用户想要的层数

	int j;//当前层数

	int n;//每层空的格数

	int m;//每层输出的*个数
	
	scanf("%d", &i);//取i的地址

	for (j = 1; j <= i; j++)//大循环内执行
	{
		for (n = 1; n <= i - j; n++) //循环执行完毕再跳出循环
		{
			printf(" ");
		}//空格循环执行完毕再执行下列循环
		for (m = 1; m <= j; m++)
		{
			printf("* ");
		}
		printf("\n");//每次循环执行完毕换行
	}
	return 0;
}*/