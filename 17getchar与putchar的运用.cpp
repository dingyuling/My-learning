//#define _CRT_SECURE_NO_WARNINGS 1

/*#include<stdio.h>

int main()

{
	int ch = getchar();//定义
	putchar(ch);//输出
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int i = 0;//定义空值
	while ((i = getchar()) != EOF)//循环getchar不为EOF(-1)
	{
		putchar(i);//输出i的值
	}
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	char i[10] = { 0 };//定义空字符
	printf("请输入你想要的值\n");
	scanf("%s", i);//名为i的地址内的字符
	printf("你确认这个值吗（Y / N）\n");
	int m = 0;//定义空值
	while ((m = getchar()) != '\n')//代入清空缓存
	{
		;//空语句
	}
	int off = getchar();//赋m代称getchar()
	if (off == 'Y')//getchar(Y)=off=Y
	{
		printf("输入成功\n");
	}
	else if (off == 'N')
	{
		printf("输入结束\n");
	}
	else
	{
		printf("程序错误\n");
	}

	return 0;
}*/