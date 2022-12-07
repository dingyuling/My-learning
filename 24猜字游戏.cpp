#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>//引用条件，rand，srand
#include<time.h>//饮用时间戳time

void menu()//定义菜单
{
	printf("              \n");
	printf(" 1,Play game! \n");
	printf("              \n");
	printf(" 2,Exit game! \n");
	printf("              \n");
}

void game()//游戏过程
{
	int g = 0;//定义猜的数

	int n = rand() % 100 + 1;//定义一个数是随机猜的数赋给n，并且这个数模上100+1为1-100的值

	while (1)//定义循环，条件内不为0，则一直循环
	{
		printf("请猜测数字\n");
		scanf("%d", &g);//取用户输的值

		if (g < n)//猜的小于随机值
		{
			printf("猜小了\n");
		}
		else if (g > n)//大于
		{
			printf("猜大了\n");
		}
		else//其他条件，等于
		{
			printf("恭喜你，猜对了\n");
			break;//跳出循环
		}
	}
}

int main()
{
	int i = 0;//菜单选项
	int j = 1;//定义一个不为零的结束值

	srand((unsigned int)time(NULL));//强制类型转换为整形，附初始值0，调用事件引用

	do
	{
		printf("欢迎来到猜字游戏，请选择\n");
		menu();//引用全局菜单
		scanf("%d", &i);//选项

		switch (i)//switch分支选项
		{
		case 1:
			game();//游戏全局引用
			break;
		case 2:
			printf("正在退出游戏\n");
			j = 0;//j为零
			break;
		default:
			printf("输入错误，请重新输入\n");//其他情况
			break;
		}
	} while (j);//循环为零，假值跳出循环

	return 0;
}
