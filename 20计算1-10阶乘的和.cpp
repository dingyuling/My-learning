#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;//数
	int n = 0;//控制*的数
	int c = 1;//从1开始*
	int sum = 0;//定义和为0

	for (n = 1; n <= 10; n++)//n从1开始，每次+1循环10次
	{
		c = 1;//c为1
		for (i = 1; i <= n; i++)//i为1，n控制i循环次数，每次循环i+1
		{
			c *= i;//c=c*i
		}
		sum += c;//sum=sum+c
	}
	printf("sum=%d\n", sum);
	return 0;
}


/*#include<stdio.h>

int main()

{
	int n = 0;//n控制*
	int c = 1;//*从1开始
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		c *= n;
		sum += c;
	}//另一种情况，1*1+1*2=3=1*3，以此类推，可少运算一轮循环
	printf("sum=%d\n", sum);
	return 0;
}*/
