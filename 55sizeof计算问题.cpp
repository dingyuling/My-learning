#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void one(int arr[])//数组传参，数组首元素的地址
{
	printf("%d\n", unsigned(sizeof(arr)));//计算指针变量的大小
}

void two(char ch[])
{
	printf("%d\n", unsigned(sizeof(ch)));
}

int main(void)
{
	int arr[10];
	char ch[10];

	printf("%d\n", unsigned(sizeof(arr)));//40
	printf("%d\n", unsigned(sizeof(ch)));//10

	one(arr);
	two(ch);

	return 0;
}
