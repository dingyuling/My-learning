/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a;//定义一个数
	printf("输入一个值\n");
	scanf("%d", &a);//取a的值
	if (0 <= a && a < 60)
	{
		printf("不及格\n");
	}
	else if (60 <= a && a < 72)
	{
		printf("及格\n");
	}
	else if (72 <= a && a < 90)
	{
		printf("良好\n");
	}
	else if (90 <= a && a <= 100)
	{
		printf("优秀\n");//条件与结果，中间不能用a直接连接，要用与&&或非之类的
	}
	else//else不能有条件限制，即else后不能有()
	{
		printf("请重新输入\n");
	}
	return 0;
}*/
//使用if，else写出条件