/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int c_f(int x,int y)
{
	if (y > 1)//判断有没有相乘数
	{
		return x * c_f(x, y - 1);//每次次数-1
	}
	else if (y == 0)
	{
		return 1;
	}
	else
	{
		return x;
	}
}

int main(void)
{
	int c = 0;//数
	printf("你想要的数：\n");
	scanf("%d", &c);
	printf("\n");
	int n = 0;//次方
	printf("你想要几次方：\n");
	scanf("%d", &n);
	printf("\n");

	int XX = c_f(c, n);//输出结果

	printf("次方是：\n%d\n", XX);
	return 0;
}*/