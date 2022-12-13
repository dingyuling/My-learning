#define _CRT_SECURE_NO_WARNINGS 1
//函数自己调用自己便被称为递归
#include<stdio.h>


//1.打印一个无符号整形，按照顺序打印它的每一位
void s_x(unsigned int a)//自定义函数，强制转换整形
{
	if (a > 9)//表示为两位，可以拆分
	{
		s_x(a / 10);//每次/10，拆分一位，递归
	}
	printf("%d ", a % 10);//除10之后
}
int main(void)
{
	unsigned int i = 0;//初始值
	printf("请输入：\n");
	scanf("%u", &i);

	s_x(i);

	return 0;
}

/*
//2.给出一个数，要求将他翻转
void s_y(int b)//自定义函数
{
	if (b > 9)//判断位数
	{
		printf("%d ", b % 10);
		s_y(b / 10);//开始递归
	}
	else
	{
		printf("%d ", b % 10);
	}
}
int main(void)
{
	int i = 0;//初始值
	printf("请输入：\n");
	scanf("%d", &i);

	s_y(i);

	return 0;
}*/

//3.使用自写(strlen)函数实现计算字符串长度
/*
void s_l(char* x)//自定义函数
{
	int i = 0;
	while (*x++ != '\0')//字符串后自带\0
	{
		i++;
	}
	printf("%d\n", i);
}*/
/*
int s_z(char* x)//整形+int
{
	//printf("%s\n", x);
	if (*x != '\0')
	{
		return 1 + s_z(x+1);//每次字符串中字符的地址向后一位，开始递归
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	char ch[] = "hello!";
	
	//s_l(ch);
	s_z(ch);

	printf("%d\n", s_z(ch));//输出
	return 0;
}*/

/*
//求阶乘(正值)
int q_c(int a)//自定义函数
{
	if (1 < a)
	{
		return a * q_c(a - 1);//每次与上一位数相乘，开始递归
	}
	else if(1 == a)
	{
		return 1;
	}
	else if (0 == a)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int main(void)
{
	int i = 0;
	scanf("%d", &i);//自定义

	q_c(i);

	printf("%d", q_c(i));//输出
	return 0;
}*/


//求第n个斐波那契额数
/*
int f_b(int x)//自定义函数
{
	if (2 >= x && x > 0)
	{
		return 1;
	}
	else if (x > 2)
	{
		return f_b(x - 1) + f_b(x - 2);//x的值为它前两位数想加的和，开始递归
	}
	else if (x == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int main(void)
{
	int i = 0;
	scanf("%d", &i);//定义初始

	f_b(i);

	printf("%d\n", f_b(i));//输出
	return 0;
}*/
/*
int main(void)
{
	int x = 0;//初始数
	int y = 0;//输出数
	scanf("%d", &x);

	if (2 >= x && x > 0)
	{
		y = 1;
	}
	else if (x > 2)
	{
		int y1 = 1;
		int y2 = 1;//前两位数各为1，第三个数开始变化
		int y3 = 0;
		int c = 3;//第三次开始

		while (c <= x)//循环
		{
			y3 = y2 + y1;
			y1 = y2;
			y2 = y3;
			c++;
		}
		y = y3;
	}
	else if (x == 0)
	{
		y = 0;
	}
	else
	{
		y = -1;
	}

	printf("%d = %d\n", x, y);//输出

	return 0;
}*/
