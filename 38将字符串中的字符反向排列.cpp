#define _CRT_SECURE_NO_WARNINGS 1
//条件：将字符串中的字符反向排列，不是一一打印，不能使用库函数

#include<stdio.h>


int j_s(char* x)//自定义strlen
{
	int c = 0;
	while (*x++ != '\0')//字符串后自带\0
	{
		c++;
	}
	return c;
}

void f_x(char* ch)//取字符串地址
{
	int j = j_s(ch);//计算字符串长度
	int l = 0;//左边
	int r = j-1;//右边
	char f[20] = { 0 };//空数组
	while (l < r)
	{
		*f = ch[l];
		ch[l] = ch[r];
		ch[r] = *f;
		l++;
		r--;//下标计算交换
	}
	printf("%s\n", ch);//输出结果
}

int main(void)
{
	char ch[20] = { 0 };
	scanf("%s", ch);//输入

	f_x(ch);

	return 0;
}

//递归
/*
int j_s(char* x)//自定义strlen
{
	if (*x != '\0')
	{
		return 1 + j_s(x + 1);//个数
	}
	else
	{
		return 0;
	}
}

void f_x(char* ch)//取字符串地址
{
	int j = j_s(ch);//计算字符串长度
	char f[20] = { 0 };//空数组
	*f = *ch;//赋值空地址
	*ch = ch[j - 1];//最后一位放第一
	ch[j - 1] = '\0';//字符串最后赋值
	if (j_s(ch + 1) >= 2)//地址加一位
	{
		f_x(ch + 1);//输出下一位
	}
	ch[j - 1] = *f;
}

int main(void)
{
	char ch[20] = { 0 };
	scanf("%s", ch);//输入

	f_x(ch);

	printf("%s\n", ch);
	return 0;
}*/