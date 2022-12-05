#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;//定义数
	while (i<30000)//循环小于30000
	{
		printf("%d\n",i);//输出循环的值
		i++;//每次循环后加1
	}
	if (i = 30000)//如果i=30000则跳出循环执行以下操作
	{
		printf("i超出了30000\n", i);//得出值
	}
	return 0;
}
//定义一个数为0，写出循环直到这个数超过30000为止
