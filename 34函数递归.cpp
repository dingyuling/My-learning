#define _CRT_SECURE_NO_WARNINGS 1
//函数自己调用自己便被称为递归
#include<stdio.h>


//1.打印一个无符号整形，按照顺序打印它的每一位
void s_x(unsigned int a)
{
	if (a > 9)
	{
		s_x(a / 10);
	}
	printf("%d ", a % 10);
}
int main(void)
{
	unsigned int i = 0;
	printf("请输入：\n");
	scanf("%u", &i);

	s_x(i);

	return 0;
}

/*
//2.给出一个数，要求将他翻转
void s_y(int b)
{
	if (b > 9)
	{
		printf("%d ", b % 10);
		s_y(b / 10);
	}
	else
	{
		printf("%d ", b % 10);
	}
}
int main(void)
{
	int i = 0;
	printf("请输入：\n");
	scanf("%d", &i);

	s_y(i);

	return 0;
}*/

//3.使用自写(strlen)函数实现计算字符串长度
/*
void s_l(char* x)
{
	int i = 0;
	while (*x++ != '\0')
	{
		i++;
	}
	printf("%d\n", i);
}*/
/*
int s_z(char* x)
{
	//printf("%s\n", x);
	if (*x != '\0')
	{
		return 1 + s_z(x+1);
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

	printf("%d\n", s_z(ch));
	return 0;
}*/

/*
//求阶乘(正值)
int q_c(int a)
{
	if (1 < a)
	{
		return a * q_c(a - 1);
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
	scanf("%d", &i);

	q_c(i);

	printf("%d", q_c(i));
	return 0;
}*/


//求第n个斐波那契额数
/*
int f_b(int x)
{
	if (2 >= x && x > 0)
	{
		return 1;
	}
	else if (x > 2)
	{
		return f_b(x - 1) + f_b(x - 2);
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
	scanf("%d", &i);

	f_b(i);

	printf("%d\n", f_b(i));
	return 0;
}*/
/*
int main(void)
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);

	if (2 >= x && x > 0)
	{
		y = 1;
	}
	else if (x > 2)
	{
		int y1 = 1;
		int y2 = 1;
		int y3 = 0;
		int c = 3;

		while (c <= x)
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

	printf("%d = %d\n", x, y);

	return 0;
}*/