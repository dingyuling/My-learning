/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void function(int* h)//自定义函数
{
	(*h)++;//注意优先级加括号
}

int main(void)
{
	int frequency = 0;//初始次数

	function(&frequency);//实参想要改变就要取地址
	printf("%d\t", frequency);//输出

	function(&frequency);
	printf("%d\t", frequency); 
	
	function(&frequency);
	printf("%d\t", frequency);

	return 0;
}*/