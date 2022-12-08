#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void first()
{
	int i = 0;
	int j = 0;//定义两个空值
	printf("请输入两个数\n");
	scanf("%d%d", &i, &j);//赋值
	int max = 0;//空值赋给最大公约数
	if (i < j)
	{
		max = i;
	}
	else
	{
		max = j;
	}
	while (1)
	{
		if (i % max == 0 && j % max == 0)//同时能被整除
		{
			printf("最大公约数为\n%d\n", max);
			break;//跳出循环
		}
		max--;//每次循环max-1
	}
}

/*void second()
{
	int i = 0;
	int j = 0;//定义两个空值
	printf("请输入两个数\n");
	scanf("%d%d", &i, &j);//取赋值
	int max = 0;//最大数，公约数空值
	while (max = i % j)//相于之数
	{
		i = j;
		j = max;
	}
	printf("最大公约数为\n%d\n", j);
}
//辗转相除法
*/
int main()
{
	first();
	//second();
	return 0;
}
